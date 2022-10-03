// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__registers0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x76746f70U;
    __Vtemp1[2U] = 0x6469722fU;
    __Vtemp1[3U] = 0x6f626a5fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp1));
    vlSymsp->_traceDumpOpen();
    Vtop___024root____Vdpiimwrap_top__DOT__registers0__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__registers0__DOT__rf);
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp9;
    // Body
    if (VL_LIKELY((IData)((0x73U == (0x7fU & vlSelf->instr_i))))) {
        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
    } else {
        VL_WRITEF("no\n");
    }
    vlSelf->top__DOT__control0__DOT__Btype = (IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__Load = (IData)(
                                                    (3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__jalr = (IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__Store = (IData)(
                                                     (0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__auipc = (IData)(
                                                     (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__jal = (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__Rtype = (IData)(
                                                     (0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__ItypeALU = (IData)(
                                                        (0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->instr_i)));
    vlSelf->top__DOT__control0__DOT__lui = (IData)(
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instr_i)));
    vlSelf->top__DOT__busA = ((0U == (0x1fU & (vlSelf->instr_i 
                                               >> 0xfU)))
                               ? 0ULL : vlSelf->top__DOT__registers0__DOT__rf
                              [(0x1fU & (vlSelf->instr_i 
                                         >> 0xfU))]);
    vlSelf->top__DOT__Branch = ((((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                  & (IData)((0U != 
                                             (0x5000U 
                                              & vlSelf->instr_i)))) 
                                 << 1U) | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                           & (IData)(
                                                     (0x1000U 
                                                      != 
                                                      (0x5000U 
                                                       & vlSelf->instr_i)))));
    vlSelf->top__DOT__MemtoReg = ((0xffffcU & (((IData)(vlSelf->top__DOT__control0__DOT__Load) 
                                                << 2U) 
                                               & (vlSelf->instr_i 
                                                  >> 0xcU))) 
                                  | (((IData)(((1U 
                                                == 
                                                (1U 
                                                 & (IData)(vlSelf->top__DOT__control0__DOT__Load))) 
                                               & (0U 
                                                  == 
                                                  (0x6000U 
                                                   & vlSelf->instr_i)))) 
                                      << 1U) | ((IData)(vlSelf->top__DOT__control0__DOT__Load) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->instr_i))))));
    vlSelf->top__DOT__MUXStore = ((0x1ffffeU & (((IData)(vlSelf->top__DOT__control0__DOT__Store) 
                                                 << 1U) 
                                                & (vlSelf->instr_i 
                                                   >> 0xbU))) 
                                  | ((IData)(vlSelf->top__DOT__control0__DOT__Store) 
                                     & (~ (vlSelf->instr_i 
                                           >> 0xdU))));
    vlSelf->top__DOT__Jump = ((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                              | (IData)(vlSelf->top__DOT__control0__DOT__jalr));
    vlSelf->top__DOT__ALUBSrc = (((((((IData)(vlSelf->top__DOT__control0__DOT__ItypeALU) 
                                      | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                     | (IData)(vlSelf->top__DOT__control0__DOT__auipc)) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__Load)) 
                                   | (IData)(vlSelf->top__DOT__control0__DOT__Store)) 
                                  << 1U) | ((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                            | (IData)(vlSelf->top__DOT__control0__DOT__jalr)));
    vlSelf->top__DOT__ExtOp = (((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                << 2U) | ((((IData)(vlSelf->top__DOT__control0__DOT__Store) 
                                            | (IData)(vlSelf->top__DOT__control0__DOT__Btype)) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__control0__DOT__lui) 
                                            | (IData)(vlSelf->top__DOT__control0__DOT__Btype)) 
                                           | (IData)(vlSelf->top__DOT__control0__DOT__auipc))));
    vlSelf->top__DOT__ALUctr = ((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                   & (IData)((0x40005000U 
                                              == (0x40007000U 
                                                  & vlSelf->instr_i)))) 
                                  | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                     & (IData)((0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->instr_i))))) 
                                 << 5U) | (((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                  | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                 & (IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0x40007000U 
                                                             & vlSelf->instr_i)))) 
                                                | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                    | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                   & (IData)(
                                                             (0x7000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->instr_i))))) 
                                               | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                   | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                  & (IData)(
                                                            (0x1000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->instr_i))))) 
                                              | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                  | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                 & (IData)(
                                                           (0x4000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->instr_i))))) 
                                             | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                & (IData)(
                                                          (0x5000U 
                                                           == 
                                                           (0x5000U 
                                                            & vlSelf->instr_i))))) 
                                            << 4U) 
                                           | ((((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                      | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                     & (IData)(
                                                               (0x5000U 
                                                                == 
                                                                (0x40007000U 
                                                                 & vlSelf->instr_i)))) 
                                                    | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                        | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                       & (IData)(
                                                                 (0x1000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->instr_i))))) 
                                                   | ((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                      & (IData)(
                                                                (0x40000000U 
                                                                 == 
                                                                 (0x40007000U 
                                                                  & vlSelf->instr_i))))) 
                                                  | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                     & (~ 
                                                        (vlSelf->instr_i 
                                                         >> 0xeU)))) 
                                                 | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                    & (IData)(
                                                              (0x3000U 
                                                               == 
                                                               (0x3000U 
                                                                & vlSelf->instr_i))))) 
                                                | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                               << 3U) 
                                              | (((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                      | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                     & (IData)(
                                                               (0x5000U 
                                                                == 
                                                                (0x40007000U 
                                                                 & vlSelf->instr_i)))) 
                                                    | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                        | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                       & (IData)(
                                                                 (0x6000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->instr_i))))) 
                                                   | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                                  << 2U) 
                                                 | ((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                          | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                         & (IData)(
                                                                   (0x2000U 
                                                                    == 
                                                                    (0x6000U 
                                                                     & vlSelf->instr_i)))) 
                                                        | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                            | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                           & (IData)(
                                                                     (0x6000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->instr_i))))) 
                                                       | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                          & (IData)(
                                                                    (0x4000U 
                                                                     == 
                                                                     (0x5000U 
                                                                      & vlSelf->instr_i))))) 
                                                      | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                                     << 1U) 
                                                    | (((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                          | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                         & (IData)(
                                                                   (0x3000U 
                                                                    == 
                                                                    (0x7000U 
                                                                     & vlSelf->instr_i)))) 
                                                        | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                           & (IData)(
                                                                     (0x6000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->instr_i))))) 
                                                       | (IData)(vlSelf->top__DOT__control0__DOT__lui)))))));
    vlSelf->top__DOT__pcnext0__DOT__offsetA = ((IData)(vlSelf->top__DOT__control0__DOT__jalr)
                                                ? vlSelf->top__DOT__busA
                                                : vlSelf->pc);
    vlSelf->top__DOT__ALU_src1 = ((((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__jalr)) 
                                   | (IData)(vlSelf->top__DOT__control0__DOT__auipc))
                                   ? vlSelf->pc : vlSelf->top__DOT__busA);
    vlSelf->top__DOT__busB = ((0ULL == vlSelf->top__DOT__busA)
                               ? 0ULL : vlSelf->top__DOT__registers0__DOT__rf
                              [(0x1fU & (IData)(vlSelf->top__DOT__busA))]);
    vlSelf->top__DOT__imm = ((0U == (IData)(vlSelf->top__DOT__ExtOp))
                              ? (((- (QData)((IData)(
                                                     (vlSelf->instr_i 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->instr_i 
                                                              >> 0x14U))))
                              : ((1U == (IData)(vlSelf->top__DOT__ExtOp))
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->instr_i 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->instr_i))))
                                  : ((2U == (IData)(vlSelf->top__DOT__ExtOp))
                                      ? (((- (QData)((IData)(
                                                             (vlSelf->instr_i 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->instr_i 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->instr_i 
                                                                  >> 7U))))))
                                      : ((3U == (IData)(vlSelf->top__DOT__ExtOp))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->instr_i 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               ((0x800U 
                                                                 & (vlSelf->instr_i 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->instr_i 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->instr_i 
                                                                         >> 7U)))))))
                                          : ((4U == (IData)(vlSelf->top__DOT__ExtOp))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->instr_i 
                                                                      >> 0x1fU)))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & vlSelf->instr_i) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->instr_i 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->instr_i 
                                                                             >> 0x14U)))))))
                                              : 0ULL)))));
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result 
        = (IData)((0x14U == (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result 
        = (IData)((0x18U == (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result 
        = (IData)((0x1cU == (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result 
        = (IData)((3U == (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result 
        = (IData)((0x38U == (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result 
        = (IData)((2U == (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result 
        = (IData)((0x30U == (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__ALU_src2 = ((0U == (IData)(vlSelf->top__DOT__ALUBSrc))
                                   ? vlSelf->top__DOT__busB
                                   : ((1U == (IData)(vlSelf->top__DOT__ALUBSrc))
                                       ? 4ULL : ((2U 
                                                  == (IData)(vlSelf->top__DOT__ALUBSrc))
                                                  ? vlSelf->top__DOT__imm
                                                  : 0ULL)));
    vlSelf->top__DOT__ALU0__DOT__OPctr = ((8U & ((((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result) 
                                                   | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)) 
                                                  | (IData)(
                                                            (0x20U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ALUctr))))) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (((((((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result) 
                                                    | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)) 
                                                   | (IData)(
                                                             (0x10U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__ALUctr))))) 
                                                  | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result)) 
                                                 | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result)) 
                                                | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (((((((IData)(
                                                                 (0xfU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->top__DOT__ALUctr)))) 
                                                         | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result)) 
                                                        | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result)) 
                                                       | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)) 
                                                      | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result)) 
                                                     | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (((((IData)(
                                                                 (6U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->top__DOT__ALUctr)))) 
                                                         | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result)) 
                                                        | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result)) 
                                                       | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result)) 
                                                      | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result))))));
    vlSelf->top__DOT__ALU0__DOT__SUBctr = (1U & (((
                                                   ((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                    | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result)) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__ALUctr))))) 
                                                  | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result)) 
                                                 | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)));
    vlSelf->top__DOT__ALU0__DOT__Adder_src2 = (vlSelf->top__DOT__ALU_src2 
                                               ^ (0x7fffffffffffffffULL 
                                                  & (- (QData)((IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__ALU_src1);
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top__DOT__ALU0__DOT__sltu_Flag = (1U & 
                                              (((1U 
                                                 & __Vtemp7[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)) 
                                               ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)));
    VL_EXTEND_WI(65,1, __Vtemp9, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
    vlSelf->top__DOT__ALU0__DOT__Add_Result = ((vlSelf->top__DOT__ALU_src1 
                                                + vlSelf->top__DOT__ALU0__DOT__Adder_src2) 
                                               + (((QData)((IData)(
                                                                   __Vtemp9[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp9[0U]))));
    vlSelf->top__DOT__ALU0__DOT__slt_Flag = (1U & (
                                                   ((((IData)(
                                                              (vlSelf->top__DOT__ALU_src1 
                                                               >> 0x3fU)) 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ALU0__DOT__Adder_src2 
                                                                 >> 0x3fU))) 
                                                     & (~ (IData)(
                                                                  (vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                                   >> 0x3fU)))) 
                                                    + 
                                                    (((~ (IData)(
                                                                 (vlSelf->top__DOT__ALU_src1 
                                                                  >> 0x3fU))) 
                                                      & (~ (IData)(
                                                                   (vlSelf->top__DOT__ALU0__DOT__Adder_src2 
                                                                    >> 0x3fU)))) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                                >> 0x3fU)))) 
                                                   ^ (IData)(
                                                             (vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                              >> 0x3fU))));
    vlSelf->top__DOT__ALU_Result = ((0U == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                     ? vlSelf->top__DOT__ALU0__DOT__Add_Result
                                     : ((1U == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                         ? (vlSelf->top__DOT__ALU_src1 
                                            | vlSelf->top__DOT__ALU_src2)
                                         : ((2U == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                             ? vlSelf->top__DOT__ALU_src2
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                 ? (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                                     | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                                     ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                                                     : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                  ? 
                                                 (vlSelf->top__DOT__ALU_src1 
                                                  ^ vlSelf->top__DOT__ALU_src2)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                   ? 
                                                  (vlSelf->top__DOT__ALU_src1 
                                                   & vlSelf->top__DOT__ALU_src2)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                    ? 
                                                   (vlSelf->top__DOT__ALU_src1 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__ALU_src2)))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                     ? 
                                                    (vlSelf->top__DOT__ALU_src1 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->top__DOT__ALU_src2)))
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                      ? 
                                                     VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__ALU_src1, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->top__DOT__ALU_src2)))
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                       ? (QData)((IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)))))
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->top__DOT__ALU0__DOT__OPctr))
                                                        ? (QData)((IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag)))))
                                                        : 0ULL)))))))))));
    vlSelf->top__DOT__DataOut = ((IData)(vlSelf->rst)
                                  ? 0ULL : vlSelf->top__DOT__datamemory0__DOT__mem
                                 [(0x1fU & (IData)(vlSelf->top__DOT__ALU_Result))]);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr_i = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__busA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__busB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__Branch = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUBSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUctr = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__MemtoReg = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__MUXStore = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ExtOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU_Result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__DataOut = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__registers0__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__control0__DOT__Rtype = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__ItypeALU = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__lui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__auipc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__Load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__Store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__Btype = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control0__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__extend0__DOT__immB2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__extend0__DOT__immJ2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU0__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__OPctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALU0__DOT__Adder_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU0__DOT__Add_Result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU0__DOT__slt_Flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__sltu_Flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pcnext0__DOT__offsetA = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__datamemory0__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
