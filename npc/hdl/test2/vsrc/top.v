module top(
    input [7:0] x,
    output reg [3:0] y,
    output reg [6:0] h
);

    wire [3:0] t;
    assign y = t;
    encode83 encode83(.x(x), .y(t));
    bcd7seg bcd7seg(.b({1'b0, t[2:0]}), .h(h));

endmodule