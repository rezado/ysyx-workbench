// 符号扩展
module ysyx_22040088_signext #(IN_WIDTH = 32, EXT_WIDTH = 64) (
    input   [IN_WIDTH - 1: 0] in,
    output  [EXT_WIDTH - 1: 0] out
);

assign out = {{(EXT_WIDTH - IN_WIDTH){in[IN_WIDTH - 1]}}, in};

endmodule
