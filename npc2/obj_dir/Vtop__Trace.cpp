// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__offset2),64);
            tracep->chgBit(oldp+2,((((((1U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                       & (IData)(vlSelf->top__DOT__EXM_M_Zero)) 
                                      | (IData)(vlSelf->top__DOT__EXM_M_Jump)) 
                                     | (((2U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                         & (~ (IData)(vlSelf->top__DOT__EXM_M_Zero))) 
                                        | (IData)(vlSelf->top__DOT__EXM_M_Jump))) 
                                    | ((3U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                       | (IData)(vlSelf->top__DOT__EXM_M_Jump)))));
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__IFID_ID_pc),64);
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__IDEX_EX_pc),64);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__IDEX_EX_busA),64);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__IDEX_EX_busB),64);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__IDEX_EX_imm),64);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__IDEX_EX_MUXStore),2);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__IDEX_EX_MemWr));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__IDEX_EX_Jump));
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__IDEX_EX_Branch),2);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__IDEX_EX_jalrctr));
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__IDEX_EX_ALUctr),6);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__IDEX_EX_ALUBSrc),2);
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__IDEX_EX_ALUASrc));
            tracep->chgQData(oldp+21,((((IData)(vlSelf->top__DOT__IDEX_EX_jalrctr)
                                         ? vlSelf->top__DOT__IDEX_EX_busA
                                         : vlSelf->top__DOT__IDEX_EX_pc) 
                                       + vlSelf->top__DOT__IDEX_EX_imm)),64);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__EXM_M_Zero));
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__EXM_M_busB),64);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__EXM_M_MUXStore),2);
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__EXM_M_MemWr));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__EXM_M_Jump));
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__EXM_M_Branch),2);
            tracep->chgQData(oldp+30,(((((((1U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                           & (IData)(vlSelf->top__DOT__EXM_M_Zero)) 
                                          | (IData)(vlSelf->top__DOT__EXM_M_Jump)) 
                                         | (((2U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                             & (~ (IData)(vlSelf->top__DOT__EXM_M_Zero))) 
                                            | (IData)(vlSelf->top__DOT__EXM_M_Jump))) 
                                        | ((3U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                           | (IData)(vlSelf->top__DOT__EXM_M_Jump)))
                                        ? vlSelf->top__DOT__offset2
                                        : (4ULL + vlSelf->top__DOT__IF_Stage0__DOT__pc_now))),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__IF_Stage0__DOT__pc_now),64);
            tracep->chgQData(oldp+34,((4ULL + vlSelf->top__DOT__IF_Stage0__DOT__pc_now)),64);
            tracep->chgQData(oldp+36,(((IData)(vlSelf->top__DOT__IDEX_EX_jalrctr)
                                        ? vlSelf->top__DOT__IDEX_EX_busA
                                        : vlSelf->top__DOT__IDEX_EX_pc)),64);
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result));
            tracep->chgBit(oldp+39,((IData)((6U == 
                                             (0x3fU 
                                              & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
            tracep->chgBit(oldp+40,((IData)((8U == 
                                             (0x3fU 
                                              & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result));
            tracep->chgBit(oldp+42,((IData)((0x10U 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__and_result));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sll_result));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__srl_result));
            tracep->chgBit(oldp+46,((IData)((0x20U 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
            tracep->chgBit(oldp+47,((IData)((0xfU == 
                                             (0x3fU 
                                              & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
            tracep->chgQData(oldp+48,(((0U == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
                                        ? vlSelf->top__DOT__EXM_M_busB
                                        : ((1U == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
                                            ? (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__EXM_M_busB 
                                                                               >> 7U)))))) 
                                                << 8U) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__EXM_M_busB)))))
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__EXM_M_busB 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__EXM_M_busB)))))
                                                : 0ULL)))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[0]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[1]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[2]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[3]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[4]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[5]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[6]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[7]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[8]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[9]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[10]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[11]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[12]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[13]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[14]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[15]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[16]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[17]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[18]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[19]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[20]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[21]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[22]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[23]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[24]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[25]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[26]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[27]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[28]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[29]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[30]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+114,(vlSelf->top__DOT__IFID_ID_instr),32);
            tracep->chgCData(oldp+115,(vlSelf->top__DOT__MWB_WB_rd),5);
            tracep->chgQData(oldp+116,(((0U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                         ? vlSelf->top__DOT__MWB_WB_ALUout
                                         : ((1U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                             ? vlSelf->top__DOT__MWB_WB_Dataout
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__MWB_WB_Dataout 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__MWB_WB_Dataout)))))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__MWB_WB_Dataout 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__MWB_WB_Dataout)))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__MWB_WB_Dataout))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__MWB_WB_Dataout))))
                                                    : 0ULL))))))),64);
            tracep->chgQData(oldp+118,(((0U == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
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
                                                   : 0ULL)))))),64);
            tracep->chgCData(oldp+120,((0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__ID_IDEX_MemtoReg),3);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__ID_IDEX_MUXStore),2);
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store));
            tracep->chgBit(oldp+124,(((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                      | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr))));
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__ID_IDEX_Branch),2);
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr));
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__ID_IDEX_ALUctr),6);
            tracep->chgCData(oldp+128,(vlSelf->top__DOT__ID_IDEX_ALUBSrc),2);
            tracep->chgBit(oldp+129,((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                       | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr)) 
                                      | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc))));
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__IDEX_EX_rd),5);
            tracep->chgCData(oldp+131,(vlSelf->top__DOT__IDEX_EX_MemtoReg),3);
            tracep->chgBit(oldp+132,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result))))));
            tracep->chgQData(oldp+133,(((0U == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
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
                                                         : 0ULL)))))))))))),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__EXM_M_ALUout),64);
            tracep->chgCData(oldp+137,(vlSelf->top__DOT__EXM_M_rd),5);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__EXM_M_MemtoReg),3);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__MWB_WB_Dataout),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__MWB_WB_ALUout),64);
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__MWB_WB_MemtoReg),3);
            tracep->chgCData(oldp+144,((0x7fU & vlSelf->top__DOT__IFID_ID_instr)),7);
            tracep->chgCData(oldp+145,((7U & (vlSelf->top__DOT__IFID_ID_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+146,((0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+147,((0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+148,((vlSelf->top__DOT__IFID_ID_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+149,((((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                           | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                          | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)) 
                                         | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc)) 
                                        | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load)) 
                                       | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal)) 
                                      | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr))));
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp),3);
            tracep->chgBit(oldp+151,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype));
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU));
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype));
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal));
            tracep->chgBit(oldp+158,((IData)((0x73U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__IFID_ID_instr)))));
            tracep->chgQData(oldp+159,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__IFID_ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__IFID_ID_instr 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__IFID_ID_instr 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__IFID_ID_instr))))),64);
            tracep->chgQData(oldp+163,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__IFID_ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__IFID_ID_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__IFID_ID_instr 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+165,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__IFID_ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->top__DOT__IFID_ID_instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT__IFID_ID_instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top__DOT__IFID_ID_instr 
                                                                              >> 7U)))))))),64);
            tracep->chgQData(oldp+167,((((- (QData)((IData)(
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
                                                                    >> 0x14U)))))))),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2),64);
            tracep->chgBit(oldp+173,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
            tracep->chgBit(oldp+174,(((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                      | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))));
            tracep->chgCData(oldp+175,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr),4);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2),64);
            VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1);
            VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2);
            VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
            VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
            tracep->chgBit(oldp+178,((1U & ((1U & __Vtemp37[2U]) 
                                            ^ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr)))));
            tracep->chgBit(oldp+179,((1U & ((((IData)(
                                                      (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                       >> 0x3fU)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2 
                                                         >> 0x3fU))) 
                                             & (~ (IData)(
                                                          (vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
                                                           >> 0x3fU)))) 
                                            + (((~ (IData)(
                                                           (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                                            >> 0x3fU))) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2 
                                                              >> 0x3fU)))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
                                                          >> 0x3fU)))))));
            tracep->chgBit(oldp+180,((1U & (IData)(
                                                   (vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result),64);
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag));
            tracep->chgBit(oldp+184,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag));
            tracep->chgQData(oldp+185,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)))))),64);
            tracep->chgQData(oldp+187,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag)))))),64);
            tracep->chgBit(oldp+189,((((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                       | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                       ? (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)
                                       : (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag))));
            tracep->chgQData(oldp+190,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                        & vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+192,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                        | vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+194,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                        ^ vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+196,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                        << (0x1fU & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+198,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                        >> (0x1fU & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+200,(VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1, 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+202,((QData)((IData)(
                                                       (((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                         | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                         ? (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)
                                                         : (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag))))),64);
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result));
            VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1);
            VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2);
            VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
            VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
            tracep->chgBit(oldp+206,((1U & __Vtemp44[2U])));
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[1]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[2]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[3]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[4]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[5]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[6]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[7]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[8]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[9]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[10]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[11]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[12]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[13]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[14]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[15]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[16]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[17]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[18]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[19]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[20]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[21]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[22]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[23]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[24]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[25]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[26]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[27]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[28]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[29]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[30]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[31]),64);
        }
        tracep->chgBit(oldp+271,(vlSelf->clk));
        tracep->chgBit(oldp+272,(vlSelf->rst));
        tracep->chgIData(oldp+273,(vlSelf->instr_i),32);
        tracep->chgQData(oldp+274,(vlSelf->pc),64);
        tracep->chgQData(oldp+276,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__IFID_ID_instr 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf
                                    [(0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                               >> 0xfU))])),64);
        tracep->chgQData(oldp+278,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__IFID_ID_instr 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf
                                    [(0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                               >> 0x14U))])),64);
        tracep->chgQData(oldp+280,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem
                                    [(0x1fU & (IData)(vlSelf->top__DOT__EXM_M_ALUout))])),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
