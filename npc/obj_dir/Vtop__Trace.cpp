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
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp154;
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp159;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp162;
    VlWide<3>/*95:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<3>/*95:0*/ __Vtemp167;
    VlWide<3>/*95:0*/ __Vtemp168;
    VlWide<3>/*95:0*/ __Vtemp169;
    VlWide<3>/*95:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp173;
    VlWide<3>/*95:0*/ __Vtemp174;
    VlWide<3>/*95:0*/ __Vtemp175;
    VlWide<3>/*95:0*/ __Vtemp176;
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
    VlWide<4>/*127:0*/ __Vtemp206;
    VlWide<4>/*127:0*/ __Vtemp208;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_out),64);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res),32);
            tracep->chgBit(oldp+3,((0x6fU == (0x7fU 
                                              & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res))));
            tracep->chgBit(oldp+4,((1U & (~ ((~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)) 
                                             | (IData)(vlSelf->top__DOT__id_stall))))));
            tracep->chgBit(oldp+5,((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__icache_wr_req));
            tracep->chgQData(oldp+7,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                       ? (((QData)((IData)(
                                                           vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U])))
                                       : (((QData)((IData)(
                                                           vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U]))))),64);
            tracep->chgBit(oldp+9,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)))));
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__id_pc),64);
            tracep->chgIData(oldp+12,(vlSelf->top__DOT__id_inst),32);
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__id_jump));
            tracep->chgBit(oldp+14,((1U & (~ (IData)(vlSelf->top__DOT__id_stall)))));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok));
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__id_alu_op),17);
            tracep->chgCData(oldp+17,((((0x73U == (0x7fU 
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
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
            tracep->chgBit(oldp+19,(((IData)(vlSelf->top__DOT__id_load) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))));
            tracep->chgCData(oldp+20,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
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
            tracep->chgCData(oldp+21,(((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
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
            tracep->chgCData(oldp+22,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                        << 1U) | ((
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)))),2);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+25,(((((((((- (QData)((IData)(
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
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__id_rf_rdata2),64);
            tracep->chgBit(oldp+29,((((((((((((((((
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
            tracep->chgCData(oldp+30,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                >> 7U))),5);
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__id_load));
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__rf_wdata),64);
            tracep->chgBit(oldp+34,((0x100073U == vlSelf->top__DOT__id_inst)));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__id_stall));
            tracep->chgBit(oldp+36,(((0x2004000ULL 
                                      == vlSelf->top__DOT__mem_addr) 
                                     & (IData)(vlSelf->top__DOT__mem_wen))));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__mtcmp_re));
            tracep->chgQData(oldp+38,(((0x2004000ULL 
                                        == vlSelf->top__DOT__mem_addr)
                                        ? ((IData)(vlSelf->top__DOT__mem_mem_wen)
                                            ? vlSelf->top__DOT__mem_rf_rdata2
                                            : ((IData)(vlSelf->top__DOT__icache_wr_req)
                                                ? ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U]))))
                                                : 0ULL))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__ex_pc),64);
            tracep->chgIData(oldp+42,(vlSelf->top__DOT__ex_inst),32);
            tracep->chgIData(oldp+43,(vlSelf->top__DOT__ex_alu_op),17);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__ex_sel_rfres),3);
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__ex_mem_wen));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__ex_mem_ena));
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__ex_mem_mask),4);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__ex_sel_alures),4);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__ex_alu_src2),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__ex_rf_rdata2),64);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__ex_sel_memdata),2);
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__ex_rf_we));
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__ex_rf_waddr),5);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__ex_ebreak));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__ex_load));
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__ex_csr_data),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__ex_alu_result),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__mem_pc),64);
            tracep->chgIData(oldp+66,(vlSelf->top__DOT__mem_inst),32);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__mem_sel_rfres),3);
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__mem_mem_wen));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__mem_mem_ena));
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__mem_mem_mask),4);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__mem_rf_rdata2),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__mem_alu_result),64);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__mem_sel_memdata),2);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__mem_rf_we));
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__mem_rf_waddr),5);
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__mem_ebreak));
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__mem_load));
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__mem_csr_data),64);
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__mem_wen));
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__mem_mask),4);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__mem_addr),64);
            tracep->chgQData(oldp+86,(((IData)(vlSelf->top__DOT__mem_mem_wen)
                                        ? vlSelf->top__DOT__mem_rf_rdata2
                                        : ((IData)(vlSelf->top__DOT__icache_wr_req)
                                            ? ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U]))))
                                            : 0ULL))),64);
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
            tracep->chgQData(oldp+102,((4ULL + vlSelf->top__DOT__pc_out)),64);
            tracep->chgQData(oldp+104,((vlSelf->top__DOT__pc_out 
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
            tracep->chgQData(oldp+106,((((- (QData)((IData)(
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
            tracep->chgBit(oldp+108,((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgBit(oldp+109,(((~ ((~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)) 
                                          | (IData)(vlSelf->top__DOT__id_stall))) 
                                      & (0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))));
            tracep->chgCData(oldp+110,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state),3);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state),3);
            tracep->chgBit(oldp+112,((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgBit(oldp+113,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                      & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)))));
            tracep->chgBit(oldp+114,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way))));
            tracep->chgIData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag),24);
            tracep->chgIData(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag),24);
            tracep->chgIData(oldp+117,((0x800000U | vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)),24);
            tracep->chgCData(oldp+118,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index),6);
            tracep->chgCData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset),3);
            tracep->chgIData(oldp+120,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag),23);
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit));
            tracep->chgBit(oldp+124,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag 
                                            >> 0x17U))));
            tracep->chgBit(oldp+125,((1U & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag 
                                            >> 0x17U))));
            tracep->chgIData(oldp+126,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag)),23);
            tracep->chgIData(oldp+127,((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag)),23);
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way));
            tracep->chgIData(oldp+129,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U]),32);
            tracep->chgIData(oldp+130,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U]),32);
            tracep->chgQData(oldp+131,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U])))),64);
            tracep->chgQData(oldp+133,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U])))),64);
            tracep->chgWData(oldp+135,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata),128);
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_cen));
            tracep->chgBit(oldp+140,((3U != (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))));
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr),6);
            tracep->chgBit(oldp+142,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                       ? (0U != (0x7fffffU 
                                                 & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag))
                                       : (0U != (0x7fffffU 
                                                 & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag)))));
            tracep->chgCData(oldp+143,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+144,((0x1fU & (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+145,((vlSelf->top__DOT__id_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
            tracep->chgIData(oldp+147,((vlSelf->top__DOT__id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+148,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB),13);
            tracep->chgSData(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS),12);
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),4);
            tracep->chgCData(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),7);
            tracep->chgCData(oldp+152,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)))))))),7);
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
            tracep->chgBit(oldp+155,((0x73U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres),6);
            tracep->chgBit(oldp+157,((0x73U == vlSelf->top__DOT__id_inst)));
            tracep->chgBit(oldp+158,((0x30200073U == vlSelf->top__DOT__id_inst)));
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+161,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0xfU)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                   >> 0xfU))])),64);
            tracep->chgQData(oldp+163,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0x14U)))
                                         ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__id_inst 
                                                   >> 0x14U))])),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
            tracep->chgQData(oldp+167,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                >> 0x14U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
            tracep->chgQData(oldp+169,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__id_inst 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__id_inst))))),64);
            tracep->chgQData(oldp+171,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))),64);
            tracep->chgQData(oldp+173,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS)))),64);
            tracep->chgBit(oldp+175,((0ULL == (1ULL 
                                               + (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                  + 
                                                  (~ vlSelf->top__DOT__id_rf_rdata2))))));
            tracep->chgBit(oldp+176,((1U & (((IData)(
                                                     (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                      >> 0x3fU)) 
                                             & (~ (IData)(
                                                          (vlSelf->top__DOT__id_rf_rdata2 
                                                           >> 0x3fU)))) 
                                            | ((~ ((IData)(
                                                           (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(
                                                             (vlSelf->top__DOT__id_rf_rdata2 
                                                              >> 0x3fU)))) 
                                               & (IData)(
                                                         ((1ULL 
                                                           + 
                                                           (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                            + 
                                                            (~ vlSelf->top__DOT__id_rf_rdata2))) 
                                                          >> 0x3fU)))))));
            __Vtemp151[0U] = 1U;
            __Vtemp151[1U] = 0U;
            __Vtemp151[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp152, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp153, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp154, __Vtemp152, __Vtemp153);
            VL_ADD_W(3, __Vtemp155, __Vtemp151, __Vtemp154);
            tracep->chgBit(oldp+177,((1U & (~ (1U & 
                                               __Vtemp155[2U])))));
            tracep->chgQData(oldp+178,((1ULL + (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                + (~ vlSelf->top__DOT__id_rf_rdata2)))),64);
            __Vtemp158[0U] = 1U;
            __Vtemp158[1U] = 0U;
            __Vtemp158[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp159, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp160, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp161, __Vtemp159, __Vtemp160);
            VL_ADD_W(3, __Vtemp162, __Vtemp158, __Vtemp161);
            tracep->chgBit(oldp+180,((1U & __Vtemp162[2U])));
            tracep->chgQData(oldp+181,((0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                           + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
            tracep->chgQData(oldp+183,((vlSelf->top__DOT__id_pc 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                   >> 0xcU))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))),64);
            tracep->chgBit(oldp+185,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb))));
            tracep->chgBit(oldp+186,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb))));
            tracep->chgQData(oldp+187,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+189,(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex)
                                         ? vlSelf->top__DOT__ex_alu_result
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)
                                             ? vlSelf->top__DOT__mem_alu_result
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb)
                                                 ? vlSelf->top__DOT__rf_wdata
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+191,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__id_inst 
                                                           >> 0xfU))))),64);
            tracep->chgCData(oldp+193,((0x7fU & vlSelf->top__DOT__id_inst)),7);
            tracep->chgCData(oldp+194,((7U & (vlSelf->top__DOT__id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+195,((vlSelf->top__DOT__id_inst 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+196,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+197,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+198,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__id_inst))));
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgBit(oldp+200,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
            tracep->chgBit(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
            tracep->chgBit(oldp+206,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
            tracep->chgBit(oldp+209,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
            tracep->chgBit(oldp+211,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
            tracep->chgBit(oldp+215,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
            tracep->chgBit(oldp+216,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+218,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori));
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai));
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div));
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu));
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw));
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc));
            tracep->chgBit(oldp+261,((IData)((0x5073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+262,((IData)((0x6073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+263,((IData)((0x7073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__id_inst)))));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word));
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
            tracep->chgWData(oldp+331,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
            tracep->chgWData(oldp+340,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+343,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+346,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+349,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+352,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+353,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+354,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+355,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+358,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+362,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+364,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+367,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex));
            tracep->chgBit(oldp+368,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem));
            tracep->chgBit(oldp+369,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb));
            tracep->chgBit(oldp+370,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex));
            tracep->chgBit(oldp+371,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem));
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb));
            tracep->chgBit(oldp+373,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex));
            tracep->chgBit(oldp+374,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem));
            tracep->chgQData(oldp+375,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc),64);
            tracep->chgQData(oldp+377,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus),64);
            tracep->chgQData(oldp+379,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause),64);
            tracep->chgQData(oldp+381,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec),64);
            tracep->chgQData(oldp+383,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie),64);
            tracep->chgQData(oldp+385,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip),64);
            tracep->chgBit(oldp+387,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+388,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie 
                                                    >> 7U)))));
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+391,((0x341U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+392,((0x300U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+393,((0x342U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+394,((0x305U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+395,((0x304U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+396,((0x344U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+397,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x341U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+398,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x300U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+399,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x342U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+400,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x305U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+401,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x304U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+402,(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x344U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))));
            tracep->chgBit(oldp+403,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc));
            tracep->chgBit(oldp+404,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus));
            tracep->chgBit(oldp+405,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause));
            tracep->chgBit(oldp+406,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec));
            tracep->chgBit(oldp+407,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie));
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime),64);
            tracep->chgBit(oldp+410,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime 
                                      >= vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp)));
            tracep->chgQData(oldp+411,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res),64);
            tracep->chgBit(oldp+413,((1U & vlSelf->top__DOT__ex_alu_op)));
            tracep->chgBit(oldp+414,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 1U))));
            tracep->chgBit(oldp+415,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 2U))));
            tracep->chgBit(oldp+416,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 3U))));
            tracep->chgBit(oldp+417,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 4U))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 5U))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 6U))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 7U))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 8U))));
            tracep->chgBit(oldp+422,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 9U))));
            tracep->chgBit(oldp+423,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xaU))));
            tracep->chgBit(oldp+424,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xbU))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xcU))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xdU))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xeU))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xfU))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0x10U))));
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp165, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp166, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp167, __Vtemp165, __Vtemp166);
            VL_EXTEND_WI(65,1, __Vtemp168, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp169, __Vtemp167, __Vtemp168);
            tracep->chgQData(oldp+434,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp169[2U])))))),64);
            tracep->chgQData(oldp+436,((vlSelf->top__DOT__ex_alu_src1 
                                        & vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+438,((vlSelf->top__DOT__ex_alu_src1 
                                        | vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+440,((vlSelf->top__DOT__ex_alu_src1 
                                        ^ vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+442,((vlSelf->top__DOT__ex_alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+444,((vlSelf->top__DOT__ex_alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+446,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ex_alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__ex_alu_src2)))),64);
            tracep->chgQData(oldp+448,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+450,(VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+452,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+454,((vlSelf->top__DOT__ex_alu_src1 
                                        * vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+456,(VL_DIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+458,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)),64);
            tracep->chgQData(oldp+460,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+462,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp172, vlSelf->top__DOT__ex_alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp173, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp174, __Vtemp172, __Vtemp173);
            VL_EXTEND_WI(65,1, __Vtemp175, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp176, __Vtemp174, __Vtemp175);
            tracep->chgBit(oldp+463,((1U & __Vtemp176[2U])));
            tracep->chgBit(oldp+464,(vlSelf->top__DOT__u_MEM__DOT__mem_we));
            tracep->chgBit(oldp+465,((0x2004000ULL 
                                      != vlSelf->top__DOT__mem_addr)));
            tracep->chgQData(oldp+466,(vlSelf->top__DOT__u_MEM__DOT__mem_rdata),64);
            tracep->chgBit(oldp+468,((0x2004000ULL 
                                      == vlSelf->top__DOT__mem_addr)));
            tracep->chgQData(oldp+469,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
            tracep->chgQData(oldp+471,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
            tracep->chgQData(oldp+473,((((0x2004000ULL 
                                          != vlSelf->top__DOT__mem_addr) 
                                         & (~ (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we)))
                                         ? vlSelf->top__DOT__mem_addr
                                         : 0x80000000ULL)),64);
            tracep->chgQData(oldp+475,((((0x2004000ULL 
                                          != vlSelf->top__DOT__mem_addr) 
                                         & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we))
                                         ? vlSelf->top__DOT__mem_addr
                                         : 0x80000000ULL)),64);
            tracep->chgCData(oldp+477,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask),8);
            tracep->chgCData(oldp+478,((7U & (IData)(vlSelf->top__DOT__mem_addr))),3);
            tracep->chgCData(oldp+479,((0x38U & ((IData)(vlSelf->top__DOT__mem_addr) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+480,(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            __Vtemp179[0U] = 1U;
            __Vtemp179[1U] = 0U;
            __Vtemp179[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp180, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp181, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp182, __Vtemp180, __Vtemp181);
            VL_ADD_W(3, __Vtemp183, __Vtemp179, __Vtemp182);
            __Vtemp186[0U] = 1U;
            __Vtemp186[1U] = 0U;
            __Vtemp186[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp187, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp188, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp189, __Vtemp187, __Vtemp188);
            VL_ADD_W(3, __Vtemp190, __Vtemp186, __Vtemp189);
            tracep->chgQData(oldp+482,(((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr) 
                                               | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq)
                                                   ? 
                                                  (0ULL 
                                                   == 
                                                   (1ULL 
                                                    + 
                                                    (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                     + 
                                                     (~ vlSelf->top__DOT__id_rf_rdata2))))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)
                                                    ? 
                                                   (0ULL 
                                                    != 
                                                    (1ULL 
                                                     + 
                                                     (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                      + 
                                                      (~ vlSelf->top__DOT__id_rf_rdata2))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)
                                                     ? 
                                                    (((IData)(
                                                              (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                               >> 0x3fU)) 
                                                      & (~ (IData)(
                                                                   (vlSelf->top__DOT__id_rf_rdata2 
                                                                    >> 0x3fU)))) 
                                                     | ((~ 
                                                         ((IData)(
                                                                  (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                   >> 0x3fU)) 
                                                          ^ (IData)(
                                                                    (vlSelf->top__DOT__id_rf_rdata2 
                                                                     >> 0x3fU)))) 
                                                        & (IData)(
                                                                  ((1ULL 
                                                                    + 
                                                                    (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                     + 
                                                                     (~ vlSelf->top__DOT__id_rf_rdata2))) 
                                                                   >> 0x3fU))))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu)
                                                      ? 
                                                     (~ 
                                                      (1U 
                                                       & __Vtemp183[2U]))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)
                                                       ? 
                                                      (~ 
                                                       (((IData)(
                                                                 (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                  >> 0x3fU)) 
                                                         & (~ (IData)(
                                                                      (vlSelf->top__DOT__id_rf_rdata2 
                                                                       >> 0x3fU)))) 
                                                        | ((~ 
                                                            ((IData)(
                                                                     (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                      >> 0x3fU)) 
                                                             ^ (IData)(
                                                                       (vlSelf->top__DOT__id_rf_rdata2 
                                                                        >> 0x3fU)))) 
                                                           & (IData)(
                                                                     ((1ULL 
                                                                       + 
                                                                       (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                        + 
                                                                        (~ vlSelf->top__DOT__id_rf_rdata2))) 
                                                                      >> 0x3fU)))))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)
                                                        ? 
                                                       (1U 
                                                        & __Vtemp190[2U])
                                                        : 
                                                       (((0x73U 
                                                          == vlSelf->top__DOT__id_inst) 
                                                         | (0x30200073U 
                                                            == vlSelf->top__DOT__id_inst)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))))))))))
                                         ? ((((0x73U 
                                               == vlSelf->top__DOT__id_inst) 
                                              | (0x30200073U 
                                                 == vlSelf->top__DOT__id_inst)) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))
                                             ? vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata
                                             : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)
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
                                                  | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))))
                                         : 0ULL)),64);
            __Vtemp193[0U] = 1U;
            __Vtemp193[1U] = 0U;
            __Vtemp193[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp194, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp195, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp196, __Vtemp194, __Vtemp195);
            VL_ADD_W(3, __Vtemp197, __Vtemp193, __Vtemp196);
            __Vtemp200[0U] = 1U;
            __Vtemp200[1U] = 0U;
            __Vtemp200[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp201, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
            VL_EXTEND_WQ(65,64, __Vtemp202, (~ vlSelf->top__DOT__id_rf_rdata2));
            VL_ADD_W(3, __Vtemp203, __Vtemp201, __Vtemp202);
            VL_ADD_W(3, __Vtemp204, __Vtemp200, __Vtemp203);
            tracep->chgBit(oldp+484,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr) 
                                            | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq)
                                                ? (0ULL 
                                                   == 
                                                   (1ULL 
                                                    + 
                                                    (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                     + 
                                                     (~ vlSelf->top__DOT__id_rf_rdata2))))
                                                : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)
                                                    ? 
                                                   (0ULL 
                                                    != 
                                                    (1ULL 
                                                     + 
                                                     (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                      + 
                                                      (~ vlSelf->top__DOT__id_rf_rdata2))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)
                                                     ? 
                                                    (((IData)(
                                                              (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                               >> 0x3fU)) 
                                                      & (~ (IData)(
                                                                   (vlSelf->top__DOT__id_rf_rdata2 
                                                                    >> 0x3fU)))) 
                                                     | ((~ 
                                                         ((IData)(
                                                                  (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                   >> 0x3fU)) 
                                                          ^ (IData)(
                                                                    (vlSelf->top__DOT__id_rf_rdata2 
                                                                     >> 0x3fU)))) 
                                                        & (IData)(
                                                                  ((1ULL 
                                                                    + 
                                                                    (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                     + 
                                                                     (~ vlSelf->top__DOT__id_rf_rdata2))) 
                                                                   >> 0x3fU))))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu)
                                                      ? 
                                                     (~ 
                                                      (1U 
                                                       & __Vtemp197[2U]))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)
                                                       ? 
                                                      (~ 
                                                       (((IData)(
                                                                 (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                  >> 0x3fU)) 
                                                         & (~ (IData)(
                                                                      (vlSelf->top__DOT__id_rf_rdata2 
                                                                       >> 0x3fU)))) 
                                                        | ((~ 
                                                            ((IData)(
                                                                     (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                      >> 0x3fU)) 
                                                             ^ (IData)(
                                                                       (vlSelf->top__DOT__id_rf_rdata2 
                                                                        >> 0x3fU)))) 
                                                           & (IData)(
                                                                     ((1ULL 
                                                                       + 
                                                                       (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                                        + 
                                                                        (~ vlSelf->top__DOT__id_rf_rdata2))) 
                                                                      >> 0x3fU)))))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)
                                                        ? 
                                                       (1U 
                                                        & __Vtemp204[2U])
                                                        : 
                                                       (((0x73U 
                                                          == vlSelf->top__DOT__id_inst) 
                                                         | (0x30200073U 
                                                            == vlSelf->top__DOT__id_inst)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))))))))))));
            VL_EXTEND_WQ(128,64, __Vtemp206, vlSelf->top__DOT__mem_rdata);
            if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way) {
                __Vtemp208[0U] = __Vtemp206[0U];
                __Vtemp208[1U] = __Vtemp206[1U];
                __Vtemp208[2U] = __Vtemp206[2U];
                __Vtemp208[3U] = __Vtemp206[3U];
            } else {
                __Vtemp208[0U] = 0U;
                __Vtemp208[1U] = 0U;
                __Vtemp208[2U] = (IData)(vlSelf->top__DOT__mem_rdata);
                __Vtemp208[3U] = (IData)((vlSelf->top__DOT__mem_rdata 
                                          >> 0x20U));
            }
            tracep->chgWData(oldp+485,(__Vtemp208),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+489,(vlSelf->top__DOT__mem_rdata),64);
            tracep->chgQData(oldp+491,(vlSelf->top__DOT__id_csr_data),64);
            tracep->chgBit(oldp+493,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint));
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata),64);
        }
        tracep->chgBit(oldp+498,(vlSelf->clk));
        tracep->chgBit(oldp+499,(vlSelf->rst));
        tracep->chgQData(oldp+500,(vlSelf->pc),64);
        tracep->chgBit(oldp+502,((1U & (~ ((IData)(vlSelf->rst) 
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
