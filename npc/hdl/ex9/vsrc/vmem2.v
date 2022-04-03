module vmem2 (
    input [6:0] h_addr,
    input [4:0] v_addr,
    output [7:0] vga_data
);

    reg [7:0] vga_mem [4095:0]; // 32 * 128

    initial begin
        $readmemh("/home/bill/ysyx-workbench/npc/hdl/ex9/vsrc/vmem.txt", vga_mem);
    end

    assign vga_data = vga_mem[{v_addr, h_addr}];

endmodule
