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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc_out),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__npc),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__inst_data),64);
            tracep->chgIData(oldp+70,(vlSelf->top__DOT__inst),32);
            tracep->chgIData(oldp+71,(vlSelf->top__DOT__alu_op),17);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__sel_nextpc),7);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__sel_alusrc1),4);
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__sel_alusrc2),7);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__rf_rdata2),64);
            tracep->chgSData(oldp+79,((vlSelf->top__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+80,(vlSelf->top__DOT__immJ),21);
            tracep->chgIData(oldp+81,((vlSelf->top__DOT__inst 
                                       >> 0xcU)),20);
            tracep->chgSData(oldp+82,(vlSelf->top__DOT__immB),13);
            tracep->chgSData(oldp+83,(vlSelf->top__DOT__immS),12);
            tracep->chgQData(oldp+84,(((((- (QData)((IData)(
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
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__mem_rdata)))
                                                   : 
                                                  ((4U 
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
                                              : ((2U 
                                                  & (IData)(vlSelf->top__DOT__mem_mask))
                                                  ? (QData)((IData)(vlSelf->top__DOT__mem_rdata))
                                                  : 
                                                 ((4U 
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
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__alu_result),64);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__sel_rfres),3);
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__mem_ena));
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__mem_mask),4);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__mem_rdata),64);
            tracep->chgBit(oldp+94,((1U & (~ ((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                                | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
                                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
                                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)) 
                                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add)) 
                                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw)) 
                                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw)) 
                                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw)) 
                                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw)) 
                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul)) 
                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div)) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu)) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu)) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem)) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh)) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw))))));
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__sel_alures),4);
            tracep->chgBit(oldp+96,((0x100073U == vlSelf->top__DOT__inst)));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__inv));
            tracep->chgQData(oldp+98,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                        ? vlSelf->top__DOT__mem_rdata
                                        : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                            ? (QData)((IData)(vlSelf->top__DOT__mem_rdata))
                                            : ((4U 
                                                & (IData)(vlSelf->top__DOT__mem_mask))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_rdata))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT__mem_mask))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__mem_rdata))))
                                                    : 0ULL))))),64);
            tracep->chgQData(oldp+100,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
                                             : ((4U 
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
                                                  : 0ULL))))),64);
            tracep->chgCData(oldp+102,((0x7fU & vlSelf->top__DOT__inst)),7);
            tracep->chgCData(oldp+103,((7U & (vlSelf->top__DOT__inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+104,((vlSelf->top__DOT__inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+105,((0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+106,((0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+107,((0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 0x14U))),5);
            tracep->chgBit(oldp+108,(((((((((((((((
                                                   ((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
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
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
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
            tracep->chgBit(oldp+109,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+110,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+111,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori));
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai));
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
            tracep->chgBit(oldp+142,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
            tracep->chgBit(oldp+148,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw));
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw));
            tracep->chgBit(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw));
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw));
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw));
            tracep->chgBit(oldp+158,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul));
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh));
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu));
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div));
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu));
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu));
            tracep->chgBit(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw));
            tracep->chgBit(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw));
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw));
            tracep->chgBit(oldp+170,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
            tracep->chgBit(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
            tracep->chgBit(oldp+172,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
            tracep->chgBit(oldp+173,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load));
            tracep->chgBit(oldp+174,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word));
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext),64);
            tracep->chgQData(oldp+177,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__immJ 
                                                                >> 0x14U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(vlSelf->top__DOT__immJ)))),64);
            tracep->chgQData(oldp+179,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__inst))))),64);
            tracep->chgQData(oldp+181,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__immB)))),64);
            tracep->chgQData(oldp+183,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__immS) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__immS)))),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res),64);
            tracep->chgQData(oldp+191,((0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__rf_rdata1 
                                           + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))),64);
            tracep->chgWData(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
            tracep->chgWData(oldp+202,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+208,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+211,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+214,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+215,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+216,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+217,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+229,((1U & vlSelf->top__DOT__alu_op)));
            tracep->chgBit(oldp+230,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 1U))));
            tracep->chgBit(oldp+231,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 2U))));
            tracep->chgBit(oldp+232,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 3U))));
            tracep->chgBit(oldp+233,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 4U))));
            tracep->chgBit(oldp+234,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 5U))));
            tracep->chgBit(oldp+235,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 6U))));
            tracep->chgBit(oldp+236,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 7U))));
            tracep->chgBit(oldp+237,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 8U))));
            tracep->chgBit(oldp+238,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 9U))));
            tracep->chgBit(oldp+239,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0xaU))));
            tracep->chgBit(oldp+240,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0xbU))));
            tracep->chgBit(oldp+241,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0xcU))));
            tracep->chgBit(oldp+242,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0xdU))));
            tracep->chgBit(oldp+243,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0xeU))));
            tracep->chgBit(oldp+244,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0xfU))));
            tracep->chgBit(oldp+245,((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0x10U))));
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp117, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp118, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp119, __Vtemp117, __Vtemp118);
            VL_EXTEND_WI(65,1, __Vtemp120, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp121, __Vtemp119, __Vtemp120);
            tracep->chgQData(oldp+250,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp121[2U])))))),64);
            tracep->chgQData(oldp+252,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+254,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+256,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+258,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+260,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+262,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+264,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+266,(VL_DIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+268,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+270,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        * vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+272,(VL_DIV_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+274,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp124, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp125, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp126, __Vtemp124, __Vtemp125);
            VL_EXTEND_WI(65,1, __Vtemp127, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp128, __Vtemp126, __Vtemp127);
            tracep->chgBit(oldp+279,((1U & __Vtemp128[2U])));
            tracep->chgBit(oldp+280,((0ULL == vlSelf->top__DOT__alu_result)));
            tracep->chgBit(oldp+281,((1U & (IData)(vlSelf->top__DOT__alu_result))));
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB),64);
            tracep->chgWData(oldp+284,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut),497);
            tracep->chgWData(oldp+300,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+303,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+306,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+309,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+312,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+315,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+318,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgCData(oldp+321,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+322,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+323,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+324,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+325,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+326,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+327,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),7);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+342,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+344,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+345,((((IData)(vlSelf->top__DOT__mem_ena) 
                                         & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)))
                                         ? vlSelf->top__DOT__alu_result
                                         : 0x80000000ULL)),64);
            tracep->chgQData(oldp+347,((((IData)(vlSelf->top__DOT__mem_ena) 
                                         & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))
                                         ? vlSelf->top__DOT__alu_result
                                         : 0x80000000ULL)),64);
            tracep->chgCData(oldp+349,(vlSelf->top__DOT__u_mem__DOT__mask),8);
            tracep->chgCData(oldp+350,((7U & (IData)(vlSelf->top__DOT__alu_result))),3);
            tracep->chgCData(oldp+351,((0x38U & ((IData)(vlSelf->top__DOT__alu_result) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__u_mem__DOT__tmpdata),64);
        }
        tracep->chgBit(oldp+354,(vlSelf->clk));
        tracep->chgBit(oldp+355,(vlSelf->rst));
        tracep->chgQData(oldp+356,(vlSelf->pc),64);
        tracep->chgQData(oldp+358,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+360,((vlSelf->pc + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__immJ 
                                                                          >> 0x14U))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__immJ))))),64);
        tracep->chgQData(oldp+362,(((0ULL == vlSelf->top__DOT__alu_result)
                                     ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                     : (4ULL + vlSelf->pc))),64);
        tracep->chgQData(oldp+364,(((0ULL == vlSelf->top__DOT__alu_result)
                                     ? (4ULL + vlSelf->pc)
                                     : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->chgQData(oldp+366,(((1U & (IData)(vlSelf->top__DOT__alu_result))
                                     ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                     : (4ULL + vlSelf->pc))),64);
        tracep->chgQData(oldp+368,(((1U & (IData)(vlSelf->top__DOT__alu_result))
                                     ? (4ULL + vlSelf->pc)
                                     : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
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
