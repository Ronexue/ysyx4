/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */

`define PC_WIDTH         63
`define INSTR_WIDTH      31
`define REG_WIDTH        63
`define IMM_EXTEND_WIDTH 63
`define ALU_WIDTH        63
`define DATA_MEM_WIDTH   63
`define WB_OUT_WIDTH     63
`define OP_WIDTH          6
`define FUNCT3_WIDTH      2
`define FUNCT7_WIDTH      6
`define WADDR_WIDTH       4
`define RS1_WIDTH         4
`define RS2_WIDTH         4
`define RD_WIDTH          4

`define ZERO_1             1'b0
`define ZERO_2             2'b0
`define ZERO_3             3'b0
`define ZERO_5             5'b0
`define ZERO_6             6'b0
`define ZERO_32           64'b0
`define PC_START_VALUE    64'b0
`define INSTR_START_VALUE 64'b0

module top(
  input clk,
  input rst,
  input [31: 0]instr_i,
  output [63: 0] pc
);

wire [`PC_WIDTH:0] offset2;
wire BJcondition;
//wire [`PC_WIDTH   :0] IF_IFID_pc;
//wire [`INSTR_WIDTH:0] IF_IFID_instr;
IF_Stage IF_Stage0(
	.clk(clk),
	.rst(rst),
	.Target(offset2),
	.BJcondition(BJcondition),
	.pc(pc)
);

wire [`PC_WIDTH   :0] IFID_ID_pc;
wire [`INSTR_WIDTH:0] IFID_ID_instr;
IF_ID IF_ID0(
    .clk(clk),
    .rst(rst),
    .pc_in(pc),
    .Instr_in(instr_i),
    .pc_out(IFID_ID_pc),
    .Instr_out(IFID_ID_instr)
);

wire [`RD_WIDTH        :0] WB_ID_rd;
wire [`REG_WIDTH       :0] WB_ID_busW;
wire [`PC_WIDTH        :0] ID_IDEX_pc;
wire [`REG_WIDTH       :0] ID_IDEX_busA;
wire [`REG_WIDTH       :0] ID_IDEX_busB;
wire [`IMM_EXTEND_WIDTH:0] ID_IDEX_imm;
wire [`RD_WIDTH        :0] ID_IDEX_rd;
wire [2:0] ID_IDEX_MemtoReg;
wire [1:0] ID_IDEX_MUXStore;
wire       ID_IDEX_MemWr;
wire       ID_IDEX_Jump;
wire [1:0] ID_IDEX_Branch;
wire       ID_IDEX_jalrctr;
wire [5:0] ID_IDEX_ALUctr;
wire [1:0] ID_IDEX_ALUBSrc;
wire       ID_IDEX_ALUASrc;
ID_Stage ID_Stage0(
    .clk(clk),
//    .rst(rst),
    .pc_in(IFID_ID_pc),
    .Instr(IFID_ID_instr),
    .waddr(WB_ID_rd),
    .busW(WB_ID_busW),
    .pc_out(ID_IDEX_pc),
    .busA(ID_IDEX_busA),
    .busB(ID_IDEX_busB),
    .imm(ID_IDEX_imm),
    .rd(ID_IDEX_rd),
    .MemtoReg(ID_IDEX_MemtoReg),
    .MUXStore(ID_IDEX_MUXStore),
    .MemWr(ID_IDEX_MemWr),
    .Jump(ID_IDEX_Jump),
    .Branch(ID_IDEX_Branch),
    .jalrctr(ID_IDEX_jalrctr),
    .ALUctr(ID_IDEX_ALUctr),
    .ALUBSrc(ID_IDEX_ALUBSrc),
    .ALUASrc(ID_IDEX_ALUASrc)
);

wire [`PC_WIDTH        :0] IDEX_EX_pc;
wire [`REG_WIDTH       :0] IDEX_EX_busA;
wire [`REG_WIDTH       :0] IDEX_EX_busB;
wire [`IMM_EXTEND_WIDTH:0] IDEX_EX_imm;
wire [`RD_WIDTH        :0] IDEX_EX_rd;
wire [2:0] IDEX_EX_MemtoReg;
wire [1:0] IDEX_EX_MUXStore;
wire       IDEX_EX_MemWr;
wire       IDEX_EX_Jump;
wire [1:0] IDEX_EX_Branch;
wire       IDEX_EX_jalrctr;
wire [5:0] IDEX_EX_ALUctr;
wire [1:0] IDEX_EX_ALUBSrc;
wire       IDEX_EX_ALUASrc;
ID_EX ID_EX0(
    .clk(clk),
    .rst(rst),
    .pc_in(ID_IDEX_pc)  ,
    .busA_in(ID_IDEX_busA),
    .busB_in(ID_IDEX_busB),
    .imm_in(ID_IDEX_imm) ,
    .rd_in(ID_IDEX_rd),
    .MemtoReg_in(ID_IDEX_MemtoReg),
    .MUXStore_in(ID_IDEX_MUXStore),
    .MemWr_in(ID_IDEX_MemWr)   ,
    .Jump_in(ID_IDEX_Jump)    ,
    .Branch_in(ID_IDEX_Branch)  ,
    .jalrctr_in(ID_IDEX_jalrctr) ,
    .ALUctr_in(ID_IDEX_ALUctr)  ,
    .ALUBSrc_in(ID_IDEX_ALUBSrc) ,
    .ALUASrc_in(ID_IDEX_ALUASrc) ,
    .pc_out(IDEX_EX_pc)  ,
    .busA_out(IDEX_EX_busA),
    .busB_out(IDEX_EX_busB),
    .imm_out(IDEX_EX_imm) ,
    .rd_out(IDEX_EX_rd)  ,
    .MemtoReg_out(IDEX_EX_MemtoReg),
    .MUXStore_out(IDEX_EX_MUXStore),
    .MemWr_out(IDEX_EX_MemWr)   ,
    .Jump_out(IDEX_EX_Jump)    ,
    .Branch_out(IDEX_EX_Branch)  ,
    .jalrctr_out(IDEX_EX_jalrctr) ,
    .ALUctr_out(IDEX_EX_ALUctr)  ,
    .ALUBSrc_out(IDEX_EX_ALUBSrc) ,
    .ALUASrc_out(IDEX_EX_ALUASrc) 
    
);


wire [`PC_WIDTH        :0] EX_EXM_Target;
wire                       EX_EXM_Zero;
wire [`ALU_WIDTH       :0] EX_EXM_ALUout;
wire [`REG_WIDTH       :0] EX_EXM_busB;
wire [`RD_WIDTH        :0] EX_EXM_rd;
wire [2:0] EX_EXM_MemtoReg;
wire [1:0] EX_EXM_MUXStore;
wire       EX_EXM_MemWr;
wire       EX_EXM_Jump;
wire [1:0] EX_EXM_Branch;
EX_Stage EX_Stage0(
    .pc(IDEX_EX_pc)     ,
    .busA(IDEX_EX_busA)   ,
    .busB_in(IDEX_EX_busB),
    .imm(IDEX_EX_imm)    ,
    .rd_in(IDEX_EX_rd)  ,
    .MemtoReg_in(IDEX_EX_MemtoReg),
    .MUXStore_in(IDEX_EX_MUXStore),
    .MemWr_in(IDEX_EX_MemWr)   ,
    .Jump_in(IDEX_EX_Jump)    ,
    .Branch_in(IDEX_EX_Branch)  ,
    .jalrctr(IDEX_EX_jalrctr) ,
    .ALUctr(IDEX_EX_ALUctr)  ,
    .ALUBSrc(IDEX_EX_ALUBSrc) ,
    .ALUASrc(IDEX_EX_ALUASrc) ,
    .Target(EX_EXM_Target)  ,
    .Zero(EX_EXM_Zero)    ,
    .ALUout(EX_EXM_ALUout)  , 
    .busB_out(EX_EXM_busB),
    .rd_out(EX_EXM_rd)  ,
    .MemtoReg_out(EX_EXM_MemtoReg),
    .MUXStore_out(EX_EXM_MUXStore),
    .MemWr_out(EX_EXM_MemWr)   ,
    .Jump_out(EX_EXM_Jump)    ,
    .Branch_out(EX_EXM_Branch)
);

wire                       EXM_M_Zero;
wire [`ALU_WIDTH       :0] EXM_M_ALUout;
wire [`REG_WIDTH       :0] EXM_M_busB;
wire [`RD_WIDTH        :0] EXM_M_rd;
wire [2:0] EXM_M_MemtoReg;
wire [1:0] EXM_M_MUXStore;
wire       EXM_M_MemWr;
wire       EXM_M_Jump;
wire [1:0] EXM_M_Branch;
EX_M EX_M0(
    .clk(clk),
    .rst(rst),
    .Target_in(EX_EXM_Target),
    .Zero_in(EX_EXM_Zero),
    .ALUout_in(EX_EXM_ALUout),
    .busB_in(EX_EXM_busB),
    .rd_in(EX_EXM_rd),
    .MemtoReg_in(EX_EXM_MemtoReg),
    .MUXStore_in(EX_EXM_MUXStore),
    .MemWr_in(EX_EXM_MemWr),
    .Jump_in(EX_EXM_Jump),
    .Branch_in(EX_EXM_Branch),
    .Target_out(offset2),
    .Zero_out(EXM_M_Zero),
    .ALUout_out(EXM_M_ALUout),
    .busB_out(EXM_M_busB),
    .rd_out(EXM_M_rd),
    .MemtoReg_out(EXM_M_MemtoReg),
    .MUXStore_out(EXM_M_MUXStore),
    .MemWr_out(EXM_M_MemWr),
    .Jump_out(EXM_M_Jump),
    .Branch_out(EXM_M_Branch)
);

wire [`DATA_MEM_WIDTH:0] M_MWB_Dataout;
wire [`ALU_WIDTH     :0] M_MWB_ALUout;
wire [`RD_WIDTH      :0] M_MWB_rd;
wire [2:0] M_MWB_MemtoReg;
M_Stage M_Stage0(
    .clk(clk),
    .rst(rst),
    .Zero(EXM_M_Zero),
    .ALUout_in(EXM_M_ALUout),
    .busB(EXM_M_busB),
    .rd_in(EXM_M_rd),
    .MemtoReg_in(EXM_M_MemtoReg),
    .MUXStore(EXM_M_MUXStore),
    .MemWr(EXM_M_MemWr),
    .Jump(EXM_M_Jump),
    .Branch(EXM_M_Branch),
    .Dataout(M_MWB_Dataout),
    .ALUout_out(M_MWB_ALUout),
    .rd_out(M_MWB_rd),
    .MemtoReg_out(M_MWB_MemtoReg),
    .BJcondition(BJcondition)
);

wire [`DATA_MEM_WIDTH:0] MWB_WB_Dataout;
wire [`ALU_WIDTH     :0] MWB_WB_ALUout;
wire [`RD_WIDTH      :0] MWB_WB_rd;
wire [2:0] MWB_WB_MemtoReg;
M_WB M_WB0(
    .clk(clk),
    .rst(rst),
    .Dataout_in(M_MWB_Dataout),
    .ALUout_in(M_MWB_ALUout),
    .rd_in(M_MWB_rd),
    .MemtoReg_in(M_MWB_MemtoReg),
    .Dataout_out(MWB_WB_Dataout),
    .ALUout_out(MWB_WB_ALUout),
    .rd_out(MWB_WB_rd),
    .MemtoReg_out(MWB_WB_MemtoReg)
);

WB_Stage WB_Stage0(
    .Dataout(MWB_WB_Dataout),
    .ALUout(MWB_WB_ALUout),
    .rd_in(MWB_WB_rd),
    .MemtoReg(MWB_WB_MemtoReg),
    .busW(WB_ID_busW),
    .rd_out(WB_ID_rd)
);
    initial begin
        $dumpfile("obj_dir/vtop.vcd");
        $dumpvars();
    end
endmodule

module ALU(
	input  [63: 0] ALU_src1  ,
	input  [63: 0] ALU_src2  ,
	input  [ 5: 0] ALUctr    ,
	output [63: 0] ALU_Result,
	output         ALU_Zero
);

wire         SUBctr;
wire         SIGctr;
wire [ 3: 0] OPctr;
ALUctr ALUctr0(
	.ALUctr(ALUctr),
	.SUBctr(SUBctr),
	.SIGctr(SIGctr),
	.OPctr(OPctr)    
);

wire [63: 0] Adder_src1;
wire [63: 0] Adder_src2;
wire         Add_Carry;
wire         Add_Overflow;
wire         Add_Sign;
wire [63: 0] Add_Result;
assign Adder_src1 = ALU_src1;
assign Adder_src2 = ALU_src2 ^ {64{SUBctr}};
adder0 adder0(
	.a(Adder_src1)   , 
	.b(Adder_src2)   ,
	.cin(SUBctr)     ,
	.f(Add_Result)   ,
	.OF(Add_Overflow), 
	.SF(Add_Sign)    , 
	.ZF(ALU_Zero)    , 
	.CF(Add_Carry)
);

wire slt_Flag;
wire sltu_Flag;
wire [63: 0] RV32I_bge;
wire [63: 0] RV32I_bgeU;
wire Less;
assign slt_Flag   = Add_Overflow ^ Add_Sign;
assign sltu_Flag  = Add_Carry    ^ SUBctr;
assign RV32I_bge  = {{63{1'b0}}, ~slt_Flag};
assign RV32I_bgeU = {{63{1'b0}}, ~sltu_Flag};
MUX21_1 MUX21_1_SIGctr(
	.in0(sltu_Flag),
	.in1(slt_Flag) ,
	.select(SIGctr),
	.out(Less)
);

wire [63: 0] RV32I_and;
wire [63: 0] RV32I_or;
wire [63: 0] RV32I_xor;
wire [63: 0] RV32I_sll;
wire [63: 0] RV32I_srl;
wire [63: 0] RV32I_sra;
wire [63: 0] RV32I_lui;
wire [63: 0] RV32I_slt_sltu;
assign RV32I_and      = ALU_src1 & ALU_src2;
assign RV32I_or       = ALU_src1 | ALU_src2;
assign RV32I_xor      = ALU_src1 ^ ALU_src2;
assign RV32I_sll      = ALU_src1 << ALU_src2[ 4: 0];                                                                                                                                                                                                                                                                                                                                               
assign RV32I_srl      = ALU_src1 >> ALU_src2[ 4: 0];
assign RV32I_sra      = ($signed(ALU_src1)) >>> ALU_src2[ 4: 0];
assign RV32I_lui      = ALU_src2;
assign RV32I_slt_sltu = {{63{1'b0}}, Less}; 

assign ALU_Result = (OPctr == 4'b0000) ? Add_Result     :
					(OPctr == 4'b0001) ? RV32I_or       :
					(OPctr == 4'b0010) ? RV32I_lui      :
					(OPctr == 4'b0011) ? RV32I_slt_sltu :
					(OPctr == 4'b0100) ? RV32I_xor      :
					(OPctr == 4'b0101) ? RV32I_and      :
					(OPctr == 4'b0110) ? RV32I_sll      :
					(OPctr == 4'b0111) ? RV32I_srl      :
					(OPctr == 4'b1000) ? RV32I_sra      :
					(OPctr == 4'b1100) ? RV32I_bge      :
					(OPctr == 4'b1110) ? RV32I_bgeU     :
					                     64'b0          ;
endmodule

module adder0(
	input  [63: 0] a, b,
	input          cin,
	output [63: 0] f,
	output         OF, SF, ZF, CF
);
wire cout;
assign {cout, f} = a + b + cin; 
// 溢出标志位 OF = Cn ^ Cn-1 = (A[n-1] && B[n-1] && ~sum[n-1]) + (~A[n-1] && ~B[n-1] && sum[n-1]);
assign OF = (a[63] && b[63] && ~f[63]) + (~a[63] && ~b[63] && f[63]);
// 符号标志位 和的符号 SF = Fn-1
assign SF = f[63];
// 零标志位 当且仅当 F = 0;
assign ZF = ~(|f); // 规约操作
// 进位/借位标志位 CF = Cout ^ Cin 。当Cin = 0时，CF为进位Cout，当Cin = 1时，CF为进位Cout取反
assign CF = cout ^ cin;
endmodule

module ALUctr(
	input  [ 5: 0] ALUctr,
	output         SUBctr,
	output         SIGctr,
	output [ 3: 0] OPctr    
);

///////////////////////////
// result
///////////////////////////
// wire Add_result ; // never use
wire slt_result ;
wire sltu_result;
wire or_result  ;
wire sub_result ;
wire bge_result ;
wire bgeu_result;
wire xor_result ;
wire and_result ;
wire sll_result ;
wire srl_result ;
wire sra_result ;
wire srcB_result;
// assign Add_result  = ~ALUctr[5] & ~ALUctr[4] & ~ALUctr[3]  & ~ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 000000 never use
assign slt_result  = ~ALUctr[5] & ~ALUctr[4] & ~ALUctr[3]  & ~ALUctr[2] &  ALUctr[1] & ~ALUctr[0]; // 000010
assign sltu_result = ~ALUctr[5] & ~ALUctr[4] & ~ALUctr[3]  & ~ALUctr[2] &  ALUctr[1] &  ALUctr[0]; // 000011
assign or_result   = ~ALUctr[5] & ~ALUctr[4] & ~ALUctr[3]  &  ALUctr[2] &  ALUctr[1] & ~ALUctr[0]; // 000110
assign sub_result  = ~ALUctr[5] & ~ALUctr[4] &  ALUctr[3]  & ~ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 001000
assign bge_result  =  ALUctr[5] &  ALUctr[4] & ~ALUctr[3]  & ~ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 110000
assign bgeu_result =  ALUctr[5] &  ALUctr[4] &  ALUctr[3]  & ~ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 111000
assign xor_result  = ~ALUctr[5] &  ALUctr[4] & ~ALUctr[3]  & ~ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 010000
assign and_result  = ~ALUctr[5] &  ALUctr[4] & ~ALUctr[3]  &  ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 010100
assign sll_result  = ~ALUctr[5] &  ALUctr[4] &  ALUctr[3]  & ~ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 011000
assign srl_result  = ~ALUctr[5] &  ALUctr[4] &  ALUctr[3]  &  ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 011100
assign sra_result  =  ALUctr[5] & ~ALUctr[4] & ~ALUctr[3]  & ~ALUctr[2] & ~ALUctr[1] & ~ALUctr[0]; // 100000
assign srcB_result = ~ALUctr[5] & ~ALUctr[4] &  ALUctr[3]  &  ALUctr[2] &  ALUctr[1] &  ALUctr[0]; // 001111

///////////////////////////
// SUBctr
///////////////////////////
assign SUBctr = slt_result  |
				sltu_result |
				sub_result  |
				bge_result  |
				bgeu_result ;
						 
///////////////////////////
// SIGctr
///////////////////////////
assign SIGctr = slt_result  |   
				bge_result  ;  

///////////////////////////
// OPctr
///////////////////////////

// vision
assign OPctr[3] = bge_result  |
				  bgeu_result |
				  sra_result  ;
						
assign OPctr[2] = bge_result  |
                  bgeu_result |
				  xor_result  |
				  and_result  |
				  sll_result  |
				  srl_result  ;
						
assign OPctr[1] = srcB_result |  
                  slt_result  |
				  sltu_result |
                  bgeu_result |
				  sll_result  |
				  srl_result  ;
						
assign OPctr[0] = or_result   | 
                  and_result  |
				  srl_result  |
				  slt_result  |
				  sltu_result ;

endmodule

import "DPI-C" function void c_trap(input bit done);

module Control(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
	input  [`OP_WIDTH:    0] OP    ,
	input  [`FUNCT3_WIDTH:0] funct3,
    input  [`FUNCT7_WIDTH:0] funct7,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
	output [ 1: 0] Branch  ,
	output         Jump    ,
	output         jalrctr ,
	output         ALUASrc ,
	output [ 1: 0] ALUBSrc ,
	output [ 5: 0] ALUctr  ,
	output [ 2: 0] MemtoReg,
	output         RegWr   ,
	output         MemWr   ,
	output [ 1: 0] MUXStore,
	output [ 2: 0] ExtOp
);

wire Rtype   ;
wire ItypeALU;
wire lui     ;
wire auipc   ;
wire Load    ;
wire Store   ;
wire Btype   ;
wire jal     ;
wire jalr    ;
wire Env     ;
DecodeOP DecodeOP0(
	.OP(OP)            ,
	.Rtype(Rtype)      ,
	.ItypeALU(ItypeALU),
	.lui(lui)          ,
	.auipc(auipc)      ,
	.Load(Load)        ,
	.Store(Store)      ,
	.Btype(Btype)      ,
	.jal(jal)          ,
	.jalr(jalr)        ,
    .Env(Env)
);

///////////////////////////
// Branch
///////////////////////////
assign Branch[1] = (Btype &  funct3[2]) |
				   (Btype &  funct3[0]);
assign Branch[0] = (Btype &  funct3[2]) |
				   (Btype & ~funct3[0]);

///////////////////////////
// Jump
///////////////////////////						 
assign Jump       = jal |
					jalr;
assign jalrctr    = jalr;

///////////////////////////
// ALUASrc
///////////////////////////
assign ALUASrc    = jal  |
					jalr |
					auipc;

///////////////////////////
// ALUBSrc
///////////////////////////
assign ALUBSrc[1] = ItypeALU |
					lui      | 
					auipc    |
					Load     | 
					Store; 
assign ALUBSrc[0] = jal |
					jalr;

///////////////////////////
// ALUctr
///////////////////////////
assign ALUctr[5]  = ((Rtype | ItypeALU)  & ( funct3[2] & ~funct3[1] &  funct3[0] &  funct7[5])) | // sra srai 
					( Btype              & ( funct3[2]              &  funct3[0]             )) ; // bge bgeu
						  
assign ALUctr[4]  = ((Rtype | ItypeALU)  & ( funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[5])) | // srl srli
					((Rtype | ItypeALU)  & ( funct3[2] &  funct3[1] &  funct3[0]             )) | // and andi
					((Rtype | ItypeALU)  & (~funct3[2] & ~funct3[1] &  funct3[0]             )) | // sll slli
					((Rtype | ItypeALU)  & ( funct3[2] & ~funct3[1] & ~funct3[0]             )) | // xor xori
					( Btype              & ( funct3[2]              &  funct3[0]             )) ; // bge bgeu
						  
assign ALUctr[3]  = ((Rtype | ItypeALU)  & ( funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[5])) | // srl srli
					((Rtype | ItypeALU)  & (~funct3[2] & ~funct3[1] &  funct3[0]             )) | // sll slli
					( Rtype              & (~funct3[2] & ~funct3[1] & ~funct3[0] &  funct7[5])) | // sub						   
					( Btype              & (~funct3[2]                                       )) | // beq bne
					( Btype              & (              funct3[1] &  funct3[0]             )) | // bgeu
					  lui                                                                       ; // lui
						  
assign ALUctr[2]  = ((Rtype | ItypeALU)  & ( funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[5])) | // srl srli
					((Rtype | ItypeALU)  & ( funct3[2] &  funct3[1]                          )) | // and andi or ori
					  lui                                                                       ; // lui
							 
assign ALUctr[1]  = ((Rtype | ItypeALU)  & (~funct3[2] &  funct3[1]                          )) | // slt slti sltu sltiu
                    ((Rtype | ItypeALU)  & ( funct3[2] &  funct3[1] & ~funct3[0]             )) | // or  ori 
					( Btype              & ( funct3[2]              & ~funct3[0]             )) | // blt bltu
					  lui                                                                       ; // lui
							 
assign ALUctr[0]  = ((Rtype | ItypeALU)  & (~funct3[2] &  funct3[1] &  funct3[0]             )) | // sltu sltiu 
					( Btype              & ( funct3[2] &  funct3[1] & ~funct3[0]             )) | // bltu			 
                      lui                                                                       ; // lui

///////////////////////////
// MemtoReg
///////////////////////////
assign MemtoReg[2] = (Load &  funct3[2]                           ) ; // lbu lhu
assign MemtoReg[1] = (Load & ~funct3[2] & ~funct3[1]              ) ; // lb  lh
assign MemtoReg[0] = (Load              &  funct3[1]              ) | // lw
                     (Load                            &  funct3[0]) ; // lh  lhu

///////////////////////////
// RegWr
///////////////////////////
assign RegWr      = Rtype    | 
					ItypeALU | 
					lui      | 
					auipc    |
					Load     | 
					jal      |
					jalr;     

///////////////////////////
// MemWr
///////////////////////////
assign MemWr      = Store;

///////////////////////////
// MUX_Store
///////////////////////////
assign MUXStore[1] = Store &  funct3[0]; 
assign MUXStore[0] = Store & ~funct3[1]; 

///////////////////////////
// ExtOp
///////////////////////////
assign ExtOp[2]   = jal   ;
assign ExtOp[1]   = Store | 
					Btype;  
assign ExtOp[0]   = lui   | 
					Btype |
					auipc;

always @(*) begin
        if(Env) c_trap(1);
        else $display("no");
end

endmodule

module DataMemory(
	input          clk,
	input          rst,
	input  [63: 0] DataIn,
	input  [63: 0] Addr,
	input          WrEn,
	output [63: 0] DataOut
	
);

reg [63: 0] mem [0: 31];

// Wirte 
always @(posedge clk or negedge rst) begin 
	if(rst == 1'b0) begin
		mem[ 0] <= 64'h0000_0000;
		mem[ 1] <= 64'h0000_0000;
		mem[ 2] <= 64'h0000_0010;
		mem[ 3] <= 64'h0000_0000;
		mem[ 4] <= 64'h0000_0000;
		mem[ 5] <= 64'h0000_0000;
		mem[ 6] <= 64'h0000_0000;
		mem[ 7] <= 64'h0000_0000;
		mem[ 8] <= 64'h0000_0000;
		mem[ 9] <= 64'h0000_0000;
		mem[10] <= 64'h0000_0000;
		mem[11] <= 64'h0000_0000;
		mem[12] <= 64'h0000_0000;
		mem[13] <= 64'h0000_0000;
		mem[14] <= 64'h0000_0000;
		mem[15] <= 64'h0000_0000;
		mem[16] <= 64'h0000_0000;
		mem[17] <= 64'h0000_0000;
		mem[18] <= 64'h0000_0000;
		mem[19] <= 64'h0000_0000;
		mem[20] <= 64'h0000_0000;
		mem[21] <= 64'h0000_0000;
		mem[22] <= 64'h0000_0000;
		mem[23] <= 64'h0000_0000;
		mem[24] <= 64'h0000_0000;
		mem[25] <= 64'h0000_0000;
		mem[26] <= 64'h0000_0000;
		mem[27] <= 64'h0000_0000;
		mem[28] <= 64'h0000_0000;
		mem[29] <= 64'h0000_0000;
		mem[30] <= 64'h0000_0000;
		mem[31] <= 64'h0000_0000;
	end
	else begin
		if(WrEn) begin
			mem[Addr] <= DataIn;
		end
	end
end

// Readout 
assign DataOut = (rst == 1'b1) ? 64'b0 : mem[Addr]; 

endmodule

module DecodeOP(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
	input  [`OP_WIDTH:0] OP,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
	output Rtype     ,
	output ItypeALU  ,
	output lui       ,
	output auipc     ,
	output Load      ,
	output Store     ,
	output Btype     ,
	output jal       ,
	output jalr      ,
    output Env
);

assign Rtype    = ~OP[6] &  OP[5] &  OP[4] & ~OP[3] & ~OP[2] &  OP[1] &  OP[0]; // R - type         0110011
assign ItypeALU = ~OP[6] & ~OP[5] &  OP[4] & ~OP[3] & ~OP[2] &  OP[1] &  OP[0]; // I - type - ALU   0010011
assign lui      = ~OP[6] &  OP[5] &  OP[4] & ~OP[3] &  OP[2] &  OP[1] &  OP[0]; // U - type - lui   0110111
assign auipc    = ~OP[6] & ~OP[5] &  OP[4] & ~OP[3] &  OP[2] &  OP[1] &  OP[0]; // U - type - auipc 0010111
assign Load     = ~OP[6] & ~OP[5] & ~OP[4] & ~OP[3] & ~OP[2] &  OP[1] &  OP[0]; // Load             0000011
assign Store    = ~OP[6] &  OP[5] & ~OP[4] & ~OP[3] & ~OP[2] &  OP[1] &  OP[0]; // Store -    sw    0100011
assign Btype    =  OP[6] &  OP[5] & ~OP[4] & ~OP[3] & ~OP[2] &  OP[1] &  OP[0]; // B - type - beq   1100011
assign jal      =  OP[6] &  OP[5] & ~OP[4] &  OP[3] &  OP[2] &  OP[1] &  OP[0]; // J - type - jal   1101111
assign jalr     =  OP[6] &  OP[5] & ~OP[4] & ~OP[3] &  OP[2] &  OP[1] &  OP[0]; // I - type - jalr  1100111
assign Env      =  OP[6] &  OP[5] &  OP[4] & ~OP[3] & ~OP[2] &  OP[1] &  OP[0]; // I - type - jalr  1100111

endmodule

module EX_M(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    input clk,
    input rst,

    input [`PC_WIDTH :0] Target_in,
    input                Zero_in,
    input [`ALU_WIDTH:0] ALUout_in,
    input [`ALU_WIDTH:0] busB_in,
    input [`RD_WIDTH :0] rd_in,

    input [2:0] MemtoReg_in,
    input [1:0] MUXStore_in,
    input       MemWr_in,
    input       Jump_in,
    input [1:0] Branch_in,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    output reg [`PC_WIDTH :0] Target_out,
    output reg                Zero_out,
    output reg [`ALU_WIDTH:0] ALUout_out,
    output reg [`ALU_WIDTH:0] busB_out,
    output reg [`RD_WIDTH :0] rd_out,

    output reg [2:0] MemtoReg_out,
    output reg [1:0] MUXStore_out,
    output reg       MemWr_out,
    output reg       Jump_out,
    output reg [1:0] Branch_out
);

always @(posedge clk or negedge rst) begin
    if (rst == 1'b0) begin
        Target_out   <= `ZERO_32;
        Zero_out     <= `ZERO_1;
        ALUout_out   <= `ZERO_32;
        busB_out     <= `ZERO_32;
        rd_out       <= `ZERO_5 ;
        MemtoReg_out <= `ZERO_3 ;
        MUXStore_out <= `ZERO_2 ;
        MemWr_out    <= `ZERO_1 ;
        Jump_out     <= `ZERO_1 ;
        Branch_out   <= `ZERO_2 ;
    end
    else begin
        Target_out   <= Target_in  ;
        Zero_out     <= Zero_in    ;
        ALUout_out   <= ALUout_in  ;
        busB_out     <= busB_in    ;
        rd_out       <= rd_in      ;
        MemtoReg_out <= MemtoReg_in;
        MUXStore_out <= MUXStore_in;
        MemWr_out    <= MemWr_in   ;
        Jump_out     <= Jump_in    ;
        Branch_out   <= Branch_in  ;
    end
end

endmodule

module EX_Stage(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    // From ID_EX_Data
    input  [`PC_WIDTH        :0] pc     ,
    input  [`REG_WIDTH       :0] busA   ,
    input  [`REG_WIDTH       :0] busB_in,
    input  [`IMM_EXTEND_WIDTH:0] imm    ,
    input  [`RD_WIDTH        :0] rd_in  ,
    // From ID_EX_Control
    // Next
    input  [2:0] MemtoReg_in,
    input  [1:0] MUXStore_in,
    input        MemWr_in   ,
    input        Jump_in    ,
    input  [1:0] Branch_in  ,
    // NOW
    input        jalrctr ,
    input  [5:0] ALUctr  ,
    input  [1:0] ALUBSrc ,
    input        ALUASrc ,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    // To ID_EX_Data
    output [`PC_WIDTH :0] Target  ,
    output                Zero    ,
    output [`ALU_WIDTH:0] ALUout  , 
    output [`REG_WIDTH:0] busB_out,
    output [`RD_WIDTH :0] rd_out  ,
    // TO ID_EX_Control
    output [2:0] MemtoReg_out,
    output [1:0] MUXStore_out,
    output       MemWr_out   ,
    output       Jump_out    ,
    output [1:0] Branch_out  
);

wire [`PC_WIDTH:0] offset1;
MUX21_32 MUX21_32_jalctr(
	.in0(pc)        ,
	.in1(busA)      ,
	.select(jalrctr),
	.out(offset1)
);

assign Target = offset1 + imm;

wire [`ALU_WIDTH:0] ALU_src1;
MUX21_32 MUX21_32_ALUASrc(
	.in0(busA)      ,
	.in1(pc)        ,
	.select(ALUASrc),
	.out(ALU_src1)
);

wire [`ALU_WIDTH:0] ALU_src2;
MUX31_32 MUX31_32_ALUBSrc(
	.in0(busB_in)      ,
	.in1(64'h4)     ,
	.in2(imm)       ,
	.select(ALUBSrc),
	.out(ALU_src2)
);

ALU ALU0(
	.ALU_src1(ALU_src1),
	.ALU_src2(ALU_src2),
	.ALUctr(ALUctr)    ,
	.ALU_Result(ALUout),
	.ALU_Zero(Zero)
);

assign rd_out   = rd_in  ;
assign busB_out = busB_in;
assign MemtoReg_out = MemtoReg_in;
assign MUXStore_out = MUXStore_in;
assign MemWr_out    = MemWr_in   ; 
assign Jump_out     = Jump_in    ;
assign Branch_out   = Branch_in  ;

endmodule

module Extend(
	input  [`INSTR_WIDTH     :0] Instr,
	input  [2               :0] ExtOp,
	output [`IMM_EXTEND_WIDTH:0] imm
);

wire [63: 0] immI;
wire [63: 0] immU;
wire [63: 0] immS;
wire [63: 0] immB;
wire [63: 0] immJ;
 
assign immI = {{52{Instr[31]}}, Instr[31:20]};
assign immU = {{32{Instr[31]}}, Instr[31:12], 12'b0       };
assign immS = {{52{Instr[31]}}, Instr[31:25], Instr[11: 7]};
assign immB = {{52{Instr[31]}}, Instr[7]    , Instr[30:25], Instr[11: 8], 1'b0};
assign immJ = {{44{Instr[31]}}, Instr[19:12], Instr[20]   , Instr[30:21], 1'b0};

assign imm = (ExtOp == 3'b000) ? immI :
			 (ExtOp == 3'b001) ? immU :
			 (ExtOp == 3'b010) ? immS :
			 (ExtOp == 3'b011) ? immB :
			 (ExtOp == 3'b100) ? immJ :
			             64'h0000_0000; 

endmodule

module ID_EX(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    // From PLL
    input  clk,
    input  rst,
    // From ID_Stage_Data
    input  [`PC_WIDTH        :0] pc_in  ,
    input  [`REG_WIDTH       :0] busA_in,
    input  [`REG_WIDTH       :0] busB_in,
    input  [`IMM_EXTEND_WIDTH:0] imm_in ,
    input  [`RD_WIDTH        :0] rd_in  ,
    // From ID_Stage_Control
    input  [2:0] MemtoReg_in,
    input  [1:0] MUXStore_in,
    input        MemWr_in   ,
    input        Jump_in    ,
    input  [1:0] Branch_in  ,
    input        jalrctr_in ,
    input  [5:0] ALUctr_in  ,
    input  [1:0] ALUBSrc_in ,
    input        ALUASrc_in ,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    // To ID_Stage_Data
    output reg [`PC_WIDTH        :0] pc_out  ,
    output reg [`REG_WIDTH       :0] busA_out,
    output reg [`REG_WIDTH       :0] busB_out,
    output reg [`IMM_EXTEND_WIDTH:0] imm_out ,
    output reg [`RD_WIDTH        :0] rd_out  ,
    // To ID_Stage_Control
    output reg [2:0] MemtoReg_out,
    output reg [1:0] MUXStore_out,
    output reg       MemWr_out   ,
    output reg       Jump_out    ,
    output reg [1:0] Branch_out  ,
    output reg       jalrctr_out ,
    output reg [5:0] ALUctr_out  ,
    output reg [1:0] ALUBSrc_out ,
    output reg       ALUASrc_out 
    
);

always @(posedge clk or negedge rst) begin
    if (rst == 1'b0) begin
        pc_out       <= `ZERO_32;
        busA_out     <= `ZERO_32;
        busB_out     <= `ZERO_32;
        imm_out      <= `ZERO_32;
        rd_out       <= `ZERO_5 ;
        MemtoReg_out <= `ZERO_3 ;
        MUXStore_out <= `ZERO_2 ;
        MemWr_out    <= `ZERO_1 ;
        Jump_out     <= `ZERO_1 ;
        Branch_out   <= `ZERO_2 ;
        jalrctr_out  <= `ZERO_1 ;
        ALUctr_out   <= `ZERO_6 ;
        ALUBSrc_out  <= `ZERO_2 ;
        ALUASrc_out  <= `ZERO_1 ;
    end
    else begin
        pc_out       <= pc_in      ;
        busA_out     <= busA_in    ;
        busB_out     <= busB_in    ;
        imm_out      <= imm_in     ;
        rd_out       <= rd_in      ;
        MemtoReg_out <= MemtoReg_in;
        MUXStore_out <= MUXStore_in;
        MemWr_out    <= MemWr_in   ;
        Jump_out     <= Jump_in    ;
        Branch_out   <= Branch_in  ;
        jalrctr_out  <= jalrctr_in ;
        ALUctr_out   <= ALUctr_in  ;
        ALUBSrc_out  <= ALUBSrc_in ;
        ALUASrc_out  <= ALUASrc_in ;
    end
end

endmodule

module ID_Stage(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    // From PLL
    input  clk,
//    input  rst,
    // From IF_ID
    input  [`PC_WIDTH   : 0] pc_in,
    input  [`INSTR_WIDTH: 0] Instr,
    // From WB_Stage
    input  [`WADDR_WIDTH:0] waddr,
    input  [`REG_WIDTH  :0] busW ,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    // Data To ID_EX
    output [`PC_WIDTH        :0] pc_out,
    output [`REG_WIDTH       :0] busA,
    output [`REG_WIDTH       :0] busB,
    output [`IMM_EXTEND_WIDTH:0] imm,
    output [`RD_WIDTH        :0] rd,
    // Control To ID_EX
    output [2:0] MemtoReg,
    output [1:0] MUXStore,
    output       MemWr,
    output       Jump,
    output [1:0] Branch,
    output       jalrctr,
    output [5:0] ALUctr,
    output [1:0] ALUBSrc,
    output       ALUASrc
);

wire [`OP_WIDTH    :0] op;
wire [`FUNCT3_WIDTH:0] funct3;
wire [`RS1_WIDTH   :0] rs1;
wire [`RS2_WIDTH   :0] rs2;
wire [`FUNCT7_WIDTH:0] funct7;
assign op     = Instr[ 6: 0];
assign rd     = Instr[11: 7];
assign funct3 = Instr[14:12];
assign rs1    = Instr[19:15];
assign rs2    = Instr[24:20];
assign funct7 = Instr[31:25];

wire       RegWr;
wire [2:0] ExtOp;

Registers Registers0(
	.clk(clk)    ,
//	.rst(rst)    ,
	.raddr1(rs1) ,
	.rdata1(busA),
	.raddr2(rs2) ,
	.rdata2(busB),
	.we(RegWr)   ,
	.waddr(waddr) ,
	.wdata(busW)
);

Control Control0(
	.OP(op),
	.funct3(funct3),
	.funct7(funct7),
	.Branch(Branch),
	.Jump(Jump),
	.jalrctr(jalrctr),
	.ALUASrc(ALUASrc),
	.ALUBSrc(ALUBSrc),
	.ALUctr(ALUctr),
	.MemtoReg(MemtoReg),
	.RegWr(RegWr),
	.MemWr(MemWr),
	.MUXStore(MUXStore),
	.ExtOp(ExtOp)
);

Extend Extend0(
	.Instr(Instr),
	.ExtOp(ExtOp),
	.imm(imm)
);

assign pc_out = pc_in;

endmodule

module IF_ID(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    // From PLL
    input  clk,
    input  rst,
    // From IF_Stage
    input  [`PC_WIDTH:   0] pc_in,
    input  [`INSTR_WIDTH:0] Instr_in,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    // To ID_Stage
    output reg [`PC_WIDTH:   0] pc_out,
    output reg [`INSTR_WIDTH:0] Instr_out

);

always @(posedge clk or negedge rst) begin
    if (rst == 1'b0) begin
        pc_out    <= `PC_START_VALUE   ;
        Instr_out <= `INSTR_START_VALUE;
    end
    else begin
        pc_out    <= pc_in   ;
        Instr_out <= Instr_in;
    end
end

endmodule

module IF_Stage(
	///////////////////////////////
	// INPUT
	///////////////////////////////
	// From PLL
	input  clk,
	input  rst,
	// From M_Stage
	input  [`PC_WIDTH   :0] Target,
	input  BJcondition,
	
	///////////////////////////////
	// OUTPUT
	///////////////////////////////
    // To IF_ID
	output [`PC_WIDTH   :0] pc
//	output [`INSTR_WIDTH:0] instr 

);

wire [`PC_WIDTH:0] pc_next;
wire [`PC_WIDTH:0] pc_now;
PC_Unit PC_Unit0(
	.clk(clk)     ,
	.rst(rst)     ,
	.pcin(pc_next),
	.pcout(pc_now)
);

wire [`PC_WIDTH:0] pc_add_four;
assign pc_add_four = pc_now + 64'h4;
MUX21_32 MUX21_32_PCNext(
	.in0(pc_add_four)   ,
	.in1(Target)        ,
	.select(BJcondition),
	.out(pc_next)
);

assign pc = pc_now;

endmodule

module M_Stage(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    input clk,
    input rst,

    input                Zero,
    input [`ALU_WIDTH:0] ALUout_in,
    input [`ALU_WIDTH:0] busB,
    input [`RD_WIDTH :0] rd_in,
    
    input [2:0] MemtoReg_in,
    input [1:0] MUXStore,
    input       MemWr,
    input       Jump,
    input [1:0] Branch,
    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    output [`DATA_MEM_WIDTH:0] Dataout,
    output [`ALU_WIDTH     :0] ALUout_out,
    output [`RD_WIDTH      :0] rd_out,

    output [2:0] MemtoReg_out,
    output       BJcondition

);

assign BJcondition = (((Branch == 2'b01) &  Zero) | Jump) |
					 (((Branch == 2'b10) & ~Zero) | Jump) |
					 (( Branch == 2'b11         ) | Jump) ;

wire [63: 0] mux_Store;
MUXStore MUXStore0(
	.in(busB),
	.select(MUXStore),
	.out(mux_Store)
);

DataMemory DataMemory0(
	.clk(clk)         ,
	.rst(rst)         ,
	.DataIn(mux_Store),
	.Addr(ALUout_in)  ,
	.WrEn(MemWr)      ,
	.DataOut(Dataout)
);

assign rd_out     = rd_in;
assign ALUout_out = ALUout_in;
assign MemtoReg_out = MemtoReg_in;

endmodule

module M_WB(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    input clk,
    input rst,

    input [`DATA_MEM_WIDTH:0] Dataout_in,
    input [`ALU_WIDTH     :0] ALUout_in,
    input [`RD_WIDTH      :0] rd_in,

    input [2:0] MemtoReg_in,
    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    output reg [`DATA_MEM_WIDTH:0] Dataout_out,
    output reg [`ALU_WIDTH     :0] ALUout_out,
    output reg [`RD_WIDTH      :0] rd_out,

    output reg [2:0] MemtoReg_out
);

always @(posedge clk or negedge rst) begin
    if (rst == 1'b0) begin
        Dataout_out  <= `ZERO_32;
        ALUout_out   <= `ZERO_32;
        rd_out       <= `ZERO_5 ; 
        MemtoReg_out <= `ZERO_3 ; 
    end
    else begin
        Dataout_out  <= Dataout_in;
        ALUout_out   <= ALUout_in;
        rd_out       <= rd_in ; 
        MemtoReg_out <= MemtoReg_in ; 
    end
end

endmodule

module MUX21_1(
	input  in0,
	input  in1,
	input  select,
	output out 
);

assign out = (select == 1'b1) ? in1 : in0;

endmodule

module MUX21_32(
	input  [63: 0] in0,
	input  [63: 0] in1,
	input          select,
	output [63: 0] out
);

assign out = (select == 1'b1) ? in1 : in0;

endmodule

module MUX31_32(
	input  [63: 0] in0,
	input  [63: 0] in1,
	input  [63: 0] in2,
	input  [ 1: 0] select,
	output [63: 0] out
);

assign out = (select == 2'b00) ? in0 : 
			 (select == 2'b01) ? in1 :
			 (select == 2'b10) ? in2 :
								64'b0;

endmodule

module MUXMemtoReg(
    input  [63: 0] in1,
    input  [63: 0] in2,
    input  [ 2: 0] select,
    output [63: 0] out
);

assign out = (select == 3'b000) ? in1                        :
			 (select == 3'b001) ? in2                        :
			 (select == 3'b010) ? {{56{in2[ 7]}}, in2[ 7:0]} :
			 (select == 3'b011) ? {{48{in2[15]}}, in2[15:0]} :
			 (select == 3'b100) ? {56'b0, in2[ 7:0]}         :
			 (select == 3'b101) ? {48'b0, in2[15:0]}         :
			                      64'b0                   ;

endmodule

module MUXStore(
	input  [63: 0] in,
	input  [ 1: 0] select,
	output [63: 0] out
);

assign out = (select == 2'b00) ? in                        : 
			 (select == 2'b01) ? {{56{in[ 7]}}, in[ 7: 0]} :
		     (select == 2'b11) ? {{48{in[15]}}, in[15: 0]} :
								 64'b0                     ;

endmodule

module PC_Unit(
	input              clk,
	input              rst,
	input      [63: 0] pcin,
	output reg [63: 0] pcout
);

always @(posedge clk or negedge rst) begin
	if(rst == 1'b0) begin 
		pcout <= 64'h8000_0000;
	end
	else begin
		pcout <= pcin;
	end
end

endmodule

module Registers(
	input          clk,
//	input          rst,
	input  [ 4: 0] raddr1,
	output [63: 0] rdata1,
	input  [ 4: 0] raddr2,
	output [63: 0] rdata2,
	input          we,
	input  [ 4: 0] waddr,
	input  [63: 0] wdata
);

parameter ADDR_WIDTH = 5 ;

reg [63:0] rf [(1 << ADDR_WIDTH)-1:0];

assign  rdata1 = (raddr1 == 0) ? 0 : rf[raddr1];
assign  rdata2 = (raddr2 == 0) ? 0 : rf[raddr2]; 

always @(posedge clk) begin
    if (we) rf[waddr] <= wdata;
  end

 import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量 

endmodule

module WB_Stage(
    ///////////////////////////////
	// INPUT
	///////////////////////////////
    input [`DATA_MEM_WIDTH:0] Dataout,
    input [`ALU_WIDTH     :0] ALUout,
    input [`RD_WIDTH      :0] rd_in,

    input [2:0] MemtoReg,

    ///////////////////////////////
	// OUTPUT
	///////////////////////////////
    output [`WB_OUT_WIDTH:0] busW,
    output [`RD_WIDTH:0]     rd_out
);

MUXMemtoReg MUXMemtoReg0(
    .in1(ALUout),
    .in2(Dataout),
    .select(MemtoReg),
    .out(busW)
);

assign rd_out = rd_in;

endmodule

