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
    CData/*2:0*/ top__DOT__ID_IDEX_MemtoReg;
    CData/*1:0*/ top__DOT__ID_IDEX_MUXStore;
    CData/*1:0*/ top__DOT__ID_IDEX_Branch;
    CData/*5:0*/ top__DOT__ID_IDEX_ALUctr;
    CData/*1:0*/ top__DOT__ID_IDEX_ALUBSrc;
    CData/*4:0*/ top__DOT__IDEX_EX_rd;
    CData/*2:0*/ top__DOT__IDEX_EX_MemtoReg;
    CData/*1:0*/ top__DOT__IDEX_EX_MUXStore;
    CData/*0:0*/ top__DOT__IDEX_EX_MemWr;
    CData/*0:0*/ top__DOT__IDEX_EX_Jump;
    CData/*1:0*/ top__DOT__IDEX_EX_Branch;
    CData/*0:0*/ top__DOT__IDEX_EX_jalrctr;
    CData/*5:0*/ top__DOT__IDEX_EX_ALUctr;
    CData/*1:0*/ top__DOT__IDEX_EX_ALUBSrc;
    CData/*0:0*/ top__DOT__IDEX_EX_ALUASrc;
    CData/*0:0*/ top__DOT__EXM_M_Zero;
    CData/*4:0*/ top__DOT__EXM_M_rd;
    CData/*2:0*/ top__DOT__EXM_M_MemtoReg;
    CData/*1:0*/ top__DOT__EXM_M_MUXStore;
    CData/*0:0*/ top__DOT__EXM_M_MemWr;
    CData/*0:0*/ top__DOT__EXM_M_Jump;
    CData/*1:0*/ top__DOT__EXM_M_Branch;
    CData/*4:0*/ top__DOT__MWB_WB_rd;
    CData/*2:0*/ top__DOT__MWB_WB_MemtoReg;
    CData/*2:0*/ top__DOT__ID_Stage0__DOT__ExtOp;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__lui;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__auipc;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__Load;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__Store;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__Btype;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__jal;
    CData/*0:0*/ top__DOT__ID_Stage0__DOT__Control0__DOT__jalr;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr;
    CData/*3:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__and_result;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sll_result;
    CData/*0:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__srl_result;
    IData/*31:0*/ top__DOT__IFID_ID_instr;
    QData/*63:0*/ top__DOT__offset2;
    QData/*63:0*/ top__DOT__IFID_ID_pc;
    QData/*63:0*/ top__DOT__IDEX_EX_pc;
    QData/*63:0*/ top__DOT__IDEX_EX_busA;
    QData/*63:0*/ top__DOT__IDEX_EX_busB;
    QData/*63:0*/ top__DOT__IDEX_EX_imm;
    QData/*63:0*/ top__DOT__EXM_M_ALUout;
    QData/*63:0*/ top__DOT__EXM_M_busB;
    QData/*63:0*/ top__DOT__MWB_WB_Dataout;
    QData/*63:0*/ top__DOT__MWB_WB_ALUout;
    QData/*63:0*/ top__DOT__IF_Stage0__DOT__pc_next;
    QData/*63:0*/ top__DOT__IF_Stage0__DOT__pc_now;
    QData/*63:0*/ top__DOT__EX_Stage0__DOT__ALU_src1;
    QData/*63:0*/ top__DOT__EX_Stage0__DOT__ALU_src2;
    QData/*63:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2;
    QData/*63:0*/ top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__ID_Stage0__DOT__Registers0__DOT__rf;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem;

    // LOCAL VARIABLES
    CData/*4:0*/ __Vdlyvdim0__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    QData/*63:0*/ __Vdlyvval__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0;
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
