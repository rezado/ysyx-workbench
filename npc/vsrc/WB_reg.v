module WB_reg(
    input              clk,
    input              rst,
    input              valid,
    input              ena,
    input       [63:0] mem_pc,
    input       [31:0] mem_inst,
    input       [63:0] mem_alu_result,
    input       [ 1:0] mem_sel_rfres,
    input       [63:0] mem_rdata,
    input              mem_rf_we,
    input       [ 4:0] mem_rf_waddr,
    input              mem_sys,

    output reg  [63:0] wb_pc,
    output reg  [31:0] wb_inst,
    output reg  [63:0] wb_alu_result,
    output reg  [ 1:0] wb_sel_rfres,
    output reg  [63:0] wb_rdata,
    output reg         wb_rf_we,
    output reg  [ 4:0] wb_rf_waddr,
    output reg         wb_sys
);

always @(posedge clk) begin
    if (rst || ~valid) begin
        wb_pc <= 64'h80000000;
        wb_inst <= 32'b0;
        wb_alu_result <= 64'b0;
        wb_sel_rfres <= 2'b0;
        wb_rdata <= 64'b0;
        wb_rf_we <= 1'b0;
        wb_rf_waddr <= 5'b0;
        wb_sys <= 1'b0;
    end
    else if (ena) begin
        wb_pc <= mem_pc;
        wb_inst <= mem_inst;
        wb_alu_result <= mem_alu_result;
        wb_sel_rfres <= mem_sel_rfres;
        wb_rdata <= mem_rdata;
        wb_rf_we <= mem_rf_we;
        wb_rf_waddr <= mem_rf_waddr;
        wb_sys <= mem_sys;
    end
end

endmodule
