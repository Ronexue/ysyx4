#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include "cstdint.h"            //类型支持库的一部分，提供定宽整数类型和部分 C 数值极限接口。
#include "Vtop.h"
#include "verilated.h"

#define MEMSIZE 65536
#define AD_BASE 0x80000000
static uint32_t IMEM[MEMSIZE];

uint64_t pimem_read(uint64_t paddr){
    uint64_t real_addr = (paddr - AD_BASE) >> 2;
    printf("%lx\n", paddr);
    assert(real_addr < MEMSIZE);
    return IMEM[real_addr];
}

int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    Vtop*top = new Vtop{contextp};
    top->clk = 0;
    top->rst = 1;
    top->eval();
    top->clk = 1;
    top->eval();
    top->rst = 0;
    int cnt = 0;
    IMEM[0] = 0x00100093;// addi x0,x1,1
    IMEM[1] = 0x00108093;// addi x1,x1,1
    IMEM[2] = 0x80108013;
    IMEM[3] = 0x80108113;
    IMEM[4] = 0x80008113;

    while (!contextp->gotFinish()) { 
        contextp->timeInc(1); 
        top->clk = !top->clk;
        top->instr_i = pimem_read(top->pc);           //access register
        printf("cnt = %d,clk = %d, rst = %d, pc = %lx\n", cnt, top->clk, top->rst, top->pc);
        top->eval();
        cnt++;
        if(cnt > 8) break;
    }
    delete top;
    delete contextp;
    return 0;
}
