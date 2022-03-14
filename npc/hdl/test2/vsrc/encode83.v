module encode83(
    input [7:0] x,
    output reg [3:0] y
);
    integer i;
    always @(x) begin
        y = 0;
        for (i = 0; i <= 7; i=i+1)
            if (x[i] == 1)  y[2:0] = i[2:0];
        y[3] = |x[7:0];
    end

endmodule