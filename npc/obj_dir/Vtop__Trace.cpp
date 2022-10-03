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
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__busA),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__busB),64);
            tracep->chgQData(oldp+4,(((0U == (IData)(vlSelf->top__DOT__MemtoReg))
                                       ? vlSelf->top__DOT__ALU_Result
                                       : ((1U == (IData)(vlSelf->top__DOT__MemtoReg))
                                           ? vlSelf->top__DOT__DataOut
                                           : ((2U == (IData)(vlSelf->top__DOT__MemtoReg))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__DataOut 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__DataOut)))))
                                               : ((3U 
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
                                                     : 0ULL))))))),64);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__Branch),2);
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__Jump));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__control0__DOT__jalr));
            tracep->chgBit(oldp+9,((((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                     | (IData)(vlSelf->top__DOT__control0__DOT__jalr)) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__auipc))));
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__ALUBSrc),2);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__ALUctr),6);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__MemtoReg),3);
            tracep->chgBit(oldp+13,((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                          | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                         | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                        | (IData)(vlSelf->top__DOT__control0__DOT__auipc)) 
                                       | (IData)(vlSelf->top__DOT__control0__DOT__Load)) 
                                      | (IData)(vlSelf->top__DOT__control0__DOT__jal)) 
                                     | (IData)(vlSelf->top__DOT__control0__DOT__jalr))));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__control0__DOT__Store));
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__MUXStore),2);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__ExtOp),3);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__ALU_src1),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__ALU_src2),64);
            tracep->chgBit(oldp+23,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ALU0__DOT__Add_Result))))));
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__ALU_Result),64);
            tracep->chgQData(oldp+26,((QData)((IData)(
                                                      ((0U 
                                                        == (IData)(vlSelf->top__DOT__MUXStore))
                                                        ? (QData)((IData)(vlSelf->top__DOT__busB))
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->top__DOT__MUXStore))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__busB 
                                                                                >> 7U)))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->top__DOT__busB)))))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->top__DOT__MUXStore))
                                                          ? 
                                                         (((- (QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__busB 
                                                                                >> 0xfU)))))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->top__DOT__busB)))))
                                                          : 0ULL)))))),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__DataOut),64);
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__control0__DOT__Rtype));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__control0__DOT__ItypeALU));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__control0__DOT__lui));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__control0__DOT__auipc));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__control0__DOT__Load));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__control0__DOT__Btype));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__control0__DOT__jal));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__ALU0__DOT__SUBctr));
            tracep->chgBit(oldp+38,(((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                     | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))));
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__ALU0__DOT__OPctr),4);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__ALU0__DOT__Adder_src2),64);
            VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ALU_src1);
            VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
            VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
            VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
            tracep->chgBit(oldp+42,((1U & ((1U & __Vtemp37[2U]) 
                                           ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)))));
            tracep->chgBit(oldp+43,((1U & ((((IData)(
                                                     (vlSelf->top__DOT__ALU_src1 
                                                      >> 0x3fU)) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__ALU0__DOT__Adder_src2 
                                                        >> 0x3fU))) 
                                            & (~ (IData)(
                                                         (vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                          >> 0x3fU)))) 
                                           + (((~ (IData)(
                                                          (vlSelf->top__DOT__ALU_src1 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__ALU0__DOT__Adder_src2 
                                                             >> 0x3fU)))) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                         >> 0x3fU)))))));
            tracep->chgBit(oldp+44,((1U & (IData)((vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                   >> 0x3fU)))));
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__ALU0__DOT__Add_Result),64);
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__ALU0__DOT__slt_Flag));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__ALU0__DOT__sltu_Flag));
            tracep->chgQData(oldp+49,((QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)))))),64);
            tracep->chgQData(oldp+51,((QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag)))))),64);
            tracep->chgBit(oldp+53,((((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                      | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                      ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                      : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))));
            tracep->chgQData(oldp+54,((vlSelf->top__DOT__ALU_src1 
                                       & vlSelf->top__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+56,((vlSelf->top__DOT__ALU_src1 
                                       | vlSelf->top__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+58,((vlSelf->top__DOT__ALU_src1 
                                       ^ vlSelf->top__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+60,((vlSelf->top__DOT__ALU_src1 
                                       << (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+62,((vlSelf->top__DOT__ALU_src1 
                                       >> (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+64,(VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__ALU_src1, 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+66,((QData)((IData)(
                                                      (((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                        | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                        ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                                        : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))))),64);
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result));
            tracep->chgBit(oldp+70,((IData)((6U == 
                                             (0x3fU 
                                              & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+71,((IData)((8U == 
                                             (0x3fU 
                                              & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result));
            tracep->chgBit(oldp+74,((IData)((0x10U 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result));
            tracep->chgBit(oldp+78,((IData)((0x20U 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+79,((IData)((0xfU == 
                                             (0x3fU 
                                              & (IData)(vlSelf->top__DOT__ALUctr))))));
            VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ALU_src1);
            VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
            VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
            VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
            tracep->chgBit(oldp+80,((1U & __Vtemp44[2U])));
            tracep->chgBit(oldp+81,((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                                       | (IData)(vlSelf->top__DOT__Jump)) 
                                      | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                                          & (0U != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                                         | (IData)(vlSelf->top__DOT__Jump))) 
                                     | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                                        | (IData)(vlSelf->top__DOT__Jump)))));
            tracep->chgQData(oldp+82,(((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                                          | (IData)(vlSelf->top__DOT__Jump)) 
                                         | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                                             & (0U 
                                                != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                                            | (IData)(vlSelf->top__DOT__Jump))) 
                                        | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                                           | (IData)(vlSelf->top__DOT__Jump)))
                                        ? vlSelf->top__DOT__imm
                                        : 4ULL)),64);
            tracep->chgIData(oldp+84,((IData)(vlSelf->top__DOT__busB)),32);
            tracep->chgIData(oldp+85,((IData)(((0U 
                                                == (IData)(vlSelf->top__DOT__MUXStore))
                                                ? (QData)((IData)(vlSelf->top__DOT__busB))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__MUXStore))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__busB 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__busB)))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__MUXStore))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__busB 
                                                                                >> 0xfU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__busB)))))
                                                     : 0ULL))))),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__datamemory0__DOT__mem[0]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__datamemory0__DOT__mem[1]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__datamemory0__DOT__mem[2]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__datamemory0__DOT__mem[3]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__datamemory0__DOT__mem[4]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__datamemory0__DOT__mem[5]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__datamemory0__DOT__mem[6]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__datamemory0__DOT__mem[7]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__datamemory0__DOT__mem[8]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__datamemory0__DOT__mem[9]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__datamemory0__DOT__mem[10]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__datamemory0__DOT__mem[11]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__datamemory0__DOT__mem[12]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__datamemory0__DOT__mem[13]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__datamemory0__DOT__mem[14]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__datamemory0__DOT__mem[15]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__datamemory0__DOT__mem[16]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__datamemory0__DOT__mem[17]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__datamemory0__DOT__mem[18]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__datamemory0__DOT__mem[19]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__datamemory0__DOT__mem[20]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__datamemory0__DOT__mem[21]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__datamemory0__DOT__mem[22]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__datamemory0__DOT__mem[23]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__datamemory0__DOT__mem[24]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__datamemory0__DOT__mem[25]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__datamemory0__DOT__mem[26]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__datamemory0__DOT__mem[27]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__datamemory0__DOT__mem[28]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__datamemory0__DOT__mem[29]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__datamemory0__DOT__mem[30]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__datamemory0__DOT__mem[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__registers0__DOT__rf[0]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__registers0__DOT__rf[1]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__registers0__DOT__rf[2]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__registers0__DOT__rf[3]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__registers0__DOT__rf[4]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__registers0__DOT__rf[5]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__registers0__DOT__rf[6]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__registers0__DOT__rf[7]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__registers0__DOT__rf[8]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__registers0__DOT__rf[9]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__registers0__DOT__rf[10]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__registers0__DOT__rf[11]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__registers0__DOT__rf[12]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__registers0__DOT__rf[13]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__registers0__DOT__rf[14]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__registers0__DOT__rf[15]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__registers0__DOT__rf[16]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__registers0__DOT__rf[17]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__registers0__DOT__rf[18]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__registers0__DOT__rf[19]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__registers0__DOT__rf[20]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__registers0__DOT__rf[21]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__registers0__DOT__rf[22]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__registers0__DOT__rf[23]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__registers0__DOT__rf[24]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__registers0__DOT__rf[25]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__registers0__DOT__rf[26]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__registers0__DOT__rf[27]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__registers0__DOT__rf[28]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__registers0__DOT__rf[29]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__registers0__DOT__rf[30]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__registers0__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+214,(vlSelf->clk));
        tracep->chgBit(oldp+215,(vlSelf->rst));
        tracep->chgIData(oldp+216,(vlSelf->instr_i),32);
        tracep->chgQData(oldp+217,(vlSelf->pc),64);
        tracep->chgQData(oldp+219,((((IData)(vlSelf->top__DOT__control0__DOT__jalr)
                                      ? vlSelf->top__DOT__busA
                                      : vlSelf->pc) 
                                    + ((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                                          | (IData)(vlSelf->top__DOT__Jump)) 
                                         | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                                             & (0U 
                                                != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                                            | (IData)(vlSelf->top__DOT__Jump))) 
                                        | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                                           | (IData)(vlSelf->top__DOT__Jump)))
                                        ? vlSelf->top__DOT__imm
                                        : 4ULL))),64);
        tracep->chgCData(oldp+221,((0x7fU & vlSelf->instr_i)),7);
        tracep->chgCData(oldp+222,((0x1fU & (vlSelf->instr_i 
                                             >> 7U))),5);
        tracep->chgCData(oldp+223,((7U & (vlSelf->instr_i 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+224,((vlSelf->instr_i 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+225,((0x1fU & (vlSelf->instr_i 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+226,((0x1fU & (vlSelf->instr_i 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+227,((IData)((0x73U == 
                                          (0x7fU & vlSelf->instr_i)))));
        tracep->chgQData(oldp+228,((((- (QData)((IData)(
                                                        (vlSelf->instr_i 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x14U))))),64);
        tracep->chgQData(oldp+230,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->instr_i))))),64);
        tracep->chgQData(oldp+232,((((- (QData)((IData)(
                                                        (vlSelf->instr_i 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->instr_i 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->instr_i 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+234,((((- (QData)((IData)(
                                                        (vlSelf->instr_i 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->instr_i 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->instr_i 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->instr_i 
                                                                          >> 7U)))))))),64);
        tracep->chgQData(oldp+236,((((- (QData)((IData)(
                                                        (vlSelf->instr_i 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->instr_i) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->instr_i 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->instr_i 
                                                                           >> 0x14U)))))))),64);
        tracep->chgQData(oldp+238,(((IData)(vlSelf->top__DOT__control0__DOT__jalr)
                                     ? vlSelf->top__DOT__busA
                                     : vlSelf->pc)),64);
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
