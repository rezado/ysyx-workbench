module top(
    input         clk,
    input         rst,
    output  reg [7:0] out
);

    reg hi;
    always @(posedge clk or posedge rst) begin
        if (rst)    out <= 8'b00000001;
        else begin
        hi <= ^out[3:0];
        out <= {hi, out[7:1]};
        end
    end

endmodule
