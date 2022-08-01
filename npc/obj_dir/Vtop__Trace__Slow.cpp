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
        tracep->declBit(c+372,"clk", false,-1);
        tracep->declBit(c+373,"rst", false,-1);
        tracep->declQuad(c+374,"pc", false,-1, 63,0);
        tracep->declBit(c+372,"top clk", false,-1);
        tracep->declBit(c+373,"top rst", false,-1);
        tracep->declQuad(c+374,"top pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top pc_out", false,-1, 63,0);
        tracep->declBus(c+3,"top inst", false,-1, 31,0);
        tracep->declBit(c+380,"top if_jump", false,-1);
        tracep->declQuad(c+4,"top branchpc", false,-1, 63,0);
        tracep->declBit(c+6,"top branch", false,-1);
        tracep->declQuad(c+1,"top if_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top id_pc", false,-1, 63,0);
        tracep->declBus(c+9,"top id_alu_op", false,-1, 16,0);
        tracep->declBus(c+10,"top id_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+11,"top id_mem_wen", false,-1);
        tracep->declBit(c+12,"top id_mem_ena", false,-1);
        tracep->declBus(c+13,"top id_mem_mask", false,-1, 3,0);
        tracep->declBus(c+14,"top id_sel_alures", false,-1, 3,0);
        tracep->declBus(c+15,"top id_sel_memdata", false,-1, 1,0);
        tracep->declQuad(c+16,"top id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+18,"top id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+20,"top id_rf_rdata2", false,-1, 63,0);
        tracep->declBit(c+22,"top id_rf_we", false,-1);
        tracep->declBus(c+23,"top id_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+24,"top id_load", false,-1);
        tracep->declBus(c+3,"top id_inst", false,-1, 31,0);
        tracep->declQuad(c+25,"top rf_wdata", false,-1, 63,0);
        tracep->declBit(c+381,"top inst_inv", false,-1);
        tracep->declBit(c+27,"top id_sys", false,-1);
        tracep->declBit(c+28,"top stall", false,-1);
        tracep->declQuad(c+29,"top ex_pc", false,-1, 63,0);
        tracep->declBus(c+31,"top ex_inst", false,-1, 31,0);
        tracep->declBus(c+32,"top ex_alu_op", false,-1, 16,0);
        tracep->declBus(c+33,"top ex_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+34,"top ex_mem_wen", false,-1);
        tracep->declBit(c+35,"top ex_mem_ena", false,-1);
        tracep->declBus(c+36,"top ex_mem_mask", false,-1, 3,0);
        tracep->declBus(c+37,"top ex_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+38,"top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+40,"top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+42,"top ex_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+44,"top ex_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+45,"top ex_rf_we", false,-1);
        tracep->declBus(c+46,"top ex_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+47,"top ex_sys", false,-1);
        tracep->declBit(c+48,"top ex_load", false,-1);
        tracep->declQuad(c+49,"top ex_alu_result", false,-1, 63,0);
        tracep->declQuad(c+51,"top mem_pc", false,-1, 63,0);
        tracep->declBus(c+53,"top mem_inst", false,-1, 31,0);
        tracep->declBus(c+54,"top mem_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+55,"top mem_mem_wen", false,-1);
        tracep->declBit(c+56,"top mem_mem_ena", false,-1);
        tracep->declBus(c+57,"top mem_mem_mask", false,-1, 3,0);
        tracep->declBus(c+382,"top mem_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+58,"top mem_rf_rdata2", false,-1, 63,0);
        tracep->declQuad(c+60,"top mem_alu_result", false,-1, 63,0);
        tracep->declBus(c+62,"top mem_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+63,"top mem_rf_we", false,-1);
        tracep->declBus(c+64,"top mem_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+65,"top mem_sys", false,-1);
        tracep->declBit(c+66,"top mem_load", false,-1);
        tracep->declQuad(c+67,"top mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+69,"top wb_pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top wb_alu_result", false,-1, 63,0);
        tracep->declQuad(c+73,"top wb_rdata", false,-1, 63,0);
        tracep->declBus(c+75,"top wb_inst", false,-1, 31,0);
        tracep->declBus(c+76,"top wb_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+77,"top wb_rf_we", false,-1);
        tracep->declBus(c+78,"top wb_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+79,"top wb_sys", false,-1);
        tracep->declBit(c+381,"top inv", false,-1);
        tracep->declBit(c+372,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+373,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IFU branchpc", false,-1, 63,0);
        tracep->declBit(c+6,"top u_ysyx_22040088_IFU branch", false,-1);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declQuad(c+376,"top u_ysyx_22040088_IFU nextpc", false,-1, 63,0);
        tracep->declQuad(c+80,"top u_ysyx_22040088_IFU addpc", false,-1, 63,0);
        tracep->declBit(c+372,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+373,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+376,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+383,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+384,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+372,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+373,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+376,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+386,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declBit(c+372,"top u_ID_reg clk", false,-1);
        tracep->declBit(c+378,"top u_ID_reg rst", false,-1);
        tracep->declBit(c+386,"top u_ID_reg valid", false,-1);
        tracep->declBit(c+379,"top u_ID_reg ena", false,-1);
        tracep->declQuad(c+1,"top u_ID_reg if_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ID_reg id_pc", false,-1, 63,0);
        tracep->declBit(c+372,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declBit(c+373,"top u_ysyx_22040088_IDU rst", false,-1);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU pc", false,-1, 63,0);
        tracep->declQuad(c+25,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+78,"top u_ysyx_22040088_IDU rf_waddr_i", false,-1, 4,0);
        tracep->declBit(c+77,"top u_ysyx_22040088_IDU rf_we_i", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040088_IDU ex_load", false,-1);
        tracep->declBit(c+66,"top u_ysyx_22040088_IDU mem_load", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040088_IDU ex_rf_we", false,-1);
        tracep->declBus(c+46,"top u_ysyx_22040088_IDU ex_rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_IDU ex_alu_result", false,-1, 63,0);
        tracep->declBit(c+63,"top u_ysyx_22040088_IDU mem_rf_we", false,-1);
        tracep->declBus(c+64,"top u_ysyx_22040088_IDU mem_rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+60,"top u_ysyx_22040088_IDU mem_alu_result", false,-1, 63,0);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declBus(c+9,"top u_ysyx_22040088_IDU alu_op", false,-1, 16,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU sel_rfres", false,-1, 1,0);
        tracep->declBit(c+11,"top u_ysyx_22040088_IDU mem_wen", false,-1);
        tracep->declBit(c+12,"top u_ysyx_22040088_IDU mem_ena", false,-1);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU mem_mask", false,-1, 3,0);
        tracep->declBit(c+381,"top u_ysyx_22040088_IDU inv", false,-1);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU sel_alures", false,-1, 3,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU sel_memdata", false,-1, 1,0);
        tracep->declBit(c+22,"top u_ysyx_22040088_IDU rf_we_o", false,-1);
        tracep->declBus(c+23,"top u_ysyx_22040088_IDU rf_waddr_o", false,-1, 4,0);
        tracep->declBit(c+24,"top u_ysyx_22040088_IDU load", false,-1);
        tracep->declBit(c+6,"top u_ysyx_22040088_IDU branch", false,-1);
        tracep->declBit(c+28,"top u_ysyx_22040088_IDU stall", false,-1);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_IDU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declBit(c+27,"top u_ysyx_22040088_IDU sys", false,-1);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IDU branchpc", false,-1, 63,0);
        tracep->declQuad(c+82,"top u_ysyx_22040088_IDU inst_data", false,-1, 63,0);
        tracep->declBus(c+84,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+85,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+86,"top u_ysyx_22040088_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+23,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+87,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+88,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+89,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declBus(c+90,"top u_ysyx_22040088_IDU immJ", false,-1, 20,0);
        tracep->declBus(c+91,"top u_ysyx_22040088_IDU immU", false,-1, 19,0);
        tracep->declBus(c+92,"top u_ysyx_22040088_IDU immB", false,-1, 12,0);
        tracep->declBus(c+93,"top u_ysyx_22040088_IDU immS", false,-1, 11,0);
        tracep->declBus(c+94,"top u_ysyx_22040088_IDU sel_alusrc1", false,-1, 3,0);
        tracep->declBus(c+95,"top u_ysyx_22040088_IDU sel_alusrc2", false,-1, 6,0);
        tracep->declBus(c+96,"top u_ysyx_22040088_IDU sel_btype", false,-1, 6,0);
        tracep->declBit(c+97,"top u_ysyx_22040088_IDU rf_re1", false,-1);
        tracep->declBit(c+98,"top u_ysyx_22040088_IDU rf_re2", false,-1);
        tracep->declQuad(c+99,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+101,"top u_ysyx_22040088_IDU rf_port1", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_ysyx_22040088_IDU rf_port2", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_ysyx_22040088_IDU immI_sext", false,-1, 63,0);
        tracep->declQuad(c+107,"top u_ysyx_22040088_IDU immJ_sext", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_ysyx_22040088_IDU immU_sext", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_ysyx_22040088_IDU immB_sext", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_ysyx_22040088_IDU immS_sext", false,-1, 63,0);
        tracep->declBit(c+115,"top u_ysyx_22040088_IDU zero", false,-1);
        tracep->declBit(c+116,"top u_ysyx_22040088_IDU lt", false,-1);
        tracep->declBit(c+117,"top u_ysyx_22040088_IDU ltu", false,-1);
        tracep->declQuad(c+118,"top u_ysyx_22040088_IDU sub_result", false,-1, 63,0);
        tracep->declBit(c+120,"top u_ysyx_22040088_IDU cout", false,-1);
        tracep->declQuad(c+121,"top u_ysyx_22040088_IDU jalrpc", false,-1, 63,0);
        tracep->declQuad(c+123,"top u_ysyx_22040088_IDU bpc", false,-1, 63,0);
        tracep->declBit(c+125,"top u_ysyx_22040088_IDU ForwardA", false,-1);
        tracep->declBit(c+126,"top u_ysyx_22040088_IDU ForwardB", false,-1);
        tracep->declQuad(c+127,"top u_ysyx_22040088_IDU ForA_data", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_ysyx_22040088_IDU ForB_data", false,-1, 63,0);
        tracep->declBus(c+84,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+85,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+86,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct7", false,-1, 6,0);
        tracep->declBus(c+9,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 16,0);
        tracep->declBit(c+22,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBus(c+94,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc1", false,-1, 3,0);
        tracep->declBus(c+95,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc2", false,-1, 6,0);
        tracep->declBus(c+96,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_btype", false,-1, 6,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_rfres", false,-1, 1,0);
        tracep->declBit(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_ena", false,-1);
        tracep->declBit(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_wen", false,-1);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_mask", false,-1, 3,0);
        tracep->declBit(c+381,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inv", false,-1);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alures", false,-1, 3,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_memdata", false,-1, 1,0);
        tracep->declBit(c+24,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit load", false,-1);
        tracep->declBit(c+97,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_re1", false,-1);
        tracep->declBit(c+98,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_re2", false,-1);
        tracep->declBit(c+131,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lui", false,-1);
        tracep->declBit(c+132,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_auipc", false,-1);
        tracep->declBit(c+133,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jal", false,-1);
        tracep->declBit(c+134,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jalr", false,-1);
        tracep->declBit(c+135,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_beq", false,-1);
        tracep->declBit(c+136,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bne", false,-1);
        tracep->declBit(c+137,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_blt", false,-1);
        tracep->declBit(c+138,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bltu", false,-1);
        tracep->declBit(c+139,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bge", false,-1);
        tracep->declBit(c+140,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bgeu", false,-1);
        tracep->declBit(c+141,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_ld", false,-1);
        tracep->declBit(c+142,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sd", false,-1);
        tracep->declBit(c+143,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lw", false,-1);
        tracep->declBit(c+144,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sw", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lh", false,-1);
        tracep->declBit(c+146,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sh", false,-1);
        tracep->declBit(c+147,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lb", false,-1);
        tracep->declBit(c+148,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sb", false,-1);
        tracep->declBit(c+149,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lwu", false,-1);
        tracep->declBit(c+150,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lhu", false,-1);
        tracep->declBit(c+151,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lbu", false,-1);
        tracep->declBit(c+152,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+153,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slti", false,-1);
        tracep->declBit(c+154,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltiu", false,-1);
        tracep->declBit(c+155,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xori", false,-1);
        tracep->declBit(c+156,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_ori", false,-1);
        tracep->declBit(c+157,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_andi", false,-1);
        tracep->declBit(c+158,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slli", false,-1);
        tracep->declBit(c+159,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srli", false,-1);
        tracep->declBit(c+160,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srai", false,-1);
        tracep->declBit(c+161,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_add", false,-1);
        tracep->declBit(c+162,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sub", false,-1);
        tracep->declBit(c+163,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sll", false,-1);
        tracep->declBit(c+164,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slt", false,-1);
        tracep->declBit(c+165,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltu", false,-1);
        tracep->declBit(c+166,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xor", false,-1);
        tracep->declBit(c+167,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srl", false,-1);
        tracep->declBit(c+168,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sra", false,-1);
        tracep->declBit(c+169,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_or", false,-1);
        tracep->declBit(c+170,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_and", false,-1);
        tracep->declBit(c+171,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addiw", false,-1);
        tracep->declBit(c+172,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slliw", false,-1);
        tracep->declBit(c+173,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sraiw", false,-1);
        tracep->declBit(c+174,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srliw", false,-1);
        tracep->declBit(c+175,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addw", false,-1);
        tracep->declBit(c+176,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_subw", false,-1);
        tracep->declBit(c+177,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sllw", false,-1);
        tracep->declBit(c+178,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srlw", false,-1);
        tracep->declBit(c+179,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sraw", false,-1);
        tracep->declBit(c+180,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mul", false,-1);
        tracep->declBit(c+181,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulh", false,-1);
        tracep->declBit(c+182,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulhsu", false,-1);
        tracep->declBit(c+183,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulhu", false,-1);
        tracep->declBit(c+184,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_div", false,-1);
        tracep->declBit(c+185,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_divu", false,-1);
        tracep->declBit(c+186,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_remu", false,-1);
        tracep->declBit(c+187,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_rem", false,-1);
        tracep->declBit(c+188,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulw", false,-1);
        tracep->declBit(c+189,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_divw", false,-1);
        tracep->declBit(c+190,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_divuw", false,-1);
        tracep->declBit(c+191,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_remw", false,-1);
        tracep->declBit(c+192,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_remuw", false,-1);
        tracep->declBit(c+193,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit r_type", false,-1);
        tracep->declBit(c+194,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit b_type", false,-1);
        tracep->declBit(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit store", false,-1);
        tracep->declBit(c+195,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit word", false,-1);
        tracep->declBit(c+372,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+25,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+78,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+77,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+87,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+88,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+101,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+196+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+387,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+383,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+89,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 in", false,-1, 11,0);
        tracep->declQuad(c+105,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 out", false,-1, 63,0);
        tracep->declBus(c+388,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+383,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+90,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 in", false,-1, 20,0);
        tracep->declQuad(c+107,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 out", false,-1, 63,0);
        tracep->declBus(c+389,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+383,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+92,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 in", false,-1, 12,0);
        tracep->declQuad(c+111,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 out", false,-1, 63,0);
        tracep->declBus(c+387,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+383,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+93,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 in", false,-1, 11,0);
        tracep->declQuad(c+113,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 out", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 rdata1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 pc", false,-1, 63,0);
        tracep->declBus(c+94,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 sel_alusrc1", false,-1, 3,0);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 alu_src1", false,-1, 63,0);
        tracep->declBus(c+390,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+390,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+383,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+94,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault key", false,-1, 3,0);
        tracep->declQuad(c+391,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+260,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault lut", false,-1, 271,0);
        tracep->declBus(c+390,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+390,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+383,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+393,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+94,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key", false,-1, 3,0);
        tracep->declQuad(c+391,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+260,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut", false,-1, 271,0);
        tracep->declBus(c+394,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+269+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+281+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+285+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+293,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+295,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+395,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+20,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 rdata2", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immI", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immU", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immS", false,-1, 63,0);
        tracep->declBus(c+95,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 sel_alusrc2", false,-1, 6,0);
        tracep->declQuad(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+87,"top u_ysyx_22040088_IDU u_forwarding raddr1", false,-1, 4,0);
        tracep->declBus(c+88,"top u_ysyx_22040088_IDU u_forwarding raddr2", false,-1, 4,0);
        tracep->declBit(c+97,"top u_ysyx_22040088_IDU u_forwarding re1", false,-1);
        tracep->declBit(c+98,"top u_ysyx_22040088_IDU u_forwarding re2", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040088_IDU u_forwarding ex_we", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040088_IDU u_forwarding ex_load", false,-1);
        tracep->declBus(c+46,"top u_ysyx_22040088_IDU u_forwarding ex_waddr", false,-1, 4,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_IDU u_forwarding ex_alu_result", false,-1, 63,0);
        tracep->declBit(c+63,"top u_ysyx_22040088_IDU u_forwarding mem_we", false,-1);
        tracep->declBit(c+66,"top u_ysyx_22040088_IDU u_forwarding mem_load", false,-1);
        tracep->declBus(c+64,"top u_ysyx_22040088_IDU u_forwarding mem_waddr", false,-1, 4,0);
        tracep->declQuad(c+60,"top u_ysyx_22040088_IDU u_forwarding mem_alu_result", false,-1, 63,0);
        tracep->declBit(c+77,"top u_ysyx_22040088_IDU u_forwarding wb_we", false,-1);
        tracep->declBus(c+78,"top u_ysyx_22040088_IDU u_forwarding wb_waddr", false,-1, 4,0);
        tracep->declQuad(c+25,"top u_ysyx_22040088_IDU u_forwarding wb_wdata", false,-1, 63,0);
        tracep->declBit(c+125,"top u_ysyx_22040088_IDU u_forwarding ForwardA", false,-1);
        tracep->declBit(c+126,"top u_ysyx_22040088_IDU u_forwarding ForwardB", false,-1);
        tracep->declQuad(c+127,"top u_ysyx_22040088_IDU u_forwarding ASrc", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_ysyx_22040088_IDU u_forwarding BSrc", false,-1, 63,0);
        tracep->declBit(c+296,"top u_ysyx_22040088_IDU u_forwarding ForwardA_ex", false,-1);
        tracep->declBit(c+297,"top u_ysyx_22040088_IDU u_forwarding ForwardA_mem", false,-1);
        tracep->declBit(c+298,"top u_ysyx_22040088_IDU u_forwarding ForwardA_wb", false,-1);
        tracep->declBit(c+299,"top u_ysyx_22040088_IDU u_forwarding ForwardB_ex", false,-1);
        tracep->declBit(c+300,"top u_ysyx_22040088_IDU u_forwarding ForwardB_mem", false,-1);
        tracep->declBit(c+301,"top u_ysyx_22040088_IDU u_forwarding ForwardB_wb", false,-1);
        tracep->declBit(c+302,"top u_ysyx_22040088_IDU u_forwarding we_forward_ex", false,-1);
        tracep->declBit(c+303,"top u_ysyx_22040088_IDU u_forwarding we_forward_mem", false,-1);
        tracep->declBit(c+77,"top u_ysyx_22040088_IDU u_forwarding we_forward_wb", false,-1);
        tracep->declBit(c+372,"top u_EX_reg clk", false,-1);
        tracep->declBit(c+373,"top u_EX_reg rst", false,-1);
        tracep->declBit(c+386,"top u_EX_reg valid", false,-1);
        tracep->declBit(c+379,"top u_EX_reg ena", false,-1);
        tracep->declQuad(c+7,"top u_EX_reg id_pc", false,-1, 63,0);
        tracep->declBus(c+3,"top u_EX_reg id_inst", false,-1, 31,0);
        tracep->declBus(c+9,"top u_EX_reg id_alu_op", false,-1, 16,0);
        tracep->declBus(c+10,"top u_EX_reg id_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+11,"top u_EX_reg id_mem_wen", false,-1);
        tracep->declBit(c+12,"top u_EX_reg id_mem_ena", false,-1);
        tracep->declBus(c+13,"top u_EX_reg id_mem_mask", false,-1, 3,0);
        tracep->declBus(c+14,"top u_EX_reg id_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+16,"top u_EX_reg id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_EX_reg id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_EX_reg id_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+15,"top u_EX_reg id_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+22,"top u_EX_reg id_rf_we", false,-1);
        tracep->declBus(c+23,"top u_EX_reg id_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+27,"top u_EX_reg id_sys", false,-1);
        tracep->declBit(c+24,"top u_EX_reg id_load", false,-1);
        tracep->declQuad(c+29,"top u_EX_reg ex_pc", false,-1, 63,0);
        tracep->declBus(c+31,"top u_EX_reg ex_inst", false,-1, 31,0);
        tracep->declBus(c+32,"top u_EX_reg ex_alu_op", false,-1, 16,0);
        tracep->declBus(c+33,"top u_EX_reg ex_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+34,"top u_EX_reg ex_mem_wen", false,-1);
        tracep->declBit(c+35,"top u_EX_reg ex_mem_ena", false,-1);
        tracep->declBus(c+36,"top u_EX_reg ex_mem_mask", false,-1, 3,0);
        tracep->declBus(c+37,"top u_EX_reg ex_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+38,"top u_EX_reg ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+40,"top u_EX_reg ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_EX_reg ex_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+44,"top u_EX_reg ex_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+45,"top u_EX_reg ex_rf_we", false,-1);
        tracep->declBus(c+46,"top u_EX_reg ex_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+47,"top u_EX_reg ex_sys", false,-1);
        tracep->declBit(c+48,"top u_EX_reg ex_load", false,-1);
        tracep->declBus(c+32,"top u_ysyx_22040088_EXU alu_op", false,-1, 16,0);
        tracep->declQuad(c+38,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+40,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declBus(c+37,"top u_ysyx_22040088_EXU sel_alures", false,-1, 3,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declQuad(c+304,"top u_ysyx_22040088_EXU alu_res", false,-1, 63,0);
        tracep->declBus(c+32,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 16,0);
        tracep->declQuad(c+38,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+40,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+304,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+306,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+307,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+308,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+309,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+310,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+311,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+312,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+313,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+314,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+315,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+316,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declBit(c+317,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_mul", false,-1);
        tracep->declBit(c+318,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_div", false,-1);
        tracep->declBit(c+319,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_rem", false,-1);
        tracep->declBit(c+320,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_mulu", false,-1);
        tracep->declBit(c+321,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_divu", false,-1);
        tracep->declBit(c+322,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_remu", false,-1);
        tracep->declQuad(c+323,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+325,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+327,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+329,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+331,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+333,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+335,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+337,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+339,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+40,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+341,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU mul_result", false,-1, 63,0);
        tracep->declQuad(c+343,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU div_result", false,-1, 63,0);
        tracep->declQuad(c+345,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU rem_result", false,-1, 63,0);
        tracep->declQuad(c+347,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU mulu_result", false,-1, 63,0);
        tracep->declQuad(c+349,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU divu_result", false,-1, 63,0);
        tracep->declQuad(c+351,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU remu_result", false,-1, 63,0);
        tracep->declQuad(c+38,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+353,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+355,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+323,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+356,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
        tracep->declBit(c+372,"top u_MEM_reg clk", false,-1);
        tracep->declBit(c+373,"top u_MEM_reg rst", false,-1);
        tracep->declBit(c+386,"top u_MEM_reg valid", false,-1);
        tracep->declBit(c+379,"top u_MEM_reg ena", false,-1);
        tracep->declQuad(c+29,"top u_MEM_reg ex_pc", false,-1, 63,0);
        tracep->declBus(c+31,"top u_MEM_reg ex_inst", false,-1, 31,0);
        tracep->declQuad(c+49,"top u_MEM_reg ex_alu_result", false,-1, 63,0);
        tracep->declBus(c+33,"top u_MEM_reg ex_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+34,"top u_MEM_reg ex_mem_wen", false,-1);
        tracep->declBit(c+35,"top u_MEM_reg ex_mem_ena", false,-1);
        tracep->declBus(c+36,"top u_MEM_reg ex_mem_mask", false,-1, 3,0);
        tracep->declQuad(c+42,"top u_MEM_reg ex_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+44,"top u_MEM_reg ex_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+45,"top u_MEM_reg ex_rf_we", false,-1);
        tracep->declBus(c+46,"top u_MEM_reg ex_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+47,"top u_MEM_reg ex_sys", false,-1);
        tracep->declBit(c+48,"top u_MEM_reg ex_load", false,-1);
        tracep->declQuad(c+51,"top u_MEM_reg mem_pc", false,-1, 63,0);
        tracep->declBus(c+53,"top u_MEM_reg mem_inst", false,-1, 31,0);
        tracep->declQuad(c+60,"top u_MEM_reg mem_alu_result", false,-1, 63,0);
        tracep->declBus(c+54,"top u_MEM_reg mem_sel_rfres", false,-1, 1,0);
        tracep->declBit(c+55,"top u_MEM_reg mem_mem_wen", false,-1);
        tracep->declBit(c+56,"top u_MEM_reg mem_mem_ena", false,-1);
        tracep->declBus(c+57,"top u_MEM_reg mem_mem_mask", false,-1, 3,0);
        tracep->declQuad(c+58,"top u_MEM_reg mem_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+62,"top u_MEM_reg mem_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+63,"top u_MEM_reg mem_rf_we", false,-1);
        tracep->declBus(c+64,"top u_MEM_reg mem_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+65,"top u_MEM_reg mem_sys", false,-1);
        tracep->declBit(c+66,"top u_MEM_reg mem_load", false,-1);
        tracep->declBit(c+372,"top u_MEM clk", false,-1);
        tracep->declBit(c+56,"top u_MEM ena", false,-1);
        tracep->declBit(c+55,"top u_MEM wen", false,-1);
        tracep->declBus(c+57,"top u_MEM mem_mask", false,-1, 3,0);
        tracep->declQuad(c+60,"top u_MEM addr", false,-1, 63,0);
        tracep->declQuad(c+58,"top u_MEM wdata", false,-1, 63,0);
        tracep->declBus(c+62,"top u_MEM sel_memdata", false,-1, 1,0);
        tracep->declQuad(c+67,"top u_MEM rdata", false,-1, 63,0);
        tracep->declQuad(c+357,"top u_MEM mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+359,"top u_MEM mem_zext", false,-1, 63,0);
        tracep->declQuad(c+361,"top u_MEM mem_sext", false,-1, 63,0);
        tracep->declBit(c+372,"top u_MEM u_mem clk", false,-1);
        tracep->declBit(c+56,"top u_MEM u_mem ena", false,-1);
        tracep->declBit(c+55,"top u_MEM u_mem wen", false,-1);
        tracep->declBus(c+57,"top u_MEM u_mem mem_mask", false,-1, 3,0);
        tracep->declQuad(c+60,"top u_MEM u_mem addr", false,-1, 63,0);
        tracep->declQuad(c+58,"top u_MEM u_mem wdata", false,-1, 63,0);
        tracep->declQuad(c+357,"top u_MEM u_mem rdata", false,-1, 63,0);
        tracep->declQuad(c+363,"top u_MEM u_mem raddr", false,-1, 63,0);
        tracep->declQuad(c+365,"top u_MEM u_mem waddr", false,-1, 63,0);
        tracep->declBus(c+367,"top u_MEM u_mem mask", false,-1, 7,0);
        tracep->declBus(c+368,"top u_MEM u_mem idx", false,-1, 2,0);
        tracep->declBus(c+369,"top u_MEM u_mem offset", false,-1, 5,0);
        tracep->declQuad(c+370,"top u_MEM u_mem tmpdata", false,-1, 63,0);
        tracep->declBit(c+372,"top u_WB_reg clk", false,-1);
        tracep->declBit(c+373,"top u_WB_reg rst", false,-1);
        tracep->declBit(c+386,"top u_WB_reg valid", false,-1);
        tracep->declBit(c+379,"top u_WB_reg ena", false,-1);
        tracep->declQuad(c+51,"top u_WB_reg mem_pc", false,-1, 63,0);
        tracep->declBus(c+53,"top u_WB_reg mem_inst", false,-1, 31,0);
        tracep->declQuad(c+60,"top u_WB_reg mem_alu_result", false,-1, 63,0);
        tracep->declBus(c+54,"top u_WB_reg mem_sel_rfres", false,-1, 1,0);
        tracep->declQuad(c+67,"top u_WB_reg mem_rdata", false,-1, 63,0);
        tracep->declBit(c+63,"top u_WB_reg mem_rf_we", false,-1);
        tracep->declBus(c+64,"top u_WB_reg mem_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+65,"top u_WB_reg mem_sys", false,-1);
        tracep->declQuad(c+69,"top u_WB_reg wb_pc", false,-1, 63,0);
        tracep->declBus(c+75,"top u_WB_reg wb_inst", false,-1, 31,0);
        tracep->declQuad(c+71,"top u_WB_reg wb_alu_result", false,-1, 63,0);
        tracep->declBus(c+76,"top u_WB_reg wb_sel_rfres", false,-1, 1,0);
        tracep->declQuad(c+73,"top u_WB_reg wb_rdata", false,-1, 63,0);
        tracep->declBit(c+77,"top u_WB_reg wb_rf_we", false,-1);
        tracep->declBus(c+78,"top u_WB_reg wb_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+79,"top u_WB_reg wb_sys", false,-1);
        tracep->declQuad(c+71,"top u_WB alu_result", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_WB mem_rdata", false,-1, 63,0);
        tracep->declBus(c+76,"top u_WB sel_rfwdata", false,-1, 1,0);
        tracep->declQuad(c+25,"top u_WB rf_wdata", false,-1, 63,0);
        tracep->declQuad(c+71,"top u_WB ysyx_22040088_genrfwdata alu_result", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_WB ysyx_22040088_genrfwdata mem_rdata", false,-1, 63,0);
        tracep->declBus(c+76,"top u_WB ysyx_22040088_genrfwdata sel_rfwdata", false,-1, 1,0);
        tracep->declQuad(c+25,"top u_WB ysyx_22040088_genrfwdata rf_wdata", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp133;
    VlWide<3>/*95:0*/ __Vtemp134;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp143;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_out),64);
        tracep->fullIData(oldp+3,(vlSelf->top__DOT__inst),32);
        tracep->fullQData(oldp+4,(((IData)(vlSelf->top__DOT__branch)
                                    ? ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                        ? (0xfffffffffffffffeULL 
                                           & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                              + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))
                                        : (vlSelf->top__DOT__id_pc 
                                           + (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                      >> 0xcU))))) 
                                               << 0xdU) 
                                              | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))))
                                    : 0ULL)),64);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__branch));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__id_pc),64);
        tracep->fullIData(oldp+9,(vlSelf->top__DOT__id_alu_op),17);
        tracep->fullCData(oldp+10,((((IData)(vlSelf->top__DOT__id_load) 
                                     << 1U) | (1U & 
                                               (~ (IData)(vlSelf->top__DOT__id_load))))),2);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
        tracep->fullBit(oldp+12,(((IData)(vlSelf->top__DOT__id_load) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))));
        tracep->fullCData(oldp+13,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))
                                     ? 1U : ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu))
                                              ? 2U : 
                                             ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu))
                                               ? 4U
                                               : ((
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu))
                                                   ? 8U
                                                   : 0U))))),4);
        tracep->fullCData(oldp+14,(((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu)) 
                                     << 3U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ 
                                                        ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word) 
                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh)) 
                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu)) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu)))))))),4);
        tracep->fullCData(oldp+15,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                     << 1U) | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)))),2);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__id_alu_src1),64);
        tracep->fullQData(oldp+18,(((((((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2))))) 
                                          & vlSelf->top__DOT__id_rf_rdata2) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                   >> 1U))))) 
                                            & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                  >> 2U))))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->top__DOT__inst 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->top__DOT__inst)))))) 
                                       | (4ULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                        >> 3U))))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                >> 4U))))) 
                                         & (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                               >> 5U))))) 
                                        & (QData)((IData)(vlSelf->top__DOT__id_rf_rdata2)))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                              >> 6U))))) 
                                       & (QData)((IData)(
                                                         (0x1fU 
                                                          & (IData)(vlSelf->top__DOT__id_rf_rdata2))))))),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__id_rf_rdata2),64);
        tracep->fullBit(oldp+22,(((((((((((((((((((
                                                   ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__inst))) 
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                      | (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__inst))) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst))) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                                   | (IData)(vlSelf->top__DOT__id_load)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw)) 
                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti)) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori))));
        tracep->fullCData(oldp+23,((0x1fU & (vlSelf->top__DOT__inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__id_load));
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__rf_wdata),64);
        tracep->fullBit(oldp+27,((0x100073U == vlSelf->top__DOT__inst)));
        tracep->fullBit(oldp+28,(((((((((IData)(vlSelf->top__DOT__ex_rf_we) 
                                        & (IData)(vlSelf->top__DOT__ex_load)) 
                                       & ((IData)(vlSelf->top__DOT__ex_rf_waddr) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__inst 
                                                 >> 0xfU)))) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1)) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0xfU)))) 
                                    | (((((IData)(vlSelf->top__DOT__ex_rf_we) 
                                          & (IData)(vlSelf->top__DOT__ex_load)) 
                                         & ((IData)(vlSelf->top__DOT__ex_rf_waddr) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)))) 
                                        & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 0x14U))))) 
                                   | (((((IData)(vlSelf->top__DOT__mem_rf_we) 
                                         & (IData)(vlSelf->top__DOT__mem_load)) 
                                        & ((IData)(vlSelf->top__DOT__mem_rf_waddr) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0xfU)))) 
                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0xfU))))) 
                                  | (((((IData)(vlSelf->top__DOT__mem_rf_we) 
                                        & (IData)(vlSelf->top__DOT__mem_load)) 
                                       & ((IData)(vlSelf->top__DOT__mem_rf_waddr) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__inst 
                                                 >> 0x14U)))) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2)) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0x14U)))))));
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__ex_pc),64);
        tracep->fullIData(oldp+31,(vlSelf->top__DOT__ex_inst),32);
        tracep->fullIData(oldp+32,(vlSelf->top__DOT__ex_alu_op),17);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__ex_sel_rfres),2);
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__ex_mem_wen));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__ex_mem_ena));
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__ex_mem_mask),4);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__ex_sel_alures),4);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__ex_alu_src2),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__ex_rf_rdata2),64);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__ex_sel_memdata),2);
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__ex_rf_we));
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__ex_rf_waddr),5);
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__ex_sys));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__ex_load));
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__ex_alu_result),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__mem_pc),64);
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__mem_inst),32);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__mem_sel_rfres),2);
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__mem_mem_wen));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__mem_mem_ena));
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__mem_mem_mask),4);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__mem_rf_rdata2),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__mem_alu_result),64);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__mem_sel_memdata),2);
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__mem_rf_we));
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__mem_rf_waddr),5);
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__mem_sys));
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__mem_load));
        tracep->fullQData(oldp+67,(((1U & (IData)(vlSelf->top__DOT__mem_sel_memdata))
                                     ? ((1U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                         ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                         : ((2U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))))
                                                  : 0ULL))))
                                     : ((2U & (IData)(vlSelf->top__DOT__mem_sel_memdata))
                                         ? ((1U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                             ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                 ? (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                   : 0ULL))))
                                         : 0ULL))),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__wb_pc),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__wb_alu_result),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__wb_rdata),64);
        tracep->fullIData(oldp+75,(vlSelf->top__DOT__wb_inst),32);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__wb_sel_rfres),2);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__wb_rf_we));
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__wb_rf_waddr),5);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__wb_sys));
        tracep->fullQData(oldp+80,((4ULL + vlSelf->top__DOT__pc_out)),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__inst_data),64);
        tracep->fullCData(oldp+84,((0x7fU & vlSelf->top__DOT__inst)),7);
        tracep->fullCData(oldp+85,((7U & (vlSelf->top__DOT__inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+86,((vlSelf->top__DOT__inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+87,((0x1fU & (vlSelf->top__DOT__inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+88,((0x1fU & (vlSelf->top__DOT__inst 
                                             >> 0x14U))),5);
        tracep->fullSData(oldp+89,((vlSelf->top__DOT__inst 
                                    >> 0x14U)),12);
        tracep->fullIData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
        tracep->fullIData(oldp+91,((vlSelf->top__DOT__inst 
                                    >> 0xcU)),20);
        tracep->fullSData(oldp+92,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB),13);
        tracep->fullSData(oldp+93,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS),12);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),4);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),7);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype),7);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
        tracep->fullQData(oldp+101,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0xfU))])),64);
        tracep->fullQData(oldp+103,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
        tracep->fullQData(oldp+107,((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                             >> 0x14U))))) 
                                      << 0x15U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
        tracep->fullQData(oldp+109,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__inst 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__inst))))),64);
        tracep->fullQData(oldp+111,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                             >> 0xcU))))) 
                                      << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))),64);
        tracep->fullQData(oldp+113,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                             >> 0xbU))))) 
                                      << 0xcU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS)))),64);
        tracep->fullBit(oldp+115,((0ULL == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt));
        __Vtemp116[0U] = 1U;
        __Vtemp116[1U] = 0U;
        __Vtemp116[2U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp117, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
        VL_EXTEND_WQ(65,64, __Vtemp118, vlSelf->top__DOT__id_rf_rdata2);
        __Vtemp119[0U] = (~ __Vtemp118[0U]);
        __Vtemp119[1U] = (~ __Vtemp118[1U]);
        __Vtemp119[2U] = (~ __Vtemp118[2U]);
        VL_ADD_W(3, __Vtemp120, __Vtemp117, __Vtemp119);
        VL_ADD_W(3, __Vtemp121, __Vtemp116, __Vtemp120);
        tracep->fullBit(oldp+117,((1U & (~ (1U & __Vtemp121[2U])))));
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result),64);
        __Vtemp124[0U] = 1U;
        __Vtemp124[1U] = 0U;
        __Vtemp124[2U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp125, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
        VL_EXTEND_WQ(65,64, __Vtemp126, vlSelf->top__DOT__id_rf_rdata2);
        __Vtemp127[0U] = (~ __Vtemp126[0U]);
        __Vtemp127[1U] = (~ __Vtemp126[1U]);
        __Vtemp127[2U] = (~ __Vtemp126[2U]);
        VL_ADD_W(3, __Vtemp128, __Vtemp125, __Vtemp127);
        VL_ADD_W(3, __Vtemp129, __Vtemp124, __Vtemp128);
        tracep->fullBit(oldp+120,((1U & __Vtemp129[2U])));
        tracep->fullQData(oldp+121,((0xfffffffffffffffeULL 
                                     & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                        + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
        tracep->fullQData(oldp+123,((vlSelf->top__DOT__id_pc 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))),64);
        tracep->fullBit(oldp+125,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb))));
        tracep->fullBit(oldp+126,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb))));
        tracep->fullQData(oldp+127,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex)
                                      ? vlSelf->top__DOT__ex_alu_result
                                      : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)
                                          ? vlSelf->top__DOT__mem_alu_result
                                          : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb)
                                              ? vlSelf->top__DOT__rf_wdata
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+129,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex)
                                      ? vlSelf->top__DOT__ex_alu_result
                                      : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)
                                          ? vlSelf->top__DOT__mem_alu_result
                                          : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb)
                                              ? vlSelf->top__DOT__rf_wdata
                                              : 0ULL)))),64);
        tracep->fullBit(oldp+131,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+132,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+133,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
        tracep->fullBit(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti));
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu));
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi));
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli));
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli));
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai));
        tracep->fullBit(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
        tracep->fullBit(oldp+170,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw));
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw));
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw));
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw));
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw));
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw));
        tracep->fullBit(oldp+178,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw));
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh));
        tracep->fullBit(oldp+182,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu));
        tracep->fullBit(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu));
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div));
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu));
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu));
        tracep->fullBit(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
        tracep->fullBit(oldp+188,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw));
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw));
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word));
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullWData(oldp+260,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
        tracep->fullWData(oldp+269,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+272,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+278,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+281,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+282,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb));
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex));
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem));
        tracep->fullBit(oldp+301,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem));
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res),64);
        tracep->fullBit(oldp+306,((1U & vlSelf->top__DOT__ex_alu_op)));
        tracep->fullBit(oldp+307,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 1U))));
        tracep->fullBit(oldp+308,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 2U))));
        tracep->fullBit(oldp+309,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 3U))));
        tracep->fullBit(oldp+310,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 4U))));
        tracep->fullBit(oldp+311,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 5U))));
        tracep->fullBit(oldp+312,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 6U))));
        tracep->fullBit(oldp+313,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 7U))));
        tracep->fullBit(oldp+314,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 8U))));
        tracep->fullBit(oldp+315,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 9U))));
        tracep->fullBit(oldp+316,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xaU))));
        tracep->fullBit(oldp+317,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xbU))));
        tracep->fullBit(oldp+318,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xcU))));
        tracep->fullBit(oldp+319,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xdU))));
        tracep->fullBit(oldp+320,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xeU))));
        tracep->fullBit(oldp+321,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xfU))));
        tracep->fullBit(oldp+322,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0x10U))));
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp132, vlSelf->top__DOT__ex_alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp133, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp134, __Vtemp132, __Vtemp133);
        VL_EXTEND_WI(65,1, __Vtemp135, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp136, __Vtemp134, __Vtemp135);
        tracep->fullQData(oldp+327,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp136[2U])))))),64);
        tracep->fullQData(oldp+329,((vlSelf->top__DOT__ex_alu_src1 
                                     & vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+331,((vlSelf->top__DOT__ex_alu_src1 
                                     | vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+333,((vlSelf->top__DOT__ex_alu_src1 
                                     ^ vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+335,((vlSelf->top__DOT__ex_alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
        tracep->fullQData(oldp+337,((vlSelf->top__DOT__ex_alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
        tracep->fullQData(oldp+339,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ex_alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
        tracep->fullQData(oldp+341,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+343,(VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+345,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+347,((vlSelf->top__DOT__ex_alu_src1 
                                     * vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+349,(VL_DIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+351,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp139, vlSelf->top__DOT__ex_alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp140, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp141, __Vtemp139, __Vtemp140);
        VL_EXTEND_WI(65,1, __Vtemp142, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp143, __Vtemp141, __Vtemp142);
        tracep->fullBit(oldp+356,((1U & __Vtemp143[2U])));
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__u_MEM__DOT__mem_rdata),64);
        tracep->fullQData(oldp+359,(((1U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                      ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                      : ((2U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                          ? (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))
                                          : ((4U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                              : ((8U 
                                                  & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                  : 0ULL))))),64);
        tracep->fullQData(oldp+361,(((1U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                      ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                      : ((2U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))
                                          : ((4U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))))
                                              : ((8U 
                                                  & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))))
                                                  : 0ULL))))),64);
        tracep->fullQData(oldp+363,((((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                      & (~ (IData)(vlSelf->top__DOT__mem_mem_wen)))
                                      ? vlSelf->top__DOT__mem_alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullQData(oldp+365,((((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                      & (IData)(vlSelf->top__DOT__mem_mem_wen))
                                      ? vlSelf->top__DOT__mem_alu_result
                                      : 0x80000000ULL)),64);
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask),8);
        tracep->fullCData(oldp+368,((7U & (IData)(vlSelf->top__DOT__mem_alu_result))),3);
        tracep->fullCData(oldp+369,((0x38U & ((IData)(vlSelf->top__DOT__mem_alu_result) 
                                              << 3U))),6);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata),64);
        tracep->fullBit(oldp+372,(vlSelf->clk));
        tracep->fullBit(oldp+373,(vlSelf->rst));
        tracep->fullQData(oldp+374,(vlSelf->pc),64);
        tracep->fullQData(oldp+376,(((IData)(vlSelf->rst)
                                      ? 0x80000000ULL
                                      : ((IData)(vlSelf->top__DOT__branch)
                                          ? ((IData)(vlSelf->top__DOT__branch)
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                  ? 
                                                 (0xfffffffffffffffeULL 
                                                  & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                     + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))
                                                  : 
                                                 (vlSelf->top__DOT__id_pc 
                                                  + 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                           >> 0xcU))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))))
                                              : 0ULL)
                                          : (4ULL + vlSelf->top__DOT__pc_out)))),64);
        tracep->fullBit(oldp+378,(((IData)(vlSelf->rst) 
                                   | (IData)(vlSelf->top__DOT__branch))));
        tracep->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__if_jump));
        tracep->fullBit(oldp+381,(0U));
        tracep->fullCData(oldp+382,(vlSelf->top__DOT__mem_sel_alures),4);
        tracep->fullIData(oldp+383,(0x40U),32);
        tracep->fullQData(oldp+384,(0x80000000ULL),64);
        tracep->fullBit(oldp+386,(1U));
        tracep->fullIData(oldp+387,(0xcU),32);
        tracep->fullIData(oldp+388,(0x15U),32);
        tracep->fullIData(oldp+389,(0xdU),32);
        tracep->fullIData(oldp+390,(4U),32);
        tracep->fullQData(oldp+391,(0ULL),64);
        tracep->fullIData(oldp+393,(1U),32);
        tracep->fullIData(oldp+394,(0x44U),32);
        tracep->fullIData(oldp+395,(4U),32);
    }
}
