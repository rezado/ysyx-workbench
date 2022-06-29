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
        tracep->declBit(c+220,"clk", false,-1);
        tracep->declBit(c+221,"rst", false,-1);
        tracep->declQuad(c+222,"pc", false,-1, 63,0);
        tracep->declBit(c+220,"top clk", false,-1);
        tracep->declBit(c+221,"top rst", false,-1);
        tracep->declQuad(c+222,"top pc", false,-1, 63,0);
        tracep->declQuad(c+224,"top nextpc", false,-1, 63,0);
        tracep->declQuad(c+1,"top inst", false,-1, 63,0);
        tracep->declBus(c+3,"top alu_op", false,-1, 10,0);
        tracep->declBus(c+4,"top sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+5,"top sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top sel_alusrc2", false,-1, 4,0);
        tracep->declQuad(c+7,"top rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+11,"top immI", false,-1, 11,0);
        tracep->declBus(c+12,"top immJ", false,-1, 20,0);
        tracep->declBus(c+13,"top immU", false,-1, 19,0);
        tracep->declBus(c+14,"top immB", false,-1, 12,0);
        tracep->declBus(c+15,"top immS", false,-1, 11,0);
        tracep->declQuad(c+16,"top rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+18,"top alu_result", false,-1, 63,0);
        tracep->declBus(c+20,"top sel_rfres", false,-1, 2,0);
        tracep->declBit(c+21,"top mem_wen", false,-1);
        tracep->declBit(c+22,"top mem_ena", false,-1);
        tracep->declBus(c+23,"top mem_mask", false,-1, 3,0);
        tracep->declQuad(c+24,"top mem_rdata", false,-1, 63,0);
        tracep->declBit(c+26,"top ebreak", false,-1);
        tracep->declBit(c+220,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+221,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IFU nextpc", false,-1, 63,0);
        tracep->declQuad(c+222,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declBit(c+220,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+221,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+222,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+239,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+220,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+221,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+224,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+222,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+241,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declQuad(c+18,"top u_ysyx_22040088_genrfwdata alu_result", false,-1, 63,0);
        tracep->declQuad(c+24,"top u_ysyx_22040088_genrfwdata mem_rdata", false,-1, 63,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_genrfwdata sel_rfwdata", false,-1, 2,0);
        tracep->declBus(c+23,"top u_ysyx_22040088_genrfwdata mem_mask", false,-1, 3,0);
        tracep->declQuad(c+16,"top u_ysyx_22040088_genrfwdata rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+27,"top u_ysyx_22040088_genrfwdata mem_zext", false,-1, 63,0);
        tracep->declQuad(c+29,"top u_ysyx_22040088_genrfwdata mem_sext", false,-1, 63,0);
        tracep->declBit(c+220,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declBus(c+31,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU alu_op", false,-1, 10,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_IDU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_IDU sel_alusrc2", false,-1, 4,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_IDU immJ", false,-1, 20,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU immU", false,-1, 19,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU immB", false,-1, 12,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU immS", false,-1, 11,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU sel_rfres", false,-1, 2,0);
        tracep->declBit(c+21,"top u_ysyx_22040088_IDU mem_wen", false,-1);
        tracep->declBit(c+22,"top u_ysyx_22040088_IDU mem_ena", false,-1);
        tracep->declBus(c+23,"top u_ysyx_22040088_IDU mem_mask", false,-1, 3,0);
        tracep->declBus(c+32,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+33,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+34,"top u_ysyx_22040088_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+35,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+36,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+37,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBit(c+38,"top u_ysyx_22040088_IDU rf_we", false,-1);
        tracep->declBus(c+32,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+33,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+34,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct7", false,-1, 6,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 10,0);
        tracep->declBit(c+38,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBus(c+5,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc2", false,-1, 4,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_rfres", false,-1, 2,0);
        tracep->declBit(c+22,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_ena", false,-1);
        tracep->declBit(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_wen", false,-1);
        tracep->declBus(c+23,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_mask", false,-1, 3,0);
        tracep->declBit(c+39,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+40,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lui", false,-1);
        tracep->declBit(c+41,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_auipc", false,-1);
        tracep->declBit(c+42,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jal", false,-1);
        tracep->declBit(c+43,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jalr", false,-1);
        tracep->declBit(c+44,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sd", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_add", false,-1);
        tracep->declBit(c+46,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sub", false,-1);
        tracep->declBit(c+47,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_or", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slt", false,-1);
        tracep->declBit(c+49,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltu", false,-1);
        tracep->declBit(c+50,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_and", false,-1);
        tracep->declBit(c+51,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xor", false,-1);
        tracep->declBit(c+52,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sll", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srl", false,-1);
        tracep->declBit(c+54,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sra", false,-1);
        tracep->declBit(c+55,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_beq", false,-1);
        tracep->declBit(c+56,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bne", false,-1);
        tracep->declBit(c+57,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_blt", false,-1);
        tracep->declBit(c+58,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bltu", false,-1);
        tracep->declBit(c+58,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bge", false,-1);
        tracep->declBit(c+59,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bgeu", false,-1);
        tracep->declBit(c+60,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_ld", false,-1);
        tracep->declBit(c+61,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lw", false,-1);
        tracep->declBit(c+62,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sw", false,-1);
        tracep->declBit(c+63,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lh", false,-1);
        tracep->declBit(c+64,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sh", false,-1);
        tracep->declBit(c+65,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lb", false,-1);
        tracep->declBit(c+66,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sb", false,-1);
        tracep->declBit(c+67,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lwu", false,-1);
        tracep->declBit(c+68,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lhu", false,-1);
        tracep->declBit(c+69,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lbu", false,-1);
        tracep->declBit(c+70,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit r_type", false,-1);
        tracep->declBit(c+71,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit b_type", false,-1);
        tracep->declBit(c+72,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit load", false,-1);
        tracep->declBit(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit store", false,-1);
        tracep->declBit(c+220,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+35,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+38,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+36,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+37,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+73+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+222,"top u_ysyx_22040088_EXU pc", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU alu_op", false,-1, 10,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU sel_nextpc", false,-1, 6,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU sel_alusrc1", false,-1, 1,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_EXU sel_alusrc2", false,-1, 4,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_EXU immI", false,-1, 11,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_EXU immJ", false,-1, 20,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_EXU immU", false,-1, 19,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_EXU immB", false,-1, 12,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_EXU immS", false,-1, 11,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declQuad(c+224,"top u_ysyx_22040088_EXU nextpc", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040088_EXU immI_sext", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040088_EXU immJ_sext", false,-1, 63,0);
        tracep->declQuad(c+141,"top u_ysyx_22040088_EXU immU_sext", false,-1, 63,0);
        tracep->declQuad(c+143,"top u_ysyx_22040088_EXU immB_sext", false,-1, 63,0);
        tracep->declQuad(c+145,"top u_ysyx_22040088_EXU immS_sext", false,-1, 63,0);
        tracep->declQuad(c+147,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+149,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+226,"top u_ysyx_22040088_EXU pcadd", false,-1, 63,0);
        tracep->declQuad(c+228,"top u_ysyx_22040088_EXU jalpc", false,-1, 63,0);
        tracep->declQuad(c+151,"top u_ysyx_22040088_EXU jalrpc", false,-1, 63,0);
        tracep->declQuad(c+230,"top u_ysyx_22040088_EXU beqpc", false,-1, 63,0);
        tracep->declQuad(c+232,"top u_ysyx_22040088_EXU bnepc", false,-1, 63,0);
        tracep->declQuad(c+234,"top u_ysyx_22040088_EXU bltpc", false,-1, 63,0);
        tracep->declQuad(c+236,"top u_ysyx_22040088_EXU bgepc", false,-1, 63,0);
        tracep->declBus(c+242,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 in", false,-1, 11,0);
        tracep->declQuad(c+137,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext1 out", false,-1, 63,0);
        tracep->declBus(c+243,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 in", false,-1, 20,0);
        tracep->declQuad(c+139,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext2 out", false,-1, 63,0);
        tracep->declBus(c+244,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 in", false,-1, 19,0);
        tracep->declQuad(c+141,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext3 out", false,-1, 63,0);
        tracep->declBus(c+245,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 in", false,-1, 12,0);
        tracep->declQuad(c+143,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext4 out", false,-1, 63,0);
        tracep->declBus(c+242,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext5 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext5 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext5 in", false,-1, 11,0);
        tracep->declQuad(c+145,"top u_ysyx_22040088_EXU u_ysyx_22040088_signext5 out", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 rdata1", false,-1, 63,0);
        tracep->declQuad(c+222,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 pc", false,-1, 63,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 sel_alusrc1", false,-1, 1,0);
        tracep->declQuad(c+147,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 alu_src1", false,-1, 63,0);
        tracep->declBus(c+246,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+246,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+147,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault key", false,-1, 1,0);
        tracep->declQuad(c+247,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+153,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault lut", false,-1, 131,0);
        tracep->declBus(c+246,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+246,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+238,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+249,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+147,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key", false,-1, 1,0);
        tracep->declQuad(c+247,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+153,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut", false,-1, 131,0);
        tracep->declBus(c+250,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+158+i*3,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+164+i*1,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+166+i*2,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+170,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+172,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+251,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 rdata2", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 immI", false,-1, 63,0);
        tracep->declQuad(c+141,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 immU", false,-1, 63,0);
        tracep->declQuad(c+145,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 immS", false,-1, 63,0);
        tracep->declBus(c+6,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 sel_alusrc2", false,-1, 4,0);
        tracep->declQuad(c+149,"top u_ysyx_22040088_EXU u_ysyx_22040088_genALUsrc2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 10,0);
        tracep->declQuad(c+147,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+149,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+173,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+174,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+175,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+176,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+177,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+178,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+179,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+180,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+181,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+182,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+183,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declQuad(c+184,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+186,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+188,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+190,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+192,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+194,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+196,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+198,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+200,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+202,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+147,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+204,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+206,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+184,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+207,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
        tracep->declQuad(c+222,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pc", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immI", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immJ", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch rdata1", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch alu_result", false,-1, 63,0);
        tracep->declQuad(c+143,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch immB", false,-1, 63,0);
        tracep->declQuad(c+226,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pcadd", false,-1, 63,0);
        tracep->declQuad(c+228,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch jalpc", false,-1, 63,0);
        tracep->declQuad(c+151,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch jalrpc", false,-1, 63,0);
        tracep->declQuad(c+230,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch beqpc", false,-1, 63,0);
        tracep->declQuad(c+232,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bnepc", false,-1, 63,0);
        tracep->declQuad(c+234,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bltpc", false,-1, 63,0);
        tracep->declQuad(c+236,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch bgepc", false,-1, 63,0);
        tracep->declBit(c+208,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch zero", false,-1);
        tracep->declBit(c+209,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch neg", false,-1);
        tracep->declQuad(c+210,"top u_ysyx_22040088_EXU u_ysyx_22040088_pcbranch pcB", false,-1, 63,0);
        tracep->declQuad(c+226,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc pcadd", false,-1, 63,0);
        tracep->declQuad(c+228,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc jalpc", false,-1, 63,0);
        tracep->declQuad(c+151,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc jalrpc", false,-1, 63,0);
        tracep->declQuad(c+230,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc beqpc", false,-1, 63,0);
        tracep->declQuad(c+232,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bnepc", false,-1, 63,0);
        tracep->declQuad(c+234,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bltpc", false,-1, 63,0);
        tracep->declQuad(c+236,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc bgepc", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc sel_nextpc", false,-1, 6,0);
        tracep->declQuad(c+224,"top u_ysyx_22040088_EXU u_ysyx_22040088_gennextpc nextpc", false,-1, 63,0);
        tracep->declBit(c+22,"top u_mem ena", false,-1);
        tracep->declBit(c+21,"top u_mem wen", false,-1);
        tracep->declBus(c+23,"top u_mem mem_mask", false,-1, 3,0);
        tracep->declQuad(c+18,"top u_mem addr", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_mem wdata", false,-1, 63,0);
        tracep->declQuad(c+24,"top u_mem rdata", false,-1, 63,0);
        tracep->declQuad(c+212,"top u_mem raddr", false,-1, 63,0);
        tracep->declQuad(c+214,"top u_mem waddr", false,-1, 63,0);
        tracep->declBus(c+216,"top u_mem mask", false,-1, 7,0);
        tracep->declBus(c+217,"top u_mem idx", false,-1, 2,0);
        tracep->declQuad(c+218,"top u_mem tmpdata", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__inst),64);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__alu_op),11);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__sel_nextpc),7);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__sel_alusrc1),2);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__sel_alusrc2),5);
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
        tracep->fullSData(oldp+15,(vlSelf->top__DOT__immS),12);
        tracep->fullQData(oldp+16,(((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->top__DOT__sel_rfres))))) 
                                      & vlSelf->top__DOT__alu_result) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__sel_rfres) 
                                                               >> 1U))))) 
                                        & ((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                            ? vlSelf->top__DOT__mem_rdata
                                            : ((2U 
                                                & (IData)(vlSelf->top__DOT__mem_mask))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__mem_rdata)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__mem_mask))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__mem_rdata)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__mem_mask))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__mem_rdata 
                                                                                >> 7U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__mem_rdata)))))
                                                     : 0ULL)))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__sel_rfres) 
                                                              >> 2U))))) 
                                       & ((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                           ? vlSelf->top__DOT__mem_rdata
                                           : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                               ? (QData)((IData)(vlSelf->top__DOT__mem_rdata))
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__mem_mask))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__mem_rdata))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__mem_mask))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__mem_rdata))))
                                                    : 0ULL))))))),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__alu_result),64);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__sel_rfres),3);
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__mem_ena));
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__mem_mask),4);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__mem_rdata),64);
        tracep->fullBit(oldp+26,((0x100073U == (IData)(vlSelf->top__DOT__inst))));
        tracep->fullQData(oldp+27,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                     ? vlSelf->top__DOT__mem_rdata
                                     : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                         ? (QData)((IData)(vlSelf->top__DOT__mem_rdata))
                                         : ((4U & (IData)(vlSelf->top__DOT__mem_mask))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__mem_rdata))))
                                             : ((8U 
                                                 & (IData)(vlSelf->top__DOT__mem_mask))
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__mem_rdata))))
                                                 : 0ULL))))),64);
        tracep->fullQData(oldp+29,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                     ? vlSelf->top__DOT__mem_rdata
                                     : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__mem_rdata)))
                                         : ((4U & (IData)(vlSelf->top__DOT__mem_mask))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_rdata)))))
                                             : ((8U 
                                                 & (IData)(vlSelf->top__DOT__mem_mask))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mem_rdata 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__mem_rdata)))))
                                                 : 0ULL))))),64);
        tracep->fullIData(oldp+31,((IData)(vlSelf->top__DOT__inst)),32);
        tracep->fullCData(oldp+32,((0x7fU & (IData)(vlSelf->top__DOT__inst))),7);
        tracep->fullCData(oldp+33,((7U & (IData)((vlSelf->top__DOT__inst 
                                                  >> 0xcU)))),3);
        tracep->fullCData(oldp+34,((0x7fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0x19U)))),7);
        tracep->fullCData(oldp+35,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 7U)))),5);
        tracep->fullCData(oldp+36,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+37,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__inst 
                                                     >> 0x14U)))),5);
        tracep->fullBit(oldp+38,((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                       | (0x6fU == 
                                          (0x7fU & (IData)(vlSelf->top__DOT__inst)))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                     | (0x37U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__inst)))) 
                                    | (0x17U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__inst)))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld))));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+40,((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__inst)))));
        tracep->fullBit(oldp+41,((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__inst)))));
        tracep->fullBit(oldp+42,((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__inst)))));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load));
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext),64);
        tracep->fullQData(oldp+139,((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__immJ 
                                                             >> 0x14U))))) 
                                      << 0x15U) | (QData)((IData)(vlSelf->top__DOT__immJ)))),64);
        tracep->fullQData(oldp+141,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x1fU)))))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__inst 
                                                                              >> 0xcU))))))),64);
        tracep->fullQData(oldp+143,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__immB) 
                                                             >> 0xcU))))) 
                                      << 0xdU) | (QData)((IData)(vlSelf->top__DOT__immB)))),64);
        tracep->fullQData(oldp+145,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__immS) 
                                                             >> 0xbU))))) 
                                      << 0xcU) | (QData)((IData)(vlSelf->top__DOT__immS)))),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2),64);
        tracep->fullQData(oldp+151,((0xfffffffffffffffeULL 
                                     & (vlSelf->top__DOT__rf_rdata1 
                                        + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))),64);
        tracep->fullWData(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
        tracep->fullWData(oldp+158,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+173,((1U & (IData)(vlSelf->top__DOT__alu_op))));
        tracep->fullBit(oldp+174,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+175,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+176,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+177,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+178,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+179,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+180,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+181,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+182,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+183,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                         >> 0xaU))));
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp49, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
        VL_EXTEND_WI(65,1, __Vtemp51, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp52, __Vtemp50, __Vtemp51);
        tracep->fullQData(oldp+188,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp52[2U])))))),64);
        tracep->fullQData(oldp+190,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+192,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+194,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
        tracep->fullQData(oldp+196,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+198,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+200,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+202,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                                             >> 0x13U))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2) 
                                                                   << 0xcU))))),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
        VL_EXTEND_WI(65,1, __Vtemp58, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp59, __Vtemp57, __Vtemp58);
        tracep->fullBit(oldp+207,((1U & __Vtemp59[2U])));
        tracep->fullBit(oldp+208,((0ULL == vlSelf->top__DOT__alu_result)));
        tracep->fullBit(oldp+209,((1U & (IData)((vlSelf->top__DOT__alu_result 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB),64);
        tracep->fullQData(oldp+212,((((IData)(vlSelf->top__DOT__mem_ena) 
                                      & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)))
                                      ? vlSelf->top__DOT__alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullQData(oldp+214,((((IData)(vlSelf->top__DOT__mem_ena) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))
                                      ? vlSelf->top__DOT__alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullCData(oldp+216,(vlSelf->top__DOT__u_mem__DOT__mask),8);
        tracep->fullCData(oldp+217,((7U & (IData)(vlSelf->top__DOT__alu_result))),3);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__u_mem__DOT__tmpdata),64);
        tracep->fullBit(oldp+220,(vlSelf->clk));
        tracep->fullBit(oldp+221,(vlSelf->rst));
        tracep->fullQData(oldp+222,(vlSelf->pc),64);
        tracep->fullQData(oldp+224,(((((((((- (QData)((IData)(
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
        tracep->fullQData(oldp+226,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+228,((vlSelf->pc + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__immJ 
                                                                           >> 0x14U))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__immJ))))),64);
        tracep->fullQData(oldp+230,(((0ULL == vlSelf->top__DOT__alu_result)
                                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+232,(((0ULL == vlSelf->top__DOT__alu_result)
                                      ? (4ULL + vlSelf->pc)
                                      : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->fullQData(oldp+234,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))
                                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+236,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))
                                      ? (4ULL + vlSelf->pc)
                                      : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->fullIData(oldp+238,(0x40U),32);
        tracep->fullQData(oldp+239,(0x80000000ULL),64);
        tracep->fullBit(oldp+241,(1U));
        tracep->fullIData(oldp+242,(0xcU),32);
        tracep->fullIData(oldp+243,(0x15U),32);
        tracep->fullIData(oldp+244,(0x14U),32);
        tracep->fullIData(oldp+245,(0xdU),32);
        tracep->fullIData(oldp+246,(2U),32);
        tracep->fullQData(oldp+247,(0ULL),64);
        tracep->fullIData(oldp+249,(1U),32);
        tracep->fullIData(oldp+250,(0x42U),32);
        tracep->fullIData(oldp+251,(2U),32);
    }
}
