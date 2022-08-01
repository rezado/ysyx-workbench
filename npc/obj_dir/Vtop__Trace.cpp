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
    VlWide<3>/*95:0*/ __Vtemp146;
    VlWide<3>/*95:0*/ __Vtemp147;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp154;
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_out),64);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__inst),32);
            tracep->chgQData(oldp+3,(((IData)(vlSelf->top__DOT__branch)
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
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__branch));
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__id_pc),64);
            tracep->chgIData(oldp+8,(vlSelf->top__DOT__id_alu_op),17);
            tracep->chgCData(oldp+9,((((IData)(vlSelf->top__DOT__id_load) 
                                       << 1U) | (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__id_load))))),2);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
            tracep->chgBit(oldp+11,(((IData)(vlSelf->top__DOT__id_load) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))));
            tracep->chgCData(oldp+12,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
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
            tracep->chgCData(oldp+13,(((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
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
            tracep->chgCData(oldp+14,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                        << 1U) | ((
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)))),2);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+17,(((((((((- (QData)((IData)(
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
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__id_rf_rdata2),64);
            tracep->chgBit(oldp+21,((((((((((((((((
                                                   (((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
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
            tracep->chgCData(oldp+22,((0x1fU & (vlSelf->top__DOT__inst 
                                                >> 7U))),5);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__id_load));
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__rf_wdata),64);
            tracep->chgBit(oldp+26,((0x100073U == vlSelf->top__DOT__inst)));
            tracep->chgBit(oldp+27,(((((((((IData)(vlSelf->top__DOT__ex_rf_we) 
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
                                          & (0U != 
                                             (0x1fU 
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
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__ex_pc),64);
            tracep->chgIData(oldp+30,(vlSelf->top__DOT__ex_inst),32);
            tracep->chgIData(oldp+31,(vlSelf->top__DOT__ex_alu_op),17);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__ex_sel_rfres),2);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__ex_mem_wen));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__ex_mem_ena));
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__ex_mem_mask),4);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__ex_sel_alures),4);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__ex_alu_src2),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__ex_rf_rdata2),64);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__ex_sel_memdata),2);
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__ex_rf_we));
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__ex_rf_waddr),5);
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__ex_sys));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__ex_load));
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__ex_alu_result),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__mem_pc),64);
            tracep->chgIData(oldp+52,(vlSelf->top__DOT__mem_inst),32);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__mem_sel_rfres),2);
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__mem_mem_wen));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__mem_mem_ena));
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__mem_mem_mask),4);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__mem_rf_rdata2),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__mem_alu_result),64);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__mem_sel_memdata),2);
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__mem_rf_we));
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__mem_rf_waddr),5);
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__mem_sys));
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__mem_load));
            tracep->chgQData(oldp+66,(((1U & (IData)(vlSelf->top__DOT__mem_sel_memdata))
                                        ? ((1U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                            ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                            : ((2U 
                                                & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))
                                                : (
                                                   (4U 
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
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                                ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                                : (
                                                   (2U 
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
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__wb_pc),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__wb_alu_result),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__wb_rdata),64);
            tracep->chgIData(oldp+74,(vlSelf->top__DOT__wb_inst),32);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__wb_sel_rfres),2);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__wb_rf_we));
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__wb_rf_waddr),5);
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__wb_sys));
            tracep->chgQData(oldp+79,((4ULL + vlSelf->top__DOT__pc_out)),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__inst_data),64);
            tracep->chgCData(oldp+83,((0x7fU & vlSelf->top__DOT__inst)),7);
            tracep->chgCData(oldp+84,((7U & (vlSelf->top__DOT__inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+85,((vlSelf->top__DOT__inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+86,((0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+87,((0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgSData(oldp+88,((vlSelf->top__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+89,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
            tracep->chgIData(oldp+90,((vlSelf->top__DOT__inst 
                                       >> 0xcU)),20);
            tracep->chgSData(oldp+91,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB),13);
            tracep->chgSData(oldp+92,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS),12);
            tracep->chgCData(oldp+93,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),4);
            tracep->chgCData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),7);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype),7);
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+100,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0xfU)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__inst 
                                                   >> 0xfU))])),64);
            tracep->chgQData(oldp+102,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__inst 
                                                   >> 0x14U))])),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
            tracep->chgQData(oldp+106,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                >> 0x14U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
            tracep->chgQData(oldp+108,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__inst))))),64);
            tracep->chgQData(oldp+110,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))),64);
            tracep->chgQData(oldp+112,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS)))),64);
            tracep->chgBit(oldp+114,((0ULL == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt));
            __Vtemp146[0U] = 1U;
            __Vtemp146[1U] = 0U;
            __Vtemp146[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp147, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp148, vlSelf->top__DOT__id_rf_rdata2);
            __Vtemp149[0U] = (~ __Vtemp148[0U]);
            __Vtemp149[1U] = (~ __Vtemp148[1U]);
            __Vtemp149[2U] = (~ __Vtemp148[2U]);
            VL_ADD_W(3, __Vtemp150, __Vtemp147, __Vtemp149);
            VL_ADD_W(3, __Vtemp151, __Vtemp146, __Vtemp150);
            tracep->chgBit(oldp+116,((1U & (~ (1U & 
                                               __Vtemp151[2U])))));
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result),64);
            __Vtemp154[0U] = 1U;
            __Vtemp154[1U] = 0U;
            __Vtemp154[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp155, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp156, vlSelf->top__DOT__id_rf_rdata2);
            __Vtemp157[0U] = (~ __Vtemp156[0U]);
            __Vtemp157[1U] = (~ __Vtemp156[1U]);
            __Vtemp157[2U] = (~ __Vtemp156[2U]);
            VL_ADD_W(3, __Vtemp158, __Vtemp155, __Vtemp157);
            VL_ADD_W(3, __Vtemp159, __Vtemp154, __Vtemp158);
            tracep->chgBit(oldp+119,((1U & __Vtemp159[2U])));
            tracep->chgQData(oldp+120,((0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                           + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
            tracep->chgQData(oldp+122,((vlSelf->top__DOT__id_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                   >> 0xcU))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))),64);
            tracep->chgBit(oldp+124,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb))));
            tracep->chgBit(oldp+125,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb))));
            tracep->chgQData(oldp+126,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+128,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgBit(oldp+130,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+131,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+132,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
            tracep->chgBit(oldp+142,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
            tracep->chgBit(oldp+148,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
            tracep->chgBit(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti));
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi));
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli));
            tracep->chgBit(oldp+158,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli));
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai));
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
            tracep->chgBit(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
            tracep->chgBit(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
            tracep->chgBit(oldp+170,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw));
            tracep->chgBit(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw));
            tracep->chgBit(oldp+172,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw));
            tracep->chgBit(oldp+173,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw));
            tracep->chgBit(oldp+174,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw));
            tracep->chgBit(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw));
            tracep->chgBit(oldp+176,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw));
            tracep->chgBit(oldp+177,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
            tracep->chgBit(oldp+178,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw));
            tracep->chgBit(oldp+179,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul));
            tracep->chgBit(oldp+180,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh));
            tracep->chgBit(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu));
            tracep->chgBit(oldp+182,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu));
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div));
            tracep->chgBit(oldp+184,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu));
            tracep->chgBit(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu));
            tracep->chgBit(oldp+186,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
            tracep->chgBit(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw));
            tracep->chgBit(oldp+188,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw));
            tracep->chgBit(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
            tracep->chgBit(oldp+190,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw));
            tracep->chgBit(oldp+191,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
            tracep->chgBit(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word));
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
            tracep->chgWData(oldp+259,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
            tracep->chgWData(oldp+268,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+271,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+274,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+277,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+280,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+281,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+282,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+283,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+295,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex));
            tracep->chgBit(oldp+296,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem));
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb));
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex));
            tracep->chgBit(oldp+299,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem));
            tracep->chgBit(oldp+300,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb));
            tracep->chgBit(oldp+301,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex));
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem));
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res),64);
            tracep->chgBit(oldp+305,((1U & vlSelf->top__DOT__ex_alu_op)));
            tracep->chgBit(oldp+306,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 1U))));
            tracep->chgBit(oldp+307,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 2U))));
            tracep->chgBit(oldp+308,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 3U))));
            tracep->chgBit(oldp+309,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 4U))));
            tracep->chgBit(oldp+310,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 5U))));
            tracep->chgBit(oldp+311,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 6U))));
            tracep->chgBit(oldp+312,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 7U))));
            tracep->chgBit(oldp+313,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 8U))));
            tracep->chgBit(oldp+314,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 9U))));
            tracep->chgBit(oldp+315,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xaU))));
            tracep->chgBit(oldp+316,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xbU))));
            tracep->chgBit(oldp+317,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xcU))));
            tracep->chgBit(oldp+318,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xdU))));
            tracep->chgBit(oldp+319,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xeU))));
            tracep->chgBit(oldp+320,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xfU))));
            tracep->chgBit(oldp+321,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0x10U))));
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp162, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp163, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp164, __Vtemp162, __Vtemp163);
            VL_EXTEND_WI(65,1, __Vtemp165, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp166, __Vtemp164, __Vtemp165);
            tracep->chgQData(oldp+326,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp166[2U])))))),64);
            tracep->chgQData(oldp+328,((vlSelf->top__DOT__ex_alu_src1 
                                        & vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+330,((vlSelf->top__DOT__ex_alu_src1 
                                        | vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+332,((vlSelf->top__DOT__ex_alu_src1 
                                        ^ vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+334,((vlSelf->top__DOT__ex_alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+336,((vlSelf->top__DOT__ex_alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+338,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ex_alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+340,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+342,(VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+344,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+346,((vlSelf->top__DOT__ex_alu_src1 
                                        * vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+348,(VL_DIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+350,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp169, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp170, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp171, __Vtemp169, __Vtemp170);
            VL_EXTEND_WI(65,1, __Vtemp172, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp173, __Vtemp171, __Vtemp172);
            tracep->chgBit(oldp+355,((1U & __Vtemp173[2U])));
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__u_MEM__DOT__mem_rdata),64);
            tracep->chgQData(oldp+358,(((1U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                         ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                         : ((2U & (IData)(vlSelf->top__DOT__mem_mem_mask))
                                             ? (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))
                                             : ((4U 
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
                                                  : 0ULL))))),64);
            tracep->chgQData(oldp+360,(((1U & (IData)(vlSelf->top__DOT__mem_mem_mask))
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
                                                  : 0ULL))))),64);
            tracep->chgQData(oldp+362,((((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                         & (~ (IData)(vlSelf->top__DOT__mem_mem_wen)))
                                         ? vlSelf->top__DOT__mem_alu_result
                                         : 0x80000000ULL)),64);
            tracep->chgQData(oldp+364,((((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                         & (IData)(vlSelf->top__DOT__mem_mem_wen))
                                         ? vlSelf->top__DOT__mem_alu_result
                                         : 0x80000000ULL)),64);
            tracep->chgCData(oldp+366,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask),8);
            tracep->chgCData(oldp+367,((7U & (IData)(vlSelf->top__DOT__mem_alu_result))),3);
            tracep->chgCData(oldp+368,((0x38U & ((IData)(vlSelf->top__DOT__mem_alu_result) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata),64);
        }
        tracep->chgBit(oldp+371,(vlSelf->clk));
        tracep->chgBit(oldp+372,(vlSelf->rst));
        tracep->chgQData(oldp+373,(vlSelf->pc),64);
        tracep->chgQData(oldp+375,(((IData)(vlSelf->rst)
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
        tracep->chgBit(oldp+377,(((IData)(vlSelf->rst) 
                                  | (IData)(vlSelf->top__DOT__branch))));
        tracep->chgBit(oldp+378,((1U & (~ (IData)(vlSelf->rst)))));
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
    }
}
