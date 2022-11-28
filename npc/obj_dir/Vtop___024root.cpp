// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__registers0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__registers0__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__top__DOT__datamemory0__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__datamemory0__DOT__mem__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__datamemory0__DOT__mem__v32;
    QData/*63:0*/ __Vdlyvval__top__DOT__datamemory0__DOT__mem__v32;
    // Body
    __Vdlyvset__top__DOT__datamemory0__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__datamemory0__DOT__mem__v32 = 0U;
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__datamemory0__DOT__mem__v0 = 1U;
    } else if (vlSelf->top__DOT__control0__DOT__Store) {
        __Vdlyvval__top__DOT__datamemory0__DOT__mem__v32 
            = (QData)((IData)(((0U == (IData)(vlSelf->top__DOT__MUXStore))
                                ? (QData)((IData)(vlSelf->top__DOT__busB))
                                : ((1U == (IData)(vlSelf->top__DOT__MUXStore))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__busB 
                                                                       >> 7U)))))) 
                                        << 8U) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__busB)))))
                                    : ((3U == (IData)(vlSelf->top__DOT__MUXStore))
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__busB 
                                                                           >> 0xfU)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top__DOT__busB)))))
                                        : 0ULL)))));
        __Vdlyvset__top__DOT__datamemory0__DOT__mem__v32 = 1U;
        __Vdlyvdim0__top__DOT__datamemory0__DOT__mem__v32 
            = (0x1fU & (IData)(vlSelf->top__DOT__ALU_Result));
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : (vlSelf->top__DOT__pcnext0__DOT__offsetA 
                      + ((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                             & (~ (IData)((0U != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                            | (IData)(vlSelf->top__DOT__Jump)) 
                           | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                               & (0U != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                              | (IData)(vlSelf->top__DOT__Jump))) 
                          | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                             | (IData)(vlSelf->top__DOT__Jump)))
                          ? vlSelf->top__DOT__imm : 4ULL)));
    if (__Vdlyvset__top__DOT__datamemory0__DOT__mem__v0) {
        vlSelf->top__DOT__datamemory0__DOT__mem[0U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[1U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[2U] = 0x10ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[3U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[4U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[5U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[6U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[7U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[8U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[9U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0xaU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0xbU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0xcU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0xdU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0xeU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0xfU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x10U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x11U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x12U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x13U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x14U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x15U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x16U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x17U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x18U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x19U] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x1aU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x1bU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x1cU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x1dU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x1eU] = 0ULL;
        vlSelf->top__DOT__datamemory0__DOT__mem[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__datamemory0__DOT__mem__v32) {
        vlSelf->top__DOT__datamemory0__DOT__mem[__Vdlyvdim0__top__DOT__datamemory0__DOT__mem__v32] 
            = __Vdlyvval__top__DOT__datamemory0__DOT__mem__v32;
    }
    VL_WRITEF("pc: %x\n",64,vlSelf->pc);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__registers0__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__registers0__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__registers0__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__registers0__DOT__rf__v0 = 0U;
    if ((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
              | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
             | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
            | (IData)(vlSelf->top__DOT__control0__DOT__auipc)) 
           | (IData)(vlSelf->top__DOT__control0__DOT__Load)) 
          | (IData)(vlSelf->top__DOT__control0__DOT__jal)) 
         | (IData)(vlSelf->top__DOT__control0__DOT__jalr))) {
        __Vdlyvval__top__DOT__registers0__DOT__rf__v0 
            = ((0U == (IData)(vlSelf->top__DOT__MemtoReg))
                ? vlSelf->top__DOT__ALU_Result : ((1U 
                                                   == (IData)(vlSelf->top__DOT__MemtoReg))
                                                   ? vlSelf->top__DOT__DataOut
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__MemtoReg))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__DataOut 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__DataOut)))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__MemtoReg))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__DataOut 
                                                                                >> 0xfU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__DataOut)))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__MemtoReg))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__DataOut))))
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__MemtoReg))
                                                       ? (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->top__DOT__DataOut))))
                                                       : 0ULL))))));
        __Vdlyvset__top__DOT__registers0__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__registers0__DOT__rf__v0 
            = (0x1fU & (IData)((vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                >> 7U)));
    }
    if (__Vdlyvset__top__DOT__registers0__DOT__rf__v0) {
        vlSelf->top__DOT__registers0__DOT__rf[__Vdlyvdim0__top__DOT__registers0__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__registers0__DOT__rf__v0;
    }
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<3>/*95:0*/ __Vtemp17;
    // Body
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->top__DOT__instrmemory0__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    if (VL_LIKELY((IData)((0x73ULL == (0x7fULL & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) {
        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
    } else {
        VL_WRITEF("\nno trap\n\n");
    }
    vlSelf->instr = (IData)(vlSelf->top__DOT__instrmemory0__DOT__rdata);
    vlSelf->top__DOT__busA = ((0U == (0x1fU & (IData)(
                                                      (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                       >> 0xfU))))
                               ? 0ULL : vlSelf->top__DOT__registers0__DOT__rf
                              [(0x1fU & (IData)((vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                 >> 0xfU)))]);
    vlSelf->top__DOT__busB = ((0U == (0x1fU & (IData)(
                                                      (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                       >> 0x14U))))
                               ? 0ULL : vlSelf->top__DOT__registers0__DOT__rf
                              [(0x1fU & (IData)((vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                 >> 0x14U)))]);
    vlSelf->top__DOT__control0__DOT__Load = (IData)(
                                                    (3ULL 
                                                     == 
                                                     (0x7fULL 
                                                      & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__jalr = (IData)(
                                                    (0x67ULL 
                                                     == 
                                                     (0x7fULL 
                                                      & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__Store = (IData)(
                                                     (0x23ULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__auipc = (IData)(
                                                     (0x17ULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__jal = (IData)(
                                                   (0x6fULL 
                                                    == 
                                                    (0x7fULL 
                                                     & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__Rtype = (IData)(
                                                     (0x33ULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__ItypeALU = (IData)(
                                                        (0x13ULL 
                                                         == 
                                                         (0x7fULL 
                                                          & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__Btype = (IData)(
                                                     (0x63ULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__control0__DOT__lui = (IData)(
                                                   (0x37ULL 
                                                    == 
                                                    (0x7fULL 
                                                     & vlSelf->top__DOT__instrmemory0__DOT__rdata)));
    vlSelf->top__DOT__MemtoReg = ((((IData)(vlSelf->top__DOT__control0__DOT__Load) 
                                    & (IData)((vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                               >> 0xeU))) 
                                   << 2U) | (((IData)(
                                                      ((1U 
                                                        == 
                                                        (1U 
                                                         & (IData)(vlSelf->top__DOT__control0__DOT__Load))) 
                                                       & (0ULL 
                                                          == 
                                                          (0x6000ULL 
                                                           & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                              << 1U) 
                                             | ((IData)(vlSelf->top__DOT__control0__DOT__Load) 
                                                & (IData)(
                                                          (0ULL 
                                                           != 
                                                           (0x3000ULL 
                                                            & vlSelf->top__DOT__instrmemory0__DOT__rdata))))));
    vlSelf->top__DOT__pcnext0__DOT__offsetA = ((IData)(vlSelf->top__DOT__control0__DOT__jalr)
                                                ? vlSelf->top__DOT__busA
                                                : vlSelf->pc);
    vlSelf->top__DOT__MUXStore = ((((IData)(vlSelf->top__DOT__control0__DOT__Store) 
                                    & (IData)((vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                               >> 0xcU))) 
                                   << 1U) | ((IData)(vlSelf->top__DOT__control0__DOT__Store) 
                                             & (~ (IData)(
                                                          (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                           >> 0xdU)))));
    vlSelf->top__DOT__Jump = ((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                              | (IData)(vlSelf->top__DOT__control0__DOT__jalr));
    vlSelf->top__DOT__ALU_src1 = ((((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__jalr)) 
                                   | (IData)(vlSelf->top__DOT__control0__DOT__auipc))
                                   ? vlSelf->pc : vlSelf->top__DOT__busA);
    vlSelf->top__DOT__Branch = ((((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                  & (IData)((0ULL != 
                                             (0x5000ULL 
                                              & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                 << 1U) | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                           & (IData)(
                                                     (0x1000ULL 
                                                      != 
                                                      (0x5000ULL 
                                                       & vlSelf->top__DOT__instrmemory0__DOT__rdata)))));
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
                                   & (IData)((0x40005000ULL 
                                              == (0x40007000ULL 
                                                  & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                  | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                     & (IData)((0x5000ULL 
                                                == 
                                                (0x5000ULL 
                                                 & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                 << 5U) | (((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                  | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                 & (IData)(
                                                           (0x5000ULL 
                                                            == 
                                                            (0x40007000ULL 
                                                             & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                                | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                    | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                   & (IData)(
                                                             (0x7000ULL 
                                                              == 
                                                              (0x7000ULL 
                                                               & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                               | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                   | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                  & (IData)(
                                                            (0x1000ULL 
                                                             == 
                                                             (0x7000ULL 
                                                              & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                              | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                  | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                 & (IData)(
                                                           (0x4000ULL 
                                                            == 
                                                            (0x7000ULL 
                                                             & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                             | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                & (IData)(
                                                          (0x5000ULL 
                                                           == 
                                                           (0x5000ULL 
                                                            & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                            << 4U) 
                                           | ((((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                      | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                     & (IData)(
                                                               (0x5000ULL 
                                                                == 
                                                                (0x40007000ULL 
                                                                 & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                                    | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                        | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                       & (IData)(
                                                                 (0x1000ULL 
                                                                  == 
                                                                  (0x7000ULL 
                                                                   & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                                   | ((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                      & (IData)(
                                                                (0x40000000ULL 
                                                                 == 
                                                                 (0x40007000ULL 
                                                                  & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                                  | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                     & (~ (IData)(
                                                                  (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                   >> 0xeU))))) 
                                                 | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                    & (IData)(
                                                              (0x3000ULL 
                                                               == 
                                                               (0x3000ULL 
                                                                & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                                | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                               << 3U) 
                                              | (((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                      | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                     & (IData)(
                                                               (0x5000ULL 
                                                                == 
                                                                (0x40007000ULL 
                                                                 & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                                    | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                        | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                       & (IData)(
                                                                 (0x6000ULL 
                                                                  == 
                                                                  (0x6000ULL 
                                                                   & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                                   | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                                  << 2U) 
                                                 | ((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                          | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                         & (IData)(
                                                                   (0x2000ULL 
                                                                    == 
                                                                    (0x6000ULL 
                                                                     & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                                        | (((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                            | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                           & (IData)(
                                                                     (0x6000ULL 
                                                                      == 
                                                                      (0x7000ULL 
                                                                       & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                                       | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                          & (IData)(
                                                                    (0x4000ULL 
                                                                     == 
                                                                     (0x5000ULL 
                                                                      & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                                      | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                                     << 1U) 
                                                    | (((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                                          | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                                         & (IData)(
                                                                   (0x3000ULL 
                                                                    == 
                                                                    (0x7000ULL 
                                                                     & vlSelf->top__DOT__instrmemory0__DOT__rdata)))) 
                                                        | ((IData)(vlSelf->top__DOT__control0__DOT__Btype) 
                                                           & (IData)(
                                                                     (0x6000ULL 
                                                                      == 
                                                                      (0x7000ULL 
                                                                       & vlSelf->top__DOT__instrmemory0__DOT__rdata))))) 
                                                       | (IData)(vlSelf->top__DOT__control0__DOT__lui)))))));
    vlSelf->top__DOT__imm = ((0U == (IData)(vlSelf->top__DOT__ExtOp))
                              ? (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                 >> 0x1fU)))))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (0xfffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                         >> 0x14U))))))
                              : ((1U == (IData)(vlSelf->top__DOT__ExtOp))
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(
                                                                           (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                            >> 0xcU)) 
                                                                   << 0xcU))))
                                  : ((2U == (IData)(vlSelf->top__DOT__ExtOp))
                                      ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                         >> 0x1fU)))))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                         >> 0x19U)) 
                                                                << 5U)) 
                                                            | (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                          >> 7U)))))))
                                      : ((3U == (IData)(vlSelf->top__DOT__ExtOp))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                             >> 0x1fU)))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               ((0x800U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                             >> 7U)) 
                                                                    << 0xbU)) 
                                                                | ((0x7e0U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0x19U)) 
                                                                       << 5U)) 
                                                                   | (0x1eU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 8U)) 
                                                                         << 1U)))))))
                                          : ((4U == (IData)(vlSelf->top__DOT__ExtOp))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0x1fU)))))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0xcU)) 
                                                                        << 0xcU)) 
                                                                    | ((0x800U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0x14U)) 
                                                                           << 0xbU)) 
                                                                       | (0x7feU 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0x15U)) 
                                                                             << 1U)))))))
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
    VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->top__DOT__ALU_src1);
    VL_EXTEND_WQ(65,64, __Vtemp12, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    VL_EXTEND_WI(65,1, __Vtemp14, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
    VL_ADD_W(3, __Vtemp15, __Vtemp13, __Vtemp14);
    vlSelf->top__DOT__ALU0__DOT__sltu_Flag = (1U & 
                                              (((1U 
                                                 & __Vtemp15[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)) 
                                               ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)));
    VL_EXTEND_WI(65,1, __Vtemp17, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
    vlSelf->top__DOT__ALU0__DOT__Add_Result = ((vlSelf->top__DOT__ALU_src1 
                                                + vlSelf->top__DOT__ALU0__DOT__Adder_src2) 
                                               + (((QData)((IData)(
                                                                   __Vtemp17[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp17[0U]))));
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__DataOut = ((IData)(vlSelf->rst)
                                  ? 0ULL : vlSelf->top__DOT__datamemory0__DOT__mem
                                 [(0x1fU & (IData)(vlSelf->top__DOT__ALU_Result))]);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop___024root___combo__TOP__6(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
