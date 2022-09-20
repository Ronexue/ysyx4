
//两个include文件都很重要
//第一个include需要根据不同源文件的顶层模块名修改 V+顶层名.h
//第二个include是固定的
#include "Vour.h"
#include "verilated.h"
//argc-整型，argv-字符串数组，env-字符串数组一般是环境变量
int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
//    VerilatedContext* contextp = new VerilatedContext;
//    contextp->commandArgs(argc, argv);
//构建Verilator模型，此例中Vour是根据our.v修改
    Vour* top = new Vour;
//源代码中有$finish才用这个，如果仿真一段时间的，看下一个例子
    while (!Verilated::gotFinish()){ top->eval(); }
//    while (!contextp->gotFinish()){ top->eval(); }
    top->final();
    delete top;
//    delete contextp;
    return 0;
}
