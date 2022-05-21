module top(
    input   clk,
    input   rst,
	input	[31:0] inst,
	output	[63:0] pc
);

// IFU
ysyx_22040088_IFU u_ysyx_22040088_IFU(
<<<<<<< HEAD
	.clk (clk ),
	.rst (rst ),
	.pc  (pc  )
=======
	.clk    (clk    ),
	.rst    (rst    ),
	.nextpc (nextpc ),
	.pc     (pc     )
>>>>>>> npc
);

// 控制信号
wire [11:0] alu_op;
// 数据
wire [63:0] alu_src1, alu_src2;
wire [63:0] rf_wdata;
<<<<<<< HEAD
// IDU
ysyx_22040088_IDU u_ysyx_22040088_IDU(
	.clk      (clk      ),
	// .rst      (rst      ),
=======
wire [63:0] nextpc;
// IDU
ysyx_22040088_IDU u_ysyx_22040088_IDU(
	.clk      (clk      ),
	.pc       (pc       ),
>>>>>>> npc
	.inst     (inst     ),
	.rf_wdata (rf_wdata ),
	.alu_op   (alu_op   ),
	.alu_src1 (alu_src1 ),
<<<<<<< HEAD
	.alu_src2 (alu_src2 )
);

=======
	.alu_src2 (alu_src2 ),
	.nextpc   (nextpc   )
);


>>>>>>> npc
// EXU
ysyx_22040088_EXU u_ysyx_22040088_EXU(
	// .clk        (clk        ),
	// .rst        (rst        ),
	.alu_op     (alu_op     ),
	.alu_src1   (alu_src1   ),
	.alu_src2   (alu_src2   ),
	.alu_result (rf_wdata   )
);

// ebreak
import "DPI-C" function void finish_sim();
wire ebreak;
assign ebreak = (inst == 32'b000000000001_00000_000_00000_1110011);
always @(posedge clk) begin
	if (ebreak) begin
		finish_sim();
		$finish();
	end
end
<<<<<<< HEAD
=======

// inst
import "DPI-C" function void get_inst(int inst);
always@(*) begin
	get_inst(inst);
end

>>>>>>> npc

endmodule
