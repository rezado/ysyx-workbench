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
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<3>/*95:0*/ __Vtemp71;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__inst_data),64);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__inst),32);
            tracep->chgSData(oldp+3,(vlSelf->top__DOT__alu_op),11);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__sel_nextpc),7);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__sel_alusrc1),2);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__sel_alusrc2),5);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__rf_rdata2),64);
            tracep->chgSData(oldp+11,((vlSelf->top__DOT__inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+12,(vlSelf->top__DOT__immJ),21);
            tracep->chgIData(oldp+13,((vlSelf->top__DOT__inst 
                                       >> 0xcU)),20);
            tracep->chgSData(oldp+14,(vlSelf->top__DOT__immB),13);
            tracep->chgSData(oldp+15,(vlSelf->top__DOT__immS),12);
            tracep->chgQData(oldp+16,(((((- (QData)((IData)(
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
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__alu_result),64);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__sel_rfres),3);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__mem_ena));
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__mem_mask),4);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__mem_rdata),64);
            tracep->chgBit(oldp+26,((0x100073U == vlSelf->top__DOT__inst)));
            tracep->chgQData(oldp+27,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
            tracep->chgQData(oldp+29,(((1U & (IData)(vlSelf->top__DOT__mem_mask))
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
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__mem_rdata)))))
                                                : (
                                                   (8U 
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
            tracep->chgCData(oldp+31,((0x7fU & vlSelf->top__DOT__inst)),7);
            tracep->chgCData(oldp+32,((7U & (vlSelf->top__DOT__inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+33,((vlSelf->top__DOT__inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+34,((0x1fU & (vlSelf->top__DOT__inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+35,((0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+36,((0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+37,((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                          | (0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst))) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->top__DOT__inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->top__DOT__inst))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld))));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+39,((0x37U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+40,((0x17U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+41,((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb));
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu));
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu));
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load));
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext),64);
            tracep->chgQData(oldp+138,((((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__immJ 
                                                                >> 0x14U))))) 
                                         << 0x15U) 
                                        | (QData)((IData)(vlSelf->top__DOT__immJ)))),64);
            tracep->chgQData(oldp+140,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__inst 
                                                           >> 0xcU))))),64);
            tracep->chgQData(oldp+142,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__immB) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->top__DOT__immB)))),64);
            tracep->chgQData(oldp+144,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__immS) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__immS)))),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2),64);
            tracep->chgQData(oldp+150,((0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__rf_rdata1 
                                           + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))),64);
            tracep->chgWData(oldp+152,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
            tracep->chgWData(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+160,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+164,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+172,((1U & (IData)(vlSelf->top__DOT__alu_op))));
            tracep->chgBit(oldp+173,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+174,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+175,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+176,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+177,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+178,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+179,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+180,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+181,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+182,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 0xaU))));
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp64, __Vtemp62, __Vtemp63);
            VL_EXTEND_WI(65,1, __Vtemp65, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp66, __Vtemp64, __Vtemp65);
            tracep->chgQData(oldp+187,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp66[2U])))))),64);
            tracep->chgQData(oldp+189,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+191,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+193,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+195,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+197,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+199,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+201,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                                                >> 0x13U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2) 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp69, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp70, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp71, __Vtemp69, __Vtemp70);
            VL_EXTEND_WI(65,1, __Vtemp72, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp73, __Vtemp71, __Vtemp72);
            tracep->chgBit(oldp+206,((1U & __Vtemp73[2U])));
            tracep->chgBit(oldp+207,((0ULL == vlSelf->top__DOT__alu_result)));
            tracep->chgBit(oldp+208,((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB),64);
            tracep->chgQData(oldp+211,((((IData)(vlSelf->top__DOT__mem_ena) 
                                         & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)))
                                         ? vlSelf->top__DOT__alu_result
                                         : 0x80000000ULL)),64);
            tracep->chgQData(oldp+213,((((IData)(vlSelf->top__DOT__mem_ena) 
                                         & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))
                                         ? vlSelf->top__DOT__alu_result
                                         : 0x80000000ULL)),64);
            tracep->chgCData(oldp+215,(vlSelf->top__DOT__u_mem__DOT__mask),8);
            tracep->chgCData(oldp+216,((7U & (IData)(vlSelf->top__DOT__alu_result))),3);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__u_mem__DOT__tmpdata),64);
        }
        tracep->chgBit(oldp+219,(vlSelf->clk));
        tracep->chgBit(oldp+220,(vlSelf->rst));
        tracep->chgQData(oldp+221,(vlSelf->pc),64);
        tracep->chgQData(oldp+223,(((((((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->top__DOT__sel_nextpc))))) 
                                          & (4ULL + vlSelf->pc)) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                                   >> 1U))))) 
                                            & (vlSelf->pc 
                                               + ((
                                                   (- (QData)((IData)(
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
                                         & ((0ULL == vlSelf->top__DOT__alu_result)
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
        tracep->chgQData(oldp+225,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+227,((vlSelf->pc + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__immJ 
                                                                          >> 0x14U))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__immJ))))),64);
        tracep->chgQData(oldp+229,(((0ULL == vlSelf->top__DOT__alu_result)
                                     ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                     : (4ULL + vlSelf->pc))),64);
        tracep->chgQData(oldp+231,(((0ULL == vlSelf->top__DOT__alu_result)
                                     ? (4ULL + vlSelf->pc)
                                     : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->chgQData(oldp+233,(((1U & (IData)((vlSelf->top__DOT__alu_result 
                                                   >> 0x3fU)))
                                     ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                     : (4ULL + vlSelf->pc))),64);
        tracep->chgQData(oldp+235,(((1U & (IData)((vlSelf->top__DOT__alu_result 
                                                   >> 0x3fU)))
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
    }
}
