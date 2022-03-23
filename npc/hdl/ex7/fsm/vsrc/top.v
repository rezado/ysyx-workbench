module top
(
  input   clk, in, reset,
  output reg out
);

parameter[3:0] A = 0, B = 1, C = 2, D = 3,
          E = 4, F = 5, G = 6, H = 7, I = 8;

reg [3:0] state, next_state;

// 状态转换
always @(*) begin
  case (state)
    A: begin
      if (in == 0) next_state = B;
      else next_state = F;
    end
    B: begin
      if (in == 0) next_state = C;
      else next_state = F;
    end
    C: begin
      if (in == 0) next_state = D;
      else next_state = F;
    end
    D: begin
      if (in == 0) next_state = E;
      else next_state = F;
    end
    E: begin
      if (in == 0) next_state = E;
      else next_state = F;
    end
    F: begin
      if (in == 1) next_state = B;
      else next_state = G;
    end
    G: begin
      if (in == 1) next_state = H;
      else next_state = B;
    end
    H: begin
      if (in == 1) next_state = I;
      else next_state = B;
    end
    I: begin
      if (in == 1) next_state = I;
      else next_state = B;
    end
    default: next_state = state;
  endcase
end

// 状态赋值
always @(posedge clk) begin
  if (reset) state <= A;
  else state <= next_state;
end

// 输出
assign out = ((state == E) | (state == I));

endmodule
