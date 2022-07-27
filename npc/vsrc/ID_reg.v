module ID_reg(
    input             clk,
    input             rst,
    /* verilator lint_off UNUSED */
    input             valid,
    input             ena,
    input      [63:0] if_pc,
    input      [31:0] if_inst,
    output reg [63:0] id_pc,
    output reg [31:0] id_inst
);
/* verilator lint_off UNUSED */
always @(posedge clk) begin
    if (rst) begin
        id_pc <= 64'h80000000;
        id_inst <= 32'b0;
    end
    else if (ena) begin
        id_pc <= if_pc;
        id_inst <= if_inst;
    end
end

endmodule
