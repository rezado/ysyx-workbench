module ysyx_22040088_IFU(
    input       clk,
    input       rst,
	input [63:0] nextpc,
    output [63:0] pc,
	output reg [31:0] inst
);

ysyx_22040088_pc u_ysyx_22040088_pc(
	.clk    (clk    ),
	.rst    (rst    ),
	.pc_src (nextpc ),
	.pc_out (pc     )
);

import "DPI-C" function void npc_read(
  input longint raddr, output longint rdata);
wire [63:0] inst_data;

always @(posedge clk) begin
	if (!rst) begin
		npc_read(pc, inst_data);
		$display("IF read");
	end
end

always @(posedge clk) begin
	if (pc[2:0] == 3'b000) begin
		inst <= inst_data[31:0];
	end
	else if (pc[2:0] == 3'b100) begin
		inst <= inst_data[63:32];
	end
    else begin
		inst <= 32'b1;
	end
end

endmodule
