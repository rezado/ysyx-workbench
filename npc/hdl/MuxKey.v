module MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(.NR_KEY(NR_KEY), .KEY_LEN(KEY_LEN), .DATA_LEN(DATA_LEN), .HAS_DEFAULT(0)) i0 (out, key, 1'b0, lut);
endmodule
