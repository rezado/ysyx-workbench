module top(
    input         clk,
    input   [7:0] in,
    output  reg [7:0] out
);

    reg hi;
    always @(posedge clk) begin
        hi <= ^in[3:0];
        out <= {hi, in[7:1]};
    end

endmodule
