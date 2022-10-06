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
        tracep->declBit(c+272,"clk", false,-1);
        tracep->declBit(c+273,"rst", false,-1);
        tracep->declBus(c+274,"instr_i", false,-1, 31,0);
        tracep->declQuad(c+275,"pc", false,-1, 63,0);
        tracep->declBit(c+272,"top clk", false,-1);
        tracep->declBit(c+273,"top rst", false,-1);
        tracep->declBus(c+274,"top instr_i", false,-1, 31,0);
        tracep->declQuad(c+275,"top pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top offset2", false,-1, 63,0);
        tracep->declBit(c+3,"top BJcondition", false,-1);
        tracep->declQuad(c+4,"top IFID_ID_pc", false,-1, 63,0);
        tracep->declBus(c+115,"top IFID_ID_instr", false,-1, 31,0);
        tracep->declBus(c+116,"top WB_ID_rd", false,-1, 4,0);
        tracep->declQuad(c+117,"top WB_ID_busW", false,-1, 63,0);
        tracep->declQuad(c+4,"top ID_IDEX_pc", false,-1, 63,0);
        tracep->declQuad(c+277,"top ID_IDEX_busA", false,-1, 63,0);
        tracep->declQuad(c+279,"top ID_IDEX_busB", false,-1, 63,0);
        tracep->declQuad(c+119,"top ID_IDEX_imm", false,-1, 63,0);
        tracep->declBus(c+121,"top ID_IDEX_rd", false,-1, 4,0);
        tracep->declBus(c+122,"top ID_IDEX_MemtoReg", false,-1, 2,0);
        tracep->declBus(c+123,"top ID_IDEX_MUXStore", false,-1, 1,0);
        tracep->declBit(c+124,"top ID_IDEX_MemWr", false,-1);
        tracep->declBit(c+125,"top ID_IDEX_Jump", false,-1);
        tracep->declBus(c+126,"top ID_IDEX_Branch", false,-1, 1,0);
        tracep->declBit(c+127,"top ID_IDEX_jalrctr", false,-1);
        tracep->declBus(c+128,"top ID_IDEX_ALUctr", false,-1, 5,0);
        tracep->declBus(c+129,"top ID_IDEX_ALUBSrc", false,-1, 1,0);
        tracep->declBit(c+130,"top ID_IDEX_ALUASrc", false,-1);
        tracep->declQuad(c+6,"top IDEX_EX_pc", false,-1, 63,0);
        tracep->declQuad(c+8,"top IDEX_EX_busA", false,-1, 63,0);
        tracep->declQuad(c+10,"top IDEX_EX_busB", false,-1, 63,0);
        tracep->declQuad(c+12,"top IDEX_EX_imm", false,-1, 63,0);
        tracep->declBus(c+131,"top IDEX_EX_rd", false,-1, 4,0);
        tracep->declBus(c+132,"top IDEX_EX_MemtoReg", false,-1, 2,0);
        tracep->declBus(c+14,"top IDEX_EX_MUXStore", false,-1, 1,0);
        tracep->declBit(c+15,"top IDEX_EX_MemWr", false,-1);
        tracep->declBit(c+16,"top IDEX_EX_Jump", false,-1);
        tracep->declBus(c+17,"top IDEX_EX_Branch", false,-1, 1,0);
        tracep->declBit(c+18,"top IDEX_EX_jalrctr", false,-1);
        tracep->declBus(c+19,"top IDEX_EX_ALUctr", false,-1, 5,0);
        tracep->declBus(c+20,"top IDEX_EX_ALUBSrc", false,-1, 1,0);
        tracep->declBit(c+21,"top IDEX_EX_ALUASrc", false,-1);
        tracep->declQuad(c+22,"top EX_EXM_Target", false,-1, 63,0);
        tracep->declBit(c+133,"top EX_EXM_Zero", false,-1);
        tracep->declQuad(c+134,"top EX_EXM_ALUout", false,-1, 63,0);
        tracep->declQuad(c+10,"top EX_EXM_busB", false,-1, 63,0);
        tracep->declBus(c+131,"top EX_EXM_rd", false,-1, 4,0);
        tracep->declBus(c+132,"top EX_EXM_MemtoReg", false,-1, 2,0);
        tracep->declBus(c+14,"top EX_EXM_MUXStore", false,-1, 1,0);
        tracep->declBit(c+15,"top EX_EXM_MemWr", false,-1);
        tracep->declBit(c+16,"top EX_EXM_Jump", false,-1);
        tracep->declBus(c+17,"top EX_EXM_Branch", false,-1, 1,0);
        tracep->declBit(c+24,"top EXM_M_Zero", false,-1);
        tracep->declQuad(c+136,"top EXM_M_ALUout", false,-1, 63,0);
        tracep->declQuad(c+25,"top EXM_M_busB", false,-1, 63,0);
        tracep->declBus(c+138,"top EXM_M_rd", false,-1, 4,0);
        tracep->declBus(c+139,"top EXM_M_MemtoReg", false,-1, 2,0);
        tracep->declBus(c+27,"top EXM_M_MUXStore", false,-1, 1,0);
        tracep->declBit(c+28,"top EXM_M_MemWr", false,-1);
        tracep->declBit(c+29,"top EXM_M_Jump", false,-1);
        tracep->declBus(c+30,"top EXM_M_Branch", false,-1, 1,0);
        tracep->declQuad(c+281,"top M_MWB_Dataout", false,-1, 63,0);
        tracep->declQuad(c+136,"top M_MWB_ALUout", false,-1, 63,0);
        tracep->declBus(c+138,"top M_MWB_rd", false,-1, 4,0);
        tracep->declBus(c+139,"top M_MWB_MemtoReg", false,-1, 2,0);
        tracep->declQuad(c+140,"top MWB_WB_Dataout", false,-1, 63,0);
        tracep->declQuad(c+142,"top MWB_WB_ALUout", false,-1, 63,0);
        tracep->declBus(c+116,"top MWB_WB_rd", false,-1, 4,0);
        tracep->declBus(c+144,"top MWB_WB_MemtoReg", false,-1, 2,0);
        tracep->declBit(c+272,"top IF_Stage0 clk", false,-1);
        tracep->declBit(c+273,"top IF_Stage0 rst", false,-1);
        tracep->declQuad(c+1,"top IF_Stage0 Target", false,-1, 63,0);
        tracep->declBit(c+3,"top IF_Stage0 BJcondition", false,-1);
        tracep->declQuad(c+275,"top IF_Stage0 pc", false,-1, 63,0);
        tracep->declQuad(c+31,"top IF_Stage0 pc_next", false,-1, 63,0);
        tracep->declQuad(c+33,"top IF_Stage0 pc_now", false,-1, 63,0);
        tracep->declQuad(c+35,"top IF_Stage0 pc_add_four", false,-1, 63,0);
        tracep->declBit(c+272,"top IF_Stage0 PC_Unit0 clk", false,-1);
        tracep->declBit(c+273,"top IF_Stage0 PC_Unit0 rst", false,-1);
        tracep->declQuad(c+31,"top IF_Stage0 PC_Unit0 pcin", false,-1, 63,0);
        tracep->declQuad(c+33,"top IF_Stage0 PC_Unit0 pcout", false,-1, 63,0);
        tracep->declQuad(c+35,"top IF_Stage0 MUX21_32_PCNext in0", false,-1, 63,0);
        tracep->declQuad(c+1,"top IF_Stage0 MUX21_32_PCNext in1", false,-1, 63,0);
        tracep->declBit(c+3,"top IF_Stage0 MUX21_32_PCNext select", false,-1);
        tracep->declQuad(c+31,"top IF_Stage0 MUX21_32_PCNext out", false,-1, 63,0);
        tracep->declBit(c+272,"top IF_ID0 clk", false,-1);
        tracep->declBit(c+273,"top IF_ID0 rst", false,-1);
        tracep->declQuad(c+275,"top IF_ID0 pc_in", false,-1, 63,0);
        tracep->declBus(c+274,"top IF_ID0 Instr_in", false,-1, 31,0);
        tracep->declQuad(c+4,"top IF_ID0 pc_out", false,-1, 63,0);
        tracep->declBus(c+115,"top IF_ID0 Instr_out", false,-1, 31,0);
        tracep->declBit(c+272,"top ID_Stage0 clk", false,-1);
        tracep->declQuad(c+4,"top ID_Stage0 pc_in", false,-1, 63,0);
        tracep->declBus(c+115,"top ID_Stage0 Instr", false,-1, 31,0);
        tracep->declBus(c+116,"top ID_Stage0 waddr", false,-1, 4,0);
        tracep->declQuad(c+117,"top ID_Stage0 busW", false,-1, 63,0);
        tracep->declQuad(c+4,"top ID_Stage0 pc_out", false,-1, 63,0);
        tracep->declQuad(c+277,"top ID_Stage0 busA", false,-1, 63,0);
        tracep->declQuad(c+279,"top ID_Stage0 busB", false,-1, 63,0);
        tracep->declQuad(c+119,"top ID_Stage0 imm", false,-1, 63,0);
        tracep->declBus(c+121,"top ID_Stage0 rd", false,-1, 4,0);
        tracep->declBus(c+122,"top ID_Stage0 MemtoReg", false,-1, 2,0);
        tracep->declBus(c+123,"top ID_Stage0 MUXStore", false,-1, 1,0);
        tracep->declBit(c+124,"top ID_Stage0 MemWr", false,-1);
        tracep->declBit(c+125,"top ID_Stage0 Jump", false,-1);
        tracep->declBus(c+126,"top ID_Stage0 Branch", false,-1, 1,0);
        tracep->declBit(c+127,"top ID_Stage0 jalrctr", false,-1);
        tracep->declBus(c+128,"top ID_Stage0 ALUctr", false,-1, 5,0);
        tracep->declBus(c+129,"top ID_Stage0 ALUBSrc", false,-1, 1,0);
        tracep->declBit(c+130,"top ID_Stage0 ALUASrc", false,-1);
        tracep->declBus(c+145,"top ID_Stage0 op", false,-1, 6,0);
        tracep->declBus(c+146,"top ID_Stage0 funct3", false,-1, 2,0);
        tracep->declBus(c+147,"top ID_Stage0 rs1", false,-1, 4,0);
        tracep->declBus(c+148,"top ID_Stage0 rs2", false,-1, 4,0);
        tracep->declBus(c+149,"top ID_Stage0 funct7", false,-1, 6,0);
        tracep->declBit(c+150,"top ID_Stage0 RegWr", false,-1);
        tracep->declBus(c+151,"top ID_Stage0 ExtOp", false,-1, 2,0);
        tracep->declBit(c+272,"top ID_Stage0 Registers0 clk", false,-1);
        tracep->declBus(c+147,"top ID_Stage0 Registers0 raddr1", false,-1, 4,0);
        tracep->declQuad(c+277,"top ID_Stage0 Registers0 rdata1", false,-1, 63,0);
        tracep->declBus(c+148,"top ID_Stage0 Registers0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+279,"top ID_Stage0 Registers0 rdata2", false,-1, 63,0);
        tracep->declBit(c+150,"top ID_Stage0 Registers0 we", false,-1);
        tracep->declBus(c+116,"top ID_Stage0 Registers0 waddr", false,-1, 4,0);
        tracep->declQuad(c+117,"top ID_Stage0 Registers0 wdata", false,-1, 63,0);
        tracep->declBus(c+283,"top ID_Stage0 Registers0 ADDR_WIDTH", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+51+i*2,"top ID_Stage0 Registers0 rf", true,(i+0), 63,0);}}
        tracep->declBus(c+145,"top ID_Stage0 Control0 OP", false,-1, 6,0);
        tracep->declBus(c+146,"top ID_Stage0 Control0 funct3", false,-1, 2,0);
        tracep->declBus(c+149,"top ID_Stage0 Control0 funct7", false,-1, 6,0);
        tracep->declBus(c+126,"top ID_Stage0 Control0 Branch", false,-1, 1,0);
        tracep->declBit(c+125,"top ID_Stage0 Control0 Jump", false,-1);
        tracep->declBit(c+127,"top ID_Stage0 Control0 jalrctr", false,-1);
        tracep->declBit(c+130,"top ID_Stage0 Control0 ALUASrc", false,-1);
        tracep->declBus(c+129,"top ID_Stage0 Control0 ALUBSrc", false,-1, 1,0);
        tracep->declBus(c+128,"top ID_Stage0 Control0 ALUctr", false,-1, 5,0);
        tracep->declBus(c+122,"top ID_Stage0 Control0 MemtoReg", false,-1, 2,0);
        tracep->declBit(c+150,"top ID_Stage0 Control0 RegWr", false,-1);
        tracep->declBit(c+124,"top ID_Stage0 Control0 MemWr", false,-1);
        tracep->declBus(c+123,"top ID_Stage0 Control0 MUXStore", false,-1, 1,0);
        tracep->declBus(c+151,"top ID_Stage0 Control0 ExtOp", false,-1, 2,0);
        tracep->declBit(c+152,"top ID_Stage0 Control0 Rtype", false,-1);
        tracep->declBit(c+153,"top ID_Stage0 Control0 ItypeALU", false,-1);
        tracep->declBit(c+154,"top ID_Stage0 Control0 lui", false,-1);
        tracep->declBit(c+155,"top ID_Stage0 Control0 auipc", false,-1);
        tracep->declBit(c+156,"top ID_Stage0 Control0 Load", false,-1);
        tracep->declBit(c+124,"top ID_Stage0 Control0 Store", false,-1);
        tracep->declBit(c+157,"top ID_Stage0 Control0 Btype", false,-1);
        tracep->declBit(c+158,"top ID_Stage0 Control0 jal", false,-1);
        tracep->declBit(c+127,"top ID_Stage0 Control0 jalr", false,-1);
        tracep->declBit(c+159,"top ID_Stage0 Control0 Env", false,-1);
        tracep->declBus(c+145,"top ID_Stage0 Control0 DecodeOP0 OP", false,-1, 6,0);
        tracep->declBit(c+152,"top ID_Stage0 Control0 DecodeOP0 Rtype", false,-1);
        tracep->declBit(c+153,"top ID_Stage0 Control0 DecodeOP0 ItypeALU", false,-1);
        tracep->declBit(c+154,"top ID_Stage0 Control0 DecodeOP0 lui", false,-1);
        tracep->declBit(c+155,"top ID_Stage0 Control0 DecodeOP0 auipc", false,-1);
        tracep->declBit(c+156,"top ID_Stage0 Control0 DecodeOP0 Load", false,-1);
        tracep->declBit(c+124,"top ID_Stage0 Control0 DecodeOP0 Store", false,-1);
        tracep->declBit(c+157,"top ID_Stage0 Control0 DecodeOP0 Btype", false,-1);
        tracep->declBit(c+158,"top ID_Stage0 Control0 DecodeOP0 jal", false,-1);
        tracep->declBit(c+127,"top ID_Stage0 Control0 DecodeOP0 jalr", false,-1);
        tracep->declBit(c+159,"top ID_Stage0 Control0 DecodeOP0 Env", false,-1);
        tracep->declBus(c+115,"top ID_Stage0 Extend0 Instr", false,-1, 31,0);
        tracep->declBus(c+151,"top ID_Stage0 Extend0 ExtOp", false,-1, 2,0);
        tracep->declQuad(c+119,"top ID_Stage0 Extend0 imm", false,-1, 63,0);
        tracep->declQuad(c+160,"top ID_Stage0 Extend0 immI", false,-1, 63,0);
        tracep->declQuad(c+162,"top ID_Stage0 Extend0 immU", false,-1, 63,0);
        tracep->declQuad(c+164,"top ID_Stage0 Extend0 immS", false,-1, 63,0);
        tracep->declQuad(c+166,"top ID_Stage0 Extend0 immB", false,-1, 63,0);
        tracep->declQuad(c+168,"top ID_Stage0 Extend0 immJ", false,-1, 63,0);
        tracep->declBit(c+272,"top ID_EX0 clk", false,-1);
        tracep->declBit(c+273,"top ID_EX0 rst", false,-1);
        tracep->declQuad(c+4,"top ID_EX0 pc_in", false,-1, 63,0);
        tracep->declQuad(c+277,"top ID_EX0 busA_in", false,-1, 63,0);
        tracep->declQuad(c+279,"top ID_EX0 busB_in", false,-1, 63,0);
        tracep->declQuad(c+119,"top ID_EX0 imm_in", false,-1, 63,0);
        tracep->declBus(c+121,"top ID_EX0 rd_in", false,-1, 4,0);
        tracep->declBus(c+122,"top ID_EX0 MemtoReg_in", false,-1, 2,0);
        tracep->declBus(c+123,"top ID_EX0 MUXStore_in", false,-1, 1,0);
        tracep->declBit(c+124,"top ID_EX0 MemWr_in", false,-1);
        tracep->declBit(c+125,"top ID_EX0 Jump_in", false,-1);
        tracep->declBus(c+126,"top ID_EX0 Branch_in", false,-1, 1,0);
        tracep->declBit(c+127,"top ID_EX0 jalrctr_in", false,-1);
        tracep->declBus(c+128,"top ID_EX0 ALUctr_in", false,-1, 5,0);
        tracep->declBus(c+129,"top ID_EX0 ALUBSrc_in", false,-1, 1,0);
        tracep->declBit(c+130,"top ID_EX0 ALUASrc_in", false,-1);
        tracep->declQuad(c+6,"top ID_EX0 pc_out", false,-1, 63,0);
        tracep->declQuad(c+8,"top ID_EX0 busA_out", false,-1, 63,0);
        tracep->declQuad(c+10,"top ID_EX0 busB_out", false,-1, 63,0);
        tracep->declQuad(c+12,"top ID_EX0 imm_out", false,-1, 63,0);
        tracep->declBus(c+131,"top ID_EX0 rd_out", false,-1, 4,0);
        tracep->declBus(c+132,"top ID_EX0 MemtoReg_out", false,-1, 2,0);
        tracep->declBus(c+14,"top ID_EX0 MUXStore_out", false,-1, 1,0);
        tracep->declBit(c+15,"top ID_EX0 MemWr_out", false,-1);
        tracep->declBit(c+16,"top ID_EX0 Jump_out", false,-1);
        tracep->declBus(c+17,"top ID_EX0 Branch_out", false,-1, 1,0);
        tracep->declBit(c+18,"top ID_EX0 jalrctr_out", false,-1);
        tracep->declBus(c+19,"top ID_EX0 ALUctr_out", false,-1, 5,0);
        tracep->declBus(c+20,"top ID_EX0 ALUBSrc_out", false,-1, 1,0);
        tracep->declBit(c+21,"top ID_EX0 ALUASrc_out", false,-1);
        tracep->declQuad(c+6,"top EX_Stage0 pc", false,-1, 63,0);
        tracep->declQuad(c+8,"top EX_Stage0 busA", false,-1, 63,0);
        tracep->declQuad(c+10,"top EX_Stage0 busB_in", false,-1, 63,0);
        tracep->declQuad(c+12,"top EX_Stage0 imm", false,-1, 63,0);
        tracep->declBus(c+131,"top EX_Stage0 rd_in", false,-1, 4,0);
        tracep->declBus(c+132,"top EX_Stage0 MemtoReg_in", false,-1, 2,0);
        tracep->declBus(c+14,"top EX_Stage0 MUXStore_in", false,-1, 1,0);
        tracep->declBit(c+15,"top EX_Stage0 MemWr_in", false,-1);
        tracep->declBit(c+16,"top EX_Stage0 Jump_in", false,-1);
        tracep->declBus(c+17,"top EX_Stage0 Branch_in", false,-1, 1,0);
        tracep->declBit(c+18,"top EX_Stage0 jalrctr", false,-1);
        tracep->declBus(c+19,"top EX_Stage0 ALUctr", false,-1, 5,0);
        tracep->declBus(c+20,"top EX_Stage0 ALUBSrc", false,-1, 1,0);
        tracep->declBit(c+21,"top EX_Stage0 ALUASrc", false,-1);
        tracep->declQuad(c+22,"top EX_Stage0 Target", false,-1, 63,0);
        tracep->declBit(c+133,"top EX_Stage0 Zero", false,-1);
        tracep->declQuad(c+134,"top EX_Stage0 ALUout", false,-1, 63,0);
        tracep->declQuad(c+10,"top EX_Stage0 busB_out", false,-1, 63,0);
        tracep->declBus(c+131,"top EX_Stage0 rd_out", false,-1, 4,0);
        tracep->declBus(c+132,"top EX_Stage0 MemtoReg_out", false,-1, 2,0);
        tracep->declBus(c+14,"top EX_Stage0 MUXStore_out", false,-1, 1,0);
        tracep->declBit(c+15,"top EX_Stage0 MemWr_out", false,-1);
        tracep->declBit(c+16,"top EX_Stage0 Jump_out", false,-1);
        tracep->declBus(c+17,"top EX_Stage0 Branch_out", false,-1, 1,0);
        tracep->declQuad(c+37,"top EX_Stage0 offset1", false,-1, 63,0);
        tracep->declQuad(c+170,"top EX_Stage0 ALU_src1", false,-1, 63,0);
        tracep->declQuad(c+172,"top EX_Stage0 ALU_src2", false,-1, 63,0);
        tracep->declQuad(c+6,"top EX_Stage0 MUX21_32_jalctr in0", false,-1, 63,0);
        tracep->declQuad(c+8,"top EX_Stage0 MUX21_32_jalctr in1", false,-1, 63,0);
        tracep->declBit(c+18,"top EX_Stage0 MUX21_32_jalctr select", false,-1);
        tracep->declQuad(c+37,"top EX_Stage0 MUX21_32_jalctr out", false,-1, 63,0);
        tracep->declQuad(c+8,"top EX_Stage0 MUX21_32_ALUASrc in0", false,-1, 63,0);
        tracep->declQuad(c+6,"top EX_Stage0 MUX21_32_ALUASrc in1", false,-1, 63,0);
        tracep->declBit(c+21,"top EX_Stage0 MUX21_32_ALUASrc select", false,-1);
        tracep->declQuad(c+170,"top EX_Stage0 MUX21_32_ALUASrc out", false,-1, 63,0);
        tracep->declQuad(c+10,"top EX_Stage0 MUX31_32_ALUBSrc in0", false,-1, 63,0);
        tracep->declQuad(c+284,"top EX_Stage0 MUX31_32_ALUBSrc in1", false,-1, 63,0);
        tracep->declQuad(c+12,"top EX_Stage0 MUX31_32_ALUBSrc in2", false,-1, 63,0);
        tracep->declBus(c+20,"top EX_Stage0 MUX31_32_ALUBSrc select", false,-1, 1,0);
        tracep->declQuad(c+172,"top EX_Stage0 MUX31_32_ALUBSrc out", false,-1, 63,0);
        tracep->declQuad(c+170,"top EX_Stage0 ALU0 ALU_src1", false,-1, 63,0);
        tracep->declQuad(c+172,"top EX_Stage0 ALU0 ALU_src2", false,-1, 63,0);
        tracep->declBus(c+19,"top EX_Stage0 ALU0 ALUctr", false,-1, 5,0);
        tracep->declQuad(c+134,"top EX_Stage0 ALU0 ALU_Result", false,-1, 63,0);
        tracep->declBit(c+133,"top EX_Stage0 ALU0 ALU_Zero", false,-1);
        tracep->declBit(c+174,"top EX_Stage0 ALU0 SUBctr", false,-1);
        tracep->declBit(c+175,"top EX_Stage0 ALU0 SIGctr", false,-1);
        tracep->declBus(c+176,"top EX_Stage0 ALU0 OPctr", false,-1, 3,0);
        tracep->declQuad(c+170,"top EX_Stage0 ALU0 Adder_src1", false,-1, 63,0);
        tracep->declQuad(c+177,"top EX_Stage0 ALU0 Adder_src2", false,-1, 63,0);
        tracep->declBit(c+179,"top EX_Stage0 ALU0 Add_Carry", false,-1);
        tracep->declBit(c+180,"top EX_Stage0 ALU0 Add_Overflow", false,-1);
        tracep->declBit(c+181,"top EX_Stage0 ALU0 Add_Sign", false,-1);
        tracep->declQuad(c+182,"top EX_Stage0 ALU0 Add_Result", false,-1, 63,0);
        tracep->declBit(c+184,"top EX_Stage0 ALU0 slt_Flag", false,-1);
        tracep->declBit(c+185,"top EX_Stage0 ALU0 sltu_Flag", false,-1);
        tracep->declQuad(c+186,"top EX_Stage0 ALU0 RV32I_bge", false,-1, 63,0);
        tracep->declQuad(c+188,"top EX_Stage0 ALU0 RV32I_bgeU", false,-1, 63,0);
        tracep->declBit(c+190,"top EX_Stage0 ALU0 Less", false,-1);
        tracep->declQuad(c+191,"top EX_Stage0 ALU0 RV32I_and", false,-1, 63,0);
        tracep->declQuad(c+193,"top EX_Stage0 ALU0 RV32I_or", false,-1, 63,0);
        tracep->declQuad(c+195,"top EX_Stage0 ALU0 RV32I_xor", false,-1, 63,0);
        tracep->declQuad(c+197,"top EX_Stage0 ALU0 RV32I_sll", false,-1, 63,0);
        tracep->declQuad(c+199,"top EX_Stage0 ALU0 RV32I_srl", false,-1, 63,0);
        tracep->declQuad(c+201,"top EX_Stage0 ALU0 RV32I_sra", false,-1, 63,0);
        tracep->declQuad(c+172,"top EX_Stage0 ALU0 RV32I_lui", false,-1, 63,0);
        tracep->declQuad(c+203,"top EX_Stage0 ALU0 RV32I_slt_sltu", false,-1, 63,0);
        tracep->declBus(c+19,"top EX_Stage0 ALU0 ALUctr0 ALUctr", false,-1, 5,0);
        tracep->declBit(c+174,"top EX_Stage0 ALU0 ALUctr0 SUBctr", false,-1);
        tracep->declBit(c+175,"top EX_Stage0 ALU0 ALUctr0 SIGctr", false,-1);
        tracep->declBus(c+176,"top EX_Stage0 ALU0 ALUctr0 OPctr", false,-1, 3,0);
        tracep->declBit(c+205,"top EX_Stage0 ALU0 ALUctr0 slt_result", false,-1);
        tracep->declBit(c+39,"top EX_Stage0 ALU0 ALUctr0 sltu_result", false,-1);
        tracep->declBit(c+40,"top EX_Stage0 ALU0 ALUctr0 or_result", false,-1);
        tracep->declBit(c+41,"top EX_Stage0 ALU0 ALUctr0 sub_result", false,-1);
        tracep->declBit(c+206,"top EX_Stage0 ALU0 ALUctr0 bge_result", false,-1);
        tracep->declBit(c+42,"top EX_Stage0 ALU0 ALUctr0 bgeu_result", false,-1);
        tracep->declBit(c+43,"top EX_Stage0 ALU0 ALUctr0 xor_result", false,-1);
        tracep->declBit(c+44,"top EX_Stage0 ALU0 ALUctr0 and_result", false,-1);
        tracep->declBit(c+45,"top EX_Stage0 ALU0 ALUctr0 sll_result", false,-1);
        tracep->declBit(c+46,"top EX_Stage0 ALU0 ALUctr0 srl_result", false,-1);
        tracep->declBit(c+47,"top EX_Stage0 ALU0 ALUctr0 sra_result", false,-1);
        tracep->declBit(c+48,"top EX_Stage0 ALU0 ALUctr0 srcB_result", false,-1);
        tracep->declQuad(c+170,"top EX_Stage0 ALU0 adder0 a", false,-1, 63,0);
        tracep->declQuad(c+177,"top EX_Stage0 ALU0 adder0 b", false,-1, 63,0);
        tracep->declBit(c+174,"top EX_Stage0 ALU0 adder0 cin", false,-1);
        tracep->declQuad(c+182,"top EX_Stage0 ALU0 adder0 f", false,-1, 63,0);
        tracep->declBit(c+180,"top EX_Stage0 ALU0 adder0 OF", false,-1);
        tracep->declBit(c+181,"top EX_Stage0 ALU0 adder0 SF", false,-1);
        tracep->declBit(c+133,"top EX_Stage0 ALU0 adder0 ZF", false,-1);
        tracep->declBit(c+179,"top EX_Stage0 ALU0 adder0 CF", false,-1);
        tracep->declBit(c+207,"top EX_Stage0 ALU0 adder0 cout", false,-1);
        tracep->declBit(c+185,"top EX_Stage0 ALU0 MUX21_1_SIGctr in0", false,-1);
        tracep->declBit(c+184,"top EX_Stage0 ALU0 MUX21_1_SIGctr in1", false,-1);
        tracep->declBit(c+175,"top EX_Stage0 ALU0 MUX21_1_SIGctr select", false,-1);
        tracep->declBit(c+190,"top EX_Stage0 ALU0 MUX21_1_SIGctr out", false,-1);
        tracep->declBit(c+272,"top EX_M0 clk", false,-1);
        tracep->declBit(c+273,"top EX_M0 rst", false,-1);
        tracep->declQuad(c+22,"top EX_M0 Target_in", false,-1, 63,0);
        tracep->declBit(c+133,"top EX_M0 Zero_in", false,-1);
        tracep->declQuad(c+134,"top EX_M0 ALUout_in", false,-1, 63,0);
        tracep->declQuad(c+10,"top EX_M0 busB_in", false,-1, 63,0);
        tracep->declBus(c+131,"top EX_M0 rd_in", false,-1, 4,0);
        tracep->declBus(c+132,"top EX_M0 MemtoReg_in", false,-1, 2,0);
        tracep->declBus(c+14,"top EX_M0 MUXStore_in", false,-1, 1,0);
        tracep->declBit(c+15,"top EX_M0 MemWr_in", false,-1);
        tracep->declBit(c+16,"top EX_M0 Jump_in", false,-1);
        tracep->declBus(c+17,"top EX_M0 Branch_in", false,-1, 1,0);
        tracep->declQuad(c+1,"top EX_M0 Target_out", false,-1, 63,0);
        tracep->declBit(c+24,"top EX_M0 Zero_out", false,-1);
        tracep->declQuad(c+136,"top EX_M0 ALUout_out", false,-1, 63,0);
        tracep->declQuad(c+25,"top EX_M0 busB_out", false,-1, 63,0);
        tracep->declBus(c+138,"top EX_M0 rd_out", false,-1, 4,0);
        tracep->declBus(c+139,"top EX_M0 MemtoReg_out", false,-1, 2,0);
        tracep->declBus(c+27,"top EX_M0 MUXStore_out", false,-1, 1,0);
        tracep->declBit(c+28,"top EX_M0 MemWr_out", false,-1);
        tracep->declBit(c+29,"top EX_M0 Jump_out", false,-1);
        tracep->declBus(c+30,"top EX_M0 Branch_out", false,-1, 1,0);
        tracep->declBit(c+272,"top M_Stage0 clk", false,-1);
        tracep->declBit(c+273,"top M_Stage0 rst", false,-1);
        tracep->declBit(c+24,"top M_Stage0 Zero", false,-1);
        tracep->declQuad(c+136,"top M_Stage0 ALUout_in", false,-1, 63,0);
        tracep->declQuad(c+25,"top M_Stage0 busB", false,-1, 63,0);
        tracep->declBus(c+138,"top M_Stage0 rd_in", false,-1, 4,0);
        tracep->declBus(c+139,"top M_Stage0 MemtoReg_in", false,-1, 2,0);
        tracep->declBus(c+27,"top M_Stage0 MUXStore", false,-1, 1,0);
        tracep->declBit(c+28,"top M_Stage0 MemWr", false,-1);
        tracep->declBit(c+29,"top M_Stage0 Jump", false,-1);
        tracep->declBus(c+30,"top M_Stage0 Branch", false,-1, 1,0);
        tracep->declQuad(c+281,"top M_Stage0 Dataout", false,-1, 63,0);
        tracep->declQuad(c+136,"top M_Stage0 ALUout_out", false,-1, 63,0);
        tracep->declBus(c+138,"top M_Stage0 rd_out", false,-1, 4,0);
        tracep->declBus(c+139,"top M_Stage0 MemtoReg_out", false,-1, 2,0);
        tracep->declBit(c+3,"top M_Stage0 BJcondition", false,-1);
        tracep->declQuad(c+49,"top M_Stage0 mux_Store", false,-1, 63,0);
        tracep->declQuad(c+25,"top M_Stage0 MUXStore0 in", false,-1, 63,0);
        tracep->declBus(c+27,"top M_Stage0 MUXStore0 select", false,-1, 1,0);
        tracep->declQuad(c+49,"top M_Stage0 MUXStore0 out", false,-1, 63,0);
        tracep->declBit(c+272,"top M_Stage0 DataMemory0 clk", false,-1);
        tracep->declBit(c+273,"top M_Stage0 DataMemory0 rst", false,-1);
        tracep->declQuad(c+49,"top M_Stage0 DataMemory0 DataIn", false,-1, 63,0);
        tracep->declQuad(c+136,"top M_Stage0 DataMemory0 Addr", false,-1, 63,0);
        tracep->declBit(c+28,"top M_Stage0 DataMemory0 WrEn", false,-1);
        tracep->declQuad(c+281,"top M_Stage0 DataMemory0 DataOut", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+208+i*2,"top M_Stage0 DataMemory0 mem", true,(i+0), 63,0);}}
        tracep->declBit(c+272,"top M_WB0 clk", false,-1);
        tracep->declBit(c+273,"top M_WB0 rst", false,-1);
        tracep->declQuad(c+281,"top M_WB0 Dataout_in", false,-1, 63,0);
        tracep->declQuad(c+136,"top M_WB0 ALUout_in", false,-1, 63,0);
        tracep->declBus(c+138,"top M_WB0 rd_in", false,-1, 4,0);
        tracep->declBus(c+139,"top M_WB0 MemtoReg_in", false,-1, 2,0);
        tracep->declQuad(c+140,"top M_WB0 Dataout_out", false,-1, 63,0);
        tracep->declQuad(c+142,"top M_WB0 ALUout_out", false,-1, 63,0);
        tracep->declBus(c+116,"top M_WB0 rd_out", false,-1, 4,0);
        tracep->declBus(c+144,"top M_WB0 MemtoReg_out", false,-1, 2,0);
        tracep->declQuad(c+140,"top WB_Stage0 Dataout", false,-1, 63,0);
        tracep->declQuad(c+142,"top WB_Stage0 ALUout", false,-1, 63,0);
        tracep->declBus(c+116,"top WB_Stage0 rd_in", false,-1, 4,0);
        tracep->declBus(c+144,"top WB_Stage0 MemtoReg", false,-1, 2,0);
        tracep->declQuad(c+117,"top WB_Stage0 busW", false,-1, 63,0);
        tracep->declBus(c+116,"top WB_Stage0 rd_out", false,-1, 4,0);
        tracep->declQuad(c+142,"top WB_Stage0 MUXMemtoReg0 in1", false,-1, 63,0);
        tracep->declQuad(c+140,"top WB_Stage0 MUXMemtoReg0 in2", false,-1, 63,0);
        tracep->declBus(c+144,"top WB_Stage0 MUXMemtoReg0 select", false,-1, 2,0);
        tracep->declQuad(c+117,"top WB_Stage0 MUXMemtoReg0 out", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__offset2),64);
        tracep->fullBit(oldp+3,((((((1U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                    & (IData)(vlSelf->top__DOT__EXM_M_Zero)) 
                                   | (IData)(vlSelf->top__DOT__EXM_M_Jump)) 
                                  | (((2U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                      & (~ (IData)(vlSelf->top__DOT__EXM_M_Zero))) 
                                     | (IData)(vlSelf->top__DOT__EXM_M_Jump))) 
                                 | ((3U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                    | (IData)(vlSelf->top__DOT__EXM_M_Jump)))));
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__IFID_ID_pc),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__IDEX_EX_pc),64);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__IDEX_EX_busA),64);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__IDEX_EX_busB),64);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__IDEX_EX_imm),64);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__IDEX_EX_MUXStore),2);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__IDEX_EX_MemWr));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__IDEX_EX_Jump));
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__IDEX_EX_Branch),2);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__IDEX_EX_jalrctr));
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__IDEX_EX_ALUctr),6);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__IDEX_EX_ALUBSrc),2);
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__IDEX_EX_ALUASrc));
        tracep->fullQData(oldp+22,((((IData)(vlSelf->top__DOT__IDEX_EX_jalrctr)
                                      ? vlSelf->top__DOT__IDEX_EX_busA
                                      : vlSelf->top__DOT__IDEX_EX_pc) 
                                    + vlSelf->top__DOT__IDEX_EX_imm)),64);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__EXM_M_Zero));
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__EXM_M_busB),64);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__EXM_M_MUXStore),2);
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__EXM_M_MemWr));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__EXM_M_Jump));
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__EXM_M_Branch),2);
        tracep->fullQData(oldp+31,(((((((1U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                        & (IData)(vlSelf->top__DOT__EXM_M_Zero)) 
                                       | (IData)(vlSelf->top__DOT__EXM_M_Jump)) 
                                      | (((2U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                          & (~ (IData)(vlSelf->top__DOT__EXM_M_Zero))) 
                                         | (IData)(vlSelf->top__DOT__EXM_M_Jump))) 
                                     | ((3U == (IData)(vlSelf->top__DOT__EXM_M_Branch)) 
                                        | (IData)(vlSelf->top__DOT__EXM_M_Jump)))
                                     ? vlSelf->top__DOT__offset2
                                     : (4ULL + vlSelf->top__DOT__IF_Stage0__DOT__pc_now))),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__IF_Stage0__DOT__pc_now),64);
        tracep->fullQData(oldp+35,((4ULL + vlSelf->top__DOT__IF_Stage0__DOT__pc_now)),64);
        tracep->fullQData(oldp+37,(((IData)(vlSelf->top__DOT__IDEX_EX_jalrctr)
                                     ? vlSelf->top__DOT__IDEX_EX_busA
                                     : vlSelf->top__DOT__IDEX_EX_pc)),64);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sltu_result));
        tracep->fullBit(oldp+40,((IData)((6U == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
        tracep->fullBit(oldp+41,((IData)((8U == (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bgeu_result));
        tracep->fullBit(oldp+43,((IData)((0x10U == 
                                          (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__and_result));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__sll_result));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__srl_result));
        tracep->fullBit(oldp+47,((IData)((0x20U == 
                                          (0x3fU & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
        tracep->fullBit(oldp+48,((IData)((0xfU == (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__IDEX_EX_ALUctr))))));
        tracep->fullQData(oldp+49,(((0U == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
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
                                         : ((3U == (IData)(vlSelf->top__DOT__EXM_M_MUXStore))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__EXM_M_busB 
                                                                                >> 0xfU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__EXM_M_busB)))))
                                             : 0ULL)))),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[0]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[1]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[2]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[3]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[4]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[5]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[6]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[7]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[8]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[9]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[10]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[11]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[12]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[13]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[14]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[15]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[16]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[17]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[18]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[19]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[20]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[21]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[22]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[23]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[24]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[25]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[26]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[27]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[28]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[29]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[30]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf[31]),64);
        tracep->fullIData(oldp+115,(vlSelf->top__DOT__IFID_ID_instr),32);
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__MWB_WB_rd),5);
        tracep->fullQData(oldp+117,(((0U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                      ? vlSelf->top__DOT__MWB_WB_ALUout
                                      : ((1U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                          ? vlSelf->top__DOT__MWB_WB_Dataout
                                          : ((2U == (IData)(vlSelf->top__DOT__MWB_WB_MemtoReg))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__MWB_WB_Dataout 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__MWB_WB_Dataout)))))
                                              : ((3U 
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
        tracep->fullQData(oldp+119,(((0U == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
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
                                          : ((2U == (IData)(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp))
                                              ? (((- (QData)((IData)(
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
                                              : ((3U 
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
        tracep->fullCData(oldp+121,((0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                              >> 7U))),5);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__ID_IDEX_MemtoReg),3);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__ID_IDEX_MUXStore),2);
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Store));
        tracep->fullBit(oldp+125,(((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                   | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr))));
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__ID_IDEX_Branch),2);
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr));
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__ID_IDEX_ALUctr),6);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__ID_IDEX_ALUBSrc),2);
        tracep->fullBit(oldp+130,((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal) 
                                    | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr)) 
                                   | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc))));
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__IDEX_EX_rd),5);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__IDEX_EX_MemtoReg),3);
        tracep->fullBit(oldp+133,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result))))));
        tracep->fullQData(oldp+134,(((0U == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                      ? vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result
                                      : ((1U == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                          ? (vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                             | vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)
                                          : ((2U == (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr))
                                              ? vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2
                                              : ((3U 
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
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__EXM_M_ALUout),64);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__EXM_M_rd),5);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__EXM_M_MemtoReg),3);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__MWB_WB_Dataout),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__MWB_WB_ALUout),64);
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__MWB_WB_MemtoReg),3);
        tracep->fullCData(oldp+145,((0x7fU & vlSelf->top__DOT__IFID_ID_instr)),7);
        tracep->fullCData(oldp+146,((7U & (vlSelf->top__DOT__IFID_ID_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+147,((0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+149,((vlSelf->top__DOT__IFID_ID_instr 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+150,((((((((IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype) 
                                        | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU)) 
                                       | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui)) 
                                      | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc)) 
                                     | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load)) 
                                    | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal)) 
                                   | (IData)(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jalr))));
        tracep->fullCData(oldp+151,(vlSelf->top__DOT__ID_Stage0__DOT__ExtOp),3);
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Rtype));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__ItypeALU));
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__lui));
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__auipc));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Load));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__Btype));
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__ID_Stage0__DOT__Control0__DOT__jal));
        tracep->fullBit(oldp+159,((IData)((0x73U == 
                                           (0x7fU & vlSelf->top__DOT__IFID_ID_instr)))));
        tracep->fullQData(oldp+160,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__IFID_ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__IFID_ID_instr 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+162,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__IFID_ID_instr 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__IFID_ID_instr))))),64);
        tracep->fullQData(oldp+164,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__IFID_ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__IFID_ID_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__IFID_ID_instr 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+166,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+168,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__IFID_ID_instr 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->top__DOT__IFID_ID_instr) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->top__DOT__IFID_ID_instr 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->top__DOT__IFID_ID_instr 
                                                                            >> 0x14U)))))))),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2),64);
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
        tracep->fullBit(oldp+175,(((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                   | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))));
        tracep->fullCData(oldp+176,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__OPctr),4);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2),64);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1);
        VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2);
        VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
        VL_EXTEND_WI(65,1, __Vtemp22, (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
        tracep->fullBit(oldp+179,((1U & ((1U & __Vtemp23[2U]) 
                                         ^ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr)))));
        tracep->fullBit(oldp+180,((1U & ((((IData)(
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
        tracep->fullBit(oldp+181,((1U & (IData)((vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Add_Result),64);
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag));
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag));
        tracep->fullQData(oldp+186,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)))))),64);
        tracep->fullQData(oldp+188,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag)))))),64);
        tracep->fullBit(oldp+190,((((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                    | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                    ? (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)
                                    : (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag))));
        tracep->fullQData(oldp+191,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                     & vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+193,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                     | vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+195,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                     ^ vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)),64);
        tracep->fullQData(oldp+197,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                     << (0x1fU & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+199,((vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1 
                                     >> (0x1fU & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+201,(VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1, 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU_src2)))),64);
        tracep->fullQData(oldp+203,((QData)((IData)(
                                                    (((IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result) 
                                                      | (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result))
                                                      ? (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__slt_Flag)
                                                      : (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__sltu_Flag))))),64);
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__slt_result));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__ALUctr0__DOT__bge_result));
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__EX_Stage0__DOT__ALU_src1);
        VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__Adder_src2);
        VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
        VL_EXTEND_WI(65,1, __Vtemp29, (IData)(vlSelf->top__DOT__EX_Stage0__DOT__ALU0__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
        tracep->fullBit(oldp+207,((1U & __Vtemp30[2U])));
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[0]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[1]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[2]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[3]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[4]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[5]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[6]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[7]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[8]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[9]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[10]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[11]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[12]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[13]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[14]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[15]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[16]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[17]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[18]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[19]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[20]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[21]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[22]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[23]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[24]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[25]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[26]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[27]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[28]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[29]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[30]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem[31]),64);
        tracep->fullBit(oldp+272,(vlSelf->clk));
        tracep->fullBit(oldp+273,(vlSelf->rst));
        tracep->fullIData(oldp+274,(vlSelf->instr_i),32);
        tracep->fullQData(oldp+275,(vlSelf->pc),64);
        tracep->fullQData(oldp+277,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__IFID_ID_instr 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                                >> 0xfU))])),64);
        tracep->fullQData(oldp+279,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__IFID_ID_instr 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__ID_Stage0__DOT__Registers0__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__IFID_ID_instr 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+281,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->top__DOT__M_Stage0__DOT__DataMemory0__DOT__mem
                                     [(0x1fU & (IData)(vlSelf->top__DOT__EXM_M_ALUout))])),64);
        tracep->fullIData(oldp+283,(5U),32);
        tracep->fullQData(oldp+284,(4ULL),64);
    }
}
