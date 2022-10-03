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
        tracep->declBit(c+215,"clk", false,-1);
        tracep->declBit(c+216,"rst", false,-1);
        tracep->declBus(c+217,"instr_i", false,-1, 31,0);
        tracep->declQuad(c+218,"pc", false,-1, 63,0);
        tracep->declBit(c+215,"top clk", false,-1);
        tracep->declBit(c+216,"top rst", false,-1);
        tracep->declBus(c+217,"top instr_i", false,-1, 31,0);
        tracep->declQuad(c+218,"top pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top busA", false,-1, 63,0);
        tracep->declQuad(c+3,"top busB", false,-1, 63,0);
        tracep->declQuad(c+5,"top busW", false,-1, 63,0);
        tracep->declQuad(c+220,"top pcin", false,-1, 63,0);
        tracep->declBus(c+222,"top OP", false,-1, 6,0);
        tracep->declBus(c+223,"top Rd", false,-1, 4,0);
        tracep->declBus(c+224,"top funct3", false,-1, 2,0);
        tracep->declBus(c+225,"top funct7", false,-1, 6,0);
        tracep->declBus(c+226,"top Rs1", false,-1, 4,0);
        tracep->declBus(c+227,"top Rs2", false,-1, 4,0);
        tracep->declBus(c+7,"top Branch", false,-1, 1,0);
        tracep->declBit(c+8,"top Jump", false,-1);
        tracep->declBit(c+9,"top jalrctr", false,-1);
        tracep->declBit(c+10,"top ALUASrc", false,-1);
        tracep->declBus(c+11,"top ALUBSrc", false,-1, 1,0);
        tracep->declBus(c+12,"top ALUctr", false,-1, 5,0);
        tracep->declBus(c+13,"top MemtoReg", false,-1, 2,0);
        tracep->declBit(c+14,"top RegWr", false,-1);
        tracep->declBit(c+15,"top MemWr", false,-1);
        tracep->declBus(c+16,"top MUXStore", false,-1, 1,0);
        tracep->declBus(c+17,"top ExtOp", false,-1, 2,0);
        tracep->declQuad(c+18,"top imm", false,-1, 63,0);
        tracep->declQuad(c+20,"top ALU_src1", false,-1, 63,0);
        tracep->declQuad(c+22,"top ALU_src2", false,-1, 63,0);
        tracep->declBit(c+24,"top ALU_Zero", false,-1);
        tracep->declQuad(c+25,"top ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+27,"top mux_Store", false,-1, 63,0);
        tracep->declQuad(c+29,"top DataOut", false,-1, 63,0);
        tracep->declBit(c+215,"top pcunit0 clk", false,-1);
        tracep->declBit(c+216,"top pcunit0 rst", false,-1);
        tracep->declQuad(c+220,"top pcunit0 pcin", false,-1, 63,0);
        tracep->declQuad(c+218,"top pcunit0 pc", false,-1, 63,0);
        tracep->declBit(c+215,"top registers0 clk", false,-1);
        tracep->declBit(c+216,"top registers0 rst", false,-1);
        tracep->declBus(c+226,"top registers0 raddr1", false,-1, 4,0);
        tracep->declQuad(c+1,"top registers0 rdata1", false,-1, 63,0);
        tracep->declBus(c+227,"top registers0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top registers0 rdata2", false,-1, 63,0);
        tracep->declBit(c+14,"top registers0 we", false,-1);
        tracep->declBus(c+223,"top registers0 waddr", false,-1, 4,0);
        tracep->declQuad(c+5,"top registers0 wdata", false,-1, 63,0);
        tracep->declBus(c+241,"top registers0 ADDR_WIDTH", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+151+i*2,"top registers0 rf", true,(i+0), 63,0);}}
        tracep->declBus(c+222,"top control0 OP", false,-1, 6,0);
        tracep->declBus(c+224,"top control0 funct3", false,-1, 2,0);
        tracep->declBus(c+225,"top control0 funct7", false,-1, 6,0);
        tracep->declBus(c+7,"top control0 Branch", false,-1, 1,0);
        tracep->declBit(c+8,"top control0 Jump", false,-1);
        tracep->declBit(c+9,"top control0 jalrctr", false,-1);
        tracep->declBit(c+10,"top control0 ALUASrc", false,-1);
        tracep->declBus(c+11,"top control0 ALUBSrc", false,-1, 1,0);
        tracep->declBus(c+12,"top control0 ALUctr", false,-1, 5,0);
        tracep->declBus(c+13,"top control0 MemtoReg", false,-1, 2,0);
        tracep->declBit(c+14,"top control0 RegWr", false,-1);
        tracep->declBit(c+15,"top control0 MemWr", false,-1);
        tracep->declBus(c+16,"top control0 MUXStore", false,-1, 1,0);
        tracep->declBus(c+17,"top control0 ExtOp", false,-1, 2,0);
        tracep->declBit(c+31,"top control0 Rtype", false,-1);
        tracep->declBit(c+32,"top control0 ItypeALU", false,-1);
        tracep->declBit(c+33,"top control0 lui", false,-1);
        tracep->declBit(c+34,"top control0 auipc", false,-1);
        tracep->declBit(c+35,"top control0 Load", false,-1);
        tracep->declBit(c+15,"top control0 Store", false,-1);
        tracep->declBit(c+36,"top control0 Btype", false,-1);
        tracep->declBit(c+37,"top control0 jal", false,-1);
        tracep->declBit(c+9,"top control0 jalr", false,-1);
        tracep->declBit(c+228,"top control0 Env", false,-1);
        tracep->declBus(c+222,"top control0 decodeOP0 OP", false,-1, 6,0);
        tracep->declBit(c+31,"top control0 decodeOP0 Rtype", false,-1);
        tracep->declBit(c+32,"top control0 decodeOP0 ItypeALU", false,-1);
        tracep->declBit(c+33,"top control0 decodeOP0 lui", false,-1);
        tracep->declBit(c+34,"top control0 decodeOP0 auipc", false,-1);
        tracep->declBit(c+35,"top control0 decodeOP0 Load", false,-1);
        tracep->declBit(c+15,"top control0 decodeOP0 Store", false,-1);
        tracep->declBit(c+36,"top control0 decodeOP0 Btype", false,-1);
        tracep->declBit(c+37,"top control0 decodeOP0 jal", false,-1);
        tracep->declBit(c+9,"top control0 decodeOP0 jalr", false,-1);
        tracep->declBit(c+228,"top control0 decodeOP0 Env", false,-1);
        tracep->declBus(c+217,"top extend0 instr_i", false,-1, 31,0);
        tracep->declBus(c+17,"top extend0 ExtOp", false,-1, 2,0);
        tracep->declQuad(c+18,"top extend0 imm", false,-1, 63,0);
        tracep->declQuad(c+229,"top extend0 immI", false,-1, 63,0);
        tracep->declQuad(c+231,"top extend0 immU", false,-1, 63,0);
        tracep->declQuad(c+233,"top extend0 immS", false,-1, 63,0);
        tracep->declQuad(c+235,"top extend0 immB", false,-1, 63,0);
        tracep->declQuad(c+237,"top extend0 immJ", false,-1, 63,0);
        tracep->declQuad(c+242,"top extend0 immB2", false,-1, 63,0);
        tracep->declQuad(c+244,"top extend0 immJ2", false,-1, 63,0);
        tracep->declQuad(c+1,"top mux21_32ALUASrc in0", false,-1, 63,0);
        tracep->declQuad(c+218,"top mux21_32ALUASrc in1", false,-1, 63,0);
        tracep->declBit(c+10,"top mux21_32ALUASrc select", false,-1);
        tracep->declQuad(c+20,"top mux21_32ALUASrc out", false,-1, 63,0);
        tracep->declQuad(c+3,"top mux31ALUBSrc in0", false,-1, 63,0);
        tracep->declQuad(c+246,"top mux31ALUBSrc in1", false,-1, 63,0);
        tracep->declQuad(c+18,"top mux31ALUBSrc in2", false,-1, 63,0);
        tracep->declBus(c+11,"top mux31ALUBSrc select", false,-1, 1,0);
        tracep->declQuad(c+22,"top mux31ALUBSrc out", false,-1, 63,0);
        tracep->declQuad(c+20,"top ALU0 ALU_src1", false,-1, 63,0);
        tracep->declQuad(c+22,"top ALU0 ALU_src2", false,-1, 63,0);
        tracep->declBus(c+12,"top ALU0 ALUctr", false,-1, 5,0);
        tracep->declQuad(c+25,"top ALU0 ALU_Result", false,-1, 63,0);
        tracep->declBit(c+24,"top ALU0 ALU_Zero", false,-1);
        tracep->declBit(c+38,"top ALU0 SUBctr", false,-1);
        tracep->declBit(c+39,"top ALU0 SIGctr", false,-1);
        tracep->declBus(c+40,"top ALU0 OPctr", false,-1, 3,0);
        tracep->declQuad(c+20,"top ALU0 Adder_src1", false,-1, 63,0);
        tracep->declQuad(c+41,"top ALU0 Adder_src2", false,-1, 63,0);
        tracep->declBit(c+43,"top ALU0 Add_Carry", false,-1);
        tracep->declBit(c+44,"top ALU0 Add_Overflow", false,-1);
        tracep->declBit(c+45,"top ALU0 Add_Sign", false,-1);
        tracep->declQuad(c+46,"top ALU0 Add_Result", false,-1, 63,0);
        tracep->declBit(c+48,"top ALU0 slt_Flag", false,-1);
        tracep->declBit(c+49,"top ALU0 sltu_Flag", false,-1);
        tracep->declQuad(c+50,"top ALU0 RV32I_bge", false,-1, 63,0);
        tracep->declQuad(c+52,"top ALU0 RV32I_bgeU", false,-1, 63,0);
        tracep->declBit(c+54,"top ALU0 Less", false,-1);
        tracep->declQuad(c+55,"top ALU0 RV32I_and", false,-1, 63,0);
        tracep->declQuad(c+57,"top ALU0 RV32I_or", false,-1, 63,0);
        tracep->declQuad(c+59,"top ALU0 RV32I_xor", false,-1, 63,0);
        tracep->declQuad(c+61,"top ALU0 RV32I_sll", false,-1, 63,0);
        tracep->declQuad(c+63,"top ALU0 RV32I_srl", false,-1, 63,0);
        tracep->declQuad(c+65,"top ALU0 RV32I_sra", false,-1, 63,0);
        tracep->declQuad(c+22,"top ALU0 RV32I_lui", false,-1, 63,0);
        tracep->declQuad(c+67,"top ALU0 RV32I_slt_sltu", false,-1, 63,0);
        tracep->declBus(c+12,"top ALU0 ALUctr0 ALUctr", false,-1, 5,0);
        tracep->declBit(c+38,"top ALU0 ALUctr0 SUBctr", false,-1);
        tracep->declBit(c+39,"top ALU0 ALUctr0 SIGctr", false,-1);
        tracep->declBus(c+40,"top ALU0 ALUctr0 OPctr", false,-1, 3,0);
        tracep->declBit(c+69,"top ALU0 ALUctr0 slt_result", false,-1);
        tracep->declBit(c+70,"top ALU0 ALUctr0 sltu_result", false,-1);
        tracep->declBit(c+71,"top ALU0 ALUctr0 or_result", false,-1);
        tracep->declBit(c+72,"top ALU0 ALUctr0 sub_result", false,-1);
        tracep->declBit(c+73,"top ALU0 ALUctr0 bge_result", false,-1);
        tracep->declBit(c+74,"top ALU0 ALUctr0 bgeu_result", false,-1);
        tracep->declBit(c+75,"top ALU0 ALUctr0 xor_result", false,-1);
        tracep->declBit(c+76,"top ALU0 ALUctr0 and_result", false,-1);
        tracep->declBit(c+77,"top ALU0 ALUctr0 sll_result", false,-1);
        tracep->declBit(c+78,"top ALU0 ALUctr0 srl_result", false,-1);
        tracep->declBit(c+79,"top ALU0 ALUctr0 sra_result", false,-1);
        tracep->declBit(c+80,"top ALU0 ALUctr0 srcB_result", false,-1);
        tracep->declQuad(c+20,"top ALU0 adder0 a", false,-1, 63,0);
        tracep->declQuad(c+41,"top ALU0 adder0 b", false,-1, 63,0);
        tracep->declBit(c+38,"top ALU0 adder0 cin", false,-1);
        tracep->declQuad(c+46,"top ALU0 adder0 f", false,-1, 63,0);
        tracep->declBit(c+44,"top ALU0 adder0 OF", false,-1);
        tracep->declBit(c+45,"top ALU0 adder0 SF", false,-1);
        tracep->declBit(c+24,"top ALU0 adder0 ZF", false,-1);
        tracep->declBit(c+43,"top ALU0 adder0 CF", false,-1);
        tracep->declBit(c+81,"top ALU0 adder0 cout", false,-1);
        tracep->declBit(c+49,"top ALU0 mux21_1_SIGctr in0", false,-1);
        tracep->declBit(c+48,"top ALU0 mux21_1_SIGctr in1", false,-1);
        tracep->declBit(c+39,"top ALU0 mux21_1_SIGctr select", false,-1);
        tracep->declBit(c+54,"top ALU0 mux21_1_SIGctr out", false,-1);
        tracep->declQuad(c+218,"top pcnext0 pcin", false,-1, 63,0);
        tracep->declQuad(c+1,"top pcnext0 busA", false,-1, 63,0);
        tracep->declQuad(c+18,"top pcnext0 imm", false,-1, 63,0);
        tracep->declBus(c+7,"top pcnext0 Branch", false,-1, 1,0);
        tracep->declBit(c+8,"top pcnext0 Jump", false,-1);
        tracep->declBit(c+24,"top pcnext0 Zero", false,-1);
        tracep->declBit(c+9,"top pcnext0 jalrctr", false,-1);
        tracep->declQuad(c+220,"top pcnext0 nextpc", false,-1, 63,0);
        tracep->declBit(c+82,"top pcnext0 BJcondition", false,-1);
        tracep->declQuad(c+239,"top pcnext0 offsetA", false,-1, 63,0);
        tracep->declQuad(c+83,"top pcnext0 offsetB", false,-1, 63,0);
        tracep->declQuad(c+218,"top pcnext0 mux21_jalr in0", false,-1, 63,0);
        tracep->declQuad(c+1,"top pcnext0 mux21_jalr in1", false,-1, 63,0);
        tracep->declBit(c+9,"top pcnext0 mux21_jalr select", false,-1);
        tracep->declQuad(c+239,"top pcnext0 mux21_jalr out", false,-1, 63,0);
        tracep->declQuad(c+246,"top pcnext0 mux21_BJ in0", false,-1, 63,0);
        tracep->declQuad(c+18,"top pcnext0 mux21_BJ in1", false,-1, 63,0);
        tracep->declBit(c+82,"top pcnext0 mux21_BJ select", false,-1);
        tracep->declQuad(c+83,"top pcnext0 mux21_BJ out", false,-1, 63,0);
        tracep->declBus(c+85,"top muxStore0 in", false,-1, 31,0);
        tracep->declBus(c+16,"top muxStore0 select", false,-1, 1,0);
        tracep->declBus(c+86,"top muxStore0 out", false,-1, 31,0);
        tracep->declBit(c+215,"top datamemory0 clk", false,-1);
        tracep->declBit(c+216,"top datamemory0 rst", false,-1);
        tracep->declQuad(c+27,"top datamemory0 DataIn", false,-1, 63,0);
        tracep->declQuad(c+25,"top datamemory0 Addr", false,-1, 63,0);
        tracep->declBit(c+15,"top datamemory0 WrEn", false,-1);
        tracep->declQuad(c+29,"top datamemory0 DataOut", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+87+i*2,"top datamemory0 mem", true,(i+0), 63,0);}}
        tracep->declQuad(c+25,"top muxMemtoReg0 in1", false,-1, 63,0);
        tracep->declQuad(c+29,"top muxMemtoReg0 in2", false,-1, 63,0);
        tracep->declBus(c+13,"top muxMemtoReg0 select", false,-1, 2,0);
        tracep->declQuad(c+5,"top muxMemtoReg0 out", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__busA),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__busB),64);
        tracep->fullQData(oldp+5,(((0U == (IData)(vlSelf->top__DOT__MemtoReg))
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
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__DataOut 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__DataOut)))))
                                                : (
                                                   (4U 
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
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__Branch),2);
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__Jump));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__control0__DOT__jalr));
        tracep->fullBit(oldp+10,((((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                   | (IData)(vlSelf->top__DOT__control0__DOT__jalr)) 
                                  | (IData)(vlSelf->top__DOT__control0__DOT__auipc))));
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__ALUBSrc),2);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ALUctr),6);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__MemtoReg),3);
        tracep->fullBit(oldp+14,((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                       | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                      | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                     | (IData)(vlSelf->top__DOT__control0__DOT__auipc)) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__Load)) 
                                   | (IData)(vlSelf->top__DOT__control0__DOT__jal)) 
                                  | (IData)(vlSelf->top__DOT__control0__DOT__jalr))));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__control0__DOT__Store));
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__MUXStore),2);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__ExtOp),3);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__ALU_src1),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ALU_src2),64);
        tracep->fullBit(oldp+24,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ALU0__DOT__Add_Result))))));
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__ALU_Result),64);
        tracep->fullQData(oldp+27,((QData)((IData)(
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
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__DataOut),64);
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__control0__DOT__Rtype));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__control0__DOT__ItypeALU));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__control0__DOT__lui));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__control0__DOT__auipc));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__control0__DOT__Load));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__control0__DOT__Btype));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__control0__DOT__jal));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__ALU0__DOT__SUBctr));
        tracep->fullBit(oldp+39,(((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                  | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))));
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__ALU0__DOT__OPctr),4);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__ALU0__DOT__Adder_src2),64);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__ALU_src1);
        VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
        VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
        VL_EXTEND_WI(65,1, __Vtemp22, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
        tracep->fullBit(oldp+43,((1U & ((1U & __Vtemp23[2U]) 
                                        ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)))));
        tracep->fullBit(oldp+44,((1U & ((((IData)((vlSelf->top__DOT__ALU_src1 
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
        tracep->fullBit(oldp+45,((1U & (IData)((vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                >> 0x3fU)))));
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__ALU0__DOT__Add_Result),64);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__ALU0__DOT__slt_Flag));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__ALU0__DOT__sltu_Flag));
        tracep->fullQData(oldp+50,((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)))))),64);
        tracep->fullQData(oldp+52,((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag)))))),64);
        tracep->fullBit(oldp+54,((((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                   | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                   ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                   : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))));
        tracep->fullQData(oldp+55,((vlSelf->top__DOT__ALU_src1 
                                    & vlSelf->top__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+57,((vlSelf->top__DOT__ALU_src1 
                                    | vlSelf->top__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+59,((vlSelf->top__DOT__ALU_src1 
                                    ^ vlSelf->top__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+61,((vlSelf->top__DOT__ALU_src1 
                                    << (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+63,((vlSelf->top__DOT__ALU_src1 
                                    >> (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+65,(VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__ALU_src1, 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+67,((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                     | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                     ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                                     : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))))),64);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result));
        tracep->fullBit(oldp+71,((IData)((6U == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+72,((IData)((8U == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result));
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result));
        tracep->fullBit(oldp+75,((IData)((0x10U == 
                                          (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result));
        tracep->fullBit(oldp+79,((IData)((0x20U == 
                                          (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+80,((IData)((0xfU == (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__ALUctr))))));
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__ALU_src1);
        VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
        VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
        VL_EXTEND_WI(65,1, __Vtemp29, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
        tracep->fullBit(oldp+81,((1U & __Vtemp30[2U])));
        tracep->fullBit(oldp+82,((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                                     & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                                    | (IData)(vlSelf->top__DOT__Jump)) 
                                   | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                                       & (0U != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                                      | (IData)(vlSelf->top__DOT__Jump))) 
                                  | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                                     | (IData)(vlSelf->top__DOT__Jump)))));
        tracep->fullQData(oldp+83,(((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                                       | (IData)(vlSelf->top__DOT__Jump)) 
                                      | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                                          & (0U != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                                         | (IData)(vlSelf->top__DOT__Jump))) 
                                     | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                                        | (IData)(vlSelf->top__DOT__Jump)))
                                     ? vlSelf->top__DOT__imm
                                     : 4ULL)),64);
        tracep->fullIData(oldp+85,((IData)(vlSelf->top__DOT__busB)),32);
        tracep->fullIData(oldp+86,((IData)(((0U == (IData)(vlSelf->top__DOT__MUXStore))
                                             ? (QData)((IData)(vlSelf->top__DOT__busB))
                                             : ((1U 
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
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__datamemory0__DOT__mem[0]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__datamemory0__DOT__mem[1]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__datamemory0__DOT__mem[2]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__datamemory0__DOT__mem[3]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__datamemory0__DOT__mem[4]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__datamemory0__DOT__mem[5]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__datamemory0__DOT__mem[6]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__datamemory0__DOT__mem[7]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__datamemory0__DOT__mem[8]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__datamemory0__DOT__mem[9]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__datamemory0__DOT__mem[10]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__datamemory0__DOT__mem[11]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__datamemory0__DOT__mem[12]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__datamemory0__DOT__mem[13]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__datamemory0__DOT__mem[14]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__datamemory0__DOT__mem[15]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__datamemory0__DOT__mem[16]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__datamemory0__DOT__mem[17]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__datamemory0__DOT__mem[18]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__datamemory0__DOT__mem[19]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__datamemory0__DOT__mem[20]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__datamemory0__DOT__mem[21]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__datamemory0__DOT__mem[22]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__datamemory0__DOT__mem[23]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__datamemory0__DOT__mem[24]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__datamemory0__DOT__mem[25]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__datamemory0__DOT__mem[26]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__datamemory0__DOT__mem[27]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__datamemory0__DOT__mem[28]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__datamemory0__DOT__mem[29]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__datamemory0__DOT__mem[30]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__datamemory0__DOT__mem[31]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__registers0__DOT__rf[0]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__registers0__DOT__rf[1]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__registers0__DOT__rf[2]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__registers0__DOT__rf[3]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__registers0__DOT__rf[4]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__registers0__DOT__rf[5]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__registers0__DOT__rf[6]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__registers0__DOT__rf[7]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__registers0__DOT__rf[8]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__registers0__DOT__rf[9]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__registers0__DOT__rf[10]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__registers0__DOT__rf[11]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__registers0__DOT__rf[12]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__registers0__DOT__rf[13]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__registers0__DOT__rf[14]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__registers0__DOT__rf[15]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__registers0__DOT__rf[16]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__registers0__DOT__rf[17]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__registers0__DOT__rf[18]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__registers0__DOT__rf[19]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__registers0__DOT__rf[20]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__registers0__DOT__rf[21]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__registers0__DOT__rf[22]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__registers0__DOT__rf[23]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__registers0__DOT__rf[24]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__registers0__DOT__rf[25]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__registers0__DOT__rf[26]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__registers0__DOT__rf[27]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__registers0__DOT__rf[28]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__registers0__DOT__rf[29]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__registers0__DOT__rf[30]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__registers0__DOT__rf[31]),64);
        tracep->fullBit(oldp+215,(vlSelf->clk));
        tracep->fullBit(oldp+216,(vlSelf->rst));
        tracep->fullIData(oldp+217,(vlSelf->instr_i),32);
        tracep->fullQData(oldp+218,(vlSelf->pc),64);
        tracep->fullQData(oldp+220,((((IData)(vlSelf->top__DOT__control0__DOT__jalr)
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
        tracep->fullCData(oldp+222,((0x7fU & vlSelf->instr_i)),7);
        tracep->fullCData(oldp+223,((0x1fU & (vlSelf->instr_i 
                                              >> 7U))),5);
        tracep->fullCData(oldp+224,((7U & (vlSelf->instr_i 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+225,((vlSelf->instr_i 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+226,((0x1fU & (vlSelf->instr_i 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+227,((0x1fU & (vlSelf->instr_i 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+228,((IData)((0x73U == 
                                           (0x7fU & vlSelf->instr_i)))));
        tracep->fullQData(oldp+229,((((- (QData)((IData)(
                                                         (vlSelf->instr_i 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->instr_i 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+231,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->instr_i 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->instr_i))))),64);
        tracep->fullQData(oldp+233,((((- (QData)((IData)(
                                                         (vlSelf->instr_i 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->instr_i 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->instr_i 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+235,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+237,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+239,(((IData)(vlSelf->top__DOT__control0__DOT__jalr)
                                      ? vlSelf->top__DOT__busA
                                      : vlSelf->pc)),64);
        tracep->fullIData(oldp+241,(5U),32);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__extend0__DOT__immB2),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__extend0__DOT__immJ2),64);
        tracep->fullQData(oldp+246,(4ULL),64);
    }
}
