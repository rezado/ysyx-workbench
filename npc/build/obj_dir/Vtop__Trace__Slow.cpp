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
        tracep->declBit(c+233,"clk", false,-1);
        tracep->declBit(c+234,"rst", false,-1);
        tracep->declQuad(c+235,"pc", false,-1, 63,0);
        tracep->declBit(c+233,"top clk", false,-1);
        tracep->declBit(c+234,"top rst", false,-1);
        tracep->declQuad(c+235,"top pc", false,-1, 63,0);
        tracep->declQuad(c+237,"top nextpc", false,-1, 63,0);
        tracep->declQuad(c+1,"top inst", false,-1, 63,0);
        tracep->declBus(c+3,"top alu_op", false,-1, 10,0);
        tracep->declBus(c+4,"top sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+5,"top sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+7,"top rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+11,"top immI", false,-1, 11,0);
        tracep->declBus(c+12,"top immJ", false,-1, 20,0);
        tracep->declBus(c+13,"top immU", false,-1, 19,0);
        tracep->declBus(c+14,"top immB", false,-1, 12,0);
        tracep->declQuad(c+15,"top rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+17,"top alu_result", false,-1, 63,0);
        tracep->declBus(c+19,"top sel_rfres", false,-1, 1,0);
        tracep->declBus(c+20,"top mem_wen", false,-1, 7,0);
        tracep->declBit(c+21,"top mem_ena", false,-1);
        tracep->declQuad(c+22,"top mem_rdata", false,-1, 63,0);
        tracep->declBit(c+24,"top ebreak", false,-1);
        tracep->declBit(c+233,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+234,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+237,"top u_ysyx_22040088_IFU nextpc", false,-1, 63,0);
        tracep->declQuad(c+235,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declBit(c+233,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+234,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+237,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+235,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+252,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+233,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+234,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+237,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+235,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+254,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declQuad(c+17,"top u_ysyx_22040088_genrfwdata alu_result", false,-1, 63,0);
        tracep->declQuad(c+22,"top u_ysyx_22040088_genrfwdata mem_rdata", false,-1, 63,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_genrfwdata sel_rfwdata", false,-1, 1,0);
        tracep->declQuad(c+15,"top u_ysyx_22040088_genrfwdata rf_wdata", false,-1, 63,0);
        tracep->declBit(c+233,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declBus(c+25,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+15,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU alu_op", false,-1, 10,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_IDU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_IDU sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_IDU immJ", false,-1, 20,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU immU", false,-1, 19,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU immB", false,-1, 12,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_IDU sel_rfres", false,-1, 1,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU mem_wen", false,-1, 7,0);
        tracep->declBit(c+21,"top u_ysyx_22040088_IDU mem_ena", false,-1);
        tracep->declBus(c+26,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+27,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+28,"top u_ysyx_22040088_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+29,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+30,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+31,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBit(c+32,"top u_ysyx_22040088_IDU rf_we", false,-1);
        tracep->declBus(c+26,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+27,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+28,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct7", false,-1, 6,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 10,0);
        tracep->declBit(c+32,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBus(c+5,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc2", false,-1, 3,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_rfres", false,-1, 1,0);
        tracep->declBit(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_ena", false,-1);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_wen", false,-1, 7,0);
        tracep->declBit(c+33,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+34,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lui", false,-1);
        tracep->declBit(c+35,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_auipc", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jal", false,-1);
        tracep->declBit(c+37,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jalr", false,-1);
        tracep->declBit(c+38,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sd", false,-1);
        tracep->declBit(c+39,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_add", false,-1);
        tracep->declBit(c+40,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sub", false,-1);
        tracep->declBit(c+41,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_or", false,-1);
        tracep->declBit(c+42,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slt", false,-1);
        tracep->declBit(c+43,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltu", false,-1);
        tracep->declBit(c+44,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_and", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xor", false,-1);
        tracep->declBit(c+46,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sll", false,-1);
        tracep->declBit(c+47,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srl", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sra", false,-1);
        tracep->declBit(c+49,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_beq", false,-1);
        tracep->declBit(c+50,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bne", false,-1);
        tracep->declBit(c+51,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_blt", false,-1);
        tracep->declBit(c+52,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bltu", false,-1);
        tracep->declBit(c+52,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bge", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bgeu", false,-1);
        tracep->declBit(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_ld", false,-1);
        tracep->declBit(c+54,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit r_type", false,-1);
        tracep->declBit(c+55,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit b_type", false,-1);
        tracep->declBit(c+233,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+29,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+32,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+30,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+31,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+56+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+235,"top u_ysyx_22040088_EXU pc", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU alu_op", false,-1, 10,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_EXU sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_EXU immI", false,-1, 11,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_EXU immJ", false,-1, 20,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_EXU immU", false,-1, 19,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_EXU immB", false,-1, 12,0);
        tracep->declQuad(c+17,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declQuad(c+237,"top u_ysyx_22040088_EXU nextpc", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_ysyx_22040088_EXU immI_sext", false,-1, 63,0);
        tracep->declQuad(c+122,"top u_ysyx_22040088_EXU immJ_sext", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_ysyx_22040088_EXU immU_sext", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_ysyx_22040088_EXU immB_sext", false,-1, 63,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+130,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+239,"top u_ysyx_22040088_EXU pcadd", false,-1, 63,0);
        tracep->declQuad(c+241,"top u_ysyx_22040088_EXU jalpc", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_ysyx_22040088_EXU jalrpc", false,-1, 63,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_EXU beqpc", false,-1, 63,0);
        tracep->declQuad(c+245,"top u_ysyx_22040088_EXU bnepc", false,-1, 63,0);
        tracep->declQuad(c+247,"top u_ysyx_22040088_EXU bltpc", false,-1, 63,0);
        tracep->declQuad(c+249,"top u_ysyx_22040088_EXU bgepc", false,-1, 63,0);
        tracep->declBus(c+255,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 in", false,-1, 11,0);
        tracep->declQuad(c+120,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 out", false,-1, 63,0);
        tracep->declBus(c+256,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 in", false,-1, 20,0);
        tracep->declQuad(c+122,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 out", false,-1, 63,0);
        tracep->declBus(c+257,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 in", false,-1, 19,0);
        tracep->declQuad(c+124,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 out", false,-1, 63,0);
        tracep->declBus(c+258,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 in", false,-1, 12,0);
        tracep->declQuad(c+126,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 out", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 rdata1", false,-1, 63,0);
        tracep->declQuad(c+235,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 pc", false,-1, 63,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 sel_alusrc1", false,-1, 1,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 alu_src1", false,-1, 63,0);
        tracep->declBus(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault key", false,-1, 1,0);
        tracep->declQuad(c+260,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+134,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault lut", false,-1, 131,0);
        tracep->declBus(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+259,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+262,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key", false,-1, 1,0);
        tracep->declQuad(c+260,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+134,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut", false,-1, 131,0);
        tracep->declBus(c+263,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+139+i*3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+145+i*1,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+147+i*2,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+151,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+153,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+264,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 rdata2", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 immI", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 immU", false,-1, 63,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+130,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+265,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+265,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+130,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault key", false,-1, 3,0);
        tracep->declQuad(c+260,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+154,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault lut", false,-1, 271,0);
        tracep->declBus(c+265,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+265,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+262,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+130,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key", false,-1, 3,0);
        tracep->declQuad(c+260,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+154,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut", false,-1, 271,0);
        tracep->declBus(c+266,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+163+i*3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+175+i*1,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+179+i*2,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+187,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+189,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+267,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 10,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+130,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+17,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+190,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+191,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+192,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+193,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+194,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+195,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+196,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+197,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+198,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+199,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+200,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declQuad(c+201,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+203,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+205,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+207,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+209,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+211,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+213,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+215,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+217,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+221,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+223,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+201,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+224,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
        tracep->declQuad(c+235,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pc", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immI", false,-1, 63,0);
        tracep->declQuad(c+122,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immJ", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch rdata1", false,-1, 63,0);
        tracep->declQuad(c+17,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch alu_result", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immB", false,-1, 63,0);
        tracep->declQuad(c+239,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pcadd", false,-1, 63,0);
        tracep->declQuad(c+241,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch jalpc", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch jalrpc", false,-1, 63,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch beqpc", false,-1, 63,0);
        tracep->declQuad(c+245,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bnepc", false,-1, 63,0);
        tracep->declQuad(c+247,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bltpc", false,-1, 63,0);
        tracep->declQuad(c+249,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bgepc", false,-1, 63,0);
        tracep->declBit(c+225,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch zero", false,-1);
        tracep->declBit(c+226,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch neg", false,-1);
        tracep->declQuad(c+227,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pcB", false,-1, 63,0);
        tracep->declQuad(c+239,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc pcadd", false,-1, 63,0);
        tracep->declQuad(c+241,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc jalpc", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc jalrpc", false,-1, 63,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc beqpc", false,-1, 63,0);
        tracep->declQuad(c+245,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bnepc", false,-1, 63,0);
        tracep->declQuad(c+247,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bltpc", false,-1, 63,0);
        tracep->declQuad(c+249,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bgepc", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc sel_nextpc", false,-1, 6,0);
        tracep->declQuad(c+237,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc nextpc", false,-1, 63,0);
        tracep->declBit(c+21,"top u_mem ena", false,-1);
        tracep->declBus(c+20,"top u_mem wen", false,-1, 7,0);
        tracep->declQuad(c+17,"top u_mem addr", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_mem wdata", false,-1, 63,0);
        tracep->declQuad(c+22,"top u_mem rdata", false,-1, 63,0);
        tracep->declQuad(c+229,"top u_mem raddr", false,-1, 63,0);
        tracep->declQuad(c+231,"top u_mem waddr", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__inst),64);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__alu_op),11);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__sel_nextpc),7);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__sel_alusrc1),2);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__sel_alusrc2),4);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__rf_rdata1),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__rf_rdata2),64);
        tracep->fullSData(oldp+11,((0xfffU & (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+12,(vlSelf->top__DOT__immJ),21);
        tracep->fullIData(oldp+13,((0xfffffU & (IData)(
                                                       (vlSelf->top__DOT__inst 
                                                        >> 0xcU)))),20);
        tracep->fullSData(oldp+14,(vlSelf->top__DOT__immB),13);
        tracep->fullQData(oldp+15,((((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->top__DOT__sel_rfres))))) 
                                     & vlSelf->top__DOT__alu_result) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__sel_rfres) 
                                                              >> 1U))))) 
                                       & vlSelf->top__DOT__mem_rdata))),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__alu_result),64);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__sel_rfres),2);
        tracep->fullCData(oldp+20,((0xffU & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))),8);
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__mem_rdata),64);
        tracep->fullBit(oldp+24,((0x100073ULL == vlSelf->top__DOT__inst)));
        tracep->fullIData(oldp+25,((IData)(vlSelf->top__DOT__inst)),32);
        tracep->fullCData(oldp+26,((0x7fU & (IData)(vlSelf->top__DOT__inst))),7);
        tracep->fullCData(oldp+27,((7U & (IData)((vlSelf->top__DOT__inst 
                                                  >> 0xcU)))),3);
        tracep->fullCData(oldp+28,((0x7fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0x19U)))),7);
        tracep->fullCData(oldp+29,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 7U)))),5);
        tracep->fullCData(oldp+30,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+31,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0x14U)))),5);
        tracep->fullBit(oldp+32,((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                       | (0x6fU == 
                                          (0x7fU & (IData)(vlSelf->top__DOT__inst)))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                     | (0x37U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__inst)))) 
                                    | (0x17U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__inst)))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld))));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+34,((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__inst)))));
        tracep->fullBit(oldp+35,((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__inst)))));
        tracep->fullBit(oldp+36,((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__inst)))));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext),64);
        tracep->fullQData(oldp+122,((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__immJ 
                                                             >> 0x14U))))) 
                                      << 0x15U) | (QData)((IData)(vlSelf->top__DOT__immJ)))),64);
        tracep->fullQData(oldp+124,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x1fU)))))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__inst 
                                                                              >> 0xcU))))))),64);
        tracep->fullQData(oldp+126,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__immB) 
                                                             >> 0xcU))))) 
                                      << 0xdU) | (QData)((IData)(vlSelf->top__DOT__immB)))),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2),64);
        tracep->fullQData(oldp+132,((0xfffffffffffffffeULL 
                                     & (vlSelf->top__DOT__rf_rdata1 
                                        + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))),64);
        tracep->fullWData(oldp+134,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
        tracep->fullWData(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+142,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+154,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
        tracep->fullWData(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+172,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+176,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+190,((1U & (IData)(vlSelf->top__DOT__alu_op))));
        tracep->fullBit(oldp+191,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+192,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+193,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+194,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+195,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+196,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+197,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+198,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+199,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+200,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 0xaU))));
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp114, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp115, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp116, __Vtemp114, __Vtemp115);
        VL_EXTEND_WI(65,1, __Vtemp117, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp118, __Vtemp116, __Vtemp117);
        tracep->fullQData(oldp+205,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp118[2U])))))),64);
        tracep->fullQData(oldp+207,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+209,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+211,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+213,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+215,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+217,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+219,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                                             >> 0x13U))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2) 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp121, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp122, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp123, __Vtemp121, __Vtemp122);
        VL_EXTEND_WI(65,1, __Vtemp124, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp125, __Vtemp123, __Vtemp124);
        tracep->fullBit(oldp+224,((1U & __Vtemp125[2U])));
        tracep->fullBit(oldp+225,((0ULL == vlSelf->top__DOT__alu_result)));
        tracep->fullBit(oldp+226,((1U & (IData)((vlSelf->top__DOT__alu_result 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB),64);
        tracep->fullQData(oldp+229,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))))))
                                      ? vlSelf->top__DOT__alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullQData(oldp+231,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                      & (0U != (0xffU 
                                                & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))))
                                      ? vlSelf->top__DOT__alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullBit(oldp+233,(vlSelf->clk));
        tracep->fullBit(oldp+234,(vlSelf->rst));
        tracep->fullQData(oldp+235,(vlSelf->pc),64);
        tracep->fullQData(oldp+237,(((((((((- (QData)((IData)(
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
        tracep->fullQData(oldp+239,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+241,((vlSelf->pc + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__immJ 
                                                                           >> 0x14U))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__immJ))))),64);
        tracep->fullQData(oldp+243,(((0ULL == vlSelf->top__DOT__alu_result)
                                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+245,(((0ULL == vlSelf->top__DOT__alu_result)
                                      ? (4ULL + vlSelf->pc)
                                      : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->fullQData(oldp+247,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))
                                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+249,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))
                                      ? (4ULL + vlSelf->pc)
                                      : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->fullIData(oldp+251,(0x40U),32);
        tracep->fullQData(oldp+252,(0x80000000ULL),64);
        tracep->fullBit(oldp+254,(1U));
        tracep->fullIData(oldp+255,(0xcU),32);
        tracep->fullIData(oldp+256,(0x15U),32);
        tracep->fullIData(oldp+257,(0x14U),32);
        tracep->fullIData(oldp+258,(0xdU),32);
        tracep->fullIData(oldp+259,(2U),32);
        tracep->fullQData(oldp+260,(0ULL),64);
        tracep->fullIData(oldp+262,(1U),32);
        tracep->fullIData(oldp+263,(0x42U),32);
        tracep->fullIData(oldp+264,(2U),32);
        tracep->fullIData(oldp+265,(4U),32);
        tracep->fullIData(oldp+266,(0x44U),32);
        tracep->fullIData(oldp+267,(4U),32);
    }
}
