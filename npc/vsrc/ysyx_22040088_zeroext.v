// 零扩展
module ysyx_22040088_zeroext #(IN_WIDTH = 32, EXT_WIDTH = 64) (
    input   [IN_WIDTH - 1: 0] in,
    output  [EXT_WIDTH - 1: 0] out
);

assign out = {{(EXT_WIDTH - IN_WIDTH){1'b0}}, in};

endmodule
