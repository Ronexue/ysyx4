// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ID_Stage0__DOT__Registers0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ID_Stage0__DOT__Registers0__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
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
    // Body
    vlSelf->__Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v1 = 0U;
    vlSelf->top__DOT__EXM_M_Zero = ((IData)(vlSelf->rst) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__IF_Stage0__DOT__pc_now = vlSelf->top__DOT__IF_Stage0__DOT__pc_next;
        vlSelf->top__DOT__EXM_M_Branch = vlSelf->top__DOT__IDEX_EX_Branch;
        vlSelf->top__DOT__EXM_M_Jump = ((IData)(vlSelf->top__DOT__IDEX_EX_Jump) 
                                        & 1U);
        vlSelf->top__DOT__IDEX_EX_ALUASrc = ((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                               | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr)) 
                                              | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc)) 
                                             & 1U);
        vlSelf->top__DOT__IDEX_EX_ALUBSrc = vlSelf->top__DOT__ID_IDEX_ALUBSrc;
        vlSelf->top__DOT__offset2 = (((IData)(vlSelf->top__DOT__IDEX_EX_jalrctr)
                                       ? vlSelf->top__DOT__IDEX_EX_busA
                                       : vlSelf->top__DOT__IDEX_EX_pc) 
                                     + vlSelf->top__DOT__IDEX_EX_imm);
        vlSelf->top__DOT__IDEX_EX_ALUctr = vlSelf->top__DOT__ID_IDEX_ALUctr;
    } else {
        vlSelf->top__DOT__IF_Stage0__DOT__pc_now = 0x80000000ULL;
        vlSelf->top__DOT__EXM_M_Branch = 0U;
        vlSelf->top__DOT__EXM_M_Jump = 0U;
        vlSelf->top__DOT__IDEX_EX_ALUASrc = 0U;
        vlSelf->top__DOT__IDEX_EX_ALUBSrc = 0U;
        vlSelf->top__DOT__offset2 = 0ULL;
        vlSelf->top__DOT__IDEX_EX_ALUctr = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->top__DOT__EXM_M_MemWr) {
            vlSelf->__Vdlyvval__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0 
                = ((0U == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
                    ? vlSelf->top__DOT__EXM_M_busB : 
                   ((1U == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
                     ? (((- (QData)((IData)((1U & (IData)(
                                                          (vlSelf->top__DOT__EXM_M_busB 
                                                           >> 7U)))))) 
                         << 8U) | (QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__EXM_M_busB)))))
                     : ((3U == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
                         ? (((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__EXM_M_busB 
                                                            >> 0xfU)))))) 
                             << 0x10U) | (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->top__DOT__EXM_M_busB)))))
                         : 0ULL)));
            vlSelf->__Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0 = 1U;
            vlSelf->__Vdlyvdim0__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0 
                = (0x1fU & (IData)(vlSelf->top__DOT__EXM_M_ALUout));
        }
    } else {
        vlSelf->__Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v1 = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__IDEX_EX_Branch = vlSelf->top__DOT__ID_IDEX_Branch;
        vlSelf->top__DOT__IDEX_EX_Jump = (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                           | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr)) 
                                          & 1U);
    } else {
        vlSelf->top__DOT__IDEX_EX_Branch = 0U;
        vlSelf->top__DOT__IDEX_EX_Jump = 0U;
    }
    vlSelf->top__DOT__IF_Stage0__DOT__pc_next = (((
                                                   (((1U 
                                                      == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                                     & (IData)(vlSelf->top__DOT__EXM_M_Zero)) 
                                                    | (IData)(vlSelf->top__DOT__EXM_M_Jump)) 
                                                   | (((2U 
                                                        == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                                       & (~ (IData)(vlSelf->top__DOT__EXM_M_Zero))) 
                                                      | (IData)(vlSelf->top__DOT__EXM_M_Jump))) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                                     | (IData)(vlSelf->top__DOT__EXM_M_Jump)))
                                                  ? vlSelf->top__DOT__offset2
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->top__DOT__IF_Stage0__DOT__pc_now));
    vlSelf->top__DOT__IDEX_EX_jalrctr = ((IData)(vlSelf->rst) 
                                         & (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr));
    if (vlSelf->rst) {
        vlSelf->top__DOT__IDEX_EX_pc = vlSelf->top__DOT__IFID_ID_pc;
        vlSelf->top__DOT__IDEX_EX_busA = ((0U == (0x1fU 
                                                  & (vlSelf->top__DOT__IFID_ID_instr 
                                                     >> 0xfU)))
                                           ? 0ULL : 
                                          vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__IFID_ID_instr 
                                             >> 0xfU))]);
        vlSelf->top__DOT__IDEX_EX_imm = ((0U == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->top__DOT__IFID_ID_instr 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->top__DOT__IFID_ID_instr 
                                                                >> 0x14U))))
                                          : ((1U == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->top__DOT__IFID_ID_instr 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->top__DOT__IFID_ID_instr))))
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->top__DOT__IFID_ID_instr 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__IFID_ID_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__IFID_ID_instr 
                                                                           >> 7U))))))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__IFID_ID_instr 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->top__DOT__IFID_ID_instr 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->top__DOT__IFID_ID_instr 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->top__DOT__IFID_ID_instr 
                                                                               >> 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__IFID_ID_instr 
                                                                         >> 0x1fU)))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->top__DOT__IFID_ID_instr) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->top__DOT__IFID_ID_instr 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->top__DOT__IFID_ID_instr 
                                                                                >> 0x14U)))))))
                                                    : 0ULL)))));
    } else {
        vlSelf->top__DOT__IDEX_EX_pc = 0ULL;
        vlSelf->top__DOT__IDEX_EX_busA = 0ULL;
        vlSelf->top__DOT__IDEX_EX_imm = 0ULL;
    }
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__and_result 
        = (IData)((0x14U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sll_result 
        = (IData)((0x18U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__srl_result 
        = (IData)((0x1cU == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result 
        = (IData)((3U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result 
        = (IData)((0x38U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__EXM_M_MUXStore = vlSelf->top__DOT__IDEX_EX_MUXStore;
        vlSelf->top__DOT__EXM_M_MemWr = ((IData)(vlSelf->top__DOT__IDEX_EX_MemWr) 
                                         & 1U);
        vlSelf->top__DOT__EXM_M_busB = vlSelf->top__DOT__IDEX_EX_busB;
        vlSelf->top__DOT__IFID_ID_pc = vlSelf->pc;
        vlSelf->top__DOT__IDEX_EX_MUXStore = vlSelf->top__DOT__ID_IDEX_MUXStore;
        vlSelf->top__DOT__IDEX_EX_MemWr = ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store) 
                                           & 1U);
        vlSelf->top__DOT__IDEX_EX_busB = ((0U == (0x1fU 
                                                  & (vlSelf->top__DOT__IFID_ID_instr 
                                                     >> 0x14U)))
                                           ? 0ULL : 
                                          vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__IFID_ID_instr 
                                             >> 0x14U))]);
    } else {
        vlSelf->top__DOT__EXM_M_MUXStore = 0U;
        vlSelf->top__DOT__EXM_M_MemWr = 0U;
        vlSelf->top__DOT__EXM_M_busB = 0ULL;
        vlSelf->top__DOT__IFID_ID_pc = 0ULL;
        vlSelf->top__DOT__IDEX_EX_MUXStore = 0U;
        vlSelf->top__DOT__IDEX_EX_MemWr = 0U;
        vlSelf->top__DOT__IDEX_EX_busB = 0ULL;
    }
    vlSelf->pc = vlSelf->top__DOT__IF_Stage0__DOT__pc_now;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0 = 0U;
    if ((((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
              | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
             | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)) 
            | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc)) 
           | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load)) 
          | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal)) 
         | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr))) {
        __Vdlyvval__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0 
            = ((0U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                ? vlSelf->top__DOT__MWB_WB_ALUout : 
               ((1U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                 ? vlSelf->top__DOT__MWB_WB_Dataout
                 : ((2U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                     ? (((- (QData)((IData)((1U & (IData)(
                                                          (vlSelf->top__DOT__MWB_WB_Dataout 
                                                           >> 7U)))))) 
                         << 8U) | (QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__MWB_WB_Dataout)))))
                     : ((3U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                         ? (((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__MWB_WB_Dataout 
                                                            >> 0xfU)))))) 
                             << 0x10U) | (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->top__DOT__MWB_WB_Dataout)))))
                         : ((4U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                             ? (QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__MWB_WB_Dataout))))
                             : ((5U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                 ? (QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(vlSelf->top__DOT__MWB_WB_Dataout))))
                                 : 0ULL))))));
        __Vdlyvset__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0 
            = vlSelf->top__DOT__MWB_WB_rd;
    }
    if (__Vdlyvset__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0) {
        vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[__Vdlyvdim0__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__ID_Stage0__DOT__Registers0__DOT__rf__v0;
    }
}

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
    if (vlSelf->rst) {
        vlSelf->top__DOT__MWB_WB_MemtoReg = vlSelf->top__DOT__EXM_M_MemtoReg;
        vlSelf->top__DOT__MWB_WB_ALUout = vlSelf->top__DOT__EXM_M_ALUout;
        vlSelf->top__DOT__MWB_WB_Dataout = ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem
                                            [(0x1fU 
                                              & (IData)(vlSelf->top__DOT__EXM_M_ALUout))]);
        vlSelf->top__DOT__MWB_WB_rd = vlSelf->top__DOT__EXM_M_rd;
    } else {
        vlSelf->top__DOT__MWB_WB_MemtoReg = 0U;
        vlSelf->top__DOT__MWB_WB_ALUout = 0ULL;
        vlSelf->top__DOT__MWB_WB_Dataout = 0ULL;
        vlSelf->top__DOT__MWB_WB_rd = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0) {
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[vlSelf->__Vdlyvdim0__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v0;
    }
    if (vlSelf->__Vdlyvset__top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem__v1) {
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[1U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[2U] = 0x10ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[3U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[4U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[5U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[6U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[7U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[8U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[9U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0xaU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0xbU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0xcU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0xdU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0xeU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0xfU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x10U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x11U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x12U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x13U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x14U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x15U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x16U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x17U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x18U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x19U] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x1aU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x1bU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x1cU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x1dU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x1eU] = 0ULL;
        vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0x1fU] = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__EXM_M_MemtoReg = vlSelf->top__DOT__IDEX_EX_MemtoReg;
        vlSelf->top__DOT__EXM_M_ALUout = ((0U == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                           ? vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result
                                           : ((1U == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                               ? (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                  | vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                   ? vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                    ? (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                                        | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                                        ? (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)
                                                                        : (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                     ? 
                                                    (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                     ^ vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                      ? 
                                                     (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                      & vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                       ? 
                                                      (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                       << 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                        ? 
                                                       (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                        >> 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                         ? 
                                                        VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                          ? (QData)((IData)(
                                                                            (1U 
                                                                             & (~ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)))))
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                                           ? (QData)((IData)(
                                                                             (1U 
                                                                              & (~ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag)))))
                                                           : 0ULL)))))))))));
        vlSelf->top__DOT__EXM_M_rd = vlSelf->top__DOT__IDEX_EX_rd;
    } else {
        vlSelf->top__DOT__EXM_M_MemtoReg = 0U;
        vlSelf->top__DOT__EXM_M_ALUout = 0ULL;
        vlSelf->top__DOT__EXM_M_rd = 0U;
    }
    vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 = ((IData)(vlSelf->top__DOT__IDEX_EX_ALUASrc)
                                                   ? vlSelf->top__DOT__IDEX_EX_pc
                                                   : vlSelf->top__DOT__IDEX_EX_busA);
    vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2 = ((0U 
                                                   == (IData)(vlSelf->top__DOT__IDEX_EX_ALUBSrc))
                                                   ? vlSelf->top__DOT__IDEX_EX_busB
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__IDEX_EX_ALUBSrc))
                                                    ? 4ULL
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__IDEX_EX_ALUBSrc))
                                                     ? vlSelf->top__DOT__IDEX_EX_imm
                                                     : 0ULL)));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result 
        = (IData)((2U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result 
        = (IData)((0x30U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))));
    vlSelf->top__DOT__IDEX_EX_MemtoReg = ((IData)(vlSelf->rst)
                                           ? (IData)(vlSelf->top__DOT__ID_IDEX_MemtoReg)
                                           : 0U);
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr 
        = ((8U & ((((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result) 
                    | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)) 
                   | (IData)((0x20U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))) 
                  << 3U)) | ((4U & (((((((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result) 
                                         | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)) 
                                        | (IData)((0x10U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))) 
                                       | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__and_result)) 
                                      | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sll_result)) 
                                     | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__srl_result)) 
                                    << 2U)) | ((2U 
                                                & (((((((IData)(
                                                                (0xfU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr)))) 
                                                        | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result)) 
                                                       | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result)) 
                                                      | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)) 
                                                     | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sll_result)) 
                                                    | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__srl_result)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((((IData)(
                                                                (6U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr)))) 
                                                        | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__and_result)) 
                                                       | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__srl_result)) 
                                                      | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result)) 
                                                     | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result))))));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr 
        = (1U & (((((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                    | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result)) 
                   | (IData)((8U == (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))) 
                  | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result)) 
                 | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result)));
    vlSelf->top__DOT__IDEX_EX_rd = ((IData)(vlSelf->rst)
                                     ? (0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                                 >> 7U))
                                     : 0U);
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2 
        = (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2 
           ^ (- (QData)((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr))));
    VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1);
    VL_EXTEND_WQ(65,64, __Vtemp12, vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2);
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    VL_EXTEND_WI(65,1, __Vtemp14, (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
    VL_ADD_W(3, __Vtemp15, __Vtemp13, __Vtemp14);
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag 
        = (1U & (((1U & __Vtemp15[2U]) ^ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr)) 
                 ^ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr)));
    VL_EXTEND_WI(65,1, __Vtemp17, (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
        = ((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
            + vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2) 
           + (((QData)((IData)(__Vtemp17[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp17[0U]))));
    vlSelf->top__DOT__IFID_ID_instr = ((IData)(vlSelf->rst)
                                        ? vlSelf->instr_i
                                        : 0U);
    vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag 
        = (1U & (((((IData)((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                             >> 0x3fU)) & (IData)((vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2 
                                                   >> 0x3fU))) 
                   & (~ (IData)((vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
                                 >> 0x3fU)))) + (((~ (IData)(
                                                             (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                              >> 0x3fU))) 
                                                  & (~ (IData)(
                                                               (vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2 
                                                                >> 0x3fU)))) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
                                                            >> 0x3fU)))) 
                 ^ (IData)((vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
                            >> 0x3fU))));
    if (VL_LIKELY((IData)((0x73U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr))))) {
        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
    } else {
        VL_WRITEF("no\n");
    }
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype 
        = (IData)((0x33U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load 
        = (IData)((3U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU 
        = (IData)((0x13U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc 
        = (IData)((0x17U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal 
        = (IData)((0x6fU == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype 
        = (IData)((0x63U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store 
        = (IData)((0x23U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui 
        = (IData)((0x37U == (0x7fU & vlSelf->top__DOT__IFID_ID_instr)));
    vlSelf->top__DOT__ID_IDEX_MemtoReg = ((0xffffcU 
                                           & (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load) 
                                               << 2U) 
                                              & (vlSelf->top__DOT__IFID_ID_instr 
                                                 >> 0xcU))) 
                                          | (((IData)(
                                                      ((1U 
                                                        == 
                                                        (1U 
                                                         & (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load))) 
                                                       & (0U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelf->top__DOT__IFID_ID_instr)))) 
                                              << 1U) 
                                             | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->top__DOT__IFID_ID_instr))))));
    vlSelf->top__DOT__ID_IDEX_Branch = ((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                          & (IData)(
                                                    (0U 
                                                     != 
                                                     (0x5000U 
                                                      & vlSelf->top__DOT__IFID_ID_instr)))) 
                                         << 1U) | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                                   & (IData)(
                                                             (0x1000U 
                                                              != 
                                                              (0x5000U 
                                                               & vlSelf->top__DOT__IFID_ID_instr)))));
    vlSelf->top__DOT__ID_IDEX_MUXStore = ((0x1ffffeU 
                                           & (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store) 
                                               << 1U) 
                                              & (vlSelf->top__DOT__IFID_ID_instr 
                                                 >> 0xbU))) 
                                          | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store) 
                                             & (~ (vlSelf->top__DOT__IFID_ID_instr 
                                                   >> 0xdU))));
    vlSelf->top__DOT__ID_IDEX_ALUctr = ((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                            | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                           & (IData)(
                                                     (0x40005000U 
                                                      == 
                                                      (0x40007000U 
                                                       & vlSelf->top__DOT__IFID_ID_instr)))) 
                                          | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                             & (IData)(
                                                       (0x5000U 
                                                        == 
                                                        (0x5000U 
                                                         & vlSelf->top__DOT__IFID_ID_instr))))) 
                                         << 5U) | (
                                                   ((((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                          | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                         & (IData)(
                                                                   (0x5000U 
                                                                    == 
                                                                    (0x40007000U 
                                                                     & vlSelf->top__DOT__IFID_ID_instr)))) 
                                                        | (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                            | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                           & (IData)(
                                                                     (0x7000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                       | (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                           | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                          & (IData)(
                                                                    (0x1000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                      | (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                          | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                         & (IData)(
                                                                   (0x4000U 
                                                                    == 
                                                                    (0x7000U 
                                                                     & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                     | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                                        & (IData)(
                                                                  (0x5000U 
                                                                   == 
                                                                   (0x5000U 
                                                                    & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                    << 4U) 
                                                   | ((((((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                              | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                             & (IData)(
                                                                       (0x5000U 
                                                                        == 
                                                                        (0x40007000U 
                                                                         & vlSelf->top__DOT__IFID_ID_instr)))) 
                                                            | (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                                | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                               & (IData)(
                                                                         (0x1000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                           | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                              & (IData)(
                                                                        (0x40000000U 
                                                                         == 
                                                                         (0x40007000U 
                                                                          & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                          | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                                             & (~ 
                                                                (vlSelf->top__DOT__IFID_ID_instr 
                                                                 >> 0xeU)))) 
                                                         | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                                            & (IData)(
                                                                      (0x3000U 
                                                                       == 
                                                                       (0x3000U 
                                                                        & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                        | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)) 
                                                       << 3U) 
                                                      | (((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                              | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                             & (IData)(
                                                                       (0x5000U 
                                                                        == 
                                                                        (0x40007000U 
                                                                         & vlSelf->top__DOT__IFID_ID_instr)))) 
                                                            | (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                                | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                               & (IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0x6000U 
                                                                           & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                           | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)) 
                                                          << 2U) 
                                                         | ((((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                                  | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                                 & (IData)(
                                                                           (0x2000U 
                                                                            == 
                                                                            (0x6000U 
                                                                             & vlSelf->top__DOT__IFID_ID_instr)))) 
                                                                | (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                                    | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                                   & (IData)(
                                                                             (0x6000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                               | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                                                  & (IData)(
                                                                            (0x4000U 
                                                                             == 
                                                                             (0x5000U 
                                                                              & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                              | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)) 
                                                             << 1U) 
                                                            | (((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                                                  | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                                                 & (IData)(
                                                                           (0x3000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->top__DOT__IFID_ID_instr)))) 
                                                                | ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype) 
                                                                   & (IData)(
                                                                             (0x6000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->top__DOT__IFID_ID_instr))))) 
                                                               | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)))))));
    vlSelf->top__DOT__ID_Stage0__DOT__ExtOp = (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store) 
                                                    | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui) 
                                                      | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype)) 
                                                     | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc))));
    vlSelf->top__DOT__ID_IDEX_ALUBSrc = (((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU) 
                                              | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)) 
                                             | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc)) 
                                            | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load)) 
                                           | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store)) 
                                          << 1U) | 
                                         ((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                          | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
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
