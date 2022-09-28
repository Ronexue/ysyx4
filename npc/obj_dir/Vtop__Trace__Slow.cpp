// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+69,"clk", false,-1);
        tracep->declBit(c+70,"rst", false,-1);
        tracep->declBus(c+71,"instr_i", false,-1, 31,0);
        tracep->declQuad(c+72,"pc", false,-1, 63,0);
        tracep->declBit(c+69,"top clk", false,-1);
        tracep->declBit(c+70,"top rst", false,-1);
        tracep->declBus(c+71,"top instr_i", false,-1, 31,0);
        tracep->declQuad(c+72,"top pc", false,-1, 63,0);
        tracep->declBus(c+74,"top op", false,-1, 6,0);
        tracep->declBus(c+75,"top func7", false,-1, 6,0);
        tracep->declBus(c+76,"top rd", false,-1, 4,0);
        tracep->declBus(c+77,"top rs1", false,-1, 4,0);
        tracep->declBus(c+78,"top rs2", false,-1, 4,0);
        tracep->declBus(c+79,"top func3", false,-1, 2,0);
        tracep->declQuad(c+80,"top immI", false,-1, 63,0);
        tracep->declQuad(c+89,"top immS", false,-1, 63,0);
        tracep->declQuad(c+91,"top immJ", false,-1, 63,0);
        tracep->declQuad(c+93,"top immB", false,-1, 63,0);
        tracep->declBit(c+82,"top wen", false,-1);
        tracep->declBit(c+69,"top my_if clk", false,-1);
        tracep->declBit(c+70,"top my_if rst", false,-1);
        tracep->declQuad(c+72,"top my_if pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top my_if now_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"top my_if dnpc", false,-1, 63,0);
        tracep->declBus(c+95,"top my_if PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+96,"top my_if PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+69,"top my_if PC clk", false,-1);
        tracep->declBit(c+70,"top my_if PC rst", false,-1);
        tracep->declQuad(c+3,"top my_if PC din", false,-1, 63,0);
        tracep->declQuad(c+1,"top my_if PC dout", false,-1, 63,0);
        tracep->declBit(c+98,"top my_if PC wen", false,-1);
        tracep->declBus(c+71,"top my_id instr_i", false,-1, 31,0);
        tracep->declBus(c+74,"top my_id op", false,-1, 6,0);
        tracep->declBus(c+76,"top my_id rd", false,-1, 4,0);
        tracep->declBus(c+77,"top my_id rs1", false,-1, 4,0);
        tracep->declBus(c+78,"top my_id rs2", false,-1, 4,0);
        tracep->declBus(c+79,"top my_id func3", false,-1, 2,0);
        tracep->declBus(c+75,"top my_id func7", false,-1, 6,0);
        tracep->declQuad(c+80,"top my_id immI", false,-1, 63,0);
        tracep->declQuad(c+89,"top my_id immS", false,-1, 63,0);
        tracep->declQuad(c+91,"top my_id immJ", false,-1, 63,0);
        tracep->declQuad(c+93,"top my_id immB", false,-1, 63,0);
        tracep->declBit(c+82,"top my_id wen", false,-1);
        tracep->declBit(c+69,"top my_ex clk", false,-1);
        tracep->declBus(c+76,"top my_ex rd", false,-1, 4,0);
        tracep->declBus(c+77,"top my_ex rs1", false,-1, 4,0);
        tracep->declBus(c+78,"top my_ex rs2", false,-1, 4,0);
        tracep->declBit(c+82,"top my_ex wen", false,-1);
        tracep->declQuad(c+80,"top my_ex immI", false,-1, 63,0);
        tracep->declQuad(c+83,"top my_ex busa", false,-1, 63,0);
        tracep->declQuad(c+85,"top my_ex busb", false,-1, 63,0);
        tracep->declQuad(c+87,"top my_ex res", false,-1, 63,0);
        tracep->declBus(c+99,"top my_ex regfile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+95,"top my_ex regfile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+69,"top my_ex regfile clk", false,-1);
        tracep->declBus(c+77,"top my_ex regfile raaddr", false,-1, 4,0);
        tracep->declBus(c+78,"top my_ex regfile rbaddr", false,-1, 4,0);
        tracep->declQuad(c+83,"top my_ex regfile radata", false,-1, 63,0);
        tracep->declQuad(c+85,"top my_ex regfile rbdata", false,-1, 63,0);
        tracep->declQuad(c+87,"top my_ex regfile wdata", false,-1, 63,0);
        tracep->declBus(c+76,"top my_ex regfile waddr", false,-1, 4,0);
        tracep->declBit(c+82,"top my_ex regfile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+5+i*2,"top my_ex regfile rf", true,(i+0), 63,0);}}
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__my_if__DOT__now_pc),64);
        tracep->fullQData(oldp+3,((4ULL + vlSelf->top__DOT__my_if__DOT__now_pc)),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf[31]),64);
        tracep->fullBit(oldp+69,(vlSelf->clk));
        tracep->fullBit(oldp+70,(vlSelf->rst));
        tracep->fullIData(oldp+71,(vlSelf->instr_i),32);
        tracep->fullQData(oldp+72,(vlSelf->pc),64);
        tracep->fullCData(oldp+74,((0x7fU & vlSelf->instr_i)),7);
        tracep->fullCData(oldp+75,((vlSelf->instr_i 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+76,((0x1fU & (vlSelf->instr_i 
                                             >> 7U))),5);
        tracep->fullCData(oldp+77,((0x1fU & (vlSelf->instr_i 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->instr_i 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+79,((7U & (vlSelf->instr_i 
                                          >> 0xcU))),3);
        tracep->fullQData(oldp+80,((((- (QData)((IData)(
                                                        (vlSelf->instr_i 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x14U))))),64);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__wen));
        tracep->fullQData(oldp+83,(((0U == (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf
                                    [(0x1fU & (vlSelf->instr_i 
                                               >> 0xfU))])),64);
        tracep->fullQData(oldp+85,(((0U == (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf
                                    [(0x1fU & (vlSelf->instr_i 
                                               >> 0x14U))])),64);
        tracep->fullQData(oldp+87,((((0U == (0x1fU 
                                             & (vlSelf->instr_i 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__my_ex__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->instr_i 
                                                >> 0xfU))]) 
                                    + (((- (QData)((IData)(
                                                           (vlSelf->instr_i 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->instr_i 
                                                                    >> 0x14U)))))),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__immS),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__immJ),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__immB),64);
        tracep->fullIData(oldp+95,(0x40U),32);
        tracep->fullQData(oldp+96,(0x80000000ULL),64);
        tracep->fullBit(oldp+98,(1U));
        tracep->fullIData(oldp+99,(5U),32);
    }
}
