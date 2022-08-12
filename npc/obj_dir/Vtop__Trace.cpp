// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp169;
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp173;
    VlWide<4>/*127:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<3>/*95:0*/ __Vtemp180;
    VlWide<3>/*95:0*/ __Vtemp181;
    VlWide<3>/*95:0*/ __Vtemp182;
    VlWide<3>/*95:0*/ __Vtemp183;
    VlWide<3>/*95:0*/ __Vtemp186;
    VlWide<3>/*95:0*/ __Vtemp187;
    VlWide<3>/*95:0*/ __Vtemp188;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp194;
    VlWide<3>/*95:0*/ __Vtemp195;
    VlWide<3>/*95:0*/ __Vtemp196;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp200;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp202;
    VlWide<3>/*95:0*/ __Vtemp203;
    VlWide<3>/*95:0*/ __Vtemp204;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_out),64);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res),32);
            tracep->chgBit(oldp+3,((0x6fU == (0x7fU 
                                              & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res))));
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__if_ena));
            tracep->chgBit(oldp+5,((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgQData(oldp+6,((((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)) 
                                       << 9U) | (QData)((IData)(
                                                                ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index) 
                                                                 << 3U))))),64);
            tracep->chgBit(oldp+8,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)))));
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__id_pc),64);
            tracep->chgIData(oldp+11,(vlSelf->top__DOT__id_inst),32);
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__id_jump));
            tracep->chgBit(oldp+13,((1U & (~ (IData)(vlSelf->top__DOT__id_stall)))));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok));
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__id_alu_op),17);
            tracep->chgCData(oldp+16,((((0x73U == (0x7fU 
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
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
            tracep->chgBit(oldp+18,(((IData)(vlSelf->top__DOT__id_load) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))));
            tracep->chgCData(oldp+19,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))
                                        ? 1U : ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw)) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu))
                                                 ? 2U
                                                 : 
                                                ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu))
                                                  ? 4U
                                                  : 
                                                 ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu))
                                                   ? 8U
                                                   : 0U))))),4);
            tracep->chgCData(oldp+20,(((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
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
            tracep->chgCData(oldp+21,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                        << 1U) | ((
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)))),2);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+24,(((((((((- (QData)((IData)(
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
                                          | (4ULL & 
                                             (- (QData)((IData)(
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
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__id_rf_rdata2),64);
            tracep->chgBit(oldp+28,((((((((((((((((
                                                   ((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
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
            tracep->chgCData(oldp+29,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                >> 7U))),5);
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__id_load));
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__rf_wdata),64);
            tracep->chgBit(oldp+33,((0x100073U == vlSelf->top__DOT__id_inst)));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__id_stall));
            tracep->chgBit(oldp+35,((((0x2004000ULL 
                                       == vlSelf->top__DOT__mem_addr) 
                                      & (IData)(vlSelf->top__DOT__MEM_ena)) 
                                     & (IData)(vlSelf->top__DOT__mem_mem_wen))));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__mtcmp_re));
            tracep->chgQData(oldp+37,(((0x2004000ULL 
                                        == vlSelf->top__DOT__mem_addr)
                                        ? ((IData)(vlSelf->top__DOT__mem_mem_wen)
                                            ? vlSelf->top__DOT__mem_rf_rdata2
                                            : 0ULL)
                                        : 0ULL)),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__ex_pc),64);
            tracep->chgIData(oldp+41,(vlSelf->top__DOT__ex_inst),32);
            tracep->chgIData(oldp+42,(vlSelf->top__DOT__ex_alu_op),17);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__ex_sel_rfres),3);
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__ex_mem_wen));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__ex_mem_ena));
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__ex_mem_mask),4);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__ex_sel_alures),4);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__ex_alu_src2),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__ex_rf_rdata2),64);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__ex_sel_memdata),2);
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__ex_rf_we));
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__ex_rf_waddr),5);
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__ex_ebreak));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__ex_load));
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__ex_csr_data),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__ex_alu_result),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__mem_pc),64);
            tracep->chgIData(oldp+65,(vlSelf->top__DOT__mem_inst),32);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__mem_sel_rfres),3);
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__mem_mem_wen));
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__mem_mem_ena));
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__mem_mem_mask),4);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__mem_rf_rdata2),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__mem_alu_result),64);
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__mem_sel_memdata),2);
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__mem_rf_we));
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__mem_rf_waddr),5);
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__mem_ebreak));
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__mem_load));
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__mem_csr_data),64);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__MEM_ena));
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__mem_mask),4);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__mem_addr),64);
            tracep->chgQData(oldp+85,(((IData)(vlSelf->top__DOT__mem_mem_wen)
                                        ? vlSelf->top__DOT__mem_rf_rdata2
                                        : 0ULL)),64);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__sel_memdata),2);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__wb_pc),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__wb_alu_result),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__wb_rdata),64);
            tracep->chgIData(oldp+94,(vlSelf->top__DOT__wb_inst),32);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__wb_sel_rfres),3);
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__wb_rf_we));
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__wb_rf_waddr),5);
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__wb_ebreak));
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__wb_csr_data),64);
            tracep->chgQData(oldp+101,((4ULL + vlSelf->top__DOT__pc_out)),64);
            tracep->chgQData(oldp+103,((vlSelf->top__DOT__pc_out 
                                        + (((- (QData)((IData)(
                                                               (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                >> 0x1fU)))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xff000U 
                                                               & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                       >> 0x14U))))))))),64);
            tracep->chgQData(oldp+105,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res) 
                                                           | ((0x800U 
                                                               & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                    >> 0x14U)))))))),64);
            tracep->chgBit(oldp+107,((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgBit(oldp+108,(((IData)(vlSelf->top__DOT__if_ena) 
                                      & (0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))));
            tracep->chgCData(oldp+109,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state),3);
            tracep->chgBit(oldp+110,((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgBit(oldp+111,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                      & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)))));
            tracep->chgBit(oldp+112,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way))));
            tracep->chgIData(oldp+113,((0x800000U | vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)),24);
            tracep->chgCData(oldp+114,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index),6);
            tracep->chgCData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset),3);
            tracep->chgIData(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag),23);
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way));
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data),64);
            tracep->chgIData(oldp+120,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                       (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                              >> 2U))]),32);
            tracep->chgIData(oldp+121,((((0U == (0x1fU 
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
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x20U 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                           << 3U))))))) 
                                        | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                           (3U & (((IData)(0x40U) 
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
                                                      << 3U))))))),32);
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U])))),64);
            tracep->chgQData(oldp+124,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U])))),64);
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_way0_hit));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_way1_hit));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_cache_hit));
            tracep->chgWData(oldp+129,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata),128);
            VL_EXTEND_WQ(128,64, __Vtemp169, vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data);
            if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way) {
                __Vtemp170[0U] = 0U;
                __Vtemp170[1U] = 0U;
                __Vtemp170[2U] = (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data);
                __Vtemp170[3U] = (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data 
                                          >> 0x20U));
            } else {
                __Vtemp170[0U] = __Vtemp169[0U];
                __Vtemp170[1U] = __Vtemp169[1U];
                __Vtemp170[2U] = __Vtemp169[2U];
                __Vtemp170[3U] = __Vtemp169[3U];
            }
            tracep->chgWData(oldp+133,(__Vtemp170),128);
            tracep->chgBit(oldp+137,((3U != (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr),6);
            if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way) {
                __Vtemp173[0U] = 0xffffffffU;
                __Vtemp173[1U] = 0xffffffffU;
                __Vtemp173[2U] = 0U;
                __Vtemp173[3U] = 0U;
            } else {
                __Vtemp173[0U] = 0U;
                __Vtemp173[1U] = 0U;
                __Vtemp173[2U] = 0xffffffffU;
                __Vtemp173[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+139,(__Vtemp173),128);
            tracep->chgBit(oldp+143,((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            __Vtemp177[0U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                  ? 0xffffffffU : 0U));
            __Vtemp177[1U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                  ? 0xffffffffU : 0U));
            __Vtemp177[2U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                  ? 0U : 0xffffffffU));
            __Vtemp177[3U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                  ? 0U : 0xffffffffU));
            tracep->chgWData(oldp+144,(__Vtemp177),128);
            tracep->chgCData(oldp+148,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+149,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+150,((vlSelf->top__DOT__id_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
            tracep->chgIData(oldp+152,((vlSelf->top__DOT__id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB),13);
            tracep->chgSData(oldp+154,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS),12);
            tracep->chgCData(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),4);
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),7);
            tracep->chgCData(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype),7);
            tracep->chgBit(oldp+158,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
            tracep->chgBit(oldp+160,((0x73U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgCData(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres),6);
            tracep->chgBit(oldp+162,((0x73U == vlSelf->top__DOT__id_inst)));
            tracep->chgBit(oldp+163,((0x30200073U == vlSelf->top__DOT__id_inst)));
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+166,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0xfU)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                   >> 0xfU))])),64);
            tracep->chgQData(oldp+168,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0x14U)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                   >> 0x14U))])),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
            tracep->chgQData(oldp+172,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                >> 0x14U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
            tracep->chgQData(oldp+174,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__id_inst 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__id_inst))))),64);
            tracep->chgQData(oldp+176,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))),64);
            tracep->chgQData(oldp+178,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS)))),64);
            tracep->chgBit(oldp+180,((0ULL == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)));
            tracep->chgBit(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt));
            __Vtemp179[0U] = 1U;
            __Vtemp179[1U] = 0U;
            __Vtemp179[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp180, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp181, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp182, __Vtemp180, __Vtemp181);
            VL_ADD_W(3, __Vtemp183, __Vtemp179, __Vtemp182);
            tracep->chgBit(oldp+182,((1U & (~ (1U & 
                                               __Vtemp183[2U])))));
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result),64);
            __Vtemp186[0U] = 1U;
            __Vtemp186[1U] = 0U;
            __Vtemp186[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp187, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp188, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp189, __Vtemp187, __Vtemp188);
            VL_ADD_W(3, __Vtemp190, __Vtemp186, __Vtemp189);
            tracep->chgBit(oldp+185,((1U & __Vtemp190[2U])));
            tracep->chgQData(oldp+186,((0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                           + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
            tracep->chgQData(oldp+188,((vlSelf->top__DOT__id_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                   >> 0xcU))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))),64);
            tracep->chgBit(oldp+190,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb))));
            tracep->chgBit(oldp+191,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb))));
            tracep->chgQData(oldp+192,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+194,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+196,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__id_inst 
                                                           >> 0xfU))))),64);
            tracep->chgCData(oldp+198,((0x7fU & vlSelf->top__DOT__id_inst)),7);
            tracep->chgCData(oldp+199,((7U & (vlSelf->top__DOT__id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+200,((vlSelf->top__DOT__id_inst 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+201,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+202,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+203,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
            tracep->chgBit(oldp+206,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
            tracep->chgBit(oldp+209,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
            tracep->chgBit(oldp+211,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
            tracep->chgBit(oldp+215,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
            tracep->chgBit(oldp+216,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
            tracep->chgBit(oldp+218,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori));
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori));
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli));
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli));
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw));
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul));
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div));
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu));
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc));
            tracep->chgBit(oldp+266,((IData)((0x5073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+267,((IData)((0x6073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+268,((IData)((0x7073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
            tracep->chgBit(oldp+271,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word));
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
            tracep->chgWData(oldp+336,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
            tracep->chgWData(oldp+345,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+348,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+351,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+354,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+357,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+358,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+359,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+360,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+361,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+363,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+365,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+371,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex));
            tracep->chgBit(oldp+373,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem));
            tracep->chgBit(oldp+374,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb));
            tracep->chgBit(oldp+375,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex));
            tracep->chgBit(oldp+376,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem));
            tracep->chgBit(oldp+377,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb));
            tracep->chgBit(oldp+378,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex));
            tracep->chgBit(oldp+379,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem));
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip),64);
            tracep->chgBit(oldp+392,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+393,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie 
                                                    >> 7U)))));
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+396,((0x341U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+397,((0x300U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+398,((0x342U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+399,((0x305U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+400,((0x304U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+401,((0x344U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+402,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x341U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+403,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x300U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+404,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x342U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+405,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x305U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+406,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x304U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+407,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x344U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+408,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc));
            tracep->chgBit(oldp+409,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus));
            tracep->chgBit(oldp+410,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause));
            tracep->chgBit(oldp+411,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec));
            tracep->chgBit(oldp+412,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie));
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime),64);
            tracep->chgBit(oldp+415,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime 
                                      >= vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp)));
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res),64);
            tracep->chgBit(oldp+418,((1U & vlSelf->top__DOT__ex_alu_op)));
            tracep->chgBit(oldp+419,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 1U))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 2U))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 3U))));
            tracep->chgBit(oldp+422,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 4U))));
            tracep->chgBit(oldp+423,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 5U))));
            tracep->chgBit(oldp+424,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 6U))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 7U))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 8U))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 9U))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xaU))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xbU))));
            tracep->chgBit(oldp+430,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xcU))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xdU))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xeU))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xfU))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0x10U))));
            tracep->chgQData(oldp+435,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+437,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp193, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp194, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp195, __Vtemp193, __Vtemp194);
            VL_EXTEND_WI(65,1, __Vtemp196, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp197, __Vtemp195, __Vtemp196);
            tracep->chgQData(oldp+439,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp197[2U])))))),64);
            tracep->chgQData(oldp+441,((vlSelf->top__DOT__ex_alu_src1 
                                        & vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+443,((vlSelf->top__DOT__ex_alu_src1 
                                        | vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+445,((vlSelf->top__DOT__ex_alu_src1 
                                        ^ vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+447,((vlSelf->top__DOT__ex_alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+449,((vlSelf->top__DOT__ex_alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+451,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ex_alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+453,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+455,(VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+457,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+459,((vlSelf->top__DOT__ex_alu_src1 
                                        * vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+461,(VL_DIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+463,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+465,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+467,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp200, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp201, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp202, __Vtemp200, __Vtemp201);
            VL_EXTEND_WI(65,1, __Vtemp203, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp204, __Vtemp202, __Vtemp203);
            tracep->chgBit(oldp+468,((1U & __Vtemp204[2U])));
            tracep->chgBit(oldp+469,(vlSelf->top__DOT__u_MEM__DOT__mem_we));
            tracep->chgBit(oldp+470,(vlSelf->top__DOT__u_MEM__DOT__mem_ena));
            tracep->chgQData(oldp+471,(vlSelf->top__DOT__u_MEM__DOT__mem_rdata),64);
            tracep->chgBit(oldp+473,((0x2004000ULL 
                                      == vlSelf->top__DOT__mem_addr)));
            tracep->chgQData(oldp+474,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                         ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                         : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                             ? (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__mem_mask))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->top__DOT__mem_mask))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                  : 0ULL))))),64);
            tracep->chgQData(oldp+476,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__mem_mask))
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
            tracep->chgQData(oldp+478,((((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                         & (~ (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we)))
                                         ? vlSelf->top__DOT__mem_addr
                                         : 0x80000000ULL)),64);
            tracep->chgQData(oldp+480,((((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                         & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we))
                                         ? vlSelf->top__DOT__mem_addr
                                         : 0x80000000ULL)),64);
            tracep->chgCData(oldp+482,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask),8);
            tracep->chgCData(oldp+483,((7U & (IData)(vlSelf->top__DOT__mem_addr))),3);
            tracep->chgCData(oldp+484,((0x38U & ((IData)(vlSelf->top__DOT__mem_addr) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+485,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+487,(vlSelf->top__DOT__branch));
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__mem_rdata),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__id_csr_data),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc),64);
            tracep->chgCData(oldp+494,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                                         >> 3U)))),6);
            tracep->chgIData(oldp+495,((0x7fffffU & (IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+496,((7U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc))),3);
            tracep->chgCData(oldp+497,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state),3);
            tracep->chgIData(oldp+498,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag),24);
            tracep->chgIData(oldp+499,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag),24);
            tracep->chgBit(oldp+500,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit));
            tracep->chgBit(oldp+501,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit));
            tracep->chgBit(oldp+502,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit));
            tracep->chgBit(oldp+503,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag 
                                            >> 0x17U))));
            tracep->chgBit(oldp+504,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag 
                                            >> 0x17U))));
            tracep->chgIData(oldp+505,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag)),23);
            tracep->chgIData(oldp+506,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag)),23);
            tracep->chgBit(oldp+507,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint));
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata),64);
        }
        tracep->chgBit(oldp+512,(vlSelf->clk));
        tracep->chgBit(oldp+513,(vlSelf->rst));
        tracep->chgQData(oldp+514,(vlSelf->pc),64);
        tracep->chgQData(oldp+516,(((IData)(vlSelf->top__DOT__branch)
                                     ? ((((0x73U == vlSelf->top__DOT__id_inst) 
                                          | (0x30200073U 
                                             == vlSelf->top__DOT__id_inst)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))
                                         ? vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata
                                         : ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                             ? (0xfffffffffffffffeULL 
                                                & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                   + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))
                                             : (vlSelf->top__DOT__id_pc 
                                                + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                           >> 0xcU))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))))
                                     : 0ULL)),64);
        tracep->chgBit(oldp+518,((1U & (~ (((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                            & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit)) 
                                           | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))))));
        tracep->chgBit(oldp+519,((((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit)) 
                                  | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))));
        tracep->chgBit(oldp+520,((1U & (~ ((IData)(vlSelf->rst) 
                                           | (IData)(vlSelf->top__DOT__id_stall))))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
