module vmem (
    input [9:0] h_addr,
    input [8:0] v_addr,
    output [7:0] vga_data
);

    reg [7:0] vga_mem [4095:0]; // 32 * 128

    initial begin
        $readmemh("/home/bill/ysyx-workbench/npc/hdl/ex9/vsrc/vga_font.txt", vga_mem);
    end

    wire [14:0] addr;
    assign addr = ({v_addr[4:0], 4'b0} * 70) + (h_addr / 9);
    assign vga_data = vga_mem[addr];

endmodule