/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
/* verilator lint_off WIDTH */
/* verilator lint_off MODDUP */
/* verilator lint_off SELRANGE */

module top(
  input clk,
  input rst,
  input [31: 0]instr_i,
  output [63: 0] pc
);

wire [63: 0] busA;
wire [63: 0] busB;
wire [63: 0] busW;

wire [63: 0] pcin; 
//wire [63: 0] pcout;
pcunit pcunit0(
	.clk(clk)    ,
	.rst(rst)    ,
	.pcin(pcin)  ,
	.pc(pc)
);

/* wire [31: 0] Instr;
instrmemory instrmemory0(
	.clk(clk)        ,
	.rst(rst)        ,
	//.InstrIn(InstrIn),
	.Addr(pcout[31: 2])     ,
	.Instr(Instr)
); */


wire [ 6: 0] OP    ;
wire [ 4: 0] Rd    ;
wire [ 2: 0] funct3;
wire [ 6: 0] funct7;
wire [ 4: 0] Rs1   ;
wire [ 4: 0] Rs2   ;
wire [ 1: 0] Branch;
wire         Jump;
wire         jalrctr;
wire         ALUASrc;
wire [ 1: 0] ALUBSrc;
wire [ 5: 0] ALUctr;
wire [ 2: 0] MemtoReg;
wire         RegWr;
wire         MemWr;
wire [ 1: 0] MUXStore;
wire [ 2: 0] ExtOp;
assign OP     = instr_i[ 6: 0];
assign Rd     = instr_i[11: 7];
assign funct3 = instr_i[14:12];
assign funct7 = instr_i[31:25];
assign Rs1    = instr_i[19:15];
assign Rs2    = instr_i[24:20];
registers registers0(
	.clk(clk)    ,
	.rst(rst)    ,
	.raddr1(Rs1) ,
	.rdata1(busA),
	.raddr2(Rs2) ,
	.rdata2(busB),
	.we(RegWr)   ,
	.waddr(Rd)   ,
	.wdata(busW)
);

control control0(
	.OP(OP),
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

wire [63: 0] imm;
extend extend0(
	.instr_i(instr_i),
	.ExtOp(ExtOp),
	.imm(imm)
);

wire [63: 0] ALU_src1;
mux21_32 mux21_32ALUASrc(
	.in0(busA)      ,
	.in1(pc)     ,
	.select(ALUASrc),
	.out(ALU_src1)
);

wire [63: 0] ALU_src2;
mux31 mux31ALUBSrc(
	.in0(busB)      ,
	.in1(63'h4)     ,
	.in2(imm)       ,
	.select(ALUBSrc),
	.out(ALU_src2)
);

wire         ALU_Zero;
wire [63: 0] ALU_Result;
ALU ALU0(
	.ALU_src1(ALU_src1)    ,
	.ALU_src2(ALU_src2)    ,
	.ALUctr(ALUctr)        ,
	.ALU_Result(ALU_Result),
	.ALU_Zero(ALU_Zero)
);

pcnext pcnext0(
	.pcin(pc)     ,
	.busA(busA)    ,
	.imm(imm)      ,
	.Branch(Branch),
	.Jump(Jump)    ,
	.jalrctr(jalrctr),
	.Zero(ALU_Zero),
	.nextpc(pcin)
);

wire [63: 0] mux_Store;
muxStore muxStore0(
	.in(busB),
	.select(MUXStore),
	.out(mux_Store)
);

wire [63: 0] DataOut;
datamemory datamemory0(
	.clk(clk)         ,
	.rst(rst)         ,
	.DataIn(mux_Store),
	.Addr(ALU_Result) ,
	.WrEn(MemWr)      ,
	.DataOut(DataOut)
);

muxMemtoReg muxMemtoReg0(
    .in1(ALU_Result),
    .in2(DataOut),
    .select(MemtoReg),
    .out(busW)
);
    initial begin
        $dumpfile("obj_dir/vtop.vcd");
        $dumpvars();
    end
endmodule

module adder(
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

/*
assign CondAlB = OF ^ SF;

*/

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
assign Adder_src2 = ALU_src2 ^ {63{SUBctr}};
adder adder0(
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
mux21_1 mux21_1_SIGctr(
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

assign ALU_Result = (OPctr == 4'b0000) ? Add_Result      :
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

module control(
	input  [ 6: 0] OP      ,
	input  [ 2: 0] funct3  ,
    input  [ 6: 0] funct7  ,
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
wire Env    ;
decodeOP decodeOP0(
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

module datamemory(
	input          clk,
	input          rst,
	input  [63: 0] DataIn,
	input  [63: 0] Addr,
	input          WrEn,
	output [63: 0] DataOut
	
);

reg [63: 0] mem [0: 31];

// Wirte 
always @(posedge clk or posedge rst) begin 
	if(rst == 1'b1) begin
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

module decodeOP(
	input  [ 6: 0] OP,
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

module extend(
	input	 [31: 0] instr_i,
	input  [ 2: 0] ExtOp,
	output [63: 0] imm
);

wire [63: 0] immI;
wire [63: 0] immU;
wire [63: 0] immS;
wire [63: 0] immB;
wire [63: 0] immJ;
wire [63: 0] immB2;
wire [63: 0] immJ2;
 
assign immI = {{52{instr_i[31]}}, instr_i[31:20]};
assign immU = {{32{instr_i[31]}}, instr_i[31:12] , 12'b0       };
assign immS = {{52{instr_i[31]}}, instr_i[31:25], instr_i[11: 7]};
assign immB = {{52{instr_i[31]}}, instr_i[7]    , instr_i[30:25], instr_i[11: 8], 1'b0};
assign immJ = {{44{instr_i[31]}}, instr_i[19:12], instr_i[20]   , instr_i[30:21], 1'b0};

assign imm = (ExtOp == 3'b000) ? immI :
				 (ExtOp == 3'b001) ? immU :
				 (ExtOp == 3'b010) ? immS :
				 (ExtOp == 3'b011) ? immB :
				 (ExtOp == 3'b100) ? immJ :
				             64'h0000_0000; 

endmodule

/* module instrmemory(
	input              clk,
	input              rst, 
	input      [29: 0] Addr,
	output reg [31: 0] Instr
);

reg [31: 0] mem [0: 255];

always @(posedge clk or posedge rst) begin 
	if(rst == 1'b1) begin
		Instr = 32'b0;
	end
	else begin
		Instr = mem[Addr]; 
	end
end

endmodule */

module mux21_1(
	input  in0,
	input  in1,
	input  select,
	output out 
);

assign out = (select == 1'b1) ? in1 : in0;

endmodule

module mux21_32(
	input  [63: 0] in0,
	input  [63: 0] in1,
	input          select,
	output [63: 0] out
);

assign out = (select == 1'b1) ? in1 : in0;

endmodule

module mux31(
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

module mux81_32(
	input  [63: 0] in0,
	input  [63: 0] in1,
	input  [63: 0] in2,
	input  [63: 0] in3,
	input  [63: 0] in4,
	input  [63: 0] in5,
	input  [63: 0] in6,
	input  [63: 0] in7,
	input  [ 2: 0] select,
	output [63: 0] out
);

assign out = (select == 3'b000) ? in0 : 
				 (select == 3'b001) ? in1 :
				 (select == 3'b010) ? in2 :
				 (select == 3'b011) ? in3 :
				 (select == 3'b100) ? in4 :
				 (select == 3'b101) ? in5 : 
				 (select == 3'b110) ? in6 :
				 (select == 3'b111) ? in7 :
											64'b0;

endmodule

module muxMemtoReg(
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

module muxStore(
	input  [31: 0] in,
	input  [ 1: 0] select,
	output [31: 0] out
);

assign out = (select == 2'b00) ? in                        : 
			 (select == 2'b01) ? {{56{in[ 7]}}, in[ 7: 0]} :
		     (select == 2'b11) ? {{48{in[15]}}, in[15: 0]} :
								 64'b0                     ;

endmodule

module pcnext(
	input  [63: 0] pcin     , 
	input  [63: 0] busA   ,
	input  [63: 0] imm    ,
	input  [ 1: 0] Branch ,
	input          Jump   ,
	input          Zero   ,
	input          jalrctr,
	output [63: 0] nextpc
);

wire BJcondition;
wire [63: 0] offsetA;
wire [63: 0] offsetB;
assign BJcondition = (((Branch == 2'b01) &  Zero) | Jump) |
					 (((Branch == 2'b10) & ~Zero) | Jump) |
					 (( Branch == 2'b11         ) | Jump) ;

mux21_32 mux21_jalr(
	.in0(pcin)        ,
	.in1(busA)      ,
	.select(jalrctr),
	.out(offsetA)
);

mux21_32 mux21_BJ(
	.in0(64'h4)         ,
	.in1(imm)           ,
	.select(BJcondition),
	.out(offsetB)
);

assign nextpc = offsetA + offsetB;

endmodule

module pcunit(
	input              clk,
	input              rst,
	input      [63: 0] pcin,
	output reg [63: 0] pc
);

always @(posedge clk or posedge rst) begin
	if(rst == 1'b1) begin 
		pc <= 64'h8000_0000;
	end
	else begin
		pc <= pcin;
	end
end

endmodule

module registers(
	input          clk,
	input          rst,
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
assign  rdata2 = (rdata1 == 0) ? 0 : rf[rdata1]; 

always @(posedge clk) begin
    if (we) rf[waddr] <= wdata;
  end

import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量

endmodule



