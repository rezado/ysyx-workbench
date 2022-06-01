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
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp130;
    VlWide<3>/*95:0*/ __Vtemp131;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp139;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__alu_op),11);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__sel_nextpc),7);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__sel_alusrc1),2);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__sel_alusrc2),4);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__rf_rdata1),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__rf_rdata2),64);
            tracep->chgIData(oldp+8,(vlSelf->top__DOT__immJ),21);
            tracep->chgSData(oldp+9,(vlSelf->top__DOT__immB),13);
            tracep->chgQData(oldp+10,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->top__DOT__sel_rfres))))) 
                                        & vlSelf->top__DOT__alu_result) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__sel_rfres) 
                                                                 >> 1U))))) 
                                          & vlSelf->top__DOT__mem_rdata))),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__alu_result),64);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__sel_rfres),2);
            tracep->chgCData(oldp+15,((0xffU & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))),8);
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__mem));
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__mem_rdata),64);
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type));
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext),64);
            tracep->chgQData(oldp+42,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__immJ 
                                                               >> 0x14U))))) 
                                        << 0x15U) | (QData)((IData)(vlSelf->top__DOT__immJ)))),64);
            tracep->chgQData(oldp+44,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__immB) 
                                                               >> 0xcU))))) 
                                        << 0xdU) | (QData)((IData)(vlSelf->top__DOT__immB)))),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2),64);
            tracep->chgQData(oldp+50,((0xfffffffffffffffeULL 
                                       & (vlSelf->top__DOT__rf_rdata1 
                                          + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))),64);
            tracep->chgWData(oldp+52,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut),132);
            tracep->chgWData(oldp+57,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+60,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+72,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT____Vcellinp__u_MuxKeyWithDefault__lut),272);
            tracep->chgWData(oldp+81,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+84,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+87,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+93,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+108,((1U & (IData)(vlSelf->top__DOT__alu_op))));
            tracep->chgBit(oldp+109,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+115,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+118,((1U & ((IData)(vlSelf->top__DOT__alu_op) 
                                            >> 0xaU))));
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp128, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp129, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp130, __Vtemp128, __Vtemp129);
            VL_EXTEND_WI(65,1, __Vtemp131, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp132, __Vtemp130, __Vtemp131);
            tracep->chgQData(oldp+123,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp132[2U])))))),64);
            tracep->chgQData(oldp+125,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+127,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+129,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)),64);
            tracep->chgQData(oldp+131,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+133,((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+135,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+137,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                                                >> 0x13U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2) 
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_EXTEND_WQ(65,64, __Vtemp135, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
            VL_EXTEND_WQ(65,64, __Vtemp136, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
            VL_ADD_W(3, __Vtemp137, __Vtemp135, __Vtemp136);
            VL_EXTEND_WI(65,1, __Vtemp138, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
            VL_ADD_W(3, __Vtemp139, __Vtemp137, __Vtemp138);
            tracep->chgBit(oldp+142,((1U & __Vtemp139[2U])));
            tracep->chgBit(oldp+143,((0ULL == vlSelf->top__DOT__alu_result)));
            tracep->chgBit(oldp+144,((1U & (IData)(
                                                   (vlSelf->top__DOT__alu_result 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB),64);
            tracep->chgQData(oldp+147,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__mem) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))))))
                                         ? vlSelf->top__DOT__alu_result
                                         : 0x80000000ULL)),64);
            tracep->chgQData(oldp+149,((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__mem) 
                                         & (0U != (0xffU 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))))))
                                         ? vlSelf->top__DOT__alu_result
                                         : 0x80000000ULL)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+215,(vlSelf->clk));
        tracep->chgBit(oldp+216,(vlSelf->rst));
        tracep->chgIData(oldp+217,(vlSelf->inst),32);
        tracep->chgQData(oldp+218,(vlSelf->pc),64);
        tracep->chgQData(oldp+220,(((((((((- (QData)((IData)(
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
        tracep->chgSData(oldp+222,((vlSelf->inst >> 0x14U)),12);
        tracep->chgIData(oldp+223,((vlSelf->inst >> 0xcU)),20);
        tracep->chgBit(oldp+224,((0x100073U == vlSelf->inst)));
        tracep->chgCData(oldp+225,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+226,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+227,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+228,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+229,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+230,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+231,((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->inst))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                     | (0x37U == (0x7fU 
                                                  & vlSelf->inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld))));
        tracep->chgBit(oldp+232,((0x37U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+233,((0x17U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+234,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->chgQData(oldp+235,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0xcU))))),64);
        tracep->chgQData(oldp+237,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+239,((vlSelf->pc + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__immJ 
                                                                          >> 0x14U))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__immJ))))),64);
        tracep->chgQData(oldp+241,(((0ULL == vlSelf->top__DOT__alu_result)
                                     ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                     : (4ULL + vlSelf->pc))),64);
        tracep->chgQData(oldp+243,(((0ULL == vlSelf->top__DOT__alu_result)
                                     ? (4ULL + vlSelf->pc)
                                     : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)),64);
        tracep->chgQData(oldp+245,(((1U & (IData)((vlSelf->top__DOT__alu_result 
                                                   >> 0x3fU)))
                                     ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                     : (4ULL + vlSelf->pc))),64);
        tracep->chgQData(oldp+247,(((1U & (IData)((vlSelf->top__DOT__alu_result 
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
