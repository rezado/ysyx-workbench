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
    VlWide<3>/*95:0*/ __Vtemp176;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp178;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<3>/*95:0*/ __Vtemp180;
    VlWide<3>/*95:0*/ __Vtemp183;
    VlWide<3>/*95:0*/ __Vtemp184;
    VlWide<3>/*95:0*/ __Vtemp185;
    VlWide<3>/*95:0*/ __Vtemp186;
    VlWide<3>/*95:0*/ __Vtemp187;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__alu_op),12);
            tracep->chgQData(oldp+1,(vlSelf->top__DOT__alu_src1),64);
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__alu_src2),64);
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__rf_wdata),64);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__nextpc),64);
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ),21);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
            tracep->chgQData(oldp+12,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                               >> 0x14U))))) 
                                        << 0x15U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ)))),64);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1),2);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2),4);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_nextpc),3);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+19,((0xfffffffffffffffeULL 
                                       & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                          + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))),64);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgWData(oldp+23,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
            tracep->chgWData(oldp+28,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+31,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+43,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
            tracep->chgWData(oldp+52,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+55,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+58,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+61,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+79,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut),201);
            tracep->chgWData(oldp+86,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+89,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+92,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+107,((1U & (IData)(vlSelf->top__DOT__alu_op))));
            tracep->chgBit(oldp+108,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+109,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+115,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+118,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp176, vlSelf->top__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp177, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp178, __Vtemp176, __Vtemp177);
            VL_EXTEND_WI(65,1, __Vtemp179, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp180, __Vtemp178, __Vtemp179);
            tracep->chgQData(oldp+123,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp180[2U])))))),64);
            tracep->chgQData(oldp+125,((vlSelf->top__DOT__alu_src1 
                                        & vlSelf->top__DOT__alu_src2)),64);
            tracep->chgQData(oldp+127,((~ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result)),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result),64);
            tracep->chgQData(oldp+131,((vlSelf->top__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__alu_src2)),64);
            tracep->chgQData(oldp+133,((vlSelf->top__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+135,((vlSelf->top__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+137,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+139,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__alu_src2 
                                                                                >> 0x13U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->top__DOT__alu_src2) 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp183, vlSelf->top__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp184, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp185, __Vtemp183, __Vtemp184);
            VL_EXTEND_WI(65,1, __Vtemp186, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp187, __Vtemp185, __Vtemp186);
            tracep->chgBit(oldp+144,((1U & __Vtemp187[2U])));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+209,(vlSelf->clk));
        tracep->chgBit(oldp+210,(vlSelf->rst));
        tracep->chgIData(oldp+211,(vlSelf->inst),32);
        tracep->chgQData(oldp+212,(vlSelf->pc),64);
        tracep->chgBit(oldp+214,((0x100073U == vlSelf->inst)));
        tracep->chgCData(oldp+215,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+216,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+217,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+218,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+219,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgSData(oldp+220,((vlSelf->inst >> 0x14U)),12);
        tracep->chgIData(oldp+221,((vlSelf->inst >> 0xcU)),20);
        tracep->chgQData(oldp+222,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0xcU))))),64);
        tracep->chgBit(oldp+224,((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->inst))) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->inst))) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->inst)))));
        tracep->chgQData(oldp+225,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))])),64);
        tracep->chgQData(oldp+227,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+229,((vlSelf->pc + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                          >> 0x14U))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ))))),64);
        tracep->chgBit(oldp+231,((0x37U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+232,((0x17U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+233,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+234,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
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
