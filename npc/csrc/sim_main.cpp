#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "color.h"

#include "svdpi.h"
#include "verilated_dpi.h"

#include <getopt.h>

#include <cstring>

#include <readline/readline.h>
#include "npc_sdb.h"

/////////////////////////////////////////////////////////
/*                       MEM                           */
/////////////////////////////////////////////////////////

#define MEMSIZE 65536
#define AD_BASE 0x80000000
static uint32_t MEM[MEMSIZE];//8字节为单位
static bool EXIT = 0;
static bool START = 0;
static bool is_done = false;

extern "C" void c_trap(const svBit done){       //extern "C" 是让编译器以处理 C 语言代码的方式来处理修饰的 C++ 代码
    is_done = done;
}

extern "C" void pmem_read(long long raddr, long long *rdata) {
  long long real_addr = (raddr - AD_BASE) >> 2;
printf("pmem_read:real_addr=%llx\n",real_addr);
//printf("rdata=%llx\n",*rdata);
  //assert(real_addr < MEMSIZE);
  if(raddr < AD_BASE || ((raddr - AD_BASE) >> 2) >= MEMSIZE){
    //if(START) EXIT = 1;printf("pmem_addrs=%llx\n",raddr);
    *rdata = 0;
    return;
  }
  else *rdata = MEM[real_addr];// 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
    long long real_addr = (waddr - AD_BASE) >> 3;
  //assert(real_addr < MEMSIZE);
  if(waddr < AD_BASE || ((waddr - AD_BASE) >> 3) >= MEMSIZE){
    //if(START) EXIT = 1;//printf("addrs=%lx\n",raddr); 
    return;
  }
  else{
    uint64_t real_mask = -1;
    if(wmask == 0x1) real_mask = 0xffull;
    else if(wmask == 0x3) real_mask = 0xffffull;
    else if(wmask == 0xf) real_mask = 0xffffffffull;
    else real_mask = -1;
    MEM[real_addr] = (MEM[real_addr] & (~real_mask)) | (wdata & real_mask);
    return;
  }
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
}

extern "C" int get_instr(int instr) {
  return instr;
}

/////////////////////////////////////////////////////////
/*                       GPR                           */
/////////////////////////////////////////////////////////

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
printf("\n-------------GENERAL REGISTER---------------\n\n");
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

/////////////////////////////////////////////////////////
/*                        sdb                          */
/////////////////////////////////////////////////////////
static VerilatedContext* sdb_contextp = NULL;
static Vtop* sdb_top = NULL;

static bool is_batch = false;
void set_batch_mode(){
    is_batch = true;
}

static void sdb_mainloop();

static char* image_file = NULL;

static int npc_parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"image"    , required_argument, NULL, 'i'},
//    {"diff"     , no_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhi:", table, NULL)) != -1) {
    switch (o) {
      case 'b': set_batch_mode(); break;
      //case 'd': diff_so_file = optarg; break;
      case 'i': image_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        //printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
    }
  }
  return 0;
}

static void print_args(int argc, char**argv){
    printf("argv:\n");
    for(int i = 0; i < argc; i++)
        printf("%s\n",argv[i]);
}

/////////////////////////////////////////////////////////
/*                        main                         */
/////////////////////////////////////////////////////////

int main(int argc, char**argv, char**env) {
printf("\n-------------SIM START---------------\n\n");
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    Vtop*top = new Vtop{contextp};

    npc_parse_args(argc, argv);

    //sdb_init
    sdb_contextp = contextp;
    sdb_top = top;

    if(image_file != NULL){//has image
        FILE* fp = fopen(image_file, "r");
        assert(fp);
        fseek(fp, 0, SEEK_END);
        int fsize = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        assert(fread(MEM, fsize, 1, fp));
        fclose(fp);
printf(ASNI_FG_BLUE "Load image in %s\n" ASNI_NONE ,image_file);
    }
    else
    {
printf(ASNI_FG_BLUE "Load build-in image\n" ASNI_NONE);
        MEM[0] = 0x7ff00093;//addi-I x1,x0,0111_1111_1111
        MEM[1] = 0x0ffff097;//auipc-U x1,0x0ffff=0000_1111_1111_1111_1111
        MEM[2] = 0xff0ff0b7;//lui x1,0xff0ff=1111_1111_0000_1111_1111
        MEM[3] = 0x00108093;//addi x1,x1,1
        MEM[4] = 0x00100073;//ebreak
        MEM[5] = 0x00108093;
    }

    //reset the pc
    contextp->timeInc(1);           //表示时间的推进，如果先定义，波形是从1s开始，如果后定义，波形从0s开始
    top->clk = 0;
    top->rst = 1;
    top->eval();           //更新上一秒中的clk和rst波形
    top->clk = 1;
    contextp->timeInc(1); 
    top->eval();          //若不加，上一秒的clk变化波形图记录不到
printf("main:initial_pc = %016lx\n",top->pc);
    top->rst = 0;
    START = 1;
    int cnt = 0;
    
    if(is_batch)
        while (!is_done && !contextp->gotFinish()) { 
            contextp->timeInc(1); 
            top->clk = !top->clk;
            //if(top->clk == 0)top->instr_i = pimem_read(top->pc);
            if(EXIT){printf(ASNI_FG_RED "ASSERT!\n" ASNI_NONE); top->eval();break;}
//printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", top->clk, top->rst, top->pc, top->instr_i);
            top->eval();
            cnt ++;
        }
    else{
        printf(ASNI_FG_RED "Not in batch mode!\n" ASNI_NONE);
        sdb_mainloop();
    }

    delete top;
    delete contextp;

    if(EXIT == false){
      if(cpu_gpr[10] == 0)
        printf(ASNI_FG_GREEN "HIT GOOD TRAP!" ASNI_NONE);
      else printf(ASNI_FG_RED "HIT BAD TRAP!" ASNI_NONE);
      printf(ASNI_FG_BLUE " at PC = %lx\n" ASNI_NONE,top->pc);
    }

    printf("-------------Sim finished---------------\n\n");
    return 0;
}

//////////////////////////  SDB  ///////////////////////////////////////////

static void npc_exec(uint64_t n){
    if(is_done || sdb_contextp->gotFinish()){
        printf("The program is done! Please quit the npc_sdb.\n");
        return;
    }
    for (uint64_t i = 1; i <= n && !is_done && !sdb_contextp->gotFinish(); i++) { 
        sdb_contextp->timeInc(1); 
        sdb_top->clk = !sdb_top->clk;
        //if(sdb_top->clk == 0)sdb_top->instr_i = pmem_read(sdb_top->pc);
        if(EXIT){printf(ASNI_FG_RED "ASSERT!\n" ASNI_NONE); sdb_top->eval();break;}
printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", sdb_top->clk, sdb_top->rst, sdb_top->pc, sdb_top->instr);
        sdb_top->eval();
    }
    if(is_done){
        if(cpu_gpr[10] == 0)
            printf(ASNI_FG_GREEN "HIT GOOD TRAP!" ASNI_NONE);
        else printf(ASNI_FG_RED "HIT BAD TRAP!" ASNI_NONE);
        printf(ASNI_FG_BLUE " at PC = %lx\n" ASNI_NONE,sdb_top->pc);
    }
}

static int cmd_c(char *args) {
  npc_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  EXIT = true;
  return 0;
}

static int cmd_si(char *args){
  int times = 0;
  char* com = strtok(args," ");
  if(com == NULL) times = 1;
  else{
    int len = strlen(com);
    for(int i = 0; i < len; i++){
      if(com[i] >= '0' && com[i] <= '9') times = times * 10 + com[i] - '0';
      else{
        times = 0;
        break;
      }
    }
  }
  if(times == 0) assert(0);
  else npc_exec(times);
  return 0;
}

int cmd_info(char* args){
  char* com = strtok(args," ");
  if(com == NULL) assert(0);
  int is_r = strcmp(com,"r");
  int is_w = strcmp(com,"w");
  if(is_r != 0 && is_w != 0) assert(0);
  if(is_r == 0) dump_gpr();
  return 0;
}
/*
static int cmd_x(char *args){
  char* com1 = strtok(args," ");
  char* com2 = strtok(NULL," ");
  if(com1 == NULL || com2 == NULL) Assert(0,"TOO FEW COMMANDS!");
  int num1 = npc_s_to_i(com1, 10);
  if(strlen(com2) <= 2 || com2[0] != '0' || com2[1] != 'x' ) Assert(0,"INVALID COMMANDS!");
  word_t num2 = npc_s_to_u(com2+2, 16);
  int offs = 0;
  for(int i = 1; i <= num1; i++){
    word_t dat = vaddr_read(num2+offs, 4);
    if(i == 1) printf("[0x%016lx]: \t\t", num2);
    else  printf("[0x%016lx+%d]: \t", num2, offs);
    printf("%02lx %02lx %02lx %02lx\n", dat & 0xff, (dat & 0xff00)>>8, (dat & 0xff0000)>>16, (dat & 0xff000000)>>24);
    offs+=4;
  }
  return 0;
}
*/
static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "single exec", cmd_si },
  { "info", "info registers", cmd_info},
//  { "x", "scan memory", cmd_x},
  /* TODO: Add more commands */

};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_mainloop() {

    for (char *str; (str = npc_rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    if (EXIT) break;
  }
}
