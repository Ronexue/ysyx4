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
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__datamemory0__DOT__mem[0]),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__datamemory0__DOT__mem[1]),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__datamemory0__DOT__mem[2]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__datamemory0__DOT__mem[3]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__datamemory0__DOT__mem[4]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__datamemory0__DOT__mem[5]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__datamemory0__DOT__mem[6]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__datamemory0__DOT__mem[7]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__datamemory0__DOT__mem[8]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__datamemory0__DOT__mem[9]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__datamemory0__DOT__mem[10]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__datamemory0__DOT__mem[11]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__datamemory0__DOT__mem[12]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__datamemory0__DOT__mem[13]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__datamemory0__DOT__mem[14]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__datamemory0__DOT__mem[15]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__datamemory0__DOT__mem[16]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__datamemory0__DOT__mem[17]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__datamemory0__DOT__mem[18]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__datamemory0__DOT__mem[19]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__datamemory0__DOT__mem[20]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__datamemory0__DOT__mem[21]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__datamemory0__DOT__mem[22]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__datamemory0__DOT__mem[23]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__datamemory0__DOT__mem[24]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__datamemory0__DOT__mem[25]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__datamemory0__DOT__mem[26]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__datamemory0__DOT__mem[27]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__datamemory0__DOT__mem[28]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__datamemory0__DOT__mem[29]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__datamemory0__DOT__mem[30]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__datamemory0__DOT__mem[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__registers0__DOT__rf[0]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__registers0__DOT__rf[1]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__registers0__DOT__rf[2]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__registers0__DOT__rf[3]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__registers0__DOT__rf[4]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__registers0__DOT__rf[5]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__registers0__DOT__rf[6]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__registers0__DOT__rf[7]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__registers0__DOT__rf[8]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__registers0__DOT__rf[9]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__registers0__DOT__rf[10]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__registers0__DOT__rf[11]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__registers0__DOT__rf[12]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__registers0__DOT__rf[13]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__registers0__DOT__rf[14]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__registers0__DOT__rf[15]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__registers0__DOT__rf[16]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__registers0__DOT__rf[17]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__registers0__DOT__rf[18]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__registers0__DOT__rf[19]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__registers0__DOT__rf[20]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__registers0__DOT__rf[21]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__registers0__DOT__rf[22]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__registers0__DOT__rf[23]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__registers0__DOT__rf[24]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__registers0__DOT__rf[25]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__registers0__DOT__rf[26]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__registers0__DOT__rf[27]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__registers0__DOT__rf[28]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__registers0__DOT__rf[29]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__registers0__DOT__rf[30]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__registers0__DOT__rf[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__busA),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__busB),64);
            tracep->chgIData(oldp+132,((IData)(vlSelf->top__DOT__instrmemory0__DOT__rdata)),32);
            tracep->chgCData(oldp+133,((0x7fU & (IData)(vlSelf->top__DOT__instrmemory0__DOT__rdata))),7);
            tracep->chgCData(oldp+134,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+135,((7U & (IData)(
                                                     (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+136,((0x7fU & (IData)(
                                                        (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+137,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+138,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                         >> 0x14U)))),5);
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__Branch),2);
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__Jump));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__control0__DOT__jalr));
            tracep->chgBit(oldp+142,((((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                       | (IData)(vlSelf->top__DOT__control0__DOT__jalr)) 
                                      | (IData)(vlSelf->top__DOT__control0__DOT__auipc))));
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__ALUBSrc),2);
            tracep->chgCData(oldp+144,(vlSelf->top__DOT__ALUctr),6);
            tracep->chgCData(oldp+145,(vlSelf->top__DOT__MemtoReg),3);
            tracep->chgBit(oldp+146,((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                           | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                          | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                         | (IData)(vlSelf->top__DOT__control0__DOT__auipc)) 
                                        | (IData)(vlSelf->top__DOT__control0__DOT__Load)) 
                                       | (IData)(vlSelf->top__DOT__control0__DOT__jal)) 
                                      | (IData)(vlSelf->top__DOT__control0__DOT__jalr))));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__control0__DOT__Store));
            tracep->chgCData(oldp+148,(vlSelf->top__DOT__MUXStore),2);
            tracep->chgCData(oldp+149,(vlSelf->top__DOT__ExtOp),3);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__ALU_src1),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__ALU_src2),64);
            tracep->chgBit(oldp+156,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ALU0__DOT__Add_Result))))));
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__ALU_Result),64);
            tracep->chgQData(oldp+159,((QData)((IData)(
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
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__instrmemory0__DOT__rdata),64);
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__control0__DOT__Rtype));
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__control0__DOT__ItypeALU));
            tracep->chgBit(oldp+165,(vlSelf->top__DOT__control0__DOT__lui));
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__control0__DOT__auipc));
            tracep->chgBit(oldp+167,(vlSelf->top__DOT__control0__DOT__Load));
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__control0__DOT__Btype));
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__control0__DOT__jal));
            tracep->chgBit(oldp+170,((IData)((0x73ULL 
                                              == (0x7fULL 
                                                  & vlSelf->top__DOT__instrmemory0__DOT__rdata)))));
            tracep->chgQData(oldp+171,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                        >> 0x1fU)))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0x14U))))))),64);
            tracep->chgQData(oldp+173,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(
                                                                   (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                    >> 0xcU)) 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+175,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                        >> 0x1fU)))))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 0x19U)) 
                                                                         << 5U)) 
                                                                     | (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                                >> 7U)))))))),64);
            tracep->chgQData(oldp+177,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                        >> 0x1fU)))))) 
                                         << 0xcU) | (QData)((IData)(
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
                                                                              << 1U)))))))),64);
            tracep->chgQData(oldp+179,((((- (QData)((IData)(
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
                                                                    << 1U)))))))),64);
            tracep->chgBit(oldp+181,(vlSelf->top__DOT__ALU0__DOT__SUBctr));
            tracep->chgBit(oldp+182,(((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                      | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))));
            tracep->chgCData(oldp+183,(vlSelf->top__DOT__ALU0__DOT__OPctr),4);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__ALU0__DOT__Adder_src2),64);
            VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ALU_src1);
            VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
            VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
            VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
            tracep->chgBit(oldp+186,((1U & ((1U & __Vtemp37[2U]) 
                                            ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)))));
            tracep->chgBit(oldp+187,((1U & ((((IData)(
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
            tracep->chgBit(oldp+188,((1U & (IData)(
                                                   (vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__ALU0__DOT__Add_Result),64);
            tracep->chgBit(oldp+191,(vlSelf->top__DOT__ALU0__DOT__slt_Flag));
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__ALU0__DOT__sltu_Flag));
            tracep->chgQData(oldp+193,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)))))),64);
            tracep->chgQData(oldp+195,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag)))))),64);
            tracep->chgBit(oldp+197,((((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                       | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                       ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                       : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))));
            tracep->chgQData(oldp+198,((vlSelf->top__DOT__ALU_src1 
                                        & vlSelf->top__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+200,((vlSelf->top__DOT__ALU_src1 
                                        | vlSelf->top__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+202,((vlSelf->top__DOT__ALU_src1 
                                        ^ vlSelf->top__DOT__ALU_src2)),64);
            tracep->chgQData(oldp+204,((vlSelf->top__DOT__ALU_src1 
                                        << (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+206,((vlSelf->top__DOT__ALU_src1 
                                        >> (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+208,(VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__ALU_src1, 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
            tracep->chgQData(oldp+210,((QData)((IData)(
                                                       (((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                         | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                         ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                                         : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))))),64);
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result));
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result));
            tracep->chgBit(oldp+214,((IData)((6U == 
                                              (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+215,((IData)((8U == 
                                              (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+216,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result));
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result));
            tracep->chgBit(oldp+218,((IData)((0x10U 
                                              == (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result));
            tracep->chgBit(oldp+222,((IData)((0x20U 
                                              == (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))))));
            tracep->chgBit(oldp+223,((IData)((0xfU 
                                              == (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))))));
            VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ALU_src1);
            VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
            VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
            VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
            tracep->chgBit(oldp+224,((1U & __Vtemp44[2U])));
            tracep->chgBit(oldp+225,((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                                        | (IData)(vlSelf->top__DOT__Jump)) 
                                       | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                                           & (0U != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                                          | (IData)(vlSelf->top__DOT__Jump))) 
                                      | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                                         | (IData)(vlSelf->top__DOT__Jump)))));
            tracep->chgQData(oldp+226,(((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
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
            tracep->chgIData(oldp+228,((IData)(vlSelf->top__DOT__busB)),32);
            tracep->chgIData(oldp+229,((IData)(((0U 
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
                                                   : 0ULL))))),32);
        }
        tracep->chgBit(oldp+230,(vlSelf->clk));
        tracep->chgBit(oldp+231,(vlSelf->rst));
        tracep->chgIData(oldp+232,(vlSelf->instr),32);
        tracep->chgQData(oldp+233,(vlSelf->pc),64);
        tracep->chgQData(oldp+235,(((0U == (IData)(vlSelf->top__DOT__MemtoReg))
                                     ? vlSelf->top__DOT__ALU_Result
                                     : ((1U == (IData)(vlSelf->top__DOT__MemtoReg))
                                         ? vlSelf->top__DOT__DataOut
                                         : ((2U == (IData)(vlSelf->top__DOT__MemtoReg))
                                             ? (((- (QData)((IData)(
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
        tracep->chgQData(oldp+237,((((IData)(vlSelf->top__DOT__control0__DOT__jalr)
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
        tracep->chgQData(oldp+239,(vlSelf->top__DOT__DataOut),64);
        tracep->chgQData(oldp+241,(((IData)(vlSelf->top__DOT__control0__DOT__jalr)
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
