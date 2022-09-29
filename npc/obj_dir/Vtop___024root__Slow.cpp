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
    VL_WRITEF("hello world\n");
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__immI = (((- (QData)((IData)((vlSelf->instr_i 
                                                   >> 0x1fU)))) 
                               << 0xcU) | (QData)((IData)(
                                                          (vlSelf->instr_i 
                                                           >> 0x14U))));
    vlSelf->top__DOT__my_if__DOT__dnpc = (4ULL + vlSelf->top__DOT__my_if__DOT__now_pc);
    vlSelf->pc = vlSelf->top__DOT__my_if__DOT__now_pc;
    if ((0x13U == (0x7fU & vlSelf->instr_i))) {
        if (VL_LIKELY((0U == (7U & (vlSelf->instr_i 
                                    >> 0xcU))))) {
            vlSelf->top__DOT__wen = 1U;
        } else {
            VL_WRITEF("no\n");
        }
    } else if (VL_LIKELY((0x73U == (0x7fU & vlSelf->instr_i)))) {
        if (VL_LIKELY((1ULL == vlSelf->top__DOT__immI))) {
            Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
        } else {
            VL_WRITEF("no\n");
        }
    } else {
        VL_WRITEF("no\n");
    }
    vlSelf->top__DOT__my_ex__DOT__res = (((0U == (0x1fU 
                                                  & (vlSelf->instr_i 
                                                     >> 0xfU)))
                                           ? 0ULL : 
                                          vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 0xfU))]) 
                                         + vlSelf->top__DOT__immI);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
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
    vlSelf->top__DOT__immI = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__immS = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__immJ = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__immB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_if__DOT__now_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_if__DOT__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_ex__DOT__res = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
