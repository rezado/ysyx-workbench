module top(
    input   clk,
    input   rst,
	output	[63:0] pc
);

wire [63:0] nextpc;
/* verilator lint_off UNUSED */
reg [63:0] inst;
// wire [63:0] inst_data;
// IFU
ysyx_22040088_IFU u_ysyx_22040088_IFU(
	.clk    (clk    ),
	.rst    (rst    ),
	.nextpc (nextpc ),
	.pc     (pc     )
);

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
always @(posedge clk) begin
	if (|pc) begin
		pmem_read(pc, inst);
	end
	$display(inst[31:0]);
end
// always @(posedge clk) begin
// 	inst <= inst_data[31:0];
// end

// 控制信号
wire [10:0] alu_op;
wire [ 6:0] sel_nextpc;
wire [ 1:0] sel_alusrc1;
wire [ 4:0] sel_alusrc2;
// 数据
wire [63:0] rf_rdata1;
wire [63:0] rf_rdata2;
wire [11:0] immI;
wire [20:0] immJ;
wire [19:0] immU;
wire [12:0] immB;
wire [11:0] immS;
wire [63:0] rf_wdata;
wire [63:0] alu_result;
// IDU
wire [2:0] sel_rfres;
wire mem_wen;
wire mem_ena;
wire [3:0] mem_mask;
wire [63:0] mem_rdata;
ysyx_22040088_genrfwdata u_ysyx_22040088_genrfwdata(
	.alu_result  (alu_result  ),
	.mem_rdata   (mem_rdata   ),
	.sel_rfwdata (sel_rfres   ),
	.mem_mask    (mem_mask    ),
	.rf_wdata    (rf_wdata    )
);


ysyx_22040088_IDU u_ysyx_22040088_IDU(
	.clk         (clk         ),
	.inst        (inst[31:0]  ),
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
	.immB        (immB        ),
	.immS		 (immS        ),
	.sel_rfres   (sel_rfres   ),
	.mem_wen     (mem_wen     ),
	.mem_ena     (mem_ena     ),
	.mem_mask    (mem_mask    )
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
	.immS		 (immS        ),
	.alu_result  (alu_result  ),
	.nextpc      (nextpc      )
);


// ebreak
import "DPI-C" function void finish_sim();
wire ebreak;
assign ebreak = (inst[31:0] == 32'b000000000001_00000_000_00000_1110011);
always @(posedge clk) begin
	if (ebreak) begin
		finish_sim();
		$finish();
	end
end

// inst
import "DPI-C" function void get_inst(int inst);
always@(*) begin
	get_inst(inst[31:0]);
end

// memory
mem u_mem(
	.ena      (mem_ena    ),
	.wen      (mem_wen    ),
	.mem_mask (mem_mask ),
	.addr     (alu_result     ),
	.wdata    (rf_rdata2    ),
	.rdata    (mem_rdata    )
);


endmodule
