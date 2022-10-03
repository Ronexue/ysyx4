// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(instr_i,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*1:0*/ top__DOT__Branch;
    CData/*0:0*/ top__DOT__Jump;
    CData/*1:0*/ top__DOT__ALUBSrc;
    CData/*5:0*/ top__DOT__ALUctr;
    CData/*2:0*/ top__DOT__MemtoReg;
    CData/*1:0*/ top__DOT__MUXStore;
    CData/*2:0*/ top__DOT__ExtOp;
    CData/*0:0*/ top__DOT__control0__DOT__Rtype;
    CData/*0:0*/ top__DOT__control0__DOT__ItypeALU;
    CData/*0:0*/ top__DOT__control0__DOT__lui;
    CData/*0:0*/ top__DOT__control0__DOT__auipc;
    CData/*0:0*/ top__DOT__control0__DOT__Load;
    CData/*0:0*/ top__DOT__control0__DOT__Store;
    CData/*0:0*/ top__DOT__control0__DOT__Btype;
    CData/*0:0*/ top__DOT__control0__DOT__jal;
    CData/*0:0*/ top__DOT__control0__DOT__jalr;
    CData/*0:0*/ top__DOT__ALU0__DOT__SUBctr;
    CData/*3:0*/ top__DOT__ALU0__DOT__OPctr;
    CData/*0:0*/ top__DOT__ALU0__DOT__slt_Flag;
    CData/*0:0*/ top__DOT__ALU0__DOT__sltu_Flag;
    CData/*0:0*/ top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result;
    CData/*0:0*/ top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result;
    CData/*0:0*/ top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result;
    CData/*0:0*/ top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result;
    CData/*0:0*/ top__DOT__ALU0__DOT__ALUctr0__DOT__and_result;
    CData/*0:0*/ top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result;
    CData/*0:0*/ top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result;
    QData/*63:0*/ top__DOT__busA;
    QData/*63:0*/ top__DOT__busB;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__ALU_src1;
    QData/*63:0*/ top__DOT__ALU_src2;
    QData/*63:0*/ top__DOT__ALU_Result;
    QData/*63:0*/ top__DOT__DataOut;
    QData/*63:0*/ top__DOT__extend0__DOT__immB2;
    QData/*63:0*/ top__DOT__extend0__DOT__immJ2;
    QData/*63:0*/ top__DOT__ALU0__DOT__Adder_src2;
    QData/*63:0*/ top__DOT__ALU0__DOT__Add_Result;
    QData/*63:0*/ top__DOT__pcnext0__DOT__offsetA;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__registers0__DOT__rf;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__datamemory0__DOT__mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
