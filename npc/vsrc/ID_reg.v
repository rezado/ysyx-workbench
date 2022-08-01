module ID_reg(
    input             clk,
    input             rst,
    /* verilator lint_off UNUSED */
    input             valid,
    input             ena,
    input      [63:0] if_pc,
    output reg [63:0] id_pc
);
/* verilator lint_off UNUSED */
always @(posedge clk) begin
    if (rst) begin
        id_pc <= 64'h80000000;
    end
    else if (ena) begin
        id_pc <= if_pc;
    end
end

endmodule
