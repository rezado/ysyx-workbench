module ysyx_22040088_IFU(
    input       clk,
    input       rst,
	input [63:0] branchpc,
	input       branch,
    output [63:0] pc,
	output      jump_o,
	output reg [31:0] inst
);
wire [63:0]nextpc;
wire [63:0]addpc;

ysyx_22040088_pc u_ysyx_22040088_pc(
	.clk    (clk    ),
	.rst    (rst    ),
	.pc_src (nextpc ),
	.pc_out (pc     )
);

assign addpc = pc + 4;

// 简单译码 执行jal指令
// wire jump;
wire [63:0] jumppc;
wire [63:0] offset;
assign offset = {{44{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
assign jump_o = (inst[6:0] == 7'b1101111);
assign jumppc = pc + offset;

// 选择nextpc
assign nextpc = jump_o ? jumppc :
		        branch ? branchpc :
						addpc;

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
	if (!jump_o && pc[2:0] == 3'b000) begin
		inst <= inst_data[31:0];
	end
	else if (!jump_o && pc[2:0] == 3'b100) begin
		inst <= inst_data[63:32];
	end
    else begin
		inst <= 32'b0;
	end
end

endmodule
