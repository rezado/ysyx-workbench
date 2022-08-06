module CSRs(
    input              clk,
    input              rst,
    input       [11:0] csr_id,
    input              csr_re,
    input              csr_we,
    input              mret,
    input              ecall,
    input       [63:0] epc,
    input       [63:0] csr_wdata,
    output      [63:0] csr_rdata
);

// csrs
reg [63:0] mepc, mstatus, mcause, mtvec, mie, mip;

// 读写使能信号
wire sel_mepc, sel_mstatus, sel_mcause, sel_mtvec, sel_mie, sel_mip;
wire re_mepc, re_mstatus, re_mcause, re_mtvec, re_mie, re_mip;
wire we_mepc, we_mstatus, we_mcause, we_mtvec, we_mie, we_mip;

assign sel_mepc = (csr_id == 12'h341);
assign sel_mstatus = (csr_id == 12'h300);
assign sel_mcause = (csr_id == 12'h342);
assign sel_mtvec = (csr_id == 12'h305);
assign sel_mie = (csr_id == 12'h304);
assign sel_mip = (csr_id == 12'h344);

assign re_mepc = csr_re & sel_mepc;
assign re_mstatus = csr_re & sel_mstatus;
assign re_mcause = csr_re & sel_mcause;
assign re_mtvec = csr_re & sel_mtvec;
assign re_mie = csr_re & sel_mie;
assign re_mip = csr_re & sel_mip;

assign we_mepc = csr_we & sel_mepc;
assign we_mstatus = csr_we & sel_mstatus;
assign we_mcause = csr_we & sel_mcause;
assign we_mtvec = csr_we & sel_mtvec;
assign we_mie = csr_we & sel_mie;
assign we_mip = csr_we & sel_mip;

// read
assign csr_rdata = ({64{re_mepc | mret}}        & mepc)
                 | ({64{re_mstatus}}            & mstatus)
                 | ({64{re_mcause}}             & mcause)
                 | ({64{re_mtvec | ecall}}      & mtvec)
                 | ({64{re_mie}}                & mie)
                 | ({64{re_mip}}                & mip);

// write
always @(posedge clk) begin
    if (rst) begin
        mstatus <= 64'ha00001800;
        mepc <= 64'b0;
        mcause <= 64'b0;
        mtvec <= 64'b0;
        mie <= 64'b0;
        mip <= 64'b0;
    end
    else if (mret) begin
        mcause[3] <= mcause[7];  // MIE = MPIE
        mcause[7] <= 1'b1;  // MPIE = 1
    end
    else if (ecall) begin
        mepc <= epc;
        mcause <= csr_wdata;
    end
    else if (we_mcause) mcause <= csr_wdata;
    else if (we_mepc) mepc <= csr_wdata;
    else if (we_mstatus) mstatus <= csr_wdata;
    else if (we_mtvec) mtvec <= csr_wdata;
    else if (we_mie) mie <= csr_wdata;
    else if (we_mip) mip <= csr_wdata;
end

endmodule
