module mem(
    input         ena,
    input [ 7:0]  wen,
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
assign raddr = (ena & ~(|wen)) ? addr : 64'b0;
assign waddr = (ena & |wen) ? addr : 64'b0;
always @(*) begin
  pmem_read(raddr, rdata);
  pmem_write(waddr, wdata, wen);
end

endmodule
