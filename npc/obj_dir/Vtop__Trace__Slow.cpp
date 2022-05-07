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
        tracep->declBit(c+209,"clk", false,-1);
        tracep->declBit(c+210,"rst", false,-1);
        tracep->declBus(c+211,"inst", false,-1, 31,0);
        tracep->declQuad(c+212,"pc", false,-1, 63,0);
        tracep->declBit(c+209,"top clk", false,-1);
        tracep->declBit(c+210,"top rst", false,-1);
        tracep->declBus(c+211,"top inst", false,-1, 31,0);
        tracep->declQuad(c+212,"top pc", false,-1, 63,0);
        tracep->declBus(c+1,"top alu_op", false,-1, 11,0);
        tracep->declQuad(c+2,"top alu_src1", false,-1, 63,0);
        tracep->declQuad(c+4,"top alu_src2", false,-1, 63,0);
        tracep->declQuad(c+6,"top rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+8,"top nextpc", false,-1, 63,0);
        tracep->declBit(c+214,"top ebreak", false,-1);
        tracep->declBit(c+209,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+210,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IFU nextpc", false,-1, 63,0);
        tracep->declQuad(c+212,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declBit(c+209,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+210,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+212,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+236,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+209,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+210,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+212,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+238,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declBit(c+209,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declQuad(c+212,"top u_ysyx_22040088_IDU pc", false,-1, 63,0);
        tracep->declBus(c+211,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_IDU alu_op", false,-1, 11,0);
        tracep->declQuad(c+2,"top u_ysyx_22040088_IDU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IDU nextpc", false,-1, 63,0);
        tracep->declBus(c+215,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+216,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+217,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+218,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+219,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+220,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU immJ", false,-1, 20,0);
        tracep->declBus(c+221,"top u_ysyx_22040088_IDU immU", false,-1, 19,0);
        tracep->declQuad(c+11,"top u_ysyx_22040088_IDU immI_sext", false,-1, 63,0);
        tracep->declQuad(c+222,"top u_ysyx_22040088_IDU immU_sext", false,-1, 63,0);
        tracep->declQuad(c+13,"top u_ysyx_22040088_IDU immJ_sext", false,-1, 63,0);
        tracep->declBit(c+224,"top u_ysyx_22040088_IDU rf_we", false,-1);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU sel_alusrc2", false,-1, 3,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU sel_nextpc", false,-1, 2,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+225,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declQuad(c+227,"top u_ysyx_22040088_IDU pcadd", false,-1, 63,0);
        tracep->declQuad(c+229,"top u_ysyx_22040088_IDU jalpc", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_ysyx_22040088_IDU jalrpc", false,-1, 63,0);
        tracep->declBus(c+239,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+220,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 in", false,-1, 11,0);
        tracep->declQuad(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 out", false,-1, 63,0);
        tracep->declBus(c+240,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 in", false,-1, 20,0);
        tracep->declQuad(c+13,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 out", false,-1, 63,0);
        tracep->declBus(c+241,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+221,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 in", false,-1, 19,0);
        tracep->declQuad(c+222,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 out", false,-1, 63,0);
        tracep->declBus(c+215,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+216,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 11,0);
        tracep->declBit(c+224,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc2", false,-1, 3,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_nextpc", false,-1, 2,0);
        tracep->declBit(c+22,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+231,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lui", false,-1);
        tracep->declBit(c+232,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_auipc", false,-1);
        tracep->declBit(c+233,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jal", false,-1);
        tracep->declBit(c+23,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jalr", false,-1);
        tracep->declBit(c+234,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sd", false,-1);
        tracep->declBit(c+209,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+217,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+224,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+218,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+219,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+225,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+145+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 rdata1", false,-1, 63,0);
        tracep->declQuad(c+212,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 pc", false,-1, 63,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 sel_alusrc1", false,-1, 1,0);
        tracep->declQuad(c+2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 alu_src1", false,-1, 63,0);
        tracep->declBus(c+242,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+242,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault key", false,-1, 1,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+24,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault lut", false,-1, 131,0);
        tracep->declBus(c+242,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+242,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+245,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key", false,-1, 1,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+24,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut", false,-1, 131,0);
        tracep->declBus(c+246,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+29+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+35+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+37+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+41,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+43,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+247,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+225,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 rdata2", false,-1, 63,0);
        tracep->declQuad(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immI", false,-1, 63,0);
        tracep->declQuad(c+222,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immU", false,-1, 63,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+248,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+248,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault key", false,-1, 3,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+44,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault lut", false,-1, 271,0);
        tracep->declBus(c+248,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+248,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+245,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key", false,-1, 3,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+44,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut", false,-1, 271,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+53+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+65+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+69+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+77,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+79,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+250,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+212,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch pc", false,-1, 63,0);
        tracep->declQuad(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch immI", false,-1, 63,0);
        tracep->declQuad(c+13,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch immJ", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch rdata1", false,-1, 63,0);
        tracep->declQuad(c+227,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch pcadd", false,-1, 63,0);
        tracep->declQuad(c+229,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch jalpc", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch jalrpc", false,-1, 63,0);
        tracep->declQuad(c+227,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc pcadd", false,-1, 63,0);
        tracep->declQuad(c+229,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc jalpc", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc jalrpc", false,-1, 63,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc sel_nextpc", false,-1, 2,0);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc nextpc", false,-1, 63,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault key", false,-1, 2,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+80,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault lut", false,-1, 200,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+251,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+245,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 key", false,-1, 2,0);
        tracep->declQuad(c+243,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+80,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 lut", false,-1, 200,0);
        tracep->declBus(c+252,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+87+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+96+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+99+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+105,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+107,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+253,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_EXU alu_op", false,-1, 11,0);
        tracep->declQuad(c+2,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declBus(c+1,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 11,0);
        tracep->declQuad(c+2,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+22,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+108,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+109,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+110,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+111,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+112,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_nor", false,-1);
        tracep->declBit(c+113,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+114,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+115,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+116,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+117,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+118,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declQuad(c+119,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+121,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+123,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+127,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU nor_result", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+131,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+133,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+2,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+141,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+143,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+119,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+144,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp162;
    VlWide<3>/*95:0*/ __Vtemp163;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<3>/*95:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<3>/*95:0*/ __Vtemp169;
    VlWide<3>/*95:0*/ __Vtemp170;
    VlWide<3>/*95:0*/ __Vtemp171;
    VlWide<3>/*95:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp173;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi),12);
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__alu_src1),64);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__alu_src2),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__rf_wdata),64);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__nextpc),64);
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
        tracep->fullQData(oldp+13,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                            >> 0x14U))))) 
                                     << 0x15U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),2);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),4);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_nextpc),3);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
        tracep->fullQData(oldp+20,((0xfffffffffffffffeULL 
                                    & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                       + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
        tracep->fullWData(oldp+24,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
        tracep->fullWData(oldp+29,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+32,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+44,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
        tracep->fullWData(oldp+53,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+56,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+59,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+62,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+80,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut),201);
        tracep->fullWData(oldp+87,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+93,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+108,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 1U))));
        tracep->fullBit(oldp+109,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 2U))));
        tracep->fullBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 3U))));
        tracep->fullBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 4U))));
        tracep->fullBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 5U))));
        tracep->fullBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 6U))));
        tracep->fullBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 7U))));
        tracep->fullBit(oldp+115,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 8U))));
        tracep->fullBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 9U))));
        tracep->fullBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+118,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp162, vlSelf->top__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp163, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp164, __Vtemp162, __Vtemp163);
        VL_EXTEND_WI(65,1, __Vtemp165, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp166, __Vtemp164, __Vtemp165);
        tracep->fullQData(oldp+123,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp166[2U])))))),64);
        tracep->fullQData(oldp+125,((vlSelf->top__DOT__alu_src1 
                                     & vlSelf->top__DOT__alu_src2)),64);
        tracep->fullQData(oldp+127,((~ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result)),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result),64);
        tracep->fullQData(oldp+131,((vlSelf->top__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__alu_src2)),64);
        tracep->fullQData(oldp+133,((vlSelf->top__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+135,((vlSelf->top__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+137,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+139,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__alu_src2 
                                                                             >> 0x13U))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__alu_src2) 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp169, vlSelf->top__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp170, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp171, __Vtemp169, __Vtemp170);
        VL_EXTEND_WI(65,1, __Vtemp172, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp173, __Vtemp171, __Vtemp172);
        tracep->fullBit(oldp+144,((1U & __Vtemp173[2U])));
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullBit(oldp+209,(vlSelf->clk));
        tracep->fullBit(oldp+210,(vlSelf->rst));
        tracep->fullIData(oldp+211,(vlSelf->inst),32);
        tracep->fullQData(oldp+212,(vlSelf->pc),64);
        tracep->fullBit(oldp+214,((0x100073U == vlSelf->inst)));
        tracep->fullCData(oldp+215,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+216,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+217,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+218,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+219,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+220,((vlSelf->inst >> 0x14U)),12);
        tracep->fullIData(oldp+221,((vlSelf->inst >> 0xcU)),20);
        tracep->fullQData(oldp+222,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0xcU))))),64);
        tracep->fullBit(oldp+224,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->inst))) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->inst)))));
        tracep->fullQData(oldp+225,(((0U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->inst 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+227,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+229,((vlSelf->pc + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                           >> 0x14U))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ))))),64);
        tracep->fullBit(oldp+231,((0x37U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+232,((0x17U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+233,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+234,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullIData(oldp+235,(0x40U),32);
        tracep->fullQData(oldp+236,(0x80000000ULL),64);
        tracep->fullBit(oldp+238,(1U));
        tracep->fullIData(oldp+239,(0xcU),32);
        tracep->fullIData(oldp+240,(0x15U),32);
        tracep->fullIData(oldp+241,(0x14U),32);
        tracep->fullIData(oldp+242,(2U),32);
        tracep->fullQData(oldp+243,(0ULL),64);
        tracep->fullIData(oldp+245,(1U),32);
        tracep->fullIData(oldp+246,(0x42U),32);
        tracep->fullIData(oldp+247,(2U),32);
        tracep->fullIData(oldp+248,(4U),32);
        tracep->fullIData(oldp+249,(0x44U),32);
        tracep->fullIData(oldp+250,(4U),32);
        tracep->fullIData(oldp+251,(3U),32);
        tracep->fullIData(oldp+252,(0x43U),32);
        tracep->fullIData(oldp+253,(3U),32);
    }
}
