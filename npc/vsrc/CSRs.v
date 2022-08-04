module CSRs(
    input              clk,
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
reg [63:0] mepc, mstatus, mcause, mtvec;

// 读写使能信号
wire sel_mepc, sel_mstatus, sel_mcause, sel_mtvec;
wire re_mepc, re_mstatus, re_mcause, re_mtvec;
wire we_mepc, we_mstatus, we_mcause, we_mtvec;

assign sel_mepc = (csr_id == 12'h341);
assign sel_mstatus = (csr_id == 12'h300);
assign sel_mcause = (csr_id == 12'h342);
assign sel_mtvec = (csr_id == 12'h305);

assign re_mepc = csr_re & sel_mepc;
assign re_mstatus = csr_re & sel_mstatus;
assign re_mcause = csr_re & sel_mcause;
assign re_mtvec = csr_re & sel_mtvec;

assign we_mepc = csr_we & sel_mepc;
assign we_mstatus = csr_we & sel_mstatus;
assign we_mcause = csr_we & sel_mcause;
assign we_mtvec = csr_we & sel_mtvec;

// read
assign csr_rdata = ({64{re_mepc | mret}}        & mepc)
                 | ({64{re_mstatus}}            & mstatus)
                 | ({64{re_mcause}}             & mcause)
                 | ({64{re_mtvec | ecall}}      & mtvec);

// write
always @(posedge clk) begin
    if (mret) begin
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
end

endmodule
