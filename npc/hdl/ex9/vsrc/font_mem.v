module font_mem(
    input [3:0] haddr,
    input [7:0] ascii,
    output [11:0] data
);

    reg [11:0] fmem[4095:0];  // 25个字符 每个字符点阵12 * 16

    initial begin
        $readmemh("/home/bill/ysyx-workbench/npc/hdl/ex8/vga/vsrc/vga_font.txt", fmem);
    end

    // 如果当前位置有像素则是白色 无像素则是黑色
    assign data = fmem[{ascii, haddr}];

endmodule