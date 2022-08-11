module top(
    input   clk,
    input   rst,
	output [63:0] pc
);
/* verilator lint_off UNUSED */
wire [63:0] pc_out;
wire [31:0] inst;
wire        if_jump;
wire        if_ena;
wire        if_valid;
// IFU
wire [63:0] branchpc;
wire        branch;

assign pc = wb_pc;

wire			icache_rd_req;
wire [ 3:0]   icache_rd_wstrb;
wire [63:0]	icache_rd_addr;
wire [63:0]	icache_ret_data;
wire if_stall;

assign icache_ret_data = mem_rdata;

ysyx_22040088_IFU u_ysyx_22040088_IFU(
	.clk             (clk             ),
	.rst             (rst || ~if_valid ),
	.ena             (if_ena          ),
	.branchpc        (branchpc        ),
	.branch          (branch          ),
	.pc              (pc_out          ),
	.jump_o          (if_jump         ),
	.inst            (inst            ),
	.if_stall        (if_stall        ),
	.icache_rd_req   (icache_rd_req   ),
	.icache_rd_wstrb (icache_rd_wstrb ),
	.icache_rd_addr  (icache_rd_addr  ),
	.icache_ret_data (icache_ret_data )
);



// always @(posedge clk) begin
// 	$display("read at ", pc, "inst: ", inst);
// end


// IF_ID
wire [63:0] if_pc, id_pc;
wire [31:0] if_inst, id_inst;
wire        id_jump;
wire        id_ena, id_valid;
assign if_pc = pc_out;
assign if_inst = inst;
ID_reg u_ID_reg(
	.clk     (clk     ),
	.rst     (rst     ),
	.valid   (id_valid    ),
	.ena     (id_ena     ),
	.if_pc   (if_pc   ),
	.if_inst (if_inst ),
	.if_jump (if_jump ),
	.id_pc   (id_pc   ),
	.id_inst (id_inst ),
	.id_jump (id_jump )
);


// ID
wire [16:0] id_alu_op;
wire [ 2:0] id_sel_rfres;
wire        id_mem_wen;
wire        id_mem_ena;
wire [ 3:0] id_mem_mask;
wire [ 3:0] id_sel_alures;
wire [ 1:0] id_sel_memdata;
wire [63:0] id_alu_src1;
wire [63:0] id_alu_src2;
wire [63:0] id_rf_rdata2;
wire        id_rf_we;
wire [ 4:0] id_rf_waddr;
wire        id_load;
wire [63:0] id_csr_data;
// write back from WB
wire [63:0] rf_wdata;
// direct to top
wire inst_inv;
wire id_ebreak;
wire id_stall;

// write back from MEM
wire mtcmp_we, mtcmp_re;
wire [63:0] mtcmp_wdata;


ysyx_22040088_IDU u_ysyx_22040088_IDU(
	.clk            (clk            ),
	.rst            (rst            ),
	.pc             (id_pc             ),
	.inst           (id_inst           ),
	.rf_wdata       (rf_wdata       ),
	.rf_waddr_i     (wb_rf_waddr     ),
	.rf_we_i        (wb_rf_we        ),
	.ex_load        (ex_load        ),
	.mem_load       (mem_load       ),
	.ex_rf_we       (ex_rf_we       ),
	.ex_rf_waddr    (ex_rf_waddr    ),
	.ex_alu_result  (ex_alu_result  ),
	.mem_rf_we      (mem_rf_we      ),
	.mem_rf_waddr   (mem_rf_waddr   ),
	.mem_alu_result (mem_alu_result ),
	.mtcmp_we       (mtcmp_we       ),
	.mtcmp_re       (mtcmp_re       ),
	.mtcmp_wdata    (mtcmp_wdata    ),
	.alu_op         (id_alu_op         ),
	.sel_rfres      (id_sel_rfres      ),
	.mem_wen        (id_mem_wen        ),
	.mem_ena        (id_mem_ena        ),
	.mem_mask       (id_mem_mask       ),
	.inv            (inst_inv            ),
	.sel_alures     (id_sel_alures     ),
	.sel_memdata    (id_sel_memdata    ),
	.rf_we_o        (id_rf_we        ),
	.rf_waddr_o     (id_rf_waddr     ),
	.load           (id_load           ),
	.branch         (branch         ),
	.stall          (id_stall          ),
	.alu_src1       (id_alu_src1       ),
	.alu_src2       (id_alu_src2       ),
	.rf_rdata2      (id_rf_rdata2      ),
	.branchpc       (branchpc         ),
	.ebreak         (id_ebreak     ),
	.csr_data       (id_csr_data   )
);


// ID_EX
wire        ex_ena, ex_valid;
wire [63:0] ex_pc;
wire [31:0] ex_inst;
wire [16:0] ex_alu_op;
wire [ 2:0] ex_sel_rfres;
wire        ex_mem_wen;
wire        ex_mem_ena;
wire [ 3:0] ex_mem_mask;
wire [ 3:0] ex_sel_alures;
wire [63:0] ex_alu_src1;
wire [63:0] ex_alu_src2;
wire [63:0] ex_rf_rdata2;
wire [ 1:0] ex_sel_memdata;
wire        ex_rf_we;
wire [ 4:0] ex_rf_waddr;
wire		ex_ebreak;
wire        ex_load;
wire [63:0] ex_csr_data;
EX_reg u_EX_reg(
	.clk            (clk           ),
	.rst            (rst           ),
	.valid          (ex_valid      ),
	.ena            (ex_ena        ),
	.id_pc          (id_pc          ),
	.id_inst        (id_inst        ),
	.id_alu_op      (id_alu_op      ),
	.id_sel_rfres   (id_sel_rfres   ),
	.id_mem_wen     (id_mem_wen     ),
	.id_mem_ena     (id_mem_ena     ),
	.id_mem_mask    (id_mem_mask    ),
	.id_sel_alures  (id_sel_alures  ),
	.id_alu_src1    (id_alu_src1    ),
	.id_alu_src2    (id_alu_src2    ),
	.id_rf_rdata2   (id_rf_rdata2   ),
	.id_sel_memdata (id_sel_memdata ),
	.id_rf_we       (id_rf_we       ),
	.id_rf_waddr    (id_rf_waddr    ),
	.id_ebreak      (id_ebreak      ),
	.id_load        (id_load        ),
	.id_csr_data    (id_csr_data    ),
	.ex_pc          (ex_pc          ),
	.ex_inst        (ex_inst        ),
	.ex_alu_op      (ex_alu_op      ),
	.ex_sel_rfres   (ex_sel_rfres   ),
	.ex_mem_wen     (ex_mem_wen     ),
	.ex_mem_ena     (ex_mem_ena     ),
	.ex_mem_mask    (ex_mem_mask    ),
	.ex_sel_alures  (ex_sel_alures  ),
	.ex_alu_src1    (ex_alu_src1    ),
	.ex_alu_src2    (ex_alu_src2    ),
	.ex_rf_rdata2   (ex_rf_rdata2   ),
	.ex_sel_memdata (ex_sel_memdata ),
	.ex_rf_we       (ex_rf_we       ),
	.ex_rf_waddr    (ex_rf_waddr    ),
	.ex_ebreak      (ex_ebreak      ),
	.ex_load        (ex_load        ),
	.ex_csr_data    (ex_csr_data    )
);


// EX
wire [63:0] ex_alu_result;
ysyx_22040088_EXU u_ysyx_22040088_EXU(
	.alu_op     (ex_alu_op     ),
	.alu_src1   (ex_alu_src1   ),
	.alu_src2   (ex_alu_src2   ),
	.sel_alures (ex_sel_alures ),
	.alu_result (ex_alu_result )
);

// EX_MEM
wire        mem_ena, mem_valid;
wire [63:0] mem_pc;
wire [31:0] mem_inst;
wire [ 2:0] mem_sel_rfres;
wire        mem_mem_wen;
wire        mem_mem_ena;
wire [ 3:0] mem_mem_mask;
wire [ 3:0] mem_sel_alures;
wire [63:0] mem_rf_rdata2;
wire [63:0] mem_alu_result;
wire [ 1:0] mem_sel_memdata;
wire        mem_rf_we;
wire [ 4:0] mem_rf_waddr;
wire		mem_ebreak;
wire        mem_load;
wire [63:0] mem_csr_data;
MEM_reg u_MEM_reg(
	.clk             (clk             ),
	.rst             (rst             ),
	.valid           (mem_valid       ),
	.ena             (mem_ena         ),
	.ex_pc           (ex_pc           ),
	.ex_inst         (ex_inst         ),
	.ex_alu_result   (ex_alu_result   ),
	.ex_sel_rfres    (ex_sel_rfres    ),
	.ex_mem_wen      (ex_mem_wen      ),
	.ex_mem_ena      (ex_mem_ena      ),
	.ex_mem_mask     (ex_mem_mask     ),
	.ex_rf_rdata2    (ex_rf_rdata2    ),
	.ex_sel_memdata  (ex_sel_memdata  ),
	.ex_rf_we        (ex_rf_we        ),
	.ex_rf_waddr     (ex_rf_waddr     ),
	.ex_ebreak       (ex_ebreak       ),
	.ex_load         (ex_load         ),
	.ex_csr_data     (ex_csr_data     ),
	.mem_pc          (mem_pc          ),
	.mem_inst        (mem_inst        ),
	.mem_alu_result  (mem_alu_result  ),
	.mem_sel_rfres   (mem_sel_rfres   ),
	.mem_mem_wen     (mem_mem_wen     ),
	.mem_mem_ena     (mem_mem_ena     ),
	.mem_mem_mask    (mem_mem_mask    ),
	.mem_rf_rdata2   (mem_rf_rdata2   ),
	.mem_sel_memdata (mem_sel_memdata ),
	.mem_rf_we       (mem_rf_we       ),
	.mem_rf_waddr    (mem_rf_waddr    ),
	.mem_ebreak		 (mem_ebreak      ),
	.mem_load        (mem_load        ),
	.mem_csr_data    (mem_csr_data    )
);

wire mem_ena, mem_wen;
wire [3:0] mem_mask;
wire [63:0] mem_addr;
wire [63:0] mem_rdata;
wire [63:0] mem_wdata;
wire [ 1:0] sel_memdata;
assign mem_ena = mem_mem_ena || icache_rd_req;
assign mem_wen = mem_mem_wen;
assign mem_mask = mem_mem_ena || mem_mem_wen ? mem_mem_mask :
					  icache_rd_req ? icache_rd_wstrb :
					  				  4'b0;
assign mem_addr = mem_mem_ena || mem_mem_wen ? mem_alu_result :
				  icache_rd_req ? icache_rd_addr :
				  				  64'b0;
assign mem_wdata = mem_mem_wen ? mem_rf_rdata2 :
				   				   64'b0;
assign sel_memdata = (icache_rd_req) ? 2'b01:
					 				   mem_sel_memdata;

MEM u_MEM(
	.clk         (clk         ),
	.ena         (mem_ena  ),
	.wen         (mem_wen         ),
	.mem_mask    (mem_mask   ),
	.addr        (mem_addr        ),
	.wdata       (mem_wdata       ),
	.sel_memdata (sel_memdata     ),
	.mtcmp_rdata (id_csr_data     ),  // 直接从ID阶段的CSR寄存器引过来线
	.rdata       (mem_rdata       ),
	.mtcmp_we    (mtcmp_we    ),
	.mtcmp_re    (mtcmp_re    ),
	.mtcmp_wdata (mtcmp_wdata )
);


// MEM_WB
wire        wb_ena, wb_valid;
wire [63:0] wb_pc, wb_alu_result, wb_rdata;
wire [31:0] wb_inst;
wire [ 2:0] wb_sel_rfres;
wire        wb_rf_we;
wire [ 4:0] wb_rf_waddr;
wire		wb_ebreak;
wire [63:0] wb_csr_data;
WB_reg u_WB_reg(
	.clk            (clk            ),
	.rst            (rst            ),
	.valid          (wb_valid       ),
	.ena            (wb_ena         ),
	.mem_pc         (mem_pc         ),
	.mem_inst       (mem_inst       ),
	.mem_alu_result (mem_alu_result ),
	.mem_sel_rfres  (mem_sel_rfres  ),
	.mem_rdata      (mem_rdata      ),
	.mem_rf_we      (mem_rf_we      ),
	.mem_rf_waddr   (mem_rf_waddr   ),
	.mem_ebreak     (mem_ebreak     ),
	.mem_csr_data   (mem_csr_data   ),
	.wb_pc          (wb_pc          ),
	.wb_inst        (wb_inst        ),
	.wb_alu_result  (wb_alu_result  ),
	.wb_sel_rfres   (wb_sel_rfres   ),
	.wb_rdata       (wb_rdata       ),
	.wb_rf_we       (wb_rf_we       ),
	.wb_rf_waddr    (wb_rf_waddr    ),
	.wb_ebreak		(wb_ebreak      ),
	.wb_csr_data    (wb_csr_data    )
);


WB u_WB(
	.alu_result  (wb_alu_result  ),
	.mem_rdata   (wb_rdata   ),
	.csr_data    (wb_csr_data  ),
	.sel_rfwdata (wb_sel_rfres ),
	.rf_wdata    (rf_wdata    )
);

// ebreak
import "DPI-C" function void finish_sim();
always @(*) begin
	if (wb_ebreak) begin
		finish_sim();
		$finish();
	end
end

// inv
wire inv;
assign inv = inst_inv & ~wb_ebreak;
import "DPI-C" function void get_inv(int inv);
always @(*) begin
	$display("inv:", inv);
    get_inv({{31{inv}}, inv});
end

// inst
import "DPI-C" function void get_inst(int inst);
always@(*) begin
	get_inst(wb_inst);
end

// 阻塞
ctrl u_ctrl(
	.if_stall  (if_stall  ),
	.id_stall  (id_stall  ),
	.ex_stall  (1'b0      ),
	.mem_stall (1'b0      ),
	.if_ena    (if_ena    ),
	.if_valid  (if_valid  ),
	.id_ena    (id_ena    ),
	.id_valid  (id_valid  ),
	.ex_ena    (ex_ena    ),
	.ex_valid  (ex_valid  ),
	.mem_ena   (mem_ena   ),
	.mem_valid (mem_valid ),
	.wb_ena    (wb_ena    ),
	.wb_valid  (wb_valid  )
);


endmodule
