module mem(
    input         clk,
    input         ena,
    input         wen,
    input [ 3:0]  mem_mask,
    input [63:0]  addr,
    input [63:0]  wdata,
    output [63:0] rdata
);

// memory
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

wire [63:0] raddr, waddr;
assign raddr = (ena & ~wen) ? addr : 64'h80000000;
assign waddr = (ena & wen) ? addr : 64'h80000000;
wire [7:0] mask;
// wire [1:0] idx;  // 右移量
// wire [2:0] in;  // 内部偏移量
// assign idx = mem_mask[0] ? 2'd3:
//              mem_mask[1] ? 2'd2:
//              mem_mask[2] ? 2'd1:
//              mem_mask[3] ? 2'd0:
//                            2'b0;
// assign in = addr[2:0] >> idx;
wire [2:0] idx;
assign idx = addr[2:0];

assign mask = (mem_mask[0] == 1'b1) ? 8'b11111111:
              (mem_mask[1] == 1'b1) ? 
                (idx == 3'b000) ? 8'b00001111:
                (idx == 3'b100) ? 8'b11110000: 
                                  8'b00000000 :
              (mem_mask[2] == 1'b1) ? 
                (idx == 3'b000) ? 8'b00000011:
                (idx == 3'b010) ? 8'b00001100:
                (idx == 3'b100) ? 8'b00110000:
                (idx == 3'b110) ? 8'b11000000:
                                  8'b00000000 :
              (mem_mask[3] == 1'b1) ?
                (idx == 3'b000) ? 8'b00000001:
                (idx == 3'b001) ? 8'b00000010:
                (idx == 3'b010) ? 8'b00000100:
                (idx == 3'b011) ? 8'b00001000:
                (idx == 3'b100) ? 8'b00010000:
                (idx == 3'b101) ? 8'b00100000:
                (idx == 3'b110) ? 8'b01000000:
                (idx == 3'b111) ? 8'b10000000:
                                  8'b00000000 :
                                  8'b00000000;

wire [5:0] offset;
assign offset = {idx, 3'b0};

wire [63:0] tmpdata;
always @(*) begin
  pmem_read(raddr, tmpdata);
  pmem_write(waddr, wdata, mask & {8{wen}});
end

// 截取需要部分并右移
assign rdata = (tmpdata & {{8{mask[7]}}, {8{mask[6]}}, {8{mask[5]}}, {8{mask[4]}},
                          {8{mask[3]}}, {8{mask[2]}}, {8{mask[1]}}, {8{mask[0]}}}) >> offset;

endmodule
