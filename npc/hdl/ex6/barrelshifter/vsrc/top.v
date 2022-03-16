module top(
    input         clk,
    input         rst,
    output  reg [7:0] out
);

    always @(posedge clk or posedge rst) begin
        if (rst)    out <= 8'b00000001;
        else begin
        out <= {^out[3:0], out[7:1]};
        end
    end

endmodule
