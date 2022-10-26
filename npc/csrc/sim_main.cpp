#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "color.h"

#include "svdpi.h"
#include "verilated_dpi.h"

#define MEMSIZE 65536
#define AD_BASE 0x80000000
static uint32_t IMEM[MEMSIZE];

static bool EXIT = 0;
uint64_t pimem_read(uint64_t paddr){
    printf(ASNI_FG_YELLOW "addrs=%016lx\n" ASNI_NONE,paddr);
    uint64_t real_addr = (paddr - AD_BASE) >> 2;
    printf(ASNI_FG_YELLOW "real_addrs=%016lx\n" ASNI_NONE,real_addr);
    if(real_addr >= MEMSIZE){EXIT = 1;printf("addrs=%016lx\n",paddr);return 0;}
    
    return IMEM[real_addr];
}

static bool is_done = false;
extern "C" void c_trap(const svBit done){       //extern "C" 是让编译器以处理 C 语言代码的方式来处理修饰的 C++ 代码
    is_done = done;
}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    Vtop*top = new Vtop{contextp};

/*     VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("obj_dir/top.vcd"); */
    
    printf("argv:\n");
    for(int i = 0; i < argc; i++)
//        printf("%s\n",argv[i]);
    if(argc > 2){//has image
        FILE* fp = fopen(argv[2], "r");
        assert(fp);
        fseek(fp, 0, SEEK_END);
        int fsize = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        assert(fread(IMEM, fsize, 1, fp));
        fclose(fp);
    }
    else
    {
        IMEM[0] = 0x00c000ef;
        IMEM[1] = 0x0ffff097;// auipc x1,0x0ffff
        IMEM[2] = 0xff0ff0b7;//lui x1,0xff0ff
        IMEM[3] = 0x00108093;//addi x1,x1,1
        IMEM[4] = 0x00100073;//ebreak
        IMEM[5] = 0x00100073;
    }

//    Vtop*top = new Vtop{contextp};
    contextp->timeInc(1);           //表示时间的推进，如果先定义，波形是从1s开始，如果后定义，波形从0s开始
    top->clk = 0;
    top->rst = 1;
    top->eval();           //更新上一秒中的clk和rst波形
    top->clk = 1;
    contextp->timeInc(1); 
    top->eval();          //若不加，上一秒的clk变化波形图记录不到
    top->rst = 0;
    int cnt = 0;
    
    while (!is_done && !contextp->gotFinish()) { 
        contextp->timeInc(1); 
        top->clk = !top->clk;
        if(top->clk == 0) top->instr_i = pimem_read(top->pc);           //access mem
        if(EXIT){printf("ASSERT!\n"); top->eval();break;}
        printf(ASNI_FG_YELLOW "Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n" ASNI_NONE, top->clk, top->rst, top->pc, top->instr_i);
        top->eval();
        cnt++;

//        tfp->dump(contextp->time());

    }
    delete top;
    delete contextp;

//    tfp->close();

    if(cpu_gpr[10] == 0)
        printf(ASNI_FG_GREEN "HIT GOOD TRAP!" ASNI_NONE);
    else printf(ASNI_FG_RED "HIT BAD TRAP!" ASNI_NONE);
    printf(ASNI_FG_BLUE " at PC = %lx\n" ASNI_NONE,top->pc);

    printf("-------------Sim finished---------------\n");
    return 0;
}
