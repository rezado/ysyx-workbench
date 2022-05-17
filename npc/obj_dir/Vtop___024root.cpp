// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void finish_sim();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP\n"); );
    // Body
    finish_sim();
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    // Body
    if (VL_UNLIKELY((0x100073U == vlSelf->inst))) {
        Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP();
        VL_FINISH_MT("vsrc/top.v", 48, "");
    }
    __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__pc_add);
    if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) {
        __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 
            = vlSelf->top__DOT__rf_wdata;
        __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    }
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__pc_add 
        = (4ULL + vlSelf->pc);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    // Body
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
        = (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)((vlSelf->inst 
                                        >> 0x14U))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
        = ((0U == (0x1fU & (vlSelf->inst >> 0xfU)))
            ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
           [(0x1fU & (vlSelf->inst >> 0xfU))]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin 
        = (IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi))))
            ? (~ vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)
            : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result 
        = (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
           | vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext);
    VL_EXTEND_WI(65,1, __Vtemp1, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
            + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp1[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp1[0U]))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                           >> 0x1fU)) 
                                  & (~ (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
                                                >> 0x1fU)))) 
                                 | ((~ ((IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                 >> 0x1fU)) 
                                        ^ (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
                                                   >> 0x1fU)))) 
                                    & (IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
                                               >> 0x1fU)))))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top__DOT__rf_wdata = ((((((((((((- (QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi)))))) 
                                            & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                     >> 3U))))) 
                                              & (QData)((IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (1U 
                                                                     & __Vtemp7[2U]))))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                    >> 2U))))) 
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
