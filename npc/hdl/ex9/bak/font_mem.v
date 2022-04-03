module font_mem (
    input [3:0] x,
    input [3:0] y,
    input [7:0] ascii,
    output [23:0] data
);

    reg fmem[65535:0];  // 256个字符 每个字符点阵12 * 16

    initial begin
        $readmemh("/home/bill/ysyx-workbench/npc/hdl/ex9/vsrc/vga_font.txt", fmem);
    end

    // 如果当前位置有像素则是白色 无像素则是黑色
    assign data = fmem[{ascii, x, y}] ? 24'hffffff : 24'h0;

endmodule
