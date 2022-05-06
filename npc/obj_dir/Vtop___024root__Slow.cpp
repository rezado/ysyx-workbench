// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
    , clk("clk"), rst("rst"), inst("inst"), pc("pc")
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp8;
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__rst, vlSelf->rst);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__top__inst, vlSelf->inst);
    VL_ASSIGN_SQQ(64,vlSelf->pc, vlSelf->__Vcellout__top__pc);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__pc_add 
        = (4ULL + vlSelf->__Vcellout__top__pc);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
        = ((0U == (0x1fU & (vlSelf->__Vcellinp__top__inst 
                            >> 0xfU))) ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
           [(0x1fU & (vlSelf->__Vcellinp__top__inst 
                      >> 0xfU))]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
        = (((- (QData)((IData)((vlSelf->__Vcellinp__top__inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->__Vcellinp__top__inst 
                              >> 0x14U))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->__Vcellinp__top__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result 
        = (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
           | vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin 
        = (IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi))))
            ? (~ vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)
            : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext);
    VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    VL_EXTEND_WI(65,1, __Vtemp5, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__sltu_result 
        = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__sltu_result) 
           | (IData)((IData)((1U & (~ (1U & __Vtemp6[2U]))))));
    VL_EXTEND_WI(65,1, __Vtemp8, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
            + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp8[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp8[0U]))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result 
        = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result) 
           | (IData)((IData)((1U & (((IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                              >> 0x1fU)) 
                                     & (~ (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
                                                   >> 0x1fU)))) 
                                    | ((~ ((IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                    >> 0x1fU)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
                                                      >> 0x1fU)))) 
                                       & (IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
                                                  >> 0x1fU))))))));
    vlSelf->top__DOT__rf_wdata = (((((((((((- (QData)((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi)))))) 
                                           & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                    >> 3U))))) 
                                             & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result)) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                   >> 4U))))) 
                                            & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                               & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                  >> 5U))))) 
                                           & (~ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                 >> 6U))))) 
                                          & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result)) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                >> 7U))))) 
                                         & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                            ^ vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                               >> 8U))))) 
                                        & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                           << (0x3fU 
                                               & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                              >> 9U))))) 
                                       & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                          >> (0x3fU 
                                              & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                             >> 0xaU))))) 
                                      & VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1, 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                            >> 0xbU))))) 
                                     & (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
                                                                                >> 0x13U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext) 
                                                           << 0xcU))))));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__top__clk = vlSelf->__Vcellinp__top__clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellout__top__pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__top__inst = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__top__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__top__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__pc_add = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__sltu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
