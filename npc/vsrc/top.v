;module top(
    input   clk,
    input   rst,
	output reg	[63:0] pc
);

reg [63:0] oldpc;
// IFU
ysyx_22040088_IFU u_ysyx_22040088_IFU(
	.clk    (clk    ),
	.rst    (rst    ),
	.nextpc (pc ),
	.pc     (oldpc  )
);

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
/* verilator lint_off UNUSED */
wire [63:0] inst_data;
wire [31:0] inst;
always @(posedge clk) begin
	if (~rst) begin
		pmem_read(pc, inst_data);
		$display("read at ", pc, "inst: ", inst);
	end
end

assign inst = (pc[2:0] == 3'b000) ? inst_data[31:0] :
			  (pc[2:0] == 3'b100) ? inst_data[63:32] :
			  						32'b0;

// always @(*) begin
// 	$display("1");
// 	if(|pc) begin
// 		pmem_read(pc, inst_data);
// 		$display("assign:", inst_data);
// 	end else begin
// 		inst_data = 64'b0;
// 	end
// end

// always @(*) begin
// 	pmem_read(pc, inst_data);
// end

// always @(negedge clk) begin
// 	if (|pc) begin
// 		$display("top:");
// 		pmem_read(pc, inst);
// 		$display(inst);
// 	end
// end
// always @(posedge clk) begin
// 	inst <= inst_data[31:0];
// end

// 控制信号
wire [13:0] alu_op;
wire [ 6:0] sel_nextpc;
wire [ 2:0] sel_alusrc1;
wire [ 6:0] sel_alusrc2;
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
wire       inst_inv;
wire [ 1:0] sel_alures;
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
	.mem_mask    (mem_mask    ),
	.inv         (inst_inv    ),
	.sel_alures  (sel_alures  )
);


// EXU
ysyx_22040088_EXU u_ysyx_22040088_EXU(
	.pc          (oldpc       ),
	.alu_op      (alu_op      ),
	.sel_nextpc  (sel_nextpc  ),
	.sel_alusrc1 (sel_alusrc1 ),
	.sel_alusrc2 (sel_alusrc2 ),
	.sel_alures  (sel_alures  ),
	.rf_rdata1   (rf_rdata1   ),
	.rf_rdata2   (rf_rdata2   ),
	.immI        (immI        ),
	.immJ        (immJ        ),
	.immU        (immU        ),
	.immB        (immB        ),
	.immS		 (immS        ),
	.alu_result  (alu_result  ),
	.nextpc      (pc          )
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

// inv
wire inv;
assign inv = inst_inv & ~ebreak;
import "DPI-C" function void get_inv(int inv);
always @(*) begin
    get_inv({{31{inv}}, inv});
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
