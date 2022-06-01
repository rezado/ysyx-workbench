// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+216,"clk", false,-1);
        tracep->declBit(c+217,"rst", false,-1);
        tracep->declBus(c+218,"inst", false,-1, 31,0);
        tracep->declQuad(c+219,"pc", false,-1, 63,0);
        tracep->declBit(c+216,"top clk", false,-1);
        tracep->declBit(c+217,"top rst", false,-1);
        tracep->declBus(c+218,"top inst", false,-1, 31,0);
        tracep->declQuad(c+219,"top pc", false,-1, 63,0);
        tracep->declQuad(c+221,"top nextpc", false,-1, 63,0);
        tracep->declBus(c+1,"top alu_op", false,-1, 10,0);
        tracep->declBus(c+2,"top sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+3,"top sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+4,"top sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+5,"top rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+7,"top rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+223,"top immI", false,-1, 11,0);
        tracep->declBus(c+9,"top immJ", false,-1, 20,0);
        tracep->declBus(c+224,"top immU", false,-1, 19,0);
        tracep->declBus(c+10,"top immB", false,-1, 12,0);
        tracep->declQuad(c+11,"top rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+13,"top alu_result", false,-1, 63,0);
        tracep->declBus(c+15,"top sel_rfres", false,-1, 1,0);
        tracep->declBus(c+16,"top mem_wen", false,-1, 7,0);
        tracep->declBit(c+17,"top mem_ena", false,-1);
        tracep->declQuad(c+18,"top mem_rdata", false,-1, 63,0);
        tracep->declBit(c+225,"top ebreak", false,-1);
        tracep->declBit(c+216,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+217,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+221,"top u_ysyx_22040088_IFU nextpc", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declBit(c+216,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+217,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+221,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+251,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+216,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+217,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+221,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+253,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declQuad(c+13,"top u_ysyx_22040088_genrfwdata alu_result", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_genrfwdata mem_rdata", false,-1, 63,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_genrfwdata sel_rfwdata", false,-1, 1,0);
        tracep->declQuad(c+11,"top u_ysyx_22040088_genrfwdata rf_wdata", false,-1, 63,0);
        tracep->declBit(c+216,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declBus(c+218,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+11,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_IDU alu_op", false,-1, 10,0);
        tracep->declBus(c+2,"top u_ysyx_22040088_IDU sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+223,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declBus(c+9,"top u_ysyx_22040088_IDU immJ", false,-1, 20,0);
        tracep->declBus(c+224,"top u_ysyx_22040088_IDU immU", false,-1, 19,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU immB", false,-1, 12,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU sel_rfres", false,-1, 1,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU mem_wen", false,-1, 7,0);
        tracep->declBit(c+17,"top u_ysyx_22040088_IDU mem_ena", false,-1);
        tracep->declBus(c+226,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+227,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+228,"top u_ysyx_22040088_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+229,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+230,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+231,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBit(c+232,"top u_ysyx_22040088_IDU rf_we", false,-1);
        tracep->declBus(c+226,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+227,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+228,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct7", false,-1, 6,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 10,0);
        tracep->declBit(c+232,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc2", false,-1, 3,0);
        tracep->declBus(c+2,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_rfres", false,-1, 1,0);
        tracep->declBit(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_ena", false,-1);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_wen", false,-1, 7,0);
        tracep->declBit(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+233,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lui", false,-1);
        tracep->declBit(c+234,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_auipc", false,-1);
        tracep->declBit(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jal", false,-1);
        tracep->declBit(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jalr", false,-1);
        tracep->declBit(c+22,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sd", false,-1);
        tracep->declBit(c+23,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_add", false,-1);
        tracep->declBit(c+24,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sub", false,-1);
        tracep->declBit(c+25,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_or", false,-1);
        tracep->declBit(c+26,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slt", false,-1);
        tracep->declBit(c+27,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltu", false,-1);
        tracep->declBit(c+28,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_and", false,-1);
        tracep->declBit(c+29,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xor", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sll", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srl", false,-1);
        tracep->declBit(c+32,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sra", false,-1);
        tracep->declBit(c+33,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_beq", false,-1);
        tracep->declBit(c+34,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bne", false,-1);
        tracep->declBit(c+35,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_blt", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bltu", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bge", false,-1);
        tracep->declBit(c+37,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bgeu", false,-1);
        tracep->declBit(c+38,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_ld", false,-1);
        tracep->declBit(c+39,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit r_type", false,-1);
        tracep->declBit(c+40,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit b_type", false,-1);
        tracep->declBit(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem", false,-1);
        tracep->declBit(c+216,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+229,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+232,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+230,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+231,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+152+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+219,"top u_ysyx_22040088_EXU pc", false,-1, 63,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_EXU alu_op", false,-1, 10,0);
        tracep->declBus(c+2,"top u_ysyx_22040088_EXU sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+223,"top u_ysyx_22040088_EXU immI", false,-1, 11,0);
        tracep->declBus(c+9,"top u_ysyx_22040088_EXU immJ", false,-1, 20,0);
        tracep->declBus(c+224,"top u_ysyx_22040088_EXU immU", false,-1, 19,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_EXU immB", false,-1, 12,0);
        tracep->declQuad(c+13,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declQuad(c+221,"top u_ysyx_22040088_EXU nextpc", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_ysyx_22040088_EXU immI_sext", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_ysyx_22040088_EXU immJ_sext", false,-1, 63,0);
        tracep->declQuad(c+236,"top u_ysyx_22040088_EXU immU_sext", false,-1, 63,0);
        tracep->declQuad(c+45,"top u_ysyx_22040088_EXU immB_sext", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+238,"top u_ysyx_22040088_EXU pcadd", false,-1, 63,0);
        tracep->declQuad(c+240,"top u_ysyx_22040088_EXU jalpc", false,-1, 63,0);
        tracep->declQuad(c+51,"top u_ysyx_22040088_EXU jalrpc", false,-1, 63,0);
        tracep->declQuad(c+242,"top u_ysyx_22040088_EXU beqpc", false,-1, 63,0);
        tracep->declQuad(c+244,"top u_ysyx_22040088_EXU bnepc", false,-1, 63,0);
        tracep->declQuad(c+246,"top u_ysyx_22040088_EXU bltpc", false,-1, 63,0);
        tracep->declQuad(c+248,"top u_ysyx_22040088_EXU bgepc", false,-1, 63,0);
        tracep->declBus(c+254,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 in", false,-1, 11,0);
        tracep->declQuad(c+41,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 out", false,-1, 63,0);
        tracep->declBus(c+255,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+9,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 in", false,-1, 20,0);
        tracep->declQuad(c+43,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 out", false,-1, 63,0);
        tracep->declBus(c+256,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 in", false,-1, 19,0);
        tracep->declQuad(c+236,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 out", false,-1, 63,0);
        tracep->declBus(c+257,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 in", false,-1, 12,0);
        tracep->declQuad(c+45,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 out", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 rdata1", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 pc", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 sel_alusrc1", false,-1, 1,0);
        tracep->declQuad(c+47,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 alu_src1", false,-1, 63,0);
        tracep->declBus(c+258,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+258,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+47,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault key", false,-1, 1,0);
        tracep->declQuad(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+53,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault lut", false,-1, 131,0);
        tracep->declBus(c+258,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+258,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+261,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+47,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key", false,-1, 1,0);
        tracep->declQuad(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+53,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut", false,-1, 131,0);
        tracep->declBus(c+262,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+58+i*3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+64+i*1,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+66+i*2,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+70,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+72,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+263,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 rdata2", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 immI", false,-1, 63,0);
        tracep->declQuad(c+236,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 immU", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+264,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+264,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault key", false,-1, 3,0);
        tracep->declQuad(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+73,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault lut", false,-1, 271,0);
        tracep->declBus(c+264,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+264,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+261,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key", false,-1, 3,0);
        tracep->declQuad(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+73,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut", false,-1, 271,0);
        tracep->declBus(c+265,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+82+i*3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+94+i*1,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+98+i*2,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+106,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+108,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+266,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 10,0);
        tracep->declQuad(c+47,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+13,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+109,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+110,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+111,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+112,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+113,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+114,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+115,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+116,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+117,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+118,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+119,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declQuad(c+120,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+122,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+130,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+134,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+136,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+138,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+140,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+142,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+120,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+143,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
        tracep->declQuad(c+219,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pc", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immI", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immJ", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch rdata1", false,-1, 63,0);
        tracep->declQuad(c+13,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch alu_result", false,-1, 63,0);
        tracep->declQuad(c+45,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immB", false,-1, 63,0);
        tracep->declQuad(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pcadd", false,-1, 63,0);
        tracep->declQuad(c+240,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch jalpc", false,-1, 63,0);
        tracep->declQuad(c+51,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch jalrpc", false,-1, 63,0);
        tracep->declQuad(c+242,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch beqpc", false,-1, 63,0);
        tracep->declQuad(c+244,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bnepc", false,-1, 63,0);
        tracep->declQuad(c+246,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bltpc", false,-1, 63,0);
        tracep->declQuad(c+248,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bgepc", false,-1, 63,0);
        tracep->declBit(c+144,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch zero", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch neg", false,-1);
        tracep->declQuad(c+146,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pcB", false,-1, 63,0);
        tracep->declQuad(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc pcadd", false,-1, 63,0);
        tracep->declQuad(c+240,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc jalpc", false,-1, 63,0);
        tracep->declQuad(c+51,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc jalrpc", false,-1, 63,0);
        tracep->declQuad(c+242,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc beqpc", false,-1, 63,0);
        tracep->declQuad(c+244,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bnepc", false,-1, 63,0);
        tracep->declQuad(c+246,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bltpc", false,-1, 63,0);
        tracep->declQuad(c+248,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bgepc", false,-1, 63,0);
        tracep->declBus(c+2,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc sel_nextpc", false,-1, 6,0);
        tracep->declQuad(c+221,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc nextpc", false,-1, 63,0);
        tracep->declBit(c+17,"top u_mem ena", false,-1);
        tracep->declBus(c+16,"top u_mem wen", false,-1, 7,0);
        tracep->declQuad(c+13,"top u_mem addr", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_mem wdata", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_mem rdata", false,-1, 63,0);
        tracep->declQuad(c+148,"top u_mem raddr", false,-1, 63,0);
        tracep->declQuad(c+150,"top u_mem waddr", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__alu_op),11);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__sel_nextpc),7);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__sel_alusrc1),2);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__sel_alusrc2),4);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rf_rdata1),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__rf_rdata2),64);
        tracep->fullIData(oldp+9,(vlSelf->top__DOT__immJ),21);
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__immB),13);
        tracep->fullQData(oldp+11,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->top__DOT__sel_rfres))))) 
                                     & vlSelf->top__DOT__alu_result) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__sel_rfres) 
                                                              >> 1U))))) 
                                       & vlSelf->top__DOT__mem_rdata))),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__alu_result),64);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__sel_rfres),2);
        tracep->fullCData(oldp+16,((0xffU & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))),8);
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__mem));
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__mem_rdata),64);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext),64);
        tracep->fullQData(oldp+43,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__immJ 
                                                            >> 0x14U))))) 
                                     << 0x15U) | (QData)((IData)(vlSelf->top__DOT__immJ)))),64);
        tracep->fullQData(oldp+45,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__immB) 
                                                            >> 0xcU))))) 
                                     << 0xdU) | (QData)((IData)(vlSelf->top__DOT__immB)))),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2),64);
        tracep->fullQData(oldp+51,((0xfffffffffffffffeULL 
                                    & (vlSelf->top__DOT__rf_rdata1 
                                       + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))),64);
        tracep->fullWData(oldp+53,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
        tracep->fullWData(oldp+58,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+61,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+73,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
        tracep->fullWData(oldp+82,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+85,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+88,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+91,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+109,((1U & (IData)(vlSelf->top__DOT__alu_op))));
        tracep->fullBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+115,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+118,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+119,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 0xaU))));
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp114, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp115, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp116, __Vtemp114, __Vtemp115);
        VL_EXTEND_WI(65,1, __Vtemp117, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp118, __Vtemp116, __Vtemp117);
        tracep->fullQData(oldp+124,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp118[2U])))))),64);
        tracep->fullQData(oldp+126,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+128,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+130,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+132,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+134,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+136,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+138,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                                             >> 0x13U))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2) 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp121, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp122, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp123, __Vtemp121, __Vtemp122);
        VL_EXTEND_WI(65,1, __Vtemp124, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp125, __Vtemp123, __Vtemp124);
        tracep->fullBit(oldp+143,((1U & __Vtemp125[2U])));
        tracep->fullBit(oldp+144,((0ULL == vlSelf->top__DOT__alu_result)));
        tracep->fullBit(oldp+145,((1U & (IData)((vlSelf->top__DOT__alu_result 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB),64);
        tracep->fullQData(oldp+148,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__mem) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))))))
                                      ? vlSelf->top__DOT__alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullQData(oldp+150,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__mem) 
                                      & (0U != (0xffU 
                                                & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))))
                                      ? vlSelf->top__DOT__alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullBit(oldp+216,(vlSelf->clk));
        tracep->fullBit(oldp+217,(vlSelf->rst));
        tracep->fullIData(oldp+218,(vlSelf->inst),32);
        tracep->fullQData(oldp+219,(vlSelf->pc),64);
        tracep->fullQData(oldp+221,(((((((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->top__DOT__sel_nextpc))))) 
                                           & (4ULL 
                                              + vlSelf->pc)) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                                    >> 1U))))) 
                                             & (vlSelf->pc 
                                                + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__immJ 
                                                                           >> 0x14U))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__immJ)))))) 
                                         | (0xfffffffffffffffeULL 
                                            & ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                                      >> 2U))))) 
                                               & (vlSelf->top__DOT__rf_rdata1 
                                                  + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext)))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                                  >> 3U))))) 
                                           & ((0ULL 
                                               == vlSelf->top__DOT__alu_result)
                                               ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                               : (4ULL 
                                                  + vlSelf->pc)))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                                 >> 4U))))) 
                                          & ((0ULL 
                                              == vlSelf->top__DOT__alu_result)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                                >> 5U))))) 
                                         & ((1U & (IData)(
                                                          (vlSelf->top__DOT__alu_result 
                                                           >> 0x3fU)))
                                             ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                             : (4ULL 
                                                + vlSelf->pc)))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                               >> 6U))))) 
                                        & ((1U & (IData)(
                                                         (vlSelf->top__DOT__alu_result 
                                                          >> 0x3fU)))
                                            ? (4ULL 
                                               + vlSelf->pc)
                                            : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)))),64);
        tracep->fullSData(oldp+223,((vlSelf->inst >> 0x14U)),12);
        tracep->fullIData(oldp+224,((vlSelf->inst >> 0xcU)),20);
        tracep->fullBit(oldp+225,((0x100073U == vlSelf->inst)));
        tracep->fullCData(oldp+226,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+227,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+228,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+229,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+230,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+231,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+232,((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->inst))) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                      | (0x37U == (0x7fU 
                                                   & vlSelf->inst))) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->inst))) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld))));
        tracep->fullBit(oldp+233,((0x37U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+234,((0x17U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+235,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullQData(oldp+236,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0xcU))))),64);
        tracep->fullQData(oldp+238,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+240,((vlSelf->pc + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__immJ 
                                                                           >> 0x14U))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__immJ))))),64);
        tracep->fullQData(oldp+242,(((0ULL == vlSelf->top__DOT__alu_result)
                                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+244,(((0ULL == vlSelf->top__DOT__alu_result)
                                      ? (4ULL + vlSelf->pc)
                                      : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->fullQData(oldp+246,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))
                                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+248,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))
                                      ? (4ULL + vlSelf->pc)
                                      : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->fullIData(oldp+250,(0x40U),32);
        tracep->fullQData(oldp+251,(0x80000000ULL),64);
        tracep->fullBit(oldp+253,(1U));
        tracep->fullIData(oldp+254,(0xcU),32);
        tracep->fullIData(oldp+255,(0x15U),32);
        tracep->fullIData(oldp+256,(0x14U),32);
        tracep->fullIData(oldp+257,(0xdU),32);
        tracep->fullIData(oldp+258,(2U),32);
        tracep->fullQData(oldp+259,(0ULL),64);
        tracep->fullIData(oldp+261,(1U),32);
        tracep->fullIData(oldp+262,(0x42U),32);
        tracep->fullIData(oldp+263,(2U),32);
        tracep->fullIData(oldp+264,(4U),32);
        tracep->fullIData(oldp+265,(0x44U),32);
        tracep->fullIData(oldp+266,(4U),32);
    }
}
