/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module top(
  input clk,
  input rst,
  input [31: 0]instr_i,
  output [63: 0] pc
);
    mytest s;
    ysyx_22040038_IF my_if(
    .clk(clk),
    .rst(rst),
    .pc(pc)
    );
wire [6:0] op, func7;
wire [4:0] rd, rs1, rs2;
wire [2:0] func3;
wire [63:0] immI, immS, immJ, immB;
wire wen;
    ysyx_22040038_ID my_id(
      .instr_i(instr_i),
      .op(op),
      .rd(rd),
      .rs1(rs1),
      .rs2(rs2),
      .func3(func3),
      .func7(func7),
      .immI(immI),
      .immS(immS),
      .immJ(immJ),
      .immB(immB),
      .wen(wen)
    );
    ysyx_22040038_EX my_ex(
      .clk(clk),
      .rd(rd),
      .rs1(rs1),
      .rs2(rs2),
      .wen(wen),
      .immI(immI)
    );
    initial begin
        $dumpfile("obj_dir/vtop.vcd");
        $dumpvars();
    end
endmodule
