module EX_reg(
    input             clk,
    input             rst,
    /* verilator lint_off UNUSED */
    input             valid,
    input             ena,
    input      [63:0] id_pc,
    input      [31:0] id_inst,
    input      [16:0] id_alu_op,
    input      [ 1:0] id_sel_rfres,
    input             id_mem_wen,
    input             id_mem_ena,
    input      [ 3:0] id_mem_mask,
    input      [ 3:0] id_sel_alures,
    input      [63:0] id_alu_src1,
    input      [63:0] id_alu_src2,
    input      [63:0] id_rf_rdata2,
    input      [ 1:0] id_sel_memdata,
    input             id_rf_we,
    input      [ 4:0] id_rf_waddr,
    input             id_sys,
    input             id_load,
    
    output reg [63:0] ex_pc,
    output reg [31:0] ex_inst,
    output reg [16:0] ex_alu_op,
    output reg [ 1:0] ex_sel_rfres,
    output reg        ex_mem_wen,
    output reg        ex_mem_ena,
    output reg [ 3:0] ex_mem_mask,
    output reg [ 3:0] ex_sel_alures,
    output reg [63:0] ex_alu_src1,
    output reg [63:0] ex_alu_src2,
    output reg [63:0] ex_rf_rdata2,
    output reg [ 1:0] ex_sel_memdata,
    output reg        ex_rf_we,
    output reg [ 4:0] ex_rf_waddr,
    output reg        ex_sys,
    output reg        ex_load
);

always @(posedge clk) begin
    if (rst) begin
        ex_pc <= 64'h80000000;
        ex_inst <= 32'b0;
        ex_alu_op <= 17'b0;
        ex_sel_rfres <= 2'b0;
        ex_mem_wen <= 1'b0;
        ex_mem_ena <= 1'b0;
        ex_mem_mask <= 4'b0;
        ex_sel_alures <= 4'b0;
        ex_alu_src1 <= 64'b0;
        ex_alu_src2 <= 64'b0;
        ex_rf_rdata2 <= 64'b0;
        ex_sel_memdata <= 2'b0;
        ex_rf_we <= 1'b0;
        ex_rf_waddr <= 5'b0;
        ex_sys <= 1'b0;
        ex_load <= 1'b0;
    end
    else if (ena) begin
        ex_pc <= id_pc;
        ex_inst <= id_inst;
        ex_alu_op <= id_alu_op;
        ex_sel_rfres <= id_sel_rfres;
        ex_mem_wen <= id_mem_wen;
        ex_mem_ena <= id_mem_ena;
        ex_mem_mask <= id_mem_mask;
        ex_sel_alures <= id_sel_alures;
        ex_alu_src1 <= id_alu_src1;
        ex_alu_src2 <= id_alu_src2;
        ex_rf_rdata2 <= id_rf_rdata2;
        ex_sel_memdata <= id_sel_memdata;
        ex_rf_we <= id_rf_we;
        ex_rf_waddr <= id_rf_waddr;
        ex_sys <= id_sys;
        ex_load <= id_load;
    end
end

endmodule
