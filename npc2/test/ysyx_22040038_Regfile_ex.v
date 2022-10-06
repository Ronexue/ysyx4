/* verilator lint_off DECLFILENAME */
module ysyx_22040038_Regfile_ex #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,

  input [ADDR_WIDTH-1:0] raaddr,
  input [ADDR_WIDTH-1:0] rbaddr,
  output [DATA_WIDTH-1:0] radata,
  output [DATA_WIDTH-1:0] rbdata,

  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen
);
  reg [DATA_WIDTH-1:0] rf [(1 << ADDR_WIDTH)-1:0];

  assign  radata = (raaddr == 0) ? 0 : rf[raaddr];
  assign  rbdata = (rbaddr == 0) ? 0 : rf[rbaddr];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

endmodule
