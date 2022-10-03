
module ysyx_22040038_IF(
    input clk,
    input rst,
    output [63:0] pc
);
    wire [63:0] now_pc, dnpc;
    assign dnpc = now_pc + 4;
    assign pc = now_pc;
    ysyx_22040038_Reg #(64, 64'h80000000) PC(.clk(clk), .rst(rst), dnpc, now_pc, 1'b1);
endmodule
