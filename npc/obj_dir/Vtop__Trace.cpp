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
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<4>/*127:0*/ __Vtemp184;
    VlWide<4>/*127:0*/ __Vtemp187;
    VlWide<4>/*127:0*/ __Vtemp191;
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
    VlWide<3>/*95:0*/ __Vtemp207;
    VlWide<3>/*95:0*/ __Vtemp208;
    VlWide<3>/*95:0*/ __Vtemp209;
    VlWide<3>/*95:0*/ __Vtemp210;
    VlWide<3>/*95:0*/ __Vtemp211;
    VlWide<3>/*95:0*/ __Vtemp214;
    VlWide<3>/*95:0*/ __Vtemp215;
    VlWide<3>/*95:0*/ __Vtemp216;
    VlWide<3>/*95:0*/ __Vtemp217;
    VlWide<3>/*95:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp220;
    VlWide<4>/*127:0*/ __Vtemp221;
    VlWide<4>/*127:0*/ __Vtemp222;
    VlWide<4>/*127:0*/ __Vtemp223;
    VlWide<4>/*127:0*/ __Vtemp224;
    VlWide<4>/*127:0*/ __Vtemp225;
    VlWide<4>/*127:0*/ __Vtemp226;
    VlWide<4>/*127:0*/ __Vtemp227;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_out),64);
            tracep->chgIData(oldp+2,(((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state))
                                       ? (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_ret_data 
                                                  >> 
                                                  (0x20U 
                                                   & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                      << 3U))))
                                       : (((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way0_hit))) 
                                           & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                           (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                  >> 2U))]) 
                                          | ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way1_hit))) 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      (0x20U 
                                                       & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                          << 3U)))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x40U) 
                                                        + 
                                                        (0x20U 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                            << 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x20U 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                           << 3U))))))) 
                                                | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                                   (3U 
                                                    & (((IData)(0x40U) 
                                                        + 
                                                        (0x20U 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                            << 3U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x20U 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                           << 3U)))))))))),32);
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__if_ena));
            tracep->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok)))));
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__id_pc),64);
            tracep->chgIData(oldp+7,(vlSelf->top__DOT__id_inst),32);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__id_ena));
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__id_alu_op),17);
            tracep->chgCData(oldp+10,((((0x73U == (0x7fU 
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
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
            tracep->chgBit(oldp+12,(((IData)(vlSelf->top__DOT__id_load) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))));
            tracep->chgCData(oldp+13,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
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
            tracep->chgCData(oldp+14,(((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
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
            tracep->chgCData(oldp+15,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                        << 1U) | ((
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)))),2);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+18,(((((((((- (QData)((IData)(
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
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__id_rf_rdata2),64);
            tracep->chgBit(oldp+22,((((((((((((((((
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
            tracep->chgCData(oldp+23,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                >> 7U))),5);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__id_load));
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__rf_wdata),64);
            tracep->chgBit(oldp+27,((0x100073U == vlSelf->top__DOT__id_inst)));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__id_stall));
            tracep->chgBit(oldp+29,((((0x2004000ULL 
                                       == vlSelf->top__DOT__mem_addr) 
                                      & (IData)(vlSelf->top__DOT__MEM_ena)) 
                                     & (IData)(vlSelf->top__DOT__MEM_wen))));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__mtcmp_re));
            tracep->chgQData(oldp+31,(((0x2004000ULL 
                                        == vlSelf->top__DOT__mem_addr)
                                        ? ((IData)(vlSelf->top__DOT__mem_mem_wen)
                                            ? vlSelf->top__DOT__mem_rf_rdata2
                                            : 0ULL)
                                        : 0ULL)),64);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok));
            tracep->chgBit(oldp+34,((1U & (~ (IData)(vlSelf->top__DOT__id_stall)))));
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__ex_pc),64);
            tracep->chgIData(oldp+37,(vlSelf->top__DOT__ex_inst),32);
            tracep->chgIData(oldp+38,(vlSelf->top__DOT__ex_alu_op),17);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__ex_sel_rfres),3);
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__ex_mem_wen));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__ex_mem_ena));
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__ex_mem_mask),4);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__ex_sel_alures),4);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__ex_alu_src2),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__ex_rf_rdata2),64);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__ex_sel_memdata),2);
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__ex_rf_we));
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__ex_rf_waddr),5);
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__ex_ebreak));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__ex_load));
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__ex_csr_data),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__ex_npc),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__ex_alu_result),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__mem_pc),64);
            tracep->chgIData(oldp+63,(vlSelf->top__DOT__mem_inst),32);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__mem_sel_rfres),3);
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__mem_mem_wen));
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__mem_mem_ena));
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__mem_mem_mask),4);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__mem_rf_rdata2),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__mem_alu_result),64);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__mem_sel_memdata),2);
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__mem_rf_we));
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__mem_rf_waddr),5);
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__mem_ebreak));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__mem_load));
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__mem_csr_data),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__mem_npc),64);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__MEM_ena));
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__MEM_wen));
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__mem_mask),4);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__mem_addr),64);
            tracep->chgQData(oldp+86,(((IData)(vlSelf->top__DOT__mem_mem_wen)
                                        ? vlSelf->top__DOT__mem_rf_rdata2
                                        : 0ULL)),64);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__sel_memdata),2);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__wb_pc),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__wb_alu_result),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__wb_rdata),64);
            tracep->chgIData(oldp+95,(vlSelf->top__DOT__wb_inst),32);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__wb_sel_rfres),3);
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__wb_rf_we));
            tracep->chgCData(oldp+98,(vlSelf->top__DOT__wb_rf_waddr),5);
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__wb_ebreak));
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__wb_csr_data),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__wb_npc),64);
            tracep->chgBit(oldp+104,((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state))));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__u_axi__DOT__rw_ready));
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__data_read),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__rw_addr),64);
            tracep->chgCData(oldp+110,(vlSelf->top__DOT__u_axi__DOT__rw_resp),2);
            tracep->chgQData(oldp+111,((4ULL + vlSelf->top__DOT__pc_out)),64);
            tracep->chgBit(oldp+113,(((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__cache_hit))));
            tracep->chgCData(oldp+114,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state),3);
            tracep->chgCData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_index),6);
            tracep->chgCData(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset),3);
            tracep->chgIData(oldp+117,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_tag),23);
            tracep->chgBit(oldp+118,((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state))));
            tracep->chgBit(oldp+119,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state)) 
                                      & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way)))));
            tracep->chgBit(oldp+120,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way))));
            tracep->chgIData(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way0_vtag),24);
            tracep->chgIData(oldp+122,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way1_vtag),24);
            tracep->chgIData(oldp+123,((0x800000U | vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_tag)),24);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way0_hit));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way1_hit));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__cache_hit));
            tracep->chgBit(oldp+127,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way0_vtag 
                                            >> 0x17U))));
            tracep->chgBit(oldp+128,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way1_vtag 
                                            >> 0x17U))));
            tracep->chgIData(oldp+129,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way0_vtag)),23);
            tracep->chgIData(oldp+130,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way1_vtag)),23);
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way));
            tracep->chgIData(oldp+132,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                       (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                              >> 2U))]),32);
            tracep->chgIData(oldp+133,((((0U == (0x1fU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    (0x20U 
                                                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                        << 3U)))))
                                          ? 0U : (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x40U) 
                                                        + 
                                                        (0x20U 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                            << 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x20U 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                           << 3U))))))) 
                                        | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                           (3U & (((IData)(0x40U) 
                                                   + 
                                                   (0x20U 
                                                    & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                       << 3U))) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(0x40U) 
                                                  + 
                                                  (0x20U 
                                                   & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                      << 3U))))))),32);
            tracep->chgIData(oldp+134,((((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way0_hit))) 
                                         & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                         (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                >> 2U))]) 
                                        | ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__way1_hit))) 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    (0x20U 
                                                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                        << 3U)))))
                                                ? 0U
                                                : (
                                                   vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x40U) 
                                                         + 
                                                         (0x20U 
                                                          & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                             << 3U))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x40U) 
                                                        + 
                                                        (0x20U 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                            << 3U))))))) 
                                              | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[
                                                 (3U 
                                                  & (((IData)(0x40U) 
                                                      + 
                                                      (0x20U 
                                                       & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                          << 3U))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x40U) 
                                                     + 
                                                     (0x20U 
                                                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_offset) 
                                                         << 3U))))))))),32);
            tracep->chgQData(oldp+135,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[0U])))),64);
            tracep->chgQData(oldp+137,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata[2U])))),64);
            tracep->chgWData(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_rdata),128);
            VL_EXTEND_WQ(128,64, __Vtemp183, vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_ret_data);
            if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way) {
                __Vtemp184[0U] = 0U;
                __Vtemp184[1U] = 0U;
                __Vtemp184[2U] = (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_ret_data);
                __Vtemp184[3U] = (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_ret_data 
                                          >> 0x20U));
            } else {
                __Vtemp184[0U] = __Vtemp183[0U];
                __Vtemp184[1U] = __Vtemp183[1U];
                __Vtemp184[2U] = __Vtemp183[2U];
                __Vtemp184[3U] = __Vtemp183[3U];
            }
            tracep->chgWData(oldp+143,(__Vtemp184),128);
            tracep->chgBit(oldp+147,((3U != (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state))));
            if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way) {
                __Vtemp187[0U] = 0xffffffffU;
                __Vtemp187[1U] = 0xffffffffU;
                __Vtemp187[2U] = 0U;
                __Vtemp187[3U] = 0U;
            } else {
                __Vtemp187[0U] = 0U;
                __Vtemp187[1U] = 0U;
                __Vtemp187[2U] = 0xffffffffU;
                __Vtemp187[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+148,(__Vtemp187),128);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__reg_ret_data),64);
            tracep->chgBit(oldp+154,((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state))));
            __Vtemp191[0U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way)
                                  ? 0xffffffffU : 0U));
            __Vtemp191[1U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way)
                                  ? 0xffffffffU : 0U));
            __Vtemp191[2U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way)
                                  ? 0U : 0xffffffffU));
            __Vtemp191[3U] = (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__replace_way)
                                  ? 0U : 0xffffffffU));
            tracep->chgWData(oldp+155,(__Vtemp191),128);
            tracep->chgCData(oldp+159,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+160,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+161,((vlSelf->top__DOT__id_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+162,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
            tracep->chgIData(oldp+163,((vlSelf->top__DOT__id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB),13);
            tracep->chgSData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS),12);
            tracep->chgCData(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),4);
            tracep->chgCData(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),7);
            tracep->chgCData(oldp+168,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype),8);
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
            tracep->chgBit(oldp+170,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
            tracep->chgBit(oldp+171,((0x73U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgCData(oldp+172,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres),6);
            tracep->chgBit(oldp+173,((0x73U == vlSelf->top__DOT__id_inst)));
            tracep->chgBit(oldp+174,((0x30200073U == vlSelf->top__DOT__id_inst)));
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+177,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0xfU)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                   >> 0xfU))])),64);
            tracep->chgQData(oldp+179,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0x14U)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                   >> 0x14U))])),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
            tracep->chgQData(oldp+183,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                >> 0x14U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
            tracep->chgQData(oldp+185,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__id_inst 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__id_inst))))),64);
            tracep->chgQData(oldp+187,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))),64);
            tracep->chgQData(oldp+189,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS)))),64);
            tracep->chgBit(oldp+191,((0ULL == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)));
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt));
            __Vtemp193[0U] = 1U;
            __Vtemp193[1U] = 0U;
            __Vtemp193[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp194, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp195, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp196, __Vtemp194, __Vtemp195);
            VL_ADD_W(3, __Vtemp197, __Vtemp193, __Vtemp196);
            tracep->chgBit(oldp+193,((1U & (~ (1U & 
                                               __Vtemp197[2U])))));
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result),64);
            __Vtemp200[0U] = 1U;
            __Vtemp200[1U] = 0U;
            __Vtemp200[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp201, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp202, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp203, __Vtemp201, __Vtemp202);
            VL_ADD_W(3, __Vtemp204, __Vtemp200, __Vtemp203);
            tracep->chgBit(oldp+196,((1U & __Vtemp204[2U])));
            tracep->chgQData(oldp+197,((0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                           + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
            tracep->chgQData(oldp+199,((vlSelf->top__DOT__id_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                   >> 0xcU))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))),64);
            tracep->chgQData(oldp+201,((vlSelf->top__DOT__id_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                   >> 0x14U))))) 
                                            << 0x15U) 
                                           | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ))))),64);
            tracep->chgQData(oldp+203,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__id_inst 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->top__DOT__id_inst) 
                                                           | ((0x800U 
                                                               & (vlSelf->top__DOT__id_inst 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->top__DOT__id_inst 
                                                                    >> 0x14U)))))))),64);
            tracep->chgBit(oldp+205,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb))));
            tracep->chgBit(oldp+206,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb))));
            tracep->chgQData(oldp+207,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+209,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+211,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__id_inst 
                                                           >> 0xfU))))),64);
            tracep->chgCData(oldp+213,((0x7fU & vlSelf->top__DOT__id_inst)),7);
            tracep->chgCData(oldp+214,((7U & (vlSelf->top__DOT__id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+215,((vlSelf->top__DOT__id_inst 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+216,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+217,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+218,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw));
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu));
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu));
            tracep->chgBit(oldp+271,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu));
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw));
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw));
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs));
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc));
            tracep->chgBit(oldp+281,((IData)((0x5073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+282,((IData)((0x6073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+283,((IData)((0x7073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word));
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+341,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+349,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
            tracep->chgWData(oldp+351,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
            tracep->chgWData(oldp+360,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+363,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+366,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+369,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+372,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+373,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+374,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+375,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+386,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+387,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex));
            tracep->chgBit(oldp+388,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem));
            tracep->chgBit(oldp+389,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb));
            tracep->chgBit(oldp+390,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex));
            tracep->chgBit(oldp+391,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem));
            tracep->chgBit(oldp+392,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb));
            tracep->chgBit(oldp+393,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex));
            tracep->chgBit(oldp+394,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem));
            tracep->chgQData(oldp+395,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc),64);
            tracep->chgQData(oldp+397,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus),64);
            tracep->chgQData(oldp+399,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause),64);
            tracep->chgQData(oldp+401,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec),64);
            tracep->chgQData(oldp+403,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie),64);
            tracep->chgQData(oldp+405,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip),64);
            tracep->chgBit(oldp+407,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+408,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie 
                                                    >> 7U)))));
            tracep->chgQData(oldp+409,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+411,((0x341U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+412,((0x300U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+413,((0x342U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+414,((0x305U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+415,((0x304U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+416,((0x344U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+417,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x341U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+418,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x300U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+419,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x342U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+420,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x305U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+421,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x304U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+422,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x344U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+423,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc));
            tracep->chgBit(oldp+424,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus));
            tracep->chgBit(oldp+425,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause));
            tracep->chgBit(oldp+426,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec));
            tracep->chgBit(oldp+427,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie));
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime),64);
            tracep->chgBit(oldp+430,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime 
                                      >= vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp)));
            tracep->chgQData(oldp+431,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res),64);
            tracep->chgBit(oldp+433,((1U & vlSelf->top__DOT__ex_alu_op)));
            tracep->chgBit(oldp+434,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 1U))));
            tracep->chgBit(oldp+435,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 2U))));
            tracep->chgBit(oldp+436,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 3U))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 4U))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 5U))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 6U))));
            tracep->chgBit(oldp+440,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 7U))));
            tracep->chgBit(oldp+441,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 8U))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 9U))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xaU))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xbU))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xcU))));
            tracep->chgBit(oldp+446,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xdU))));
            tracep->chgBit(oldp+447,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xeU))));
            tracep->chgBit(oldp+448,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xfU))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0x10U))));
            tracep->chgQData(oldp+450,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+452,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp207, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp208, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp209, __Vtemp207, __Vtemp208);
            VL_EXTEND_WI(65,1, __Vtemp210, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp211, __Vtemp209, __Vtemp210);
            tracep->chgQData(oldp+454,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp211[2U])))))),64);
            tracep->chgQData(oldp+456,((vlSelf->top__DOT__ex_alu_src1 
                                        & vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+458,((vlSelf->top__DOT__ex_alu_src1 
                                        | vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+460,((vlSelf->top__DOT__ex_alu_src1 
                                        ^ vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+462,((vlSelf->top__DOT__ex_alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+464,((vlSelf->top__DOT__ex_alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+466,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ex_alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+468,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+470,(VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+472,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+474,((vlSelf->top__DOT__ex_alu_src1 
                                        * vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+476,(VL_DIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+478,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+480,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+482,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp214, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp215, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp216, __Vtemp214, __Vtemp215);
            VL_EXTEND_WI(65,1, __Vtemp217, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp218, __Vtemp216, __Vtemp217);
            tracep->chgBit(oldp+483,((1U & __Vtemp218[2U])));
            tracep->chgBit(oldp+484,(vlSelf->top__DOT__u_MEM__DOT__mem_we));
            tracep->chgBit(oldp+485,(vlSelf->top__DOT__u_MEM__DOT__mem_ena));
            tracep->chgQData(oldp+486,(vlSelf->top__DOT__u_MEM__DOT__mem_rdata),64);
            tracep->chgBit(oldp+488,((0x2004000ULL 
                                      == vlSelf->top__DOT__mem_addr)));
            tracep->chgQData(oldp+489,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
            tracep->chgQData(oldp+491,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
            tracep->chgQData(oldp+493,((((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                         & (~ (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we)))
                                         ? vlSelf->top__DOT__mem_addr
                                         : 0x80000000ULL)),64);
            tracep->chgQData(oldp+495,((((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                         & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we))
                                         ? vlSelf->top__DOT__mem_addr
                                         : 0x80000000ULL)),64);
            tracep->chgCData(oldp+497,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask),8);
            tracep->chgCData(oldp+498,((7U & (IData)(vlSelf->top__DOT__mem_addr))),3);
            tracep->chgCData(oldp+499,((0x38U & ((IData)(vlSelf->top__DOT__mem_addr) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata),64);
            tracep->chgCData(oldp+502,(vlSelf->top__DOT__u_axi__DOT__w_state),2);
            tracep->chgCData(oldp+503,(vlSelf->top__DOT__u_axi__DOT__r_state),2);
            tracep->chgBit(oldp+504,((0U == (IData)(vlSelf->top__DOT__u_axi__DOT__w_state))));
            tracep->chgBit(oldp+505,((1U == (IData)(vlSelf->top__DOT__u_axi__DOT__w_state))));
            tracep->chgBit(oldp+506,((2U == (IData)(vlSelf->top__DOT__u_axi__DOT__w_state))));
            tracep->chgBit(oldp+507,((3U == (IData)(vlSelf->top__DOT__u_axi__DOT__w_state))));
            tracep->chgBit(oldp+508,((0U == (IData)(vlSelf->top__DOT__u_axi__DOT__r_state))));
            tracep->chgBit(oldp+509,((1U == (IData)(vlSelf->top__DOT__u_axi__DOT__r_state))));
            tracep->chgBit(oldp+510,((2U == (IData)(vlSelf->top__DOT__u_axi__DOT__r_state))));
            tracep->chgCData(oldp+511,(vlSelf->top__DOT__u_axi__DOT__len),8);
            tracep->chgBit(oldp+512,((0U == (7U & (IData)(vlSelf->top__DOT__rw_addr)))));
            tracep->chgCData(oldp+513,((7U & (IData)(vlSelf->top__DOT__rw_addr))),4);
            tracep->chgCData(oldp+514,((0xfU & ((IData)(7U) 
                                                + (7U 
                                                   & (IData)(vlSelf->top__DOT__rw_addr))))),4);
            tracep->chgBit(oldp+515,((1U & (((IData)(7U) 
                                             + (7U 
                                                & (IData)(vlSelf->top__DOT__rw_addr))) 
                                            >> 3U))));
            tracep->chgCData(oldp+516,(vlSelf->top__DOT__u_axi__DOT__axi_len),8);
            tracep->chgQData(oldp+517,((0xfffffffffffffff8ULL 
                                        & vlSelf->top__DOT__rw_addr)),64);
            tracep->chgCData(oldp+519,((0x38U & ((IData)(vlSelf->top__DOT__rw_addr) 
                                                 << 3U))),6);
            tracep->chgCData(oldp+520,((0x3fU & (- 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__rw_addr) 
                                                     << 3U))))),6);
            __Vtemp220[0U] = 0xffffffffU;
            __Vtemp220[1U] = 0xffffffffU;
            __Vtemp220[2U] = 0U;
            __Vtemp220[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp221, __Vtemp220, 
                          (0x38U & ((IData)(vlSelf->top__DOT__rw_addr) 
                                    << 3U)));
            tracep->chgWData(oldp+521,(__Vtemp221),128);
            __Vtemp222[0U] = 0xffffffffU;
            __Vtemp222[1U] = 0xffffffffU;
            __Vtemp222[2U] = 0U;
            __Vtemp222[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp223, __Vtemp222, 
                          (0x38U & ((IData)(vlSelf->top__DOT__rw_addr) 
                                    << 3U)));
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         __Vtemp223[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp223[0U])))),64);
            __Vtemp224[0U] = 0xffffffffU;
            __Vtemp224[1U] = 0xffffffffU;
            __Vtemp224[2U] = 0U;
            __Vtemp224[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp225, __Vtemp224, 
                          (0x38U & ((IData)(vlSelf->top__DOT__rw_addr) 
                                    << 3U)));
            tracep->chgQData(oldp+527,((((QData)((IData)(
                                                         __Vtemp225[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp225[2U])))),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+529,(((IData)(vlSelf->top__DOT__mtcmp_re)
                                         ? vlSelf->top__DOT__id_csr_data
                                         : ((1U & (IData)(vlSelf->top__DOT__sel_memdata))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__mem_mask))
                                                 ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__mem_mask))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))
                                                  : 
                                                 ((4U 
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
                                                    : 0ULL))))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__sel_memdata))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__mem_mask))
                                                  ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__mem_mask))
                                                   ? (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))
                                                   : 
                                                  ((4U 
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
                                                     : 0ULL))))
                                                 : 0ULL)))),64);
            tracep->chgBit(oldp+531,(((IData)(vlSelf->top__DOT__branch) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok))));
            tracep->chgQData(oldp+532,(((IData)(vlSelf->top__DOT__branch)
                                         ? vlSelf->top__DOT__branchpc
                                         : vlSelf->top__DOT__pc_out)),64);
            tracep->chgBit(oldp+534,(((~ (IData)(vlSelf->top__DOT__if_ena)) 
                                      & (IData)(vlSelf->top__DOT__branch))));
            tracep->chgBit(oldp+535,((1U & (~ ((((0U 
                                                  == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state)) 
                                                 & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state))) 
                                               | (3U 
                                                  == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state)))))));
            tracep->chgBit(oldp+536,(((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state)) 
                                        & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid)) 
                                       | (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state))) 
                                      | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__state)))));
            tracep->chgBit(oldp+537,((((IData)(vlSelf->top__DOT__u_axi__DOT__len) 
                                       != (IData)(vlSelf->top__DOT__u_axi__DOT__axi_len)) 
                                      & ((IData)(vlSelf->top__DOT__u_axi__DOT__w_hs) 
                                         | (IData)(vlSelf->top__DOT__u_axi__DOT__r_hs)))));
            tracep->chgBit(oldp+538,(((IData)(vlSelf->top__DOT__u_axi__DOT__r_done) 
                                      | (IData)(vlSelf->top__DOT__u_axi__DOT__rw_ready))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+539,(vlSelf->top__DOT__branchpc),64);
            tracep->chgBit(oldp+541,(vlSelf->top__DOT__branch));
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__id_csr_data),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc),64);
            tracep->chgCData(oldp+546,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                                         >> 3U)))),6);
            tracep->chgIData(oldp+547,((0x7fffffU & (IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+548,((7U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc))),3);
            tracep->chgBit(oldp+549,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid));
            tracep->chgCData(oldp+550,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__next_state),3);
            tracep->chgCData(oldp+551,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__u_icache__DOT__ram_addr),6);
            tracep->chgBit(oldp+552,(vlSelf->top__DOT____Vcellinp__u_ID_reg__rst));
            tracep->chgBit(oldp+553,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint));
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata),64);
            tracep->chgBit(oldp+558,(vlSelf->top__DOT__u_axi__DOT__w_hs));
            tracep->chgBit(oldp+559,(vlSelf->top__DOT__u_axi__DOT__r_hs));
            tracep->chgBit(oldp+560,(vlSelf->top__DOT__u_axi__DOT__r_done));
            tracep->chgQData(oldp+561,(vlSelf->top__DOT__u_axi__DOT__axi_r_data_l),64);
        }
        tracep->chgBit(oldp+563,(vlSelf->clk));
        tracep->chgBit(oldp+564,(vlSelf->rst));
        tracep->chgQData(oldp+565,(vlSelf->pc),64);
        tracep->chgQData(oldp+567,(vlSelf->npc),64);
        tracep->chgBit(oldp+569,(vlSelf->stall));
        tracep->chgBit(oldp+570,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+571,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+572,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+574,(vlSelf->axi_aw_id_o),4);
        tracep->chgCData(oldp+575,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+576,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+577,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+578,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+579,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+580,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+582,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+583,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+584,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+585,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+586,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+587,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+588,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+589,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+590,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+592,(vlSelf->axi_ar_id_o),4);
        tracep->chgCData(oldp+593,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+594,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+595,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+596,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+597,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+598,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+599,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+601,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+602,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+603,((1U & (~ ((IData)(vlSelf->rst) 
                                           | (IData)(vlSelf->top__DOT__id_stall))))));
        tracep->chgBit(oldp+604,(((IData)(vlSelf->axi_aw_ready_i) 
                                  & (IData)(vlSelf->axi_aw_valid_o))));
        tracep->chgBit(oldp+605,(((IData)(vlSelf->axi_b_ready_o) 
                                  & (IData)(vlSelf->axi_b_valid_i))));
        tracep->chgBit(oldp+606,(((IData)(vlSelf->axi_ar_ready_i) 
                                  & (IData)(vlSelf->axi_ar_valid_o))));
        tracep->chgBit(oldp+607,(((IData)(vlSelf->top__DOT__u_axi__DOT__w_hs) 
                                  & (IData)(vlSelf->axi_w_last_o))));
        tracep->chgBit(oldp+608,(((IData)(vlSelf->rst) 
                                  | (0U == (IData)(vlSelf->top__DOT__u_axi__DOT__r_state)))));
        tracep->chgBit(oldp+609,((1U & (IData)(vlSelf->axi_r_resp_i))));
        __Vtemp226[0U] = 0xffffffffU;
        __Vtemp226[1U] = 0xffffffffU;
        __Vtemp226[2U] = 0U;
        __Vtemp226[3U] = 0U;
        VL_SHIFTL_WWI(128,128,6, __Vtemp227, __Vtemp226, 
                      (0x38U & ((IData)(vlSelf->top__DOT__rw_addr) 
                                << 3U)));
        tracep->chgQData(oldp+610,(((vlSelf->axi_r_data_i 
                                     & (((QData)((IData)(
                                                         __Vtemp227[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp227[2U])))) 
                                    << (0x3fU & (- 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__rw_addr) 
                                                     << 3U)))))),64);
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
