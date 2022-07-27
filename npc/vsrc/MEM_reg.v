module MEM_reg(
    input              clk,
    input              rst,
    /* verilator lint_off UNUSED */
    input              valid,
    input              ena,
    input       [63:0] ex_pc,
    input       [31:0] ex_inst,
    input       [63:0] ex_alu_result,
    input       [ 1:0] ex_sel_rfres,
    input              ex_mem_wen,
    input              ex_mem_ena,
    input       [ 3:0] ex_mem_mask,
    input       [63:0] ex_rf_rdata2,
    input       [ 1:0] ex_sel_memdata,
    input              ex_rf_we,
    input       [ 4:0] ex_rf_waddr,
    input              ex_sys,
    
    output  reg [63:0] mem_pc,
    output  reg [31:0] mem_inst,
    output  reg [63:0] mem_alu_result,
    output  reg [ 1:0] mem_sel_rfres,
    output  reg        mem_mem_wen,
    output  reg        mem_mem_ena,
    output  reg [ 3:0] mem_mem_mask,
    output  reg [63:0] mem_rf_rdata2,
    output  reg [ 1:0] mem_sel_memdata,
    output  reg        mem_rf_we,
    output  reg [ 4:0] mem_rf_waddr,
    output  reg        mem_sys
);

always @(posedge clk) begin
    if (rst) begin
        mem_pc <= 64'h7ffffffc;
        mem_inst <= 32'b0;
        mem_alu_result <= 64'b0;
        mem_sel_rfres <= 2'b0;
        mem_mem_wen <= 1'b0;
        mem_mem_ena <= 1'b0;
        mem_rf_rdata2 <= 64'b0;
        mem_mem_mask <= 4'b0;
        mem_sel_memdata <= 2'b0;
        mem_rf_we <= 1'b0;
        mem_rf_waddr <= 5'b0;
        mem_sys <= 1'b0;
    end
    else if (ena) begin
        mem_pc <= ex_pc;
        mem_inst <= ex_inst;
        mem_alu_result <= ex_alu_result;
        mem_sel_rfres <= ex_sel_rfres;
        mem_mem_wen <= ex_mem_wen;
        mem_mem_ena <= ex_mem_ena;
        mem_rf_rdata2 <= ex_rf_rdata2;
        mem_mem_mask <= ex_mem_mask;
        mem_sel_memdata <= ex_sel_memdata;
        mem_rf_we <= ex_rf_we;
        mem_rf_waddr <= ex_rf_waddr;
        mem_sys <= ex_sys;
    end
end

endmodule
