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
        tracep->declBit(c+231,"clk", false,-1);
        tracep->declBit(c+232,"rst", false,-1);
        tracep->declBus(c+233,"instr", false,-1, 31,0);
        tracep->declQuad(c+234,"pc", false,-1, 63,0);
        tracep->declBit(c+231,"top clk", false,-1);
        tracep->declBit(c+232,"top rst", false,-1);
        tracep->declBus(c+233,"top instr", false,-1, 31,0);
        tracep->declQuad(c+234,"top pc", false,-1, 63,0);
        tracep->declQuad(c+129,"top busA", false,-1, 63,0);
        tracep->declQuad(c+131,"top busB", false,-1, 63,0);
        tracep->declQuad(c+236,"top busW", false,-1, 63,0);
        tracep->declQuad(c+238,"top pcin", false,-1, 63,0);
        tracep->declBus(c+133,"top instr_i", false,-1, 31,0);
        tracep->declBus(c+134,"top OP", false,-1, 6,0);
        tracep->declBus(c+135,"top Rd", false,-1, 4,0);
        tracep->declBus(c+136,"top funct3", false,-1, 2,0);
        tracep->declBus(c+137,"top funct7", false,-1, 6,0);
        tracep->declBus(c+138,"top Rs1", false,-1, 4,0);
        tracep->declBus(c+139,"top Rs2", false,-1, 4,0);
        tracep->declBus(c+140,"top Branch", false,-1, 1,0);
        tracep->declBit(c+141,"top Jump", false,-1);
        tracep->declBit(c+142,"top jalrctr", false,-1);
        tracep->declBit(c+143,"top ALUASrc", false,-1);
        tracep->declBus(c+144,"top ALUBSrc", false,-1, 1,0);
        tracep->declBus(c+145,"top ALUctr", false,-1, 5,0);
        tracep->declBus(c+146,"top MemtoReg", false,-1, 2,0);
        tracep->declBit(c+147,"top RegWr", false,-1);
        tracep->declBit(c+148,"top MemWr", false,-1);
        tracep->declBus(c+149,"top MUXStore", false,-1, 1,0);
        tracep->declBus(c+150,"top ExtOp", false,-1, 2,0);
        tracep->declQuad(c+151,"top imm", false,-1, 63,0);
        tracep->declQuad(c+153,"top ALU_src1", false,-1, 63,0);
        tracep->declQuad(c+155,"top ALU_src2", false,-1, 63,0);
        tracep->declBit(c+157,"top ALU_Zero", false,-1);
        tracep->declQuad(c+158,"top ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+160,"top mux_Store", false,-1, 63,0);
        tracep->declQuad(c+240,"top DataOut", false,-1, 63,0);
        tracep->declBit(c+231,"top pcunit0 clk", false,-1);
        tracep->declBit(c+232,"top pcunit0 rst", false,-1);
        tracep->declQuad(c+238,"top pcunit0 pcin", false,-1, 63,0);
        tracep->declQuad(c+234,"top pcunit0 pc", false,-1, 63,0);
        tracep->declBit(c+231,"top instrmemory0 clk", false,-1);
        tracep->declBit(c+232,"top instrmemory0 rst", false,-1);
        tracep->declQuad(c+234,"top instrmemory0 Addr", false,-1, 63,0);
        tracep->declBus(c+133,"top instrmemory0 Instr", false,-1, 31,0);
        tracep->declQuad(c+162,"top instrmemory0 rdata", false,-1, 63,0);
        tracep->declBit(c+231,"top registers0 clk", false,-1);
        tracep->declBit(c+232,"top registers0 rst", false,-1);
        tracep->declBus(c+138,"top registers0 raddr1", false,-1, 4,0);
        tracep->declQuad(c+129,"top registers0 rdata1", false,-1, 63,0);
        tracep->declBus(c+139,"top registers0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+131,"top registers0 rdata2", false,-1, 63,0);
        tracep->declBit(c+147,"top registers0 we", false,-1);
        tracep->declBus(c+135,"top registers0 waddr", false,-1, 4,0);
        tracep->declQuad(c+236,"top registers0 wdata", false,-1, 63,0);
        tracep->declBus(c+244,"top registers0 ADDR_WIDTH", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+65+i*2,"top registers0 rf", true,(i+0), 63,0);}}
        tracep->declBus(c+134,"top control0 OP", false,-1, 6,0);
        tracep->declBus(c+136,"top control0 funct3", false,-1, 2,0);
        tracep->declBus(c+137,"top control0 funct7", false,-1, 6,0);
        tracep->declBus(c+140,"top control0 Branch", false,-1, 1,0);
        tracep->declBit(c+141,"top control0 Jump", false,-1);
        tracep->declBit(c+142,"top control0 jalrctr", false,-1);
        tracep->declBit(c+143,"top control0 ALUASrc", false,-1);
        tracep->declBus(c+144,"top control0 ALUBSrc", false,-1, 1,0);
        tracep->declBus(c+145,"top control0 ALUctr", false,-1, 5,0);
        tracep->declBus(c+146,"top control0 MemtoReg", false,-1, 2,0);
        tracep->declBit(c+147,"top control0 RegWr", false,-1);
        tracep->declBit(c+148,"top control0 MemWr", false,-1);
        tracep->declBus(c+149,"top control0 MUXStore", false,-1, 1,0);
        tracep->declBus(c+150,"top control0 ExtOp", false,-1, 2,0);
        tracep->declBit(c+164,"top control0 Rtype", false,-1);
        tracep->declBit(c+165,"top control0 ItypeALU", false,-1);
        tracep->declBit(c+166,"top control0 lui", false,-1);
        tracep->declBit(c+167,"top control0 auipc", false,-1);
        tracep->declBit(c+168,"top control0 Load", false,-1);
        tracep->declBit(c+148,"top control0 Store", false,-1);
        tracep->declBit(c+169,"top control0 Btype", false,-1);
        tracep->declBit(c+170,"top control0 jal", false,-1);
        tracep->declBit(c+142,"top control0 jalr", false,-1);
        tracep->declBit(c+171,"top control0 Env", false,-1);
        tracep->declBus(c+134,"top control0 decodeOP0 OP", false,-1, 6,0);
        tracep->declBit(c+164,"top control0 decodeOP0 Rtype", false,-1);
        tracep->declBit(c+165,"top control0 decodeOP0 ItypeALU", false,-1);
        tracep->declBit(c+166,"top control0 decodeOP0 lui", false,-1);
        tracep->declBit(c+167,"top control0 decodeOP0 auipc", false,-1);
        tracep->declBit(c+168,"top control0 decodeOP0 Load", false,-1);
        tracep->declBit(c+148,"top control0 decodeOP0 Store", false,-1);
        tracep->declBit(c+169,"top control0 decodeOP0 Btype", false,-1);
        tracep->declBit(c+170,"top control0 decodeOP0 jal", false,-1);
        tracep->declBit(c+142,"top control0 decodeOP0 jalr", false,-1);
        tracep->declBit(c+171,"top control0 decodeOP0 Env", false,-1);
        tracep->declBus(c+133,"top extend0 instr_i", false,-1, 31,0);
        tracep->declBus(c+150,"top extend0 ExtOp", false,-1, 2,0);
        tracep->declQuad(c+151,"top extend0 imm", false,-1, 63,0);
        tracep->declQuad(c+172,"top extend0 immI", false,-1, 63,0);
        tracep->declQuad(c+174,"top extend0 immU", false,-1, 63,0);
        tracep->declQuad(c+176,"top extend0 immS", false,-1, 63,0);
        tracep->declQuad(c+178,"top extend0 immB", false,-1, 63,0);
        tracep->declQuad(c+180,"top extend0 immJ", false,-1, 63,0);
        tracep->declQuad(c+245,"top extend0 immB2", false,-1, 63,0);
        tracep->declQuad(c+247,"top extend0 immJ2", false,-1, 63,0);
        tracep->declQuad(c+129,"top mux21_32ALUASrc in0", false,-1, 63,0);
        tracep->declQuad(c+234,"top mux21_32ALUASrc in1", false,-1, 63,0);
        tracep->declBit(c+143,"top mux21_32ALUASrc select", false,-1);
        tracep->declQuad(c+153,"top mux21_32ALUASrc out", false,-1, 63,0);
        tracep->declQuad(c+131,"top mux31ALUBSrc in0", false,-1, 63,0);
        tracep->declQuad(c+249,"top mux31ALUBSrc in1", false,-1, 63,0);
        tracep->declQuad(c+151,"top mux31ALUBSrc in2", false,-1, 63,0);
        tracep->declBus(c+144,"top mux31ALUBSrc select", false,-1, 1,0);
        tracep->declQuad(c+155,"top mux31ALUBSrc out", false,-1, 63,0);
        tracep->declQuad(c+153,"top ALU0 ALU_src1", false,-1, 63,0);
        tracep->declQuad(c+155,"top ALU0 ALU_src2", false,-1, 63,0);
        tracep->declBus(c+145,"top ALU0 ALUctr", false,-1, 5,0);
        tracep->declQuad(c+158,"top ALU0 ALU_Result", false,-1, 63,0);
        tracep->declBit(c+157,"top ALU0 ALU_Zero", false,-1);
        tracep->declBit(c+182,"top ALU0 SUBctr", false,-1);
        tracep->declBit(c+183,"top ALU0 SIGctr", false,-1);
        tracep->declBus(c+184,"top ALU0 OPctr", false,-1, 3,0);
        tracep->declQuad(c+153,"top ALU0 Adder_src1", false,-1, 63,0);
        tracep->declQuad(c+185,"top ALU0 Adder_src2", false,-1, 63,0);
        tracep->declBit(c+187,"top ALU0 Add_Carry", false,-1);
        tracep->declBit(c+188,"top ALU0 Add_Overflow", false,-1);
        tracep->declBit(c+189,"top ALU0 Add_Sign", false,-1);
        tracep->declQuad(c+190,"top ALU0 Add_Result", false,-1, 63,0);
        tracep->declBit(c+192,"top ALU0 slt_Flag", false,-1);
        tracep->declBit(c+193,"top ALU0 sltu_Flag", false,-1);
        tracep->declQuad(c+194,"top ALU0 RV32I_bge", false,-1, 63,0);
        tracep->declQuad(c+196,"top ALU0 RV32I_bgeU", false,-1, 63,0);
        tracep->declBit(c+198,"top ALU0 Less", false,-1);
        tracep->declQuad(c+199,"top ALU0 RV32I_and", false,-1, 63,0);
        tracep->declQuad(c+201,"top ALU0 RV32I_or", false,-1, 63,0);
        tracep->declQuad(c+203,"top ALU0 RV32I_xor", false,-1, 63,0);
        tracep->declQuad(c+205,"top ALU0 RV32I_sll", false,-1, 63,0);
        tracep->declQuad(c+207,"top ALU0 RV32I_srl", false,-1, 63,0);
        tracep->declQuad(c+209,"top ALU0 RV32I_sra", false,-1, 63,0);
        tracep->declQuad(c+155,"top ALU0 RV32I_lui", false,-1, 63,0);
        tracep->declQuad(c+211,"top ALU0 RV32I_slt_sltu", false,-1, 63,0);
        tracep->declBus(c+145,"top ALU0 ALUctr0 ALUctr", false,-1, 5,0);
        tracep->declBit(c+182,"top ALU0 ALUctr0 SUBctr", false,-1);
        tracep->declBit(c+183,"top ALU0 ALUctr0 SIGctr", false,-1);
        tracep->declBus(c+184,"top ALU0 ALUctr0 OPctr", false,-1, 3,0);
        tracep->declBit(c+213,"top ALU0 ALUctr0 slt_result", false,-1);
        tracep->declBit(c+214,"top ALU0 ALUctr0 sltu_result", false,-1);
        tracep->declBit(c+215,"top ALU0 ALUctr0 or_result", false,-1);
        tracep->declBit(c+216,"top ALU0 ALUctr0 sub_result", false,-1);
        tracep->declBit(c+217,"top ALU0 ALUctr0 bge_result", false,-1);
        tracep->declBit(c+218,"top ALU0 ALUctr0 bgeu_result", false,-1);
        tracep->declBit(c+219,"top ALU0 ALUctr0 xor_result", false,-1);
        tracep->declBit(c+220,"top ALU0 ALUctr0 and_result", false,-1);
        tracep->declBit(c+221,"top ALU0 ALUctr0 sll_result", false,-1);
        tracep->declBit(c+222,"top ALU0 ALUctr0 srl_result", false,-1);
        tracep->declBit(c+223,"top ALU0 ALUctr0 sra_result", false,-1);
        tracep->declBit(c+224,"top ALU0 ALUctr0 srcB_result", false,-1);
        tracep->declQuad(c+153,"top ALU0 adder0 a", false,-1, 63,0);
        tracep->declQuad(c+185,"top ALU0 adder0 b", false,-1, 63,0);
        tracep->declBit(c+182,"top ALU0 adder0 cin", false,-1);
        tracep->declQuad(c+190,"top ALU0 adder0 f", false,-1, 63,0);
        tracep->declBit(c+188,"top ALU0 adder0 OF", false,-1);
        tracep->declBit(c+189,"top ALU0 adder0 SF", false,-1);
        tracep->declBit(c+157,"top ALU0 adder0 ZF", false,-1);
        tracep->declBit(c+187,"top ALU0 adder0 CF", false,-1);
        tracep->declBit(c+225,"top ALU0 adder0 cout", false,-1);
        tracep->declBit(c+193,"top ALU0 mux21_1_SIGctr in0", false,-1);
        tracep->declBit(c+192,"top ALU0 mux21_1_SIGctr in1", false,-1);
        tracep->declBit(c+183,"top ALU0 mux21_1_SIGctr select", false,-1);
        tracep->declBit(c+198,"top ALU0 mux21_1_SIGctr out", false,-1);
        tracep->declQuad(c+234,"top pcnext0 pcin", false,-1, 63,0);
        tracep->declQuad(c+129,"top pcnext0 busA", false,-1, 63,0);
        tracep->declQuad(c+151,"top pcnext0 imm", false,-1, 63,0);
        tracep->declBus(c+140,"top pcnext0 Branch", false,-1, 1,0);
        tracep->declBit(c+141,"top pcnext0 Jump", false,-1);
        tracep->declBit(c+157,"top pcnext0 Zero", false,-1);
        tracep->declBit(c+142,"top pcnext0 jalrctr", false,-1);
        tracep->declQuad(c+238,"top pcnext0 nextpc", false,-1, 63,0);
        tracep->declBit(c+226,"top pcnext0 BJcondition", false,-1);
        tracep->declQuad(c+242,"top pcnext0 offsetA", false,-1, 63,0);
        tracep->declQuad(c+227,"top pcnext0 offsetB", false,-1, 63,0);
        tracep->declQuad(c+234,"top pcnext0 mux21_jalr in0", false,-1, 63,0);
        tracep->declQuad(c+129,"top pcnext0 mux21_jalr in1", false,-1, 63,0);
        tracep->declBit(c+142,"top pcnext0 mux21_jalr select", false,-1);
        tracep->declQuad(c+242,"top pcnext0 mux21_jalr out", false,-1, 63,0);
        tracep->declQuad(c+249,"top pcnext0 mux21_BJ in0", false,-1, 63,0);
        tracep->declQuad(c+151,"top pcnext0 mux21_BJ in1", false,-1, 63,0);
        tracep->declBit(c+226,"top pcnext0 mux21_BJ select", false,-1);
        tracep->declQuad(c+227,"top pcnext0 mux21_BJ out", false,-1, 63,0);
        tracep->declBus(c+229,"top muxStore0 in", false,-1, 31,0);
        tracep->declBus(c+149,"top muxStore0 select", false,-1, 1,0);
        tracep->declBus(c+230,"top muxStore0 out", false,-1, 31,0);
        tracep->declBit(c+231,"top datamemory0 clk", false,-1);
        tracep->declBit(c+232,"top datamemory0 rst", false,-1);
        tracep->declQuad(c+160,"top datamemory0 DataIn", false,-1, 63,0);
        tracep->declQuad(c+158,"top datamemory0 Addr", false,-1, 63,0);
        tracep->declBit(c+148,"top datamemory0 WrEn", false,-1);
        tracep->declQuad(c+240,"top datamemory0 DataOut", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"top datamemory0 mem", true,(i+0), 63,0);}}
        tracep->declQuad(c+158,"top muxMemtoReg0 in1", false,-1, 63,0);
        tracep->declQuad(c+240,"top muxMemtoReg0 in2", false,-1, 63,0);
        tracep->declBus(c+146,"top muxMemtoReg0 select", false,-1, 2,0);
        tracep->declQuad(c+236,"top muxMemtoReg0 out", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__datamemory0__DOT__mem[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__datamemory0__DOT__mem[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__datamemory0__DOT__mem[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__datamemory0__DOT__mem[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__datamemory0__DOT__mem[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__datamemory0__DOT__mem[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__datamemory0__DOT__mem[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__datamemory0__DOT__mem[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__datamemory0__DOT__mem[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__datamemory0__DOT__mem[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__datamemory0__DOT__mem[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__datamemory0__DOT__mem[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__datamemory0__DOT__mem[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__datamemory0__DOT__mem[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__datamemory0__DOT__mem[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__datamemory0__DOT__mem[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__datamemory0__DOT__mem[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__datamemory0__DOT__mem[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__datamemory0__DOT__mem[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__datamemory0__DOT__mem[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__datamemory0__DOT__mem[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__datamemory0__DOT__mem[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__datamemory0__DOT__mem[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__datamemory0__DOT__mem[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__datamemory0__DOT__mem[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__datamemory0__DOT__mem[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__datamemory0__DOT__mem[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__datamemory0__DOT__mem[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__datamemory0__DOT__mem[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__datamemory0__DOT__mem[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__datamemory0__DOT__mem[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__datamemory0__DOT__mem[31]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__registers0__DOT__rf[0]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__registers0__DOT__rf[1]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__registers0__DOT__rf[2]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__registers0__DOT__rf[3]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__registers0__DOT__rf[4]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__registers0__DOT__rf[5]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__registers0__DOT__rf[6]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__registers0__DOT__rf[7]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__registers0__DOT__rf[8]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__registers0__DOT__rf[9]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__registers0__DOT__rf[10]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__registers0__DOT__rf[11]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__registers0__DOT__rf[12]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__registers0__DOT__rf[13]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__registers0__DOT__rf[14]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__registers0__DOT__rf[15]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__registers0__DOT__rf[16]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__registers0__DOT__rf[17]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__registers0__DOT__rf[18]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__registers0__DOT__rf[19]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__registers0__DOT__rf[20]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__registers0__DOT__rf[21]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__registers0__DOT__rf[22]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__registers0__DOT__rf[23]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__registers0__DOT__rf[24]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__registers0__DOT__rf[25]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__registers0__DOT__rf[26]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__registers0__DOT__rf[27]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__registers0__DOT__rf[28]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__registers0__DOT__rf[29]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__registers0__DOT__rf[30]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__registers0__DOT__rf[31]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__busA),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__busB),64);
        tracep->fullIData(oldp+133,((IData)(vlSelf->top__DOT__instrmemory0__DOT__rdata)),32);
        tracep->fullCData(oldp+134,((0x7fU & (IData)(vlSelf->top__DOT__instrmemory0__DOT__rdata))),7);
        tracep->fullCData(oldp+135,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+136,((7U & (IData)((vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+137,((0x7fU & (IData)(
                                                     (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+138,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+139,((0x1fU & (IData)(
                                                     (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                      >> 0x14U)))),5);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__Branch),2);
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__Jump));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__control0__DOT__jalr));
        tracep->fullBit(oldp+143,((((IData)(vlSelf->top__DOT__control0__DOT__jal) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__jalr)) 
                                   | (IData)(vlSelf->top__DOT__control0__DOT__auipc))));
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__ALUBSrc),2);
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__ALUctr),6);
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__MemtoReg),3);
        tracep->fullBit(oldp+147,((((((((IData)(vlSelf->top__DOT__control0__DOT__Rtype) 
                                        | (IData)(vlSelf->top__DOT__control0__DOT__ItypeALU)) 
                                       | (IData)(vlSelf->top__DOT__control0__DOT__lui)) 
                                      | (IData)(vlSelf->top__DOT__control0__DOT__auipc)) 
                                     | (IData)(vlSelf->top__DOT__control0__DOT__Load)) 
                                    | (IData)(vlSelf->top__DOT__control0__DOT__jal)) 
                                   | (IData)(vlSelf->top__DOT__control0__DOT__jalr))));
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__control0__DOT__Store));
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__MUXStore),2);
        tracep->fullCData(oldp+150,(vlSelf->top__DOT__ExtOp),3);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__ALU_src1),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__ALU_src2),64);
        tracep->fullBit(oldp+157,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ALU0__DOT__Add_Result))))));
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__ALU_Result),64);
        tracep->fullQData(oldp+160,((QData)((IData)(
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
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__instrmemory0__DOT__rdata),64);
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__control0__DOT__Rtype));
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__control0__DOT__ItypeALU));
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__control0__DOT__lui));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__control0__DOT__auipc));
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__control0__DOT__Load));
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__control0__DOT__Btype));
        tracep->fullBit(oldp+170,(vlSelf->top__DOT__control0__DOT__jal));
        tracep->fullBit(oldp+171,((IData)((0x73ULL 
                                           == (0x7fULL 
                                               & vlSelf->top__DOT__instrmemory0__DOT__rdata)))));
        tracep->fullQData(oldp+172,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                     >> 0x1fU)))))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (0xfffU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                             >> 0x14U))))))),64);
        tracep->fullQData(oldp+174,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(
                                                                           (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                            >> 0xcU)) 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+176,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+178,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+180,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__instrmemory0__DOT__rdata 
                                                                     >> 0x1fU)))))) 
                                      << 0x14U) | (QData)((IData)(
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
        tracep->fullBit(oldp+182,(vlSelf->top__DOT__ALU0__DOT__SUBctr));
        tracep->fullBit(oldp+183,(((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                   | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))));
        tracep->fullCData(oldp+184,(vlSelf->top__DOT__ALU0__DOT__OPctr),4);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__ALU0__DOT__Adder_src2),64);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__ALU_src1);
        VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
        VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
        VL_EXTEND_WI(65,1, __Vtemp22, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
        tracep->fullBit(oldp+187,((1U & ((1U & __Vtemp23[2U]) 
                                         ^ (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr)))));
        tracep->fullBit(oldp+188,((1U & ((((IData)(
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
        tracep->fullBit(oldp+189,((1U & (IData)((vlSelf->top__DOT__ALU0__DOT__Add_Result 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__ALU0__DOT__Add_Result),64);
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__ALU0__DOT__slt_Flag));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__ALU0__DOT__sltu_Flag));
        tracep->fullQData(oldp+194,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)))))),64);
        tracep->fullQData(oldp+196,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag)))))),64);
        tracep->fullBit(oldp+198,((((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                    | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                    ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                    : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))));
        tracep->fullQData(oldp+199,((vlSelf->top__DOT__ALU_src1 
                                     & vlSelf->top__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+201,((vlSelf->top__DOT__ALU_src1 
                                     | vlSelf->top__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+203,((vlSelf->top__DOT__ALU_src1 
                                     ^ vlSelf->top__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+205,((vlSelf->top__DOT__ALU_src1 
                                     << (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+207,((vlSelf->top__DOT__ALU_src1 
                                     >> (0x1fU & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+209,(VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__ALU_src1, 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+211,((QData)((IData)(
                                                    (((IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                      | (IData)(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                      ? (IData)(vlSelf->top__DOT__ALU0__DOT__slt_Flag)
                                                      : (IData)(vlSelf->top__DOT__ALU0__DOT__sltu_Flag))))),64);
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__slt_result));
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result));
        tracep->fullBit(oldp+215,((IData)((6U == (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+216,((IData)((8U == (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bge_result));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result));
        tracep->fullBit(oldp+219,((IData)((0x10U == 
                                           (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__and_result));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__sll_result));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__ALU0__DOT__ALUctr0__DOT__srl_result));
        tracep->fullBit(oldp+223,((IData)((0x20U == 
                                           (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))))));
        tracep->fullBit(oldp+224,((IData)((0xfU == 
                                           (0x3fU & (IData)(vlSelf->top__DOT__ALUctr))))));
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__ALU_src1);
        VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top__DOT__ALU0__DOT__Adder_src2);
        VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
        VL_EXTEND_WI(65,1, __Vtemp29, (IData)(vlSelf->top__DOT__ALU0__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
        tracep->fullBit(oldp+225,((1U & __Vtemp30[2U])));
        tracep->fullBit(oldp+226,((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ALU0__DOT__Add_Result)))) 
                                     | (IData)(vlSelf->top__DOT__Jump)) 
                                    | (((2U == (IData)(vlSelf->top__DOT__Branch)) 
                                        & (0U != vlSelf->top__DOT__ALU0__DOT__Add_Result)) 
                                       | (IData)(vlSelf->top__DOT__Jump))) 
                                   | ((3U == (IData)(vlSelf->top__DOT__Branch)) 
                                      | (IData)(vlSelf->top__DOT__Jump)))));
        tracep->fullQData(oldp+227,(((((((1U == (IData)(vlSelf->top__DOT__Branch)) 
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
        tracep->fullIData(oldp+229,((IData)(vlSelf->top__DOT__busB)),32);
        tracep->fullIData(oldp+230,((IData)(((0U == (IData)(vlSelf->top__DOT__MUXStore))
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
        tracep->fullBit(oldp+231,(vlSelf->clk));
        tracep->fullBit(oldp+232,(vlSelf->rst));
        tracep->fullIData(oldp+233,(vlSelf->instr),32);
        tracep->fullQData(oldp+234,(vlSelf->pc),64);
        tracep->fullQData(oldp+236,(((0U == (IData)(vlSelf->top__DOT__MemtoReg))
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
        tracep->fullQData(oldp+238,((((IData)(vlSelf->top__DOT__control0__DOT__jalr)
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
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__DataOut),64);
        tracep->fullQData(oldp+242,(((IData)(vlSelf->top__DOT__control0__DOT__jalr)
                                      ? vlSelf->top__DOT__busA
                                      : vlSelf->pc)),64);
        tracep->fullIData(oldp+244,(5U),32);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__extend0__DOT__immB2),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__extend0__DOT__immJ2),64);
        tracep->fullQData(oldp+249,(4ULL),64);
    }
}
