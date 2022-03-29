module top(
    input clk,
    input clrn,
    input ps2_clk,
    input ps2_data,
    output [6:0] data0,
    output [6:0] data1,
    output [6:0] ascii0,
    output [6:0] ascii1,
    output [6:0] count0,
    output [6:0] count1,
    output ready,
    output sampling,
    output overflow,
    output nextdata_n
);

// wire nextdata_n, ready, overflow;

wire [7:0] ascii, count, data;

ps2_keyboard u_ps2_keyboard(
    .clk        (clk        ),
    .clrn       (clrn       ),
    .ps2_clk    (ps2_clk    ),
    .ps2_data   (ps2_data   ),
    .nextdata_n (nextdata_n ),
    .data       (data       ),
    .ready      (ready      ),
    .overflow   (overflow   ),
    .sampling   (sampling   )
);

process_key2 u_process_key(
    .clk        (clk        ),
    .clrn       (clrn       ),
    .data       (data       ),
    .ready      (ready      ),
    .ascii      (ascii      ),
    .nextdata_n (nextdata_n ),
    .count      (count      )
);

bcd7seg u_data0 (
    .b(data[3:0]),
    .h(data0)
);

bcd7seg u_data1 (
    .b(data[7:4]),
    .h(data1)
);

bcd7seg u_ascii0 (
    .b(ascii[3:0]),
    .h(ascii0)
);

bcd7seg u_ascii1 (
    .b(ascii[7:4]),
    .h(ascii1)
);

bcd7seg u_count0 (
    .b(count[3:0]),
    .h(count0)
);

bcd7seg u_count1 (
    .b(count[7:4]),
    .h(count1)
);

endmodule
