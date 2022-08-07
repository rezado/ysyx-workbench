module clint(
    input       clk,
    input       rst,
    input       ena,
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

// 写入mtime
always @(posedge clk) begin
    if (rst) begin
      mtime <= 64'b0;
      mtimecmp <= 64'b0;
    end
    else begin
        mtime <= mtime + 1;  // mtime每个周期自增
        // $display("mtime:%x mtimecmp:%x", mtime, mtimecmp);
    end
end

// 判断mtime
wire mtime_bigger;
assign mtime_bigger = (mtime >= mtimecmp);
assign tint = mtime_bigger && MIE && MTIE && ena;

endmodule
