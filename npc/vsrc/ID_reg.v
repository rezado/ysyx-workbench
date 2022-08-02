module ID_reg(
    input             clk,
    input             rst,
    input             valid,
    input             ena,
    input      [63:0] if_pc,
    input      [31:0] if_inst,
    input             if_jump,
    output reg [63:0] id_pc,
    output reg [31:0] id_inst,
    output reg        id_jump
);
/* verilator lint_off UNUSED */
always @(posedge clk) begin
    if (rst || ~valid) begin
        id_pc <= 64'h80000000;
        id_inst <= 32'b0;
        id_jump <= 1'b0;
    end
    else if (ena) begin
        id_pc <= if_pc;
        id_inst <= if_inst;
        id_jump <= if_jump;
    end
end

endmodule
