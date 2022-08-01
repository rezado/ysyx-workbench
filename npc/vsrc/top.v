module top(
    input   clk,
    input   rst,
	output	[63:0] pc
);
/* verilator lint_off UNUSED */
wire [63:0] pc_out;
wire [31:0] inst;
wire        if_jump;
// IFU
wire [63:0] branchpc;
wire        branch;
assign pc = wb_pc;
ysyx_22040088_IFU u_ysyx_22040088_IFU(
	.clk      (clk      ),
	.rst      (rst      ),
	.branchpc (branchpc ),
	.branch   (branch   ),
	// .jump_i   (id_jump  ),
	.pc       (pc_out   ),
	.inst     (inst     ),
	.jump_o   (if_jump  )
);


// always @(posedge clk) begin
// 	$display("read at ", pc, "inst: ", inst);
// end


// IF_ID
wire [63:0] if_pc, id_pc;
wire [31:0] if_inst, id_inst;
wire        id_jump;
assign if_pc = pc_out;
assign if_inst = inst;
ID_reg u_ID_reg(
	.clk     (clk     ),
	.rst     (rst | branch),
	.valid   (1'b1    ),
	.ena     (~rst    ),
	.if_pc   (if_pc   ),
	.if_inst (if_inst ),
	.if_jump (if_jump ),
	.id_pc   (id_pc   ),
	.id_inst (id_inst ),
	.id_jump (id_jump )
);


// ID
wire [16:0] id_alu_op;
wire [ 1:0] id_sel_rfres;
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
// write back from WB
wire [63:0] rf_wdata;
// direct to top
wire inst_inv;
wire id_sys;
wire stall;

ysyx_22040088_IDU u_ysyx_22040088_IDU(
	.clk            (clk            ),
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
	.stall          (stall          ),
	.alu_src1       (id_alu_src1       ),
	.alu_src2       (id_alu_src2       ),
	.rf_rdata2      (id_rf_rdata2      ),
	.sys            (id_sys            ),
	.branchpc       (branchpc         )
);



// ID_EX
wire [63:0] ex_pc;
wire [31:0] ex_inst;
wire [16:0] ex_alu_op;
wire [ 1:0] ex_sel_rfres;
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
wire		ex_sys;
wire        ex_load;
EX_reg u_EX_reg(
	.clk            (clk           ),
	.rst            (rst           ),
	.valid          (1'b1          ),
	.ena            (~rst          ),
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
	.id_sys         (id_sys         ),
	.id_load        (id_load        ),
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
	.ex_sys         (ex_sys         ),
	.ex_load        (ex_load        )
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
wire [63:0] mem_pc;
wire [31:0] mem_inst;
wire [ 1:0] mem_sel_rfres;
wire        mem_mem_wen;
wire        mem_mem_ena;
wire [ 3:0] mem_mem_mask;
wire [ 3:0] mem_sel_alures;
wire [63:0] mem_rf_rdata2;
wire [63:0] mem_alu_result;
wire [ 1:0] mem_sel_memdata;
wire        mem_rf_we;
wire [ 4:0] mem_rf_waddr;
wire		mem_sys;
wire        mem_load;
MEM_reg u_MEM_reg(
	.clk             (clk             ),
	.rst             (rst             ),
	.valid           (1'b1            ),
	.ena             (~rst            ),
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
	.ex_sys			 (ex_sys          ),
	.ex_load         (ex_load         ),
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
	.mem_sys		 (mem_sys         ),
	.mem_load        (mem_load        )
);


wire [63:0] mem_rdata;
MEM u_MEM(
	.clk         (clk         ),
	.ena         (mem_mem_ena         ),
	.wen         (mem_mem_wen         ),
	.mem_mask    (mem_mem_mask    ),
	.addr        (mem_alu_result        ),
	.wdata       (mem_rf_rdata2       ),
	.sel_memdata (mem_sel_memdata ),
	.rdata       (mem_rdata       )
);

// MEM_WB
wire [63:0] wb_pc, wb_alu_result, wb_rdata;
wire [31:0] wb_inst;
wire [ 1:0] wb_sel_rfres;
wire        wb_rf_we;
wire [ 4:0] wb_rf_waddr;
wire		wb_sys;
WB_reg u_WB_reg(
	.clk            (clk            ),
	.rst            (rst            ),
	.valid          (1'b1           ),
	.ena            (~rst           ),
	.mem_pc         (mem_pc         ),
	.mem_inst       (mem_inst       ),
	.mem_alu_result (mem_alu_result ),
	.mem_sel_rfres  (mem_sel_rfres  ),
	.mem_rdata      (mem_rdata      ),
	.mem_rf_we      (mem_rf_we      ),
	.mem_rf_waddr   (mem_rf_waddr   ),
	.mem_sys        (mem_sys        ),
	.wb_pc          (wb_pc          ),
	.wb_inst        (wb_inst        ),
	.wb_alu_result  (wb_alu_result  ),
	.wb_sel_rfres   (wb_sel_rfres   ),
	.wb_rdata       (wb_rdata       ),
	.wb_rf_we       (wb_rf_we       ),
	.wb_rf_waddr    (wb_rf_waddr    ),
	.wb_sys			(wb_sys         )
);


WB u_WB(
	.alu_result  (wb_alu_result  ),
	.mem_rdata   (wb_rdata   ),
	.sel_rfwdata (wb_sel_rfres ),
	.rf_wdata    (rf_wdata    )
);



// ebreak
import "DPI-C" function void finish_sim();
always @(*) begin
	if (wb_sys) begin
		finish_sim();
		$finish();
	end
end

// inv
wire inv;
assign inv = inst_inv & ~wb_sys;
import "DPI-C" function void get_inv(int inv);
always @(*) begin
	$display("inv:", inv);
    get_inv({{31{inv}}, inv});
end

// inst
import "DPI-C" function void get_inst(int inst);
always@(*) begin
	get_inst(inst[31:0]);
end

endmodule
