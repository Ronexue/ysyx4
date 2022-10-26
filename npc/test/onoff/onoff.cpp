#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vonoff.h"        //*

#include "verilated_vcd_c.h"  //vcd

int main(int argc, char *argv[])
{
	VerilatedContext* contextp = new VerilatedContext;   //!
	// contextp is a pointer to set simulation environment
	// This needs to be called before you create any model
	contextp->commandArgs(argc, argv);       //! 
	// Construct the Verilated model
	Vonoff* top = new Vonoff{contextp};      //* //#

	
	VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
	// Verilator must compute traced signals
    contextp->traceEverOn(true);      //打开追踪功能
	top->trace(tfp,99);
	tfp->open("obj_dir/Vonoff.vcd"); //设置输出的文件


   while (contextp->time() < 15 && !contextp->gotFinish()) {           //#
	   int a = rand() & 1;
	   int b = rand() & 1;
	   top->a = a;
	   top->b = b;
	   //Get the output data at each clock cycle
	   top->eval();         //#
	   printf("a = %d, b = %d, f = %d\n", a, b, top->f);

	   contextp->timeInc(1);                 //vcd 推进时间
	   tfp->dump(contextp->time());          //vcd 记录当前的信号值到VCD文件中
//	   assert(top->f == (a ^ b));
   }
   // Destroy model
   tfp->close();           //vcd
   delete top;         //!
   delete contextp;    //!
   // Return good completion status
   return 0;           //!
}
