module top(
    input   clk,
    input   rst,
	input	[31:0] inst,
	output	[63:0] pc
);

wire [63:0] nextpc;
// IFU
ysyx_22040088_IFU u_ysyx_22040088_IFU(
	.clk    (clk    ),
	.rst    (rst    ),
	.nextpc (nextpc ),
	.pc     (pc     )
);

// 控制信号
wire [10:0] alu_op;
wire [ 6:0] sel_nextpc;
wire [ 1:0] sel_alusrc1;
wire [ 3:0] sel_alusrc2;
// 数据
wire [63:0] rf_rdata1;
wire [63:0] rf_rdata2;
wire [11:0] immI;
wire [20:0] immJ;
wire [19:0] immU;
wire [12:0] immB;
wire [63:0] rf_wdata;
wire [63:0] alu_result;
// IDU
assign rf_wdata = alu_result;
ysyx_22040088_IDU u_ysyx_22040088_IDU(
	.clk         (clk         ),
	.inst        (inst        ),
	.rf_wdata    (rf_wdata    ),
	.alu_op      (alu_op      ),
	.sel_nextpc  (sel_nextpc  ),
	.sel_alusrc1 (sel_alusrc1 ),
	.sel_alusrc2 (sel_alusrc2 ),
	.rf_rdata1   (rf_rdata1   ),
	.rf_rdata2   (rf_rdata2   ),
	.immI        (immI        ),
	.immJ        (immJ        ),
	.immU        (immU        ),
	.immB        (immB        )
);

// EXU
ysyx_22040088_EXU u_ysyx_22040088_EXU(
	.pc          (pc          ),
	.alu_op      (alu_op      ),
	.sel_nextpc  (sel_nextpc  ),
	.sel_alusrc1 (sel_alusrc1 ),
	.sel_alusrc2 (sel_alusrc2 ),
	.rf_rdata1   (rf_rdata1   ),
	.rf_rdata2   (rf_rdata2   ),
	.immI        (immI        ),
	.immJ        (immJ        ),
	.immU        (immU        ),
	.immB        (immB        ),
	.alu_result  (alu_result  ),
	.nextpc      (nextpc      )
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

// inst
import "DPI-C" function void get_inst(int inst);
always@(*) begin
	get_inst(inst);
end


endmodule
