#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include "Vtest.h"              //change
#include "verilated_vcd_c.h"

int main(int argc, char** argv, char** env) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtest* top = new Vtest{contextp};     //
  
  contextp->traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp,99);
  tfp->open("obj_dir/test.vcd");

  while (contextp->time() < 15 && !contextp->gotFinish()) {
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    
    contextp->timeInc(1);
    tfp->dump(contextp->time());
    
    assert(top->f == (a ^ b));
  }
  delete top;
  
  tfp->close();
  
  delete contextp;
  return 0;
}