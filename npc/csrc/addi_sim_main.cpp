#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"

#include "svdpi.h"
#include "Vtop__Dpi.h"

#define MEMSIZE 5
#define AD_BASE 0x80000000
static uint32_t IMEM[MEMSIZE];

uint64_t pimem_read(uint64_t paddr){
    uint64_t real_addr = (paddr - AD_BASE) >> 2;
    printf("%lx\n", paddr);
    assert(real_addr < MEMSIZE);
    return IMEM[real_addr];
}

static bool is_done = false;
extern "C" void c_trap(const svBit done){       //extern "C" 是让编译器以处理 C 语言代码的方式来处理修饰的 C++ 代码
    is_done = done;
}

int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    Vtop*top = new Vtop{contextp};
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->rst = 1;
    top->eval();
    top->rst = 0;
    int cnt = 0;
    IMEM[0] = 0x00c000ef;// 
    IMEM[1] = 0x0ffff097;// auipc x1,0x0ffff
    IMEM[2] = 0xff0ff0b7;// lui x1,0xff0ff
    IMEM[3] = 0x00100073;
    IMEM[4] = 0x80008113;
    IMEM[5] = 0x00100073;

    while (!is_done && !contextp->gotFinish()) { 
        contextp->timeInc(1); 
        top->clk = !top->clk;
        if(top->clk == 0) top->instr_i = pimem_read(top->pc);           //access register
        printf("Next status:  cnt = %d, clk = %d, rst = %d, pc = %016lx, instr = %08x\n", cnt, top->clk, top->rst, top->pc, top->instr_i);    //%08x:8个字符 00100093
        top->eval();
        if(cnt > 12) break;
        cnt++;
    }
    delete top;
    delete contextp;
    printf("-------------Sim finished---------------\n");
    return 0;
}
