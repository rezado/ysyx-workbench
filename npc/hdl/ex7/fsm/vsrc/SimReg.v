module SimReg #(STATE_LEN = 4, INIT_STATE = 0) (
    input       clk,
    input       reset,
    input       state_wen,
    input [3:0] state_dout,
    output reg [3:0] state_din
);

    always @(posedge clk) begin
        if (reset) state_din <= INIT_STATE;
        else if (state_wen) state_din <= state_dout;
        else state_din <= state_din;
    end


endmodule
