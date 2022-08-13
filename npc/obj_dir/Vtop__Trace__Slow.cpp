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
        tracep->declBit(c+513,"clk", false,-1);
        tracep->declBit(c+514,"rst", false,-1);
        tracep->declQuad(c+515,"pc", false,-1, 63,0);
        tracep->declBit(c+513,"top clk", false,-1);
        tracep->declBit(c+514,"top rst", false,-1);
        tracep->declQuad(c+515,"top pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top pc_out", false,-1, 63,0);
        tracep->declBus(c+476,"top inst", false,-1, 31,0);
        tracep->declBit(c+477,"top if_ena", false,-1);
        tracep->declBit(c+518,"top if_valid", false,-1);
        tracep->declQuad(c+478,"top branchpc", false,-1, 63,0);
        tracep->declBit(c+483,"top branch", false,-1);
        tracep->declBit(c+3,"top icache_rd_req", false,-1);
        tracep->declBus(c+519,"top icache_rd_wstrb", false,-1, 3,0);
        tracep->declQuad(c+4,"top icache_rd_addr", false,-1, 63,0);
        tracep->declQuad(c+484,"top icache_ret_data", false,-1, 63,0);
        tracep->declBit(c+486,"top if_stall", false,-1);
        tracep->declQuad(c+1,"top if_pc", false,-1, 63,0);
        tracep->declQuad(c+6,"top id_pc", false,-1, 63,0);
        tracep->declBus(c+476,"top if_inst", false,-1, 31,0);
        tracep->declBus(c+8,"top id_inst", false,-1, 31,0);
        tracep->declBit(c+9,"top id_ena", false,-1);
        tracep->declBit(c+487,"top id_valid", false,-1);
        tracep->declBus(c+10,"top id_alu_op", false,-1, 16,0);
        tracep->declBus(c+11,"top id_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+12,"top id_mem_wen", false,-1);
        tracep->declBit(c+13,"top id_mem_ena", false,-1);
        tracep->declBus(c+14,"top id_mem_mask", false,-1, 3,0);
        tracep->declBus(c+15,"top id_sel_alures", false,-1, 3,0);
        tracep->declBus(c+16,"top id_sel_memdata", false,-1, 1,0);
        tracep->declQuad(c+17,"top id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+19,"top id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+21,"top id_rf_rdata2", false,-1, 63,0);
        tracep->declBit(c+23,"top id_rf_we", false,-1);
        tracep->declBus(c+24,"top id_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+25,"top id_load", false,-1);
        tracep->declQuad(c+488,"top id_csr_data", false,-1, 63,0);
        tracep->declQuad(c+26,"top rf_wdata", false,-1, 63,0);
        tracep->declBit(c+520,"top inst_inv", false,-1);
        tracep->declBit(c+28,"top id_ebreak", false,-1);
        tracep->declBit(c+29,"top id_stall", false,-1);
        tracep->declBit(c+30,"top mtcmp_we", false,-1);
        tracep->declBit(c+31,"top mtcmp_re", false,-1);
        tracep->declQuad(c+32,"top mtcmp_wdata", false,-1, 63,0);
        tracep->declBit(c+518,"top ex_ena", false,-1);
        tracep->declBit(c+9,"top ex_valid", false,-1);
        tracep->declQuad(c+34,"top ex_pc", false,-1, 63,0);
        tracep->declBus(c+36,"top ex_inst", false,-1, 31,0);
        tracep->declBus(c+37,"top ex_alu_op", false,-1, 16,0);
        tracep->declBus(c+38,"top ex_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+39,"top ex_mem_wen", false,-1);
        tracep->declBit(c+40,"top ex_mem_ena", false,-1);
        tracep->declBus(c+41,"top ex_mem_mask", false,-1, 3,0);
        tracep->declBus(c+42,"top ex_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+43,"top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+45,"top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+47,"top ex_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+49,"top ex_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+50,"top ex_rf_we", false,-1);
        tracep->declBus(c+51,"top ex_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+52,"top ex_ebreak", false,-1);
        tracep->declBit(c+53,"top ex_load", false,-1);
        tracep->declQuad(c+54,"top ex_csr_data", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex_alu_result", false,-1, 63,0);
        tracep->declBit(c+518,"top mem_ena", false,-1);
        tracep->declBit(c+518,"top mem_valid", false,-1);
        tracep->declQuad(c+58,"top mem_pc", false,-1, 63,0);
        tracep->declBus(c+60,"top mem_inst", false,-1, 31,0);
        tracep->declBus(c+61,"top mem_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+62,"top mem_mem_wen", false,-1);
        tracep->declBit(c+63,"top mem_mem_ena", false,-1);
        tracep->declBus(c+64,"top mem_mem_mask", false,-1, 3,0);
        tracep->declBus(c+521,"top mem_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+65,"top mem_rf_rdata2", false,-1, 63,0);
        tracep->declQuad(c+67,"top mem_alu_result", false,-1, 63,0);
        tracep->declBus(c+69,"top mem_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+70,"top mem_rf_we", false,-1);
        tracep->declBus(c+71,"top mem_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+72,"top mem_ebreak", false,-1);
        tracep->declBit(c+73,"top mem_load", false,-1);
        tracep->declQuad(c+74,"top mem_csr_data", false,-1, 63,0);
        tracep->declBit(c+76,"top MEM_ena", false,-1);
        tracep->declBit(c+62,"top MEM_wen", false,-1);
        tracep->declBus(c+77,"top mem_mask", false,-1, 3,0);
        tracep->declQuad(c+78,"top mem_addr", false,-1, 63,0);
        tracep->declQuad(c+484,"top mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+80,"top mem_wdata", false,-1, 63,0);
        tracep->declBus(c+82,"top sel_memdata", false,-1, 1,0);
        tracep->declBit(c+518,"top wb_ena", false,-1);
        tracep->declBit(c+518,"top wb_valid", false,-1);
        tracep->declQuad(c+83,"top wb_pc", false,-1, 63,0);
        tracep->declQuad(c+85,"top wb_alu_result", false,-1, 63,0);
        tracep->declQuad(c+87,"top wb_rdata", false,-1, 63,0);
        tracep->declBus(c+89,"top wb_inst", false,-1, 31,0);
        tracep->declBus(c+90,"top wb_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+91,"top wb_rf_we", false,-1);
        tracep->declBus(c+92,"top wb_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+93,"top wb_ebreak", false,-1);
        tracep->declQuad(c+94,"top wb_csr_data", false,-1, 63,0);
        tracep->declBit(c+520,"top inv", false,-1);
        tracep->declBit(c+513,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+514,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declBit(c+477,"top u_ysyx_22040088_IFU ena", false,-1);
        tracep->declQuad(c+478,"top u_ysyx_22040088_IFU branchpc", false,-1, 63,0);
        tracep->declBit(c+483,"top u_ysyx_22040088_IFU branch", false,-1);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declBus(c+476,"top u_ysyx_22040088_IFU inst", false,-1, 31,0);
        tracep->declBit(c+486,"top u_ysyx_22040088_IFU if_stall", false,-1);
        tracep->declBit(c+3,"top u_ysyx_22040088_IFU icache_rd_req", false,-1);
        tracep->declBus(c+519,"top u_ysyx_22040088_IFU icache_rd_wstrb", false,-1, 3,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IFU icache_rd_addr", false,-1, 63,0);
        tracep->declQuad(c+484,"top u_ysyx_22040088_IFU icache_ret_data", false,-1, 63,0);
        tracep->declQuad(c+490,"top u_ysyx_22040088_IFU nextpc", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_ysyx_22040088_IFU addpc", false,-1, 63,0);
        tracep->declBus(c+492,"top u_ysyx_22040088_IFU index", false,-1, 5,0);
        tracep->declBus(c+493,"top u_ysyx_22040088_IFU tag", false,-1, 22,0);
        tracep->declBus(c+494,"top u_ysyx_22040088_IFU off", false,-1, 2,0);
        tracep->declBit(c+495,"top u_ysyx_22040088_IFU addr_ok", false,-1);
        tracep->declBit(c+487,"top u_ysyx_22040088_IFU data_ok", false,-1);
        tracep->declBus(c+476,"top u_ysyx_22040088_IFU icache_rdata", false,-1, 31,0);
        tracep->declBit(c+495,"top u_ysyx_22040088_IFU valid", false,-1);
        tracep->declBit(c+513,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+514,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declBit(c+480,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc wen", false,-1);
        tracep->declQuad(c+490,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+523,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+513,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+514,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+490,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+480,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declBit(c+513,"top u_ysyx_22040088_IFU icache clk", false,-1);
        tracep->declBit(c+496,"top u_ysyx_22040088_IFU icache rst", false,-1);
        tracep->declBit(c+495,"top u_ysyx_22040088_IFU icache valid", false,-1);
        tracep->declBus(c+492,"top u_ysyx_22040088_IFU icache index", false,-1, 5,0);
        tracep->declBus(c+493,"top u_ysyx_22040088_IFU icache tag", false,-1, 22,0);
        tracep->declBus(c+494,"top u_ysyx_22040088_IFU icache offset", false,-1, 2,0);
        tracep->declBit(c+495,"top u_ysyx_22040088_IFU icache addr_ok", false,-1);
        tracep->declBit(c+487,"top u_ysyx_22040088_IFU icache data_ok", false,-1);
        tracep->declBus(c+476,"top u_ysyx_22040088_IFU icache rdata", false,-1, 31,0);
        tracep->declBit(c+3,"top u_ysyx_22040088_IFU icache rd_req", false,-1);
        tracep->declBus(c+519,"top u_ysyx_22040088_IFU icache rd_wstrb", false,-1, 3,0);
        tracep->declQuad(c+4,"top u_ysyx_22040088_IFU icache rd_addr", false,-1, 63,0);
        tracep->declQuad(c+484,"top u_ysyx_22040088_IFU icache ret_data", false,-1, 63,0);
        tracep->declBus(c+525,"top u_ysyx_22040088_IFU icache IDLE", false,-1, 31,0);
        tracep->declBus(c+526,"top u_ysyx_22040088_IFU icache LOOKUP", false,-1, 31,0);
        tracep->declBus(c+527,"top u_ysyx_22040088_IFU icache MISS", false,-1, 31,0);
        tracep->declBus(c+528,"top u_ysyx_22040088_IFU icache REPLACE", false,-1, 31,0);
        tracep->declBus(c+98,"top u_ysyx_22040088_IFU icache state", false,-1, 2,0);
        tracep->declBus(c+497,"top u_ysyx_22040088_IFU icache next_state", false,-1, 2,0);
        tracep->declBus(c+99,"top u_ysyx_22040088_IFU icache reg_index", false,-1, 5,0);
        tracep->declBus(c+100,"top u_ysyx_22040088_IFU icache reg_offset", false,-1, 2,0);
        tracep->declBus(c+101,"top u_ysyx_22040088_IFU icache reg_tag", false,-1, 22,0);
        tracep->declBit(c+102,"top u_ysyx_22040088_IFU icache re_vtag", false,-1);
        tracep->declBit(c+103,"top u_ysyx_22040088_IFU icache we_way0_vtag", false,-1);
        tracep->declBit(c+104,"top u_ysyx_22040088_IFU icache we_way1_vtag", false,-1);
        tracep->declBus(c+498,"top u_ysyx_22040088_IFU icache way0_vtag", false,-1, 23,0);
        tracep->declBus(c+499,"top u_ysyx_22040088_IFU icache way1_vtag", false,-1, 23,0);
        tracep->declBus(c+105,"top u_ysyx_22040088_IFU icache way0_wdata", false,-1, 23,0);
        tracep->declBus(c+105,"top u_ysyx_22040088_IFU icache way1_wdata", false,-1, 23,0);
        tracep->declBit(c+500,"top u_ysyx_22040088_IFU icache way0_hit", false,-1);
        tracep->declBit(c+501,"top u_ysyx_22040088_IFU icache way1_hit", false,-1);
        tracep->declBit(c+502,"top u_ysyx_22040088_IFU icache cache_hit", false,-1);
        tracep->declBit(c+503,"top u_ysyx_22040088_IFU icache way0_v", false,-1);
        tracep->declBit(c+504,"top u_ysyx_22040088_IFU icache way1_v", false,-1);
        tracep->declBus(c+505,"top u_ysyx_22040088_IFU icache way0_tag", false,-1, 22,0);
        tracep->declBus(c+506,"top u_ysyx_22040088_IFU icache way1_tag", false,-1, 22,0);
        tracep->declBit(c+106,"top u_ysyx_22040088_IFU icache replace_way", false,-1);
        tracep->declQuad(c+107,"top u_ysyx_22040088_IFU icache reg_ret_data", false,-1, 63,0);
        tracep->declBus(c+109,"top u_ysyx_22040088_IFU icache way0_load_word", false,-1, 31,0);
        tracep->declBus(c+110,"top u_ysyx_22040088_IFU icache way1_load_word", false,-1, 31,0);
        tracep->declBus(c+476,"top u_ysyx_22040088_IFU icache load_res", false,-1, 31,0);
        tracep->declQuad(c+111,"top u_ysyx_22040088_IFU icache way0_data", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_ysyx_22040088_IFU icache way1_data", false,-1, 63,0);
        tracep->declArray(c+115,"top u_ysyx_22040088_IFU icache ram_rdata", false,-1, 127,0);
        tracep->declArray(c+119,"top u_ysyx_22040088_IFU icache ram_wdata", false,-1, 127,0);
        tracep->declBit(c+481,"top u_ysyx_22040088_IFU icache ram_cen", false,-1);
        tracep->declBit(c+123,"top u_ysyx_22040088_IFU icache ram_wen", false,-1);
        tracep->declBus(c+507,"top u_ysyx_22040088_IFU icache ram_addr", false,-1, 5,0);
        tracep->declArray(c+124,"top u_ysyx_22040088_IFU icache ram_bwen", false,-1, 127,0);
        tracep->declBus(c+529,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW Bits", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW Word_Depth", false,-1, 31,0);
        tracep->declBus(c+530,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW Add_Width", false,-1, 31,0);
        tracep->declBus(c+529,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW Wen_Width", false,-1, 31,0);
        tracep->declArray(c+115,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW Q", false,-1, 127,0);
        tracep->declBit(c+513,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW CLK", false,-1);
        tracep->declBit(c+481,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW CEN", false,-1);
        tracep->declBit(c+123,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW WEN", false,-1);
        tracep->declArray(c+124,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW BWEN", false,-1, 127,0);
        tracep->declBus(c+507,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW A", false,-1, 5,0);
        tracep->declArray(c+119,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW D", false,-1, 127,0);
        tracep->declBit(c+482,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW cen", false,-1);
        tracep->declBit(c+128,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW wen", false,-1);
        tracep->declArray(c+129,"top u_ysyx_22040088_IFU icache u_S011HD1P_X32Y2D128_BW bwen", false,-1, 127,0);
        tracep->declBit(c+513,"top u_ID_reg clk", false,-1);
        tracep->declBit(c+514,"top u_ID_reg rst", false,-1);
        tracep->declBit(c+487,"top u_ID_reg valid", false,-1);
        tracep->declBit(c+9,"top u_ID_reg ena", false,-1);
        tracep->declQuad(c+1,"top u_ID_reg if_pc", false,-1, 63,0);
        tracep->declBus(c+476,"top u_ID_reg if_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"top u_ID_reg id_pc", false,-1, 63,0);
        tracep->declBus(c+8,"top u_ID_reg id_inst", false,-1, 31,0);
        tracep->declBit(c+513,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declBit(c+514,"top u_ysyx_22040088_IDU rst", false,-1);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU pc", false,-1, 63,0);
        tracep->declBus(c+8,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+26,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+92,"top u_ysyx_22040088_IDU rf_waddr_i", false,-1, 4,0);
        tracep->declBit(c+91,"top u_ysyx_22040088_IDU rf_we_i", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040088_IDU ex_load", false,-1);
        tracep->declBit(c+73,"top u_ysyx_22040088_IDU mem_load", false,-1);
        tracep->declBit(c+50,"top u_ysyx_22040088_IDU ex_rf_we", false,-1);
        tracep->declBus(c+51,"top u_ysyx_22040088_IDU ex_rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+56,"top u_ysyx_22040088_IDU ex_alu_result", false,-1, 63,0);
        tracep->declBit(c+70,"top u_ysyx_22040088_IDU mem_rf_we", false,-1);
        tracep->declBus(c+71,"top u_ysyx_22040088_IDU mem_rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+67,"top u_ysyx_22040088_IDU mem_alu_result", false,-1, 63,0);
        tracep->declBit(c+30,"top u_ysyx_22040088_IDU mtcmp_we", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040088_IDU mtcmp_re", false,-1);
        tracep->declQuad(c+32,"top u_ysyx_22040088_IDU mtcmp_wdata", false,-1, 63,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU alu_op", false,-1, 16,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_IDU sel_rfres", false,-1, 2,0);
        tracep->declBit(c+12,"top u_ysyx_22040088_IDU mem_wen", false,-1);
        tracep->declBit(c+13,"top u_ysyx_22040088_IDU mem_ena", false,-1);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU mem_mask", false,-1, 3,0);
        tracep->declBit(c+520,"top u_ysyx_22040088_IDU inv", false,-1);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU sel_alures", false,-1, 3,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU sel_memdata", false,-1, 1,0);
        tracep->declBit(c+23,"top u_ysyx_22040088_IDU rf_we_o", false,-1);
        tracep->declBus(c+24,"top u_ysyx_22040088_IDU rf_waddr_o", false,-1, 4,0);
        tracep->declBit(c+25,"top u_ysyx_22040088_IDU load", false,-1);
        tracep->declBit(c+483,"top u_ysyx_22040088_IDU branch", false,-1);
        tracep->declBit(c+29,"top u_ysyx_22040088_IDU stall", false,-1);
        tracep->declBit(c+28,"top u_ysyx_22040088_IDU ebreak", false,-1);
        tracep->declQuad(c+17,"top u_ysyx_22040088_IDU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+19,"top u_ysyx_22040088_IDU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+21,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declQuad(c+478,"top u_ysyx_22040088_IDU branchpc", false,-1, 63,0);
        tracep->declQuad(c+488,"top u_ysyx_22040088_IDU csr_data", false,-1, 63,0);
        tracep->declBus(c+24,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+133,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+134,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+135,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declBus(c+136,"top u_ysyx_22040088_IDU immJ", false,-1, 20,0);
        tracep->declBus(c+137,"top u_ysyx_22040088_IDU immU", false,-1, 19,0);
        tracep->declBus(c+138,"top u_ysyx_22040088_IDU immB", false,-1, 12,0);
        tracep->declBus(c+139,"top u_ysyx_22040088_IDU immS", false,-1, 11,0);
        tracep->declBus(c+140,"top u_ysyx_22040088_IDU sel_alusrc1", false,-1, 3,0);
        tracep->declBus(c+141,"top u_ysyx_22040088_IDU sel_alusrc2", false,-1, 6,0);
        tracep->declBus(c+142,"top u_ysyx_22040088_IDU sel_btype", false,-1, 7,0);
        tracep->declBit(c+143,"top u_ysyx_22040088_IDU rf_re1", false,-1);
        tracep->declBit(c+144,"top u_ysyx_22040088_IDU rf_re2", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU csr_re", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU csr_we", false,-1);
        tracep->declBus(c+146,"top u_ysyx_22040088_IDU sel_csrres", false,-1, 5,0);
        tracep->declBit(c+147,"top u_ysyx_22040088_IDU ecall", false,-1);
        tracep->declBit(c+148,"top u_ysyx_22040088_IDU mret", false,-1);
        tracep->declQuad(c+149,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+151,"top u_ysyx_22040088_IDU rf_port1", false,-1, 63,0);
        tracep->declQuad(c+153,"top u_ysyx_22040088_IDU rf_port2", false,-1, 63,0);
        tracep->declQuad(c+155,"top u_ysyx_22040088_IDU immI_sext", false,-1, 63,0);
        tracep->declQuad(c+157,"top u_ysyx_22040088_IDU immJ_sext", false,-1, 63,0);
        tracep->declQuad(c+159,"top u_ysyx_22040088_IDU immU_sext", false,-1, 63,0);
        tracep->declQuad(c+161,"top u_ysyx_22040088_IDU immB_sext", false,-1, 63,0);
        tracep->declQuad(c+163,"top u_ysyx_22040088_IDU immS_sext", false,-1, 63,0);
        tracep->declBit(c+165,"top u_ysyx_22040088_IDU zero", false,-1);
        tracep->declBit(c+166,"top u_ysyx_22040088_IDU lt", false,-1);
        tracep->declBit(c+167,"top u_ysyx_22040088_IDU ltu", false,-1);
        tracep->declQuad(c+168,"top u_ysyx_22040088_IDU sub_result", false,-1, 63,0);
        tracep->declBit(c+170,"top u_ysyx_22040088_IDU cout", false,-1);
        tracep->declQuad(c+171,"top u_ysyx_22040088_IDU jalrpc", false,-1, 63,0);
        tracep->declQuad(c+173,"top u_ysyx_22040088_IDU bpc", false,-1, 63,0);
        tracep->declQuad(c+175,"top u_ysyx_22040088_IDU jalpc", false,-1, 63,0);
        tracep->declQuad(c+177,"top u_ysyx_22040088_IDU offset", false,-1, 63,0);
        tracep->declBit(c+508,"top u_ysyx_22040088_IDU tint", false,-1);
        tracep->declBit(c+179,"top u_ysyx_22040088_IDU ForwardA", false,-1);
        tracep->declBit(c+180,"top u_ysyx_22040088_IDU ForwardB", false,-1);
        tracep->declQuad(c+181,"top u_ysyx_22040088_IDU ForA_data", false,-1, 63,0);
        tracep->declQuad(c+183,"top u_ysyx_22040088_IDU ForB_data", false,-1, 63,0);
        tracep->declQuad(c+509,"top u_ysyx_22040088_IDU csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+185,"top u_ysyx_22040088_IDU zimm", false,-1, 63,0);
        tracep->declQuad(c+511,"top u_ysyx_22040088_IDU csr_rdata", false,-1, 63,0);
        tracep->declBit(c+517,"top u_ysyx_22040088_IDU tint_ena", false,-1);
        tracep->declBus(c+8,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst", false,-1, 31,0);
        tracep->declBus(c+10,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 16,0);
        tracep->declBit(c+23,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBus(c+140,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc1", false,-1, 3,0);
        tracep->declBus(c+141,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alusrc2", false,-1, 6,0);
        tracep->declBus(c+142,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_btype", false,-1, 7,0);
        tracep->declBus(c+11,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_rfres", false,-1, 2,0);
        tracep->declBit(c+13,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_ena", false,-1);
        tracep->declBit(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_wen", false,-1);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mem_mask", false,-1, 3,0);
        tracep->declBit(c+520,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inv", false,-1);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_alures", false,-1, 3,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_memdata", false,-1, 1,0);
        tracep->declBit(c+25,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit load", false,-1);
        tracep->declBit(c+143,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_re1", false,-1);
        tracep->declBit(c+144,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_re2", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit csr_re", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit csr_we", false,-1);
        tracep->declBus(c+146,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit sel_csrres", false,-1, 5,0);
        tracep->declBit(c+28,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit ebreak", false,-1);
        tracep->declBit(c+147,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit ecall", false,-1);
        tracep->declBit(c+148,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit mret", false,-1);
        tracep->declBus(c+187,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+188,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+189,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct7", false,-1, 6,0);
        tracep->declBit(c+190,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lui", false,-1);
        tracep->declBit(c+191,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_auipc", false,-1);
        tracep->declBit(c+192,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jal", false,-1);
        tracep->declBit(c+193,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_jalr", false,-1);
        tracep->declBit(c+194,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_beq", false,-1);
        tracep->declBit(c+195,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bne", false,-1);
        tracep->declBit(c+196,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_blt", false,-1);
        tracep->declBit(c+197,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bltu", false,-1);
        tracep->declBit(c+198,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bge", false,-1);
        tracep->declBit(c+199,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_bgeu", false,-1);
        tracep->declBit(c+200,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_ld", false,-1);
        tracep->declBit(c+201,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sd", false,-1);
        tracep->declBit(c+202,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lw", false,-1);
        tracep->declBit(c+203,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sw", false,-1);
        tracep->declBit(c+204,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lh", false,-1);
        tracep->declBit(c+205,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sh", false,-1);
        tracep->declBit(c+206,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lb", false,-1);
        tracep->declBit(c+207,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sb", false,-1);
        tracep->declBit(c+208,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lwu", false,-1);
        tracep->declBit(c+209,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lhu", false,-1);
        tracep->declBit(c+210,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_lbu", false,-1);
        tracep->declBit(c+211,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+212,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slti", false,-1);
        tracep->declBit(c+213,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltiu", false,-1);
        tracep->declBit(c+214,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xori", false,-1);
        tracep->declBit(c+215,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_ori", false,-1);
        tracep->declBit(c+216,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_andi", false,-1);
        tracep->declBit(c+217,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slli", false,-1);
        tracep->declBit(c+218,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srli", false,-1);
        tracep->declBit(c+219,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srai", false,-1);
        tracep->declBit(c+220,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_add", false,-1);
        tracep->declBit(c+221,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sub", false,-1);
        tracep->declBit(c+222,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sll", false,-1);
        tracep->declBit(c+223,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slt", false,-1);
        tracep->declBit(c+224,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sltu", false,-1);
        tracep->declBit(c+225,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_xor", false,-1);
        tracep->declBit(c+226,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srl", false,-1);
        tracep->declBit(c+227,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sra", false,-1);
        tracep->declBit(c+228,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_or", false,-1);
        tracep->declBit(c+229,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_and", false,-1);
        tracep->declBit(c+230,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addiw", false,-1);
        tracep->declBit(c+231,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_slliw", false,-1);
        tracep->declBit(c+232,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sraiw", false,-1);
        tracep->declBit(c+233,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srliw", false,-1);
        tracep->declBit(c+234,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addw", false,-1);
        tracep->declBit(c+235,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_subw", false,-1);
        tracep->declBit(c+236,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sllw", false,-1);
        tracep->declBit(c+237,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_srlw", false,-1);
        tracep->declBit(c+238,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_sraw", false,-1);
        tracep->declBit(c+239,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mul", false,-1);
        tracep->declBit(c+240,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulh", false,-1);
        tracep->declBit(c+241,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulhsu", false,-1);
        tracep->declBit(c+242,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulhu", false,-1);
        tracep->declBit(c+243,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_div", false,-1);
        tracep->declBit(c+244,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_divu", false,-1);
        tracep->declBit(c+245,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_remu", false,-1);
        tracep->declBit(c+246,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_rem", false,-1);
        tracep->declBit(c+247,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_mulw", false,-1);
        tracep->declBit(c+248,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_divw", false,-1);
        tracep->declBit(c+249,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_divuw", false,-1);
        tracep->declBit(c+250,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_remw", false,-1);
        tracep->declBit(c+251,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_remuw", false,-1);
        tracep->declBit(c+252,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_csrrw", false,-1);
        tracep->declBit(c+253,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_csrrs", false,-1);
        tracep->declBit(c+254,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_csrrc", false,-1);
        tracep->declBit(c+255,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_csrrwi", false,-1);
        tracep->declBit(c+256,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_csrrsi", false,-1);
        tracep->declBit(c+257,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_csrrci", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit csrr", false,-1);
        tracep->declBit(c+258,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit r_type", false,-1);
        tracep->declBit(c+259,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit b_type", false,-1);
        tracep->declBit(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit store", false,-1);
        tracep->declBit(c+260,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit word", false,-1);
        tracep->declBit(c+513,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+26,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+92,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+91,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+133,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+134,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+151,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+153,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+261+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+531,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+135,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 in", false,-1, 11,0);
        tracep->declQuad(c+155,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext1 out", false,-1, 63,0);
        tracep->declBus(c+532,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+136,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 in", false,-1, 20,0);
        tracep->declQuad(c+157,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext2 out", false,-1, 63,0);
        tracep->declBus(c+533,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+138,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 in", false,-1, 12,0);
        tracep->declQuad(c+161,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext4 out", false,-1, 63,0);
        tracep->declBus(c+531,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+139,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 in", false,-1, 11,0);
        tracep->declQuad(c+163,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext5 out", false,-1, 63,0);
        tracep->declQuad(c+149,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 rdata1", false,-1, 63,0);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 pc", false,-1, 63,0);
        tracep->declBus(c+140,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 sel_alusrc1", false,-1, 3,0);
        tracep->declQuad(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 alu_src1", false,-1, 63,0);
        tracep->declBus(c+534,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+534,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault out", false,-1, 63,0);
        tracep->declBus(c+140,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault key", false,-1, 3,0);
        tracep->declQuad(c+535,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault default_out", false,-1, 63,0);
        tracep->declArray(c+325,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault lut", false,-1, 271,0);
        tracep->declBus(c+534,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+534,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+526,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 out", false,-1, 63,0);
        tracep->declBus(c+140,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key", false,-1, 3,0);
        tracep->declQuad(c+535,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 default_out", false,-1, 63,0);
        tracep->declArray(c+325,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut", false,-1, 271,0);
        tracep->declBus(c+537,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+334+i*3,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+346+i*1,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+350+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+358,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+360,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+538,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc1 u_MuxKeyWithDefault i0 i", false,-1, 31,0);
        tracep->declQuad(c+21,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 rdata2", false,-1, 63,0);
        tracep->declQuad(c+155,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immI", false,-1, 63,0);
        tracep->declQuad(c+159,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immU", false,-1, 63,0);
        tracep->declQuad(c+163,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 immS", false,-1, 63,0);
        tracep->declBus(c+141,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 sel_alusrc2", false,-1, 6,0);
        tracep->declQuad(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_genALUsrc2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+133,"top u_ysyx_22040088_IDU u_forwarding raddr1", false,-1, 4,0);
        tracep->declBus(c+134,"top u_ysyx_22040088_IDU u_forwarding raddr2", false,-1, 4,0);
        tracep->declBit(c+143,"top u_ysyx_22040088_IDU u_forwarding re1", false,-1);
        tracep->declBit(c+144,"top u_ysyx_22040088_IDU u_forwarding re2", false,-1);
        tracep->declBit(c+50,"top u_ysyx_22040088_IDU u_forwarding ex_we", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040088_IDU u_forwarding ex_load", false,-1);
        tracep->declBus(c+51,"top u_ysyx_22040088_IDU u_forwarding ex_waddr", false,-1, 4,0);
        tracep->declQuad(c+56,"top u_ysyx_22040088_IDU u_forwarding ex_alu_result", false,-1, 63,0);
        tracep->declBit(c+70,"top u_ysyx_22040088_IDU u_forwarding mem_we", false,-1);
        tracep->declBit(c+73,"top u_ysyx_22040088_IDU u_forwarding mem_load", false,-1);
        tracep->declBus(c+71,"top u_ysyx_22040088_IDU u_forwarding mem_waddr", false,-1, 4,0);
        tracep->declQuad(c+67,"top u_ysyx_22040088_IDU u_forwarding mem_alu_result", false,-1, 63,0);
        tracep->declBit(c+91,"top u_ysyx_22040088_IDU u_forwarding wb_we", false,-1);
        tracep->declBus(c+92,"top u_ysyx_22040088_IDU u_forwarding wb_waddr", false,-1, 4,0);
        tracep->declQuad(c+26,"top u_ysyx_22040088_IDU u_forwarding wb_wdata", false,-1, 63,0);
        tracep->declBit(c+179,"top u_ysyx_22040088_IDU u_forwarding ForwardA", false,-1);
        tracep->declBit(c+180,"top u_ysyx_22040088_IDU u_forwarding ForwardB", false,-1);
        tracep->declQuad(c+181,"top u_ysyx_22040088_IDU u_forwarding ASrc", false,-1, 63,0);
        tracep->declQuad(c+183,"top u_ysyx_22040088_IDU u_forwarding BSrc", false,-1, 63,0);
        tracep->declBit(c+361,"top u_ysyx_22040088_IDU u_forwarding ForwardA_ex", false,-1);
        tracep->declBit(c+362,"top u_ysyx_22040088_IDU u_forwarding ForwardA_mem", false,-1);
        tracep->declBit(c+363,"top u_ysyx_22040088_IDU u_forwarding ForwardA_wb", false,-1);
        tracep->declBit(c+364,"top u_ysyx_22040088_IDU u_forwarding ForwardB_ex", false,-1);
        tracep->declBit(c+365,"top u_ysyx_22040088_IDU u_forwarding ForwardB_mem", false,-1);
        tracep->declBit(c+366,"top u_ysyx_22040088_IDU u_forwarding ForwardB_wb", false,-1);
        tracep->declBit(c+367,"top u_ysyx_22040088_IDU u_forwarding we_forward_ex", false,-1);
        tracep->declBit(c+368,"top u_ysyx_22040088_IDU u_forwarding we_forward_mem", false,-1);
        tracep->declBit(c+91,"top u_ysyx_22040088_IDU u_forwarding we_forward_wb", false,-1);
        tracep->declBus(c+539,"top u_ysyx_22040088_IDU u_ysyx_22040088_zeroext IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+522,"top u_ysyx_22040088_IDU u_ysyx_22040088_zeroext EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+133,"top u_ysyx_22040088_IDU u_ysyx_22040088_zeroext in", false,-1, 4,0);
        tracep->declQuad(c+185,"top u_ysyx_22040088_IDU u_ysyx_22040088_zeroext out", false,-1, 63,0);
        tracep->declBit(c+513,"top u_ysyx_22040088_IDU u_CSRs clk", false,-1);
        tracep->declBit(c+514,"top u_ysyx_22040088_IDU u_CSRs rst", false,-1);
        tracep->declBus(c+135,"top u_ysyx_22040088_IDU u_CSRs csr_id", false,-1, 11,0);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU u_CSRs csr_re", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040088_IDU u_CSRs csr_we", false,-1);
        tracep->declBit(c+148,"top u_ysyx_22040088_IDU u_CSRs mret", false,-1);
        tracep->declBit(c+147,"top u_ysyx_22040088_IDU u_CSRs ecall", false,-1);
        tracep->declQuad(c+6,"top u_ysyx_22040088_IDU u_CSRs epc", false,-1, 63,0);
        tracep->declQuad(c+509,"top u_ysyx_22040088_IDU u_CSRs csr_wdata", false,-1, 63,0);
        tracep->declBit(c+517,"top u_ysyx_22040088_IDU u_CSRs tint_ena", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040088_IDU u_CSRs mtcmp_we", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040088_IDU u_CSRs mtcmp_re", false,-1);
        tracep->declQuad(c+32,"top u_ysyx_22040088_IDU u_CSRs mtcmp_wdata", false,-1, 63,0);
        tracep->declQuad(c+511,"top u_ysyx_22040088_IDU u_CSRs csr_rdata", false,-1, 63,0);
        tracep->declBit(c+508,"top u_ysyx_22040088_IDU u_CSRs tint", false,-1);
        tracep->declQuad(c+369,"top u_ysyx_22040088_IDU u_CSRs mepc", false,-1, 63,0);
        tracep->declQuad(c+371,"top u_ysyx_22040088_IDU u_CSRs mstatus", false,-1, 63,0);
        tracep->declQuad(c+373,"top u_ysyx_22040088_IDU u_CSRs mcause", false,-1, 63,0);
        tracep->declQuad(c+375,"top u_ysyx_22040088_IDU u_CSRs mtvec", false,-1, 63,0);
        tracep->declQuad(c+377,"top u_ysyx_22040088_IDU u_CSRs mie", false,-1, 63,0);
        tracep->declQuad(c+379,"top u_ysyx_22040088_IDU u_CSRs mip", false,-1, 63,0);
        tracep->declBit(c+381,"top u_ysyx_22040088_IDU u_CSRs MIE", false,-1);
        tracep->declBit(c+382,"top u_ysyx_22040088_IDU u_CSRs MTIE", false,-1);
        tracep->declQuad(c+383,"top u_ysyx_22040088_IDU u_CSRs mtcmp_rdata", false,-1, 63,0);
        tracep->declBit(c+385,"top u_ysyx_22040088_IDU u_CSRs sel_mepc", false,-1);
        tracep->declBit(c+386,"top u_ysyx_22040088_IDU u_CSRs sel_mstatus", false,-1);
        tracep->declBit(c+387,"top u_ysyx_22040088_IDU u_CSRs sel_mcause", false,-1);
        tracep->declBit(c+388,"top u_ysyx_22040088_IDU u_CSRs sel_mtvec", false,-1);
        tracep->declBit(c+389,"top u_ysyx_22040088_IDU u_CSRs sel_mie", false,-1);
        tracep->declBit(c+390,"top u_ysyx_22040088_IDU u_CSRs sel_mip", false,-1);
        tracep->declBit(c+391,"top u_ysyx_22040088_IDU u_CSRs re_mepc", false,-1);
        tracep->declBit(c+392,"top u_ysyx_22040088_IDU u_CSRs re_mstatus", false,-1);
        tracep->declBit(c+393,"top u_ysyx_22040088_IDU u_CSRs re_mcause", false,-1);
        tracep->declBit(c+394,"top u_ysyx_22040088_IDU u_CSRs re_mtvec", false,-1);
        tracep->declBit(c+395,"top u_ysyx_22040088_IDU u_CSRs re_mie", false,-1);
        tracep->declBit(c+396,"top u_ysyx_22040088_IDU u_CSRs re_mip", false,-1);
        tracep->declBit(c+397,"top u_ysyx_22040088_IDU u_CSRs we_mepc", false,-1);
        tracep->declBit(c+398,"top u_ysyx_22040088_IDU u_CSRs we_mstatus", false,-1);
        tracep->declBit(c+399,"top u_ysyx_22040088_IDU u_CSRs we_mcause", false,-1);
        tracep->declBit(c+400,"top u_ysyx_22040088_IDU u_CSRs we_mtvec", false,-1);
        tracep->declBit(c+401,"top u_ysyx_22040088_IDU u_CSRs we_mie", false,-1);
        tracep->declBit(c+396,"top u_ysyx_22040088_IDU u_CSRs we_mip", false,-1);
        tracep->declBit(c+513,"top u_ysyx_22040088_IDU u_CSRs u_clint clk", false,-1);
        tracep->declBit(c+514,"top u_ysyx_22040088_IDU u_CSRs u_clint rst", false,-1);
        tracep->declBit(c+517,"top u_ysyx_22040088_IDU u_CSRs u_clint ena", false,-1);
        tracep->declBit(c+381,"top u_ysyx_22040088_IDU u_CSRs u_clint MIE", false,-1);
        tracep->declBit(c+382,"top u_ysyx_22040088_IDU u_CSRs u_clint MTIE", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040088_IDU u_CSRs u_clint mtcmp_we", false,-1);
        tracep->declQuad(c+32,"top u_ysyx_22040088_IDU u_CSRs u_clint mtcmp_wdata", false,-1, 63,0);
        tracep->declBit(c+508,"top u_ysyx_22040088_IDU u_CSRs u_clint tint", false,-1);
        tracep->declQuad(c+383,"top u_ysyx_22040088_IDU u_CSRs u_clint mtcmp_rdata", false,-1, 63,0);
        tracep->declQuad(c+402,"top u_ysyx_22040088_IDU u_CSRs u_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+383,"top u_ysyx_22040088_IDU u_CSRs u_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+404,"top u_ysyx_22040088_IDU u_CSRs u_clint mtime_bigger", false,-1);
        tracep->declBit(c+513,"top u_EX_reg clk", false,-1);
        tracep->declBit(c+514,"top u_EX_reg rst", false,-1);
        tracep->declBit(c+9,"top u_EX_reg valid", false,-1);
        tracep->declBit(c+518,"top u_EX_reg ena", false,-1);
        tracep->declQuad(c+6,"top u_EX_reg id_pc", false,-1, 63,0);
        tracep->declBus(c+8,"top u_EX_reg id_inst", false,-1, 31,0);
        tracep->declBus(c+10,"top u_EX_reg id_alu_op", false,-1, 16,0);
        tracep->declBus(c+11,"top u_EX_reg id_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+12,"top u_EX_reg id_mem_wen", false,-1);
        tracep->declBit(c+13,"top u_EX_reg id_mem_ena", false,-1);
        tracep->declBus(c+14,"top u_EX_reg id_mem_mask", false,-1, 3,0);
        tracep->declBus(c+15,"top u_EX_reg id_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+17,"top u_EX_reg id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+19,"top u_EX_reg id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+21,"top u_EX_reg id_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+16,"top u_EX_reg id_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+23,"top u_EX_reg id_rf_we", false,-1);
        tracep->declBus(c+24,"top u_EX_reg id_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+28,"top u_EX_reg id_ebreak", false,-1);
        tracep->declBit(c+25,"top u_EX_reg id_load", false,-1);
        tracep->declQuad(c+488,"top u_EX_reg id_csr_data", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_EX_reg ex_pc", false,-1, 63,0);
        tracep->declBus(c+36,"top u_EX_reg ex_inst", false,-1, 31,0);
        tracep->declBus(c+37,"top u_EX_reg ex_alu_op", false,-1, 16,0);
        tracep->declBus(c+38,"top u_EX_reg ex_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+39,"top u_EX_reg ex_mem_wen", false,-1);
        tracep->declBit(c+40,"top u_EX_reg ex_mem_ena", false,-1);
        tracep->declBus(c+41,"top u_EX_reg ex_mem_mask", false,-1, 3,0);
        tracep->declBus(c+42,"top u_EX_reg ex_sel_alures", false,-1, 3,0);
        tracep->declQuad(c+43,"top u_EX_reg ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+45,"top u_EX_reg ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_EX_reg ex_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+49,"top u_EX_reg ex_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+50,"top u_EX_reg ex_rf_we", false,-1);
        tracep->declBus(c+51,"top u_EX_reg ex_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+52,"top u_EX_reg ex_ebreak", false,-1);
        tracep->declBit(c+53,"top u_EX_reg ex_load", false,-1);
        tracep->declQuad(c+54,"top u_EX_reg ex_csr_data", false,-1, 63,0);
        tracep->declBus(c+37,"top u_ysyx_22040088_EXU alu_op", false,-1, 16,0);
        tracep->declQuad(c+43,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+45,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declBus(c+42,"top u_ysyx_22040088_EXU sel_alures", false,-1, 3,0);
        tracep->declQuad(c+56,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declQuad(c+405,"top u_ysyx_22040088_EXU alu_res", false,-1, 63,0);
        tracep->declBus(c+37,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 16,0);
        tracep->declQuad(c+43,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+45,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+405,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+407,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+408,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+409,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+410,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+411,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+412,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+413,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+414,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+415,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+416,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+417,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declBit(c+418,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_mul", false,-1);
        tracep->declBit(c+419,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_div", false,-1);
        tracep->declBit(c+420,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_rem", false,-1);
        tracep->declBit(c+421,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_mulu", false,-1);
        tracep->declBit(c+422,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_divu", false,-1);
        tracep->declBit(c+423,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_remu", false,-1);
        tracep->declQuad(c+424,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+426,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+428,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+430,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+432,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+434,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+436,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+438,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+440,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+45,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+442,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU mul_result", false,-1, 63,0);
        tracep->declQuad(c+444,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU div_result", false,-1, 63,0);
        tracep->declQuad(c+446,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU rem_result", false,-1, 63,0);
        tracep->declQuad(c+448,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU mulu_result", false,-1, 63,0);
        tracep->declQuad(c+450,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU divu_result", false,-1, 63,0);
        tracep->declQuad(c+452,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU remu_result", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+454,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+456,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+424,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+457,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
        tracep->declBit(c+513,"top u_MEM_reg clk", false,-1);
        tracep->declBit(c+514,"top u_MEM_reg rst", false,-1);
        tracep->declBit(c+518,"top u_MEM_reg valid", false,-1);
        tracep->declBit(c+518,"top u_MEM_reg ena", false,-1);
        tracep->declQuad(c+34,"top u_MEM_reg ex_pc", false,-1, 63,0);
        tracep->declBus(c+36,"top u_MEM_reg ex_inst", false,-1, 31,0);
        tracep->declQuad(c+56,"top u_MEM_reg ex_alu_result", false,-1, 63,0);
        tracep->declBus(c+38,"top u_MEM_reg ex_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+39,"top u_MEM_reg ex_mem_wen", false,-1);
        tracep->declBit(c+40,"top u_MEM_reg ex_mem_ena", false,-1);
        tracep->declBus(c+41,"top u_MEM_reg ex_mem_mask", false,-1, 3,0);
        tracep->declQuad(c+47,"top u_MEM_reg ex_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+49,"top u_MEM_reg ex_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+50,"top u_MEM_reg ex_rf_we", false,-1);
        tracep->declBus(c+51,"top u_MEM_reg ex_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+52,"top u_MEM_reg ex_ebreak", false,-1);
        tracep->declBit(c+53,"top u_MEM_reg ex_load", false,-1);
        tracep->declQuad(c+54,"top u_MEM_reg ex_csr_data", false,-1, 63,0);
        tracep->declQuad(c+58,"top u_MEM_reg mem_pc", false,-1, 63,0);
        tracep->declBus(c+60,"top u_MEM_reg mem_inst", false,-1, 31,0);
        tracep->declQuad(c+67,"top u_MEM_reg mem_alu_result", false,-1, 63,0);
        tracep->declBus(c+61,"top u_MEM_reg mem_sel_rfres", false,-1, 2,0);
        tracep->declBit(c+62,"top u_MEM_reg mem_mem_wen", false,-1);
        tracep->declBit(c+63,"top u_MEM_reg mem_mem_ena", false,-1);
        tracep->declBus(c+64,"top u_MEM_reg mem_mem_mask", false,-1, 3,0);
        tracep->declQuad(c+65,"top u_MEM_reg mem_rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+69,"top u_MEM_reg mem_sel_memdata", false,-1, 1,0);
        tracep->declBit(c+70,"top u_MEM_reg mem_rf_we", false,-1);
        tracep->declBus(c+71,"top u_MEM_reg mem_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+72,"top u_MEM_reg mem_ebreak", false,-1);
        tracep->declBit(c+73,"top u_MEM_reg mem_load", false,-1);
        tracep->declQuad(c+74,"top u_MEM_reg mem_csr_data", false,-1, 63,0);
        tracep->declBit(c+513,"top u_MEM clk", false,-1);
        tracep->declBit(c+76,"top u_MEM ena", false,-1);
        tracep->declBit(c+62,"top u_MEM wen", false,-1);
        tracep->declBus(c+77,"top u_MEM mem_mask", false,-1, 3,0);
        tracep->declQuad(c+78,"top u_MEM addr", false,-1, 63,0);
        tracep->declQuad(c+80,"top u_MEM wdata", false,-1, 63,0);
        tracep->declBus(c+82,"top u_MEM sel_memdata", false,-1, 1,0);
        tracep->declQuad(c+488,"top u_MEM mtcmp_rdata", false,-1, 63,0);
        tracep->declQuad(c+484,"top u_MEM rdata", false,-1, 63,0);
        tracep->declBit(c+30,"top u_MEM mtcmp_we", false,-1);
        tracep->declBit(c+31,"top u_MEM mtcmp_re", false,-1);
        tracep->declQuad(c+32,"top u_MEM mtcmp_wdata", false,-1, 63,0);
        tracep->declBit(c+458,"top u_MEM mem_we", false,-1);
        tracep->declBit(c+459,"top u_MEM mem_ena", false,-1);
        tracep->declQuad(c+460,"top u_MEM mem_rdata", false,-1, 63,0);
        tracep->declBit(c+462,"top u_MEM sel_mtcmp", false,-1);
        tracep->declQuad(c+463,"top u_MEM mem_zext", false,-1, 63,0);
        tracep->declQuad(c+465,"top u_MEM mem_sext", false,-1, 63,0);
        tracep->declBit(c+513,"top u_MEM u_mem clk", false,-1);
        tracep->declBit(c+459,"top u_MEM u_mem ena", false,-1);
        tracep->declBit(c+458,"top u_MEM u_mem wen", false,-1);
        tracep->declBus(c+77,"top u_MEM u_mem mem_mask", false,-1, 3,0);
        tracep->declQuad(c+78,"top u_MEM u_mem addr", false,-1, 63,0);
        tracep->declQuad(c+80,"top u_MEM u_mem wdata", false,-1, 63,0);
        tracep->declQuad(c+460,"top u_MEM u_mem rdata", false,-1, 63,0);
        tracep->declQuad(c+467,"top u_MEM u_mem raddr", false,-1, 63,0);
        tracep->declQuad(c+469,"top u_MEM u_mem waddr", false,-1, 63,0);
        tracep->declBus(c+471,"top u_MEM u_mem mask", false,-1, 7,0);
        tracep->declBus(c+472,"top u_MEM u_mem idx", false,-1, 2,0);
        tracep->declBus(c+473,"top u_MEM u_mem offset", false,-1, 5,0);
        tracep->declQuad(c+474,"top u_MEM u_mem tmpdata", false,-1, 63,0);
        tracep->declBit(c+513,"top u_WB_reg clk", false,-1);
        tracep->declBit(c+514,"top u_WB_reg rst", false,-1);
        tracep->declBit(c+518,"top u_WB_reg valid", false,-1);
        tracep->declBit(c+518,"top u_WB_reg ena", false,-1);
        tracep->declQuad(c+58,"top u_WB_reg mem_pc", false,-1, 63,0);
        tracep->declBus(c+60,"top u_WB_reg mem_inst", false,-1, 31,0);
        tracep->declQuad(c+67,"top u_WB_reg mem_alu_result", false,-1, 63,0);
        tracep->declBus(c+61,"top u_WB_reg mem_sel_rfres", false,-1, 2,0);
        tracep->declQuad(c+484,"top u_WB_reg mem_rdata", false,-1, 63,0);
        tracep->declBit(c+70,"top u_WB_reg mem_rf_we", false,-1);
        tracep->declBus(c+71,"top u_WB_reg mem_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+72,"top u_WB_reg mem_ebreak", false,-1);
        tracep->declQuad(c+74,"top u_WB_reg mem_csr_data", false,-1, 63,0);
        tracep->declQuad(c+83,"top u_WB_reg wb_pc", false,-1, 63,0);
        tracep->declBus(c+89,"top u_WB_reg wb_inst", false,-1, 31,0);
        tracep->declQuad(c+85,"top u_WB_reg wb_alu_result", false,-1, 63,0);
        tracep->declBus(c+90,"top u_WB_reg wb_sel_rfres", false,-1, 2,0);
        tracep->declQuad(c+87,"top u_WB_reg wb_rdata", false,-1, 63,0);
        tracep->declBit(c+91,"top u_WB_reg wb_rf_we", false,-1);
        tracep->declBus(c+92,"top u_WB_reg wb_rf_waddr", false,-1, 4,0);
        tracep->declBit(c+93,"top u_WB_reg wb_ebreak", false,-1);
        tracep->declQuad(c+94,"top u_WB_reg wb_csr_data", false,-1, 63,0);
        tracep->declQuad(c+85,"top u_WB alu_result", false,-1, 63,0);
        tracep->declQuad(c+87,"top u_WB mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_WB csr_data", false,-1, 63,0);
        tracep->declBus(c+90,"top u_WB sel_rfwdata", false,-1, 2,0);
        tracep->declQuad(c+26,"top u_WB rf_wdata", false,-1, 63,0);
        tracep->declBit(c+486,"top u_ctrl if_stall", false,-1);
        tracep->declBit(c+29,"top u_ctrl id_stall", false,-1);
        tracep->declBit(c+520,"top u_ctrl ex_stall", false,-1);
        tracep->declBit(c+520,"top u_ctrl mem_stall", false,-1);
        tracep->declBit(c+477,"top u_ctrl if_ena", false,-1);
        tracep->declBit(c+518,"top u_ctrl if_valid", false,-1);
        tracep->declBit(c+9,"top u_ctrl id_ena", false,-1);
        tracep->declBit(c+487,"top u_ctrl id_valid", false,-1);
        tracep->declBit(c+518,"top u_ctrl ex_ena", false,-1);
        tracep->declBit(c+9,"top u_ctrl ex_valid", false,-1);
        tracep->declBit(c+518,"top u_ctrl mem_ena", false,-1);
        tracep->declBit(c+518,"top u_ctrl mem_valid", false,-1);
        tracep->declBit(c+518,"top u_ctrl wb_ena", false,-1);
        tracep->declBit(c+518,"top u_ctrl wb_valid", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp143;
    VlWide<3>/*95:0*/ __Vtemp144;
    VlWide<3>/*95:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc_out),64);
        tracep->fullBit(oldp+3,((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
        tracep->fullQData(oldp+4,((((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)) 
                                    << 9U) | (QData)((IData)(
                                                             ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index) 
                                                              << 3U))))),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__id_pc),64);
        tracep->fullIData(oldp+8,(vlSelf->top__DOT__id_inst),32);
        tracep->fullBit(oldp+9,((1U & (~ (IData)(vlSelf->top__DOT__id_stall)))));
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__id_alu_op),17);
        tracep->fullCData(oldp+11,((((0x73U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst)) 
                                     << 2U) | (((IData)(vlSelf->top__DOT__id_load) 
                                                << 1U) 
                                               | (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->top__DOT__id_load) 
                                                      | (0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__id_inst)))))))),3);
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
        tracep->fullBit(oldp+13,(((IData)(vlSelf->top__DOT__id_load) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))));
        tracep->fullCData(oldp+14,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
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
        tracep->fullCData(oldp+15,(((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
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
        tracep->fullCData(oldp+16,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                     << 1U) | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)))),2);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__id_alu_src1),64);
        tracep->fullQData(oldp+19,(((((((((- (QData)((IData)(
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
                                                                          (vlSelf->top__DOT__id_inst 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->top__DOT__id_inst)))))) 
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
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__id_rf_rdata2),64);
        tracep->fullBit(oldp+23,(((((((((((((((((((
                                                   (((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__id_inst))) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__id_inst))) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__id_inst))) 
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
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori)) 
                                  | (0x73U == (0x7fU 
                                               & vlSelf->top__DOT__id_inst)))));
        tracep->fullCData(oldp+24,((0x1fU & (vlSelf->top__DOT__id_inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__id_load));
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__rf_wdata),64);
        tracep->fullBit(oldp+28,((0x100073U == vlSelf->top__DOT__id_inst)));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__id_stall));
        tracep->fullBit(oldp+30,((((0x2004000ULL == vlSelf->top__DOT__mem_addr) 
                                   & (IData)(vlSelf->top__DOT__MEM_ena)) 
                                  & (IData)(vlSelf->top__DOT__mem_mem_wen))));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__mtcmp_re));
        tracep->fullQData(oldp+32,(((0x2004000ULL == vlSelf->top__DOT__mem_addr)
                                     ? ((IData)(vlSelf->top__DOT__mem_mem_wen)
                                         ? vlSelf->top__DOT__mem_rf_rdata2
                                         : 0ULL) : 0ULL)),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__ex_pc),64);
        tracep->fullIData(oldp+36,(vlSelf->top__DOT__ex_inst),32);
        tracep->fullIData(oldp+37,(vlSelf->top__DOT__ex_alu_op),17);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__ex_sel_rfres),3);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__ex_mem_wen));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__ex_mem_ena));
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__ex_mem_mask),4);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__ex_sel_alures),4);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__ex_alu_src2),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__ex_rf_rdata2),64);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__ex_sel_memdata),2);
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__ex_rf_we));
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__ex_rf_waddr),5);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__ex_ebreak));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__ex_load));
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__ex_csr_data),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ex_alu_result),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__mem_pc),64);
        tracep->fullIData(oldp+60,(vlSelf->top__DOT__mem_inst),32);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__mem_sel_rfres),3);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__mem_mem_wen));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__mem_mem_ena));
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__mem_mem_mask),4);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__mem_rf_rdata2),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__mem_alu_result),64);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__mem_sel_memdata),2);
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__mem_rf_we));
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__mem_rf_waddr),5);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__mem_ebreak));
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__mem_load));
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__mem_csr_data),64);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__MEM_ena));
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__mem_mask),4);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__mem_addr),64);
        tracep->fullQData(oldp+80,(((IData)(vlSelf->top__DOT__mem_mem_wen)
                                     ? vlSelf->top__DOT__mem_rf_rdata2
                                     : 0ULL)),64);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__sel_memdata),2);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__wb_pc),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__wb_alu_result),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__wb_rdata),64);
        tracep->fullIData(oldp+89,(vlSelf->top__DOT__wb_inst),32);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__wb_sel_rfres),3);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__wb_rf_we));
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__wb_rf_waddr),5);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__wb_ebreak));
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__wb_csr_data),64);
        tracep->fullQData(oldp+96,((4ULL + vlSelf->top__DOT__pc_out)),64);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state),3);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index),6);
        tracep->fullCData(oldp+100,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset),3);
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag),23);
        tracep->fullBit(oldp+102,((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
        tracep->fullBit(oldp+103,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                   & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)))));
        tracep->fullBit(oldp+104,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way))));
        tracep->fullIData(oldp+105,((0x800000U | vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)),24);
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way));
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data),64);
        tracep->fullIData(oldp+109,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                    (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                           >> 2U))]),32);
        tracep->fullIData(oldp+110,((((0U == (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x20U 
                                                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                     << 3U)))))
                                       ? 0U : (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x40U) 
                                                     + 
                                                     (0x20U 
                                                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                         << 3U))))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x20U 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                           << 3U))))))) 
                                     | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                        (3U & (((IData)(0x40U) 
                                                + (0x20U 
                                                   & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                      << 3U))) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            ((IData)(0x40U) 
                                             + (0x20U 
                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                   << 3U))))))),32);
        tracep->fullQData(oldp+111,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U])))),64);
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U])))),64);
        tracep->fullWData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata),128);
        VL_EXTEND_WQ(128,64, __Vtemp131, vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data);
        if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way) {
            __Vtemp132[0U] = 0U;
            __Vtemp132[1U] = 0U;
            __Vtemp132[2U] = (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data);
            __Vtemp132[3U] = (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data 
                                      >> 0x20U));
        } else {
            __Vtemp132[0U] = __Vtemp131[0U];
            __Vtemp132[1U] = __Vtemp131[1U];
            __Vtemp132[2U] = __Vtemp131[2U];
            __Vtemp132[3U] = __Vtemp131[3U];
        }
        tracep->fullWData(oldp+119,(__Vtemp132),128);
        tracep->fullBit(oldp+123,((3U != (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
        if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way) {
            __Vtemp135[0U] = 0xffffffffU;
            __Vtemp135[1U] = 0xffffffffU;
            __Vtemp135[2U] = 0U;
            __Vtemp135[3U] = 0U;
        } else {
            __Vtemp135[0U] = 0U;
            __Vtemp135[1U] = 0U;
            __Vtemp135[2U] = 0xffffffffU;
            __Vtemp135[3U] = 0xffffffffU;
        }
        tracep->fullWData(oldp+124,(__Vtemp135),128);
        tracep->fullBit(oldp+128,((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
        __Vtemp139[0U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                              ? 0xffffffffU : 0U));
        __Vtemp139[1U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                              ? 0xffffffffU : 0U));
        __Vtemp139[2U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                              ? 0U : 0xffffffffU));
        __Vtemp139[3U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                              ? 0U : 0xffffffffU));
        tracep->fullWData(oldp+129,(__Vtemp139),128);
        tracep->fullCData(oldp+133,((0x1fU & (vlSelf->top__DOT__id_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+134,((0x1fU & (vlSelf->top__DOT__id_inst 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+135,((vlSelf->top__DOT__id_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+136,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
        tracep->fullIData(oldp+137,((vlSelf->top__DOT__id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+138,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB),13);
        tracep->fullSData(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS),12);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),4);
        tracep->fullCData(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),7);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype),8);
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
        tracep->fullBit(oldp+145,((0x73U == (0x7fU 
                                             & vlSelf->top__DOT__id_inst))));
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres),6);
        tracep->fullBit(oldp+147,((0x73U == vlSelf->top__DOT__id_inst)));
        tracep->fullBit(oldp+148,((0x30200073U == vlSelf->top__DOT__id_inst)));
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
        tracep->fullQData(oldp+151,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__id_inst 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                >> 0xfU))])),64);
        tracep->fullQData(oldp+153,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__id_inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
        tracep->fullQData(oldp+157,((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                             >> 0x14U))))) 
                                      << 0x15U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
        tracep->fullQData(oldp+159,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__id_inst 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__id_inst))))),64);
        tracep->fullQData(oldp+161,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                             >> 0xcU))))) 
                                      << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))),64);
        tracep->fullQData(oldp+163,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                             >> 0xbU))))) 
                                      << 0xcU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS)))),64);
        tracep->fullBit(oldp+165,((0ULL == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)));
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt));
        __Vtemp141[0U] = 1U;
        __Vtemp141[1U] = 0U;
        __Vtemp141[2U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp142, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
        VL_EXTEND_WQ(65,64, __Vtemp143, (~ vlSelf->top__DOT__id_rf_rdata2));
        VL_ADD_W(3, __Vtemp144, __Vtemp142, __Vtemp143);
        VL_ADD_W(3, __Vtemp145, __Vtemp141, __Vtemp144);
        tracep->fullBit(oldp+167,((1U & (~ (1U & __Vtemp145[2U])))));
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result),64);
        __Vtemp148[0U] = 1U;
        __Vtemp148[1U] = 0U;
        __Vtemp148[2U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp149, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
        VL_EXTEND_WQ(65,64, __Vtemp150, (~ vlSelf->top__DOT__id_rf_rdata2));
        VL_ADD_W(3, __Vtemp151, __Vtemp149, __Vtemp150);
        VL_ADD_W(3, __Vtemp152, __Vtemp148, __Vtemp151);
        tracep->fullBit(oldp+170,((1U & __Vtemp152[2U])));
        tracep->fullQData(oldp+171,((0xfffffffffffffffeULL 
                                     & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                        + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
        tracep->fullQData(oldp+173,((vlSelf->top__DOT__id_pc 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))),64);
        tracep->fullQData(oldp+175,((vlSelf->top__DOT__id_pc 
                                     + (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                >> 0x14U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ))))),64);
        tracep->fullQData(oldp+177,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__id_inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->top__DOT__id_inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->top__DOT__id_inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->top__DOT__id_inst 
                                                                            >> 0x14U)))))))),64);
        tracep->fullBit(oldp+179,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb))));
        tracep->fullBit(oldp+180,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb))));
        tracep->fullQData(oldp+181,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex)
                                      ? vlSelf->top__DOT__ex_alu_result
                                      : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)
                                          ? vlSelf->top__DOT__mem_alu_result
                                          : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb)
                                              ? vlSelf->top__DOT__rf_wdata
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+183,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex)
                                      ? vlSelf->top__DOT__ex_alu_result
                                      : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)
                                          ? vlSelf->top__DOT__mem_alu_result
                                          : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb)
                                              ? vlSelf->top__DOT__rf_wdata
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+185,((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__id_inst 
                                                        >> 0xfU))))),64);
        tracep->fullCData(oldp+187,((0x7fU & vlSelf->top__DOT__id_inst)),7);
        tracep->fullCData(oldp+188,((7U & (vlSelf->top__DOT__id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+189,((vlSelf->top__DOT__id_inst 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+190,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__id_inst))));
        tracep->fullBit(oldp+191,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__id_inst))));
        tracep->fullBit(oldp+192,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__id_inst))));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
        tracep->fullBit(oldp+196,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
        tracep->fullBit(oldp+198,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
        tracep->fullBit(oldp+199,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
        tracep->fullBit(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti));
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu));
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori));
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli));
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc));
        tracep->fullBit(oldp+255,((IData)((0x5073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__id_inst)))));
        tracep->fullBit(oldp+256,((IData)((0x6073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__id_inst)))));
        tracep->fullBit(oldp+257,((IData)((0x7073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__id_inst)))));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word));
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullWData(oldp+325,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
        tracep->fullWData(oldp+334,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+337,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+340,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+343,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+346,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+348,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+349,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+352,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+354,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex));
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem));
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus),64);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip),64);
        tracep->fullBit(oldp+381,((1U & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+382,((1U & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+385,((0x341U == (vlSelf->top__DOT__id_inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+386,((0x300U == (vlSelf->top__DOT__id_inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+387,((0x342U == (vlSelf->top__DOT__id_inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+388,((0x305U == (vlSelf->top__DOT__id_inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+389,((0x304U == (vlSelf->top__DOT__id_inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+390,((0x344U == (vlSelf->top__DOT__id_inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+391,(((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__id_inst)) 
                                   & (0x341U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+392,(((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__id_inst)) 
                                   & (0x300U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+393,(((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__id_inst)) 
                                   & (0x342U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+394,(((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__id_inst)) 
                                   & (0x305U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+395,(((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__id_inst)) 
                                   & (0x304U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+396,(((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__id_inst)) 
                                   & (0x344U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+397,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc));
        tracep->fullBit(oldp+398,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus));
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause));
        tracep->fullBit(oldp+400,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec));
        tracep->fullBit(oldp+401,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie));
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime),64);
        tracep->fullBit(oldp+404,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime 
                                   >= vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp)));
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res),64);
        tracep->fullBit(oldp+407,((1U & vlSelf->top__DOT__ex_alu_op)));
        tracep->fullBit(oldp+408,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 1U))));
        tracep->fullBit(oldp+409,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 2U))));
        tracep->fullBit(oldp+410,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 3U))));
        tracep->fullBit(oldp+411,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 4U))));
        tracep->fullBit(oldp+412,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 5U))));
        tracep->fullBit(oldp+413,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 6U))));
        tracep->fullBit(oldp+414,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 7U))));
        tracep->fullBit(oldp+415,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 8U))));
        tracep->fullBit(oldp+416,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 9U))));
        tracep->fullBit(oldp+417,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xaU))));
        tracep->fullBit(oldp+418,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xbU))));
        tracep->fullBit(oldp+419,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xcU))));
        tracep->fullBit(oldp+420,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xdU))));
        tracep->fullBit(oldp+421,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xeU))));
        tracep->fullBit(oldp+422,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xfU))));
        tracep->fullBit(oldp+423,((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0x10U))));
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp155, vlSelf->top__DOT__ex_alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp156, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp157, __Vtemp155, __Vtemp156);
        VL_EXTEND_WI(65,1, __Vtemp158, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp159, __Vtemp157, __Vtemp158);
        tracep->fullQData(oldp+428,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp159[2U])))))),64);
        tracep->fullQData(oldp+430,((vlSelf->top__DOT__ex_alu_src1 
                                     & vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+432,((vlSelf->top__DOT__ex_alu_src1 
                                     | vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+434,((vlSelf->top__DOT__ex_alu_src1 
                                     ^ vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+436,((vlSelf->top__DOT__ex_alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
        tracep->fullQData(oldp+438,((vlSelf->top__DOT__ex_alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
        tracep->fullQData(oldp+440,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ex_alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
        tracep->fullQData(oldp+442,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+444,(VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+446,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+448,((vlSelf->top__DOT__ex_alu_src1 
                                     * vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+450,(VL_DIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+452,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+456,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp162, vlSelf->top__DOT__ex_alu_src1);
        VL_EXTEND_WQ(65,64, __Vtemp163, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp164, __Vtemp162, __Vtemp163);
        VL_EXTEND_WI(65,1, __Vtemp165, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp166, __Vtemp164, __Vtemp165);
        tracep->fullBit(oldp+457,((1U & __Vtemp166[2U])));
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__u_MEM__DOT__mem_we));
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__u_MEM__DOT__mem_ena));
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__u_MEM__DOT__mem_rdata),64);
        tracep->fullBit(oldp+462,((0x2004000ULL == vlSelf->top__DOT__mem_addr)));
        tracep->fullQData(oldp+463,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                      ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                      : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                          ? (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))
                                          : ((4U & (IData)(vlSelf->top__DOT__mem_mask))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                              : ((8U 
                                                  & (IData)(vlSelf->top__DOT__mem_mask))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                  : 0ULL))))),64);
        tracep->fullQData(oldp+465,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                      ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                      : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))
                                          : ((4U & (IData)(vlSelf->top__DOT__mem_mask))
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
                                                  & (IData)(vlSelf->top__DOT__mem_mask))
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
        tracep->fullQData(oldp+467,((((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                      & (~ (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we)))
                                      ? vlSelf->top__DOT__mem_addr
                                      : 0x80000000ULL)),64);
        tracep->fullQData(oldp+469,((((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                      & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we))
                                      ? vlSelf->top__DOT__mem_addr
                                      : 0x80000000ULL)),64);
        tracep->fullCData(oldp+471,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask),8);
        tracep->fullCData(oldp+472,((7U & (IData)(vlSelf->top__DOT__mem_addr))),3);
        tracep->fullCData(oldp+473,((0x38U & ((IData)(vlSelf->top__DOT__mem_addr) 
                                              << 3U))),6);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata),64);
        tracep->fullIData(oldp+476,((((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit))) 
                                      & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                      (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                             >> 2U))]) 
                                     | ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit))) 
                                        & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x20U 
                                                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                     << 3U)))))
                                             ? 0U : 
                                            (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & ((IData)(0x40U) 
                                                     + 
                                                     (0x20U 
                                                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                         << 3U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x40U) 
                                                     + 
                                                     (0x20U 
                                                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                         << 3U))))))) 
                                           | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                              (3U & 
                                               (((IData)(0x40U) 
                                                 + 
                                                 (0x20U 
                                                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                     << 3U))) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x40U) 
                                                     + 
                                                     (0x20U 
                                                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                         << 3U))))))))),32);
        tracep->fullBit(oldp+477,((1U & (~ ((~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)) 
                                            | (IData)(vlSelf->top__DOT__id_stall))))));
        tracep->fullQData(oldp+478,(((IData)(vlSelf->top__DOT__branch)
                                      ? ((((0x73U == vlSelf->top__DOT__id_inst) 
                                           | (0x30200073U 
                                              == vlSelf->top__DOT__id_inst)) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))
                                          ? vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata
                                          : ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                              ? (vlSelf->top__DOT__id_pc 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                          >> 0x14U))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ))))
                                              : ((2U 
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
                                                   | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))))))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+480,((((~ ((~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)) 
                                        | (IData)(vlSelf->top__DOT__id_stall))) 
                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok)) 
                                   | (IData)(vlSelf->top__DOT__branch))));
        tracep->fullBit(oldp+481,((1U & (~ ((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                              & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok)) 
                                             | (1U 
                                                == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) 
                                            | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))))));
        tracep->fullBit(oldp+482,(((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                     & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok)) 
                                    | (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) 
                                   | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))));
        tracep->fullBit(oldp+483,(vlSelf->top__DOT__branch));
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__mem_rdata),64);
        tracep->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)))));
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok));
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__id_csr_data),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc),64);
        tracep->fullCData(oldp+492,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                                      >> 3U)))),6);
        tracep->fullIData(oldp+493,((0x7fffffU & (IData)(
                                                         (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+494,((7U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc))),3);
        tracep->fullBit(oldp+495,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok));
        tracep->fullBit(oldp+496,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT____Vcellinp__icache__rst));
        tracep->fullCData(oldp+497,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state),3);
        tracep->fullIData(oldp+498,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag),24);
        tracep->fullIData(oldp+499,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag),24);
        tracep->fullBit(oldp+500,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit));
        tracep->fullBit(oldp+501,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit));
        tracep->fullBit(oldp+502,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit));
        tracep->fullBit(oldp+503,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag 
                                         >> 0x17U))));
        tracep->fullBit(oldp+504,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag 
                                         >> 0x17U))));
        tracep->fullIData(oldp+505,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag)),23);
        tracep->fullIData(oldp+506,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag)),23);
        tracep->fullCData(oldp+507,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr),6);
        tracep->fullBit(oldp+508,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint));
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata),64);
        tracep->fullBit(oldp+513,(vlSelf->clk));
        tracep->fullBit(oldp+514,(vlSelf->rst));
        tracep->fullQData(oldp+515,(vlSelf->pc),64);
        tracep->fullBit(oldp+517,((1U & (~ ((IData)(vlSelf->rst) 
                                            | (IData)(vlSelf->top__DOT__id_stall))))));
        tracep->fullBit(oldp+518,(1U));
        tracep->fullCData(oldp+519,(0xfU),4);
        tracep->fullBit(oldp+520,(0U));
        tracep->fullCData(oldp+521,(vlSelf->top__DOT__mem_sel_alures),4);
        tracep->fullIData(oldp+522,(0x40U),32);
        tracep->fullQData(oldp+523,(0x80000000ULL),64);
        tracep->fullIData(oldp+525,(0U),32);
        tracep->fullIData(oldp+526,(1U),32);
        tracep->fullIData(oldp+527,(2U),32);
        tracep->fullIData(oldp+528,(3U),32);
        tracep->fullIData(oldp+529,(0x80U),32);
        tracep->fullIData(oldp+530,(6U),32);
        tracep->fullIData(oldp+531,(0xcU),32);
        tracep->fullIData(oldp+532,(0x15U),32);
        tracep->fullIData(oldp+533,(0xdU),32);
        tracep->fullIData(oldp+534,(4U),32);
        tracep->fullQData(oldp+535,(0ULL),64);
        tracep->fullIData(oldp+537,(0x44U),32);
        tracep->fullIData(oldp+538,(4U),32);
        tracep->fullIData(oldp+539,(5U),32);
    }
}
