module clint(
    input       clk,
    input       rst,
    input       MIE,
    input       MTIE,
    output      tint
);

import "DPI-C" function void npc_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void npc_write(
  input longint waddr, input longint wdata, input byte wmask);

// 处理计时器中断
reg [63:0] mtime, mtimecmp;

// 写入mtime 读取mtime和mtimecmp
always @(posedge clk) begin
    if (!rst) begin
        npc_read(64'h0200bff8, mtime);
        npc_read(64'h02004000, mtimecmp);
        npc_write(64'h0200bff8, mtime + 1, 8'hff);
        $display("mtime:%x mtimecmp:%x", mtime, mtimecmp);
    end
end

// 判断mtime
wire mtime_bigger;
assign mtime_bigger = (mtime >= mtimecmp);
assign tint = mtime_bigger && MIE && MTIE;

endmodule
