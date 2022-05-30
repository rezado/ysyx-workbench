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
        tracep->declBit(c+221,"clk", false,-1);
        tracep->declBit(c+222,"rst", false,-1);
        tracep->declBus(c+223,"inst", false,-1, 31,0);
        tracep->declQuad(c+224,"pc", false,-1, 63,0);
        tracep->declBit(c+221,"top clk", false,-1);
        tracep->declBit(c+222,"top rst", false,-1);
        tracep->declBus(c+223,"top inst", false,-1, 31,0);
        tracep->declQuad(c+224,"top pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top nextpc", false,-1, 63,0);
        tracep->declBus(c+3,"top alu_op", false,-1, 10,0);
        tracep->declQuad(c+4,"top alu_src1", false,-1, 63,0);
        tracep->declQuad(c+6,"top alu_src2", false,-1, 63,0);
        tracep->declQuad(c+8,"top rf_wdata", false,-1, 63,0);
        tracep->declBit(c+226,"top ebreak", false,-1);
        tracep->declBit(c+221,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+222,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU nextpc", false,-1, 63,0);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declBit(c+221,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+222,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+250,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+221,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+222,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+252,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declBit(c+221,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IDU pc", false,-1, 63,0);
        tracep->declBus(c+223,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU alu_op", false,-1, 10,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IDU nextpc", false,-1, 63,0);
        tracep->declBus(c+227,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+228,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+229,"top u_ysyx_22040088_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+230,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+231,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+232,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+233,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU immJ", false,-1, 20,0);
        tracep->declBus(c+234,"top u_ysyx_22040088_IDU immU", false,-1, 19,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_IDU immB", false,-1, 12,0);
        tracep->declQuad(c+12,"top u_ysyx_22040088_IDU immI_sext", false,-1, 63,0);
        tracep->declQuad(c+235,"top u_ysyx_22040088_IDU immU_sext", false,-1, 63,0);
        tracep->declQuad(c+14,"top u_ysyx_22040088_IDU immJ_sext", false,-1, 63,0);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU immB_sext", false,-1, 63,0);
        tracep->declBit(c+237,"top u_ysyx_22040088_IDU rf_we", false,-1);
        tracep->declBus(c+18,"top u_ysyx_22040088_IDU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_IDU sel_alusrc2", false,-1, 3,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU sel_nextpc", false,-1, 2,0);
        tracep->declQuad(c+21,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+238,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declQuad(c+240,"top u_ysyx_22040088_IDU pcadd", false,-1, 63,0);
        tracep->declQuad(c+242,"top u_ysyx_22040088_IDU jalpc", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_ysyx_22040088_IDU jalrpc", false,-1, 63,0);
        tracep->declBus(c+253,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+233,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 in", false,-1, 11,0);
        tracep->declQuad(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 out", false,-1, 63,0);
        tracep->declBus(c+254,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 in", false,-1, 20,0);
        tracep->declQuad(c+14,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 out", false,-1, 63,0);
        tracep->declBus(c+255,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+234,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 in", false,-1, 19,0);
        tracep->declQuad(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext3 out", false,-1, 63,0);
        tracep->declBus(c+256,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 in", false,-1, 12,0);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 out", false,-1, 63,0);
        tracep->declBus(c+227,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+228,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+229,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct7", false,-1, 6,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 10,0);
        tracep->declBit(c+237,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBus(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc2", false,-1, 3,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_nextpc", false,-1, 2,0);
        tracep->declBit(c+25,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+244,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lui", false,-1);
        tracep->declBit(c+245,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_auipc", false,-1);
        tracep->declBit(c+246,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jal", false,-1);
        tracep->declBit(c+26,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jalr", false,-1);
        tracep->declBit(c+247,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sd", false,-1);
        tracep->declBit(c+27,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_add", false,-1);
        tracep->declBit(c+28,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sub", false,-1);
        tracep->declBit(c+29,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_or", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slt", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltu", false,-1);
        tracep->declBit(c+32,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_and", false,-1);
        tracep->declBit(c+33,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xor", false,-1);
        tracep->declBit(c+34,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sll", false,-1);
        tracep->declBit(c+35,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srl", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sra", false,-1);
        tracep->declBit(c+248,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_beq", false,-1);
        tracep->declBit(c+37,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit r_type", false,-1);
        tracep->declBit(c+221,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+8,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+230,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+237,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+231,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+232,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+238,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+157+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 rdata1", false,-1, 63,0);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 pc", false,-1, 63,0);
        tracep->declBus(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 sel_alusrc1", false,-1, 1,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 alu_src1", false,-1, 63,0);
        tracep->declBus(c+257,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+257,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault key", false,-1, 1,0);
        tracep->declQuad(c+258,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+38,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault lut", false,-1, 131,0);
        tracep->declBus(c+257,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+257,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+260,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key", false,-1, 1,0);
        tracep->declQuad(c+258,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+38,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut", false,-1, 131,0);
        tracep->declBus(c+261,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+43+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+49+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+51+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+55,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+57,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+262,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+238,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 rdata2", false,-1, 63,0);
        tracep->declQuad(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immI", false,-1, 63,0);
        tracep->declQuad(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immU", false,-1, 63,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 sel_alusrc2", false,-1, 3,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+263,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+263,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault key", false,-1, 3,0);
        tracep->declQuad(c+258,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+58,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault lut", false,-1, 271,0);
        tracep->declBus(c+263,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+263,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+260,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key", false,-1, 3,0);
        tracep->declQuad(c+258,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+58,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut", false,-1, 271,0);
        tracep->declBus(c+264,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+67+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+79+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+83+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+91,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+93,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+265,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch pc", false,-1, 63,0);
        tracep->declQuad(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch immI", false,-1, 63,0);
        tracep->declQuad(c+14,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch immJ", false,-1, 63,0);
        tracep->declQuad(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch rdata1", false,-1, 63,0);
        tracep->declQuad(c+240,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch pcadd", false,-1, 63,0);
        tracep->declQuad(c+242,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch jalpc", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_ysyx_22040088_IDU u_ysyx_22040088_pcbranch jalrpc", false,-1, 63,0);
        tracep->declQuad(c+240,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc pcadd", false,-1, 63,0);
        tracep->declQuad(c+242,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc jalpc", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc jalrpc", false,-1, 63,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc sel_nextpc", false,-1, 2,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc nextpc", false,-1, 63,0);
        tracep->declBus(c+266,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+266,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault key", false,-1, 2,0);
        tracep->declQuad(c+258,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+94,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault lut", false,-1, 200,0);
        tracep->declBus(c+266,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+266,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+260,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 key", false,-1, 2,0);
        tracep->declQuad(c+258,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+94,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 lut", false,-1, 200,0);
        tracep->declBus(c+267,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+101+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+110+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+113+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+119,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+121,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+268,"top u_ysyx_22040088_IDU u_ysyx_22040088_gennextpc u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU alu_op", false,-1, 10,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+8,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 10,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+8,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+122,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+123,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+124,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+125,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+126,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+127,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+128,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+129,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+130,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+131,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+132,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declQuad(c+133,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+141,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+143,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+145,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+147,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+149,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+151,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+153,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+155,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+133,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+156,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp157;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp159;
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__nextpc),64);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__alu_op),11);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__alu_src1),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__alu_src2),64);
        VL_EXTEND_WQ(65,64, __Vtemp155, vlSelf->top__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp156, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp157, __Vtemp155, __Vtemp156);
        VL_EXTEND_WI(65,1, __Vtemp158, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp159, __Vtemp157, __Vtemp158);
        tracep->fullQData(oldp+8,((((((((((((- (QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSelf->top__DOT__alu_op)))))) 
                                            & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                     >> 3U))))) 
                                              & (QData)((IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (1U 
                                                                     & __Vtemp159[2U]))))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                    >> 2U))))) 
                                             & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result)) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                   >> 4U))))) 
                                            & (vlSelf->top__DOT__alu_src1 
                                               & vlSelf->top__DOT__alu_src2))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                  >> 5U))))) 
                                           & (vlSelf->top__DOT__alu_src1 
                                              | vlSelf->top__DOT__alu_src2))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                 >> 6U))))) 
                                          & (vlSelf->top__DOT__alu_src1 
                                             ^ vlSelf->top__DOT__alu_src2))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                >> 7U))))) 
                                         & (vlSelf->top__DOT__alu_src1 
                                            << (0x3fU 
                                                & (IData)(vlSelf->top__DOT__alu_src2))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__alu_op) 
                                                               >> 8U))))) 
                                        & (vlSelf->top__DOT__alu_src1 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__alu_src2))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__alu_op) 
                                                              >> 9U))))) 
                                       & VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__alu_src1, 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__alu_src2))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__alu_op) 
                                                             >> 0xaU))))) 
                                      & (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__alu_src2 
                                                                                >> 0x13U))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->top__DOT__alu_src2) 
                                                            << 0xcU))))))),64);
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
        tracep->fullSData(oldp+11,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB),13);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
        tracep->fullQData(oldp+14,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                            >> 0x14U))))) 
                                     << 0x15U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
        tracep->fullQData(oldp+16,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                            >> 0xcU))))) 
                                     << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))),64);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),2);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),4);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_nextpc),3);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
        tracep->fullQData(oldp+23,((0xfffffffffffffffeULL 
                                    & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                       + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
        tracep->fullWData(oldp+38,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
        tracep->fullWData(oldp+43,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+46,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+58,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
        tracep->fullWData(oldp+67,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+70,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+73,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+76,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut),201);
        tracep->fullWData(oldp+101,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+107,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+122,((1U & (IData)(vlSelf->top__DOT__alu_op))));
        tracep->fullBit(oldp+123,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+124,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+125,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+126,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+127,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+128,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+129,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+130,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+131,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+132,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 0xaU))));
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp162, vlSelf->top__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp163, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp164, __Vtemp162, __Vtemp163);
        VL_EXTEND_WI(65,1, __Vtemp165, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp166, __Vtemp164, __Vtemp165);
        tracep->fullQData(oldp+137,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp166[2U])))))),64);
        tracep->fullQData(oldp+139,((vlSelf->top__DOT__alu_src1 
                                     & vlSelf->top__DOT__alu_src2)),64);
        tracep->fullQData(oldp+141,((vlSelf->top__DOT__alu_src1 
                                     | vlSelf->top__DOT__alu_src2)),64);
        tracep->fullQData(oldp+143,((vlSelf->top__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__alu_src2)),64);
        tracep->fullQData(oldp+145,((vlSelf->top__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+147,((vlSelf->top__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+149,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+151,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__alu_src2 
                                                                             >> 0x13U))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__alu_src2) 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp169, vlSelf->top__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp170, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp171, __Vtemp169, __Vtemp170);
        VL_EXTEND_WI(65,1, __Vtemp172, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp173, __Vtemp171, __Vtemp172);
        tracep->fullBit(oldp+156,((1U & __Vtemp173[2U])));
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullBit(oldp+221,(vlSelf->clk));
        tracep->fullBit(oldp+222,(vlSelf->rst));
        tracep->fullIData(oldp+223,(vlSelf->inst),32);
        tracep->fullQData(oldp+224,(vlSelf->pc),64);
        tracep->fullBit(oldp+226,((0x100073U == vlSelf->inst)));
        tracep->fullCData(oldp+227,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+228,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+229,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+230,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+231,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+232,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+233,((vlSelf->inst >> 0x14U)),12);
        tracep->fullIData(oldp+234,((vlSelf->inst >> 0xcU)),20);
        tracep->fullQData(oldp+235,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0xcU))))),64);
        tracep->fullBit(oldp+237,(((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->inst))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                     | (0x37U == (0x7fU 
                                                  & vlSelf->inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type))));
        tracep->fullQData(oldp+238,(((0U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->inst 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+240,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+242,((vlSelf->pc + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                           >> 0x14U))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ))))),64);
        tracep->fullBit(oldp+244,((0x37U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+245,((0x17U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+246,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+247,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+248,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullIData(oldp+249,(0x40U),32);
        tracep->fullQData(oldp+250,(0x80000000ULL),64);
        tracep->fullBit(oldp+252,(1U));
        tracep->fullIData(oldp+253,(0xcU),32);
        tracep->fullIData(oldp+254,(0x15U),32);
        tracep->fullIData(oldp+255,(0x14U),32);
        tracep->fullIData(oldp+256,(0xdU),32);
        tracep->fullIData(oldp+257,(2U),32);
        tracep->fullQData(oldp+258,(0ULL),64);
        tracep->fullIData(oldp+260,(1U),32);
        tracep->fullIData(oldp+261,(0x42U),32);
        tracep->fullIData(oldp+262,(2U),32);
        tracep->fullIData(oldp+263,(4U),32);
        tracep->fullIData(oldp+264,(0x44U),32);
        tracep->fullIData(oldp+265,(4U),32);
        tracep->fullIData(oldp+266,(3U),32);
        tracep->fullIData(oldp+267,(0x43U),32);
        tracep->fullIData(oldp+268,(3U),32);
    }
}
