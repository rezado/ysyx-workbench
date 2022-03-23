// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKeyInternal.h for the primary calling header

#include "VMuxKeyInternal___024root.h"
#include "VMuxKeyInternal__Syms.h"

//==========

VL_INLINE_OPT void VMuxKeyInternal___024root___sequent__TOP__1(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->state_din = ((IData)(vlSelf->SimReg__02Ereset)
                          ? 0U : ((IData)(vlSelf->state_wen)
                                   ? (IData)(vlSelf->state_dout)
                                   : (IData)(vlSelf->state_din)));
}

VL_INLINE_OPT void VMuxKeyInternal___024root___sequent__TOP__2(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__state = ((IData)(vlSelf->top__02Ereset)
                                ? 0U : (IData)(vlSelf->top__DOT__next_state));
    vlSelf->top__02Eout = ((4U == (IData)(vlSelf->top__DOT__state)) 
                           | (8U == (IData)(vlSelf->top__DOT__state)));
}

extern const VlUnpacked<CData/*3:0*/, 32> VMuxKeyInternal__ConstPool__TABLE_0ac1c4cf_0;

VL_INLINE_OPT void VMuxKeyInternal___024root___combo__TOP__3(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___combo__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelf->lut));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelf->lut) >> 2U));
    __Vtableidx1 = (((IData)(vlSelf->in) << 4U) | (IData)(vlSelf->top__DOT__state));
    vlSelf->top__DOT__next_state = VMuxKeyInternal__ConstPool__TABLE_0ac1c4cf_0
        [__Vtableidx1];
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (1U & (vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (1U & (vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
            [0U]) & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
               [1U]) & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->MuxKeyWithDefault__02Eout = ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out)
                                          : (IData)(vlSelf->default_out));
}

void VMuxKeyInternal___024root___eval(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->SimReg__02Eclk) & (~ (IData)(vlSelf->__Vclklast__TOP__SimReg__02Eclk)))) {
        VMuxKeyInternal___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->top__02Eclk) & (~ (IData)(vlSelf->__Vclklast__TOP__top__02Eclk)))) {
        VMuxKeyInternal___024root___sequent__TOP__2(vlSelf);
    }
    VMuxKeyInternal___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__SimReg__02Eclk = vlSelf->SimReg__02Eclk;
    vlSelf->__Vclklast__TOP__top__02Eclk = vlSelf->top__02Eclk;
}

QData VMuxKeyInternal___024root___change_request_1(VMuxKeyInternal___024root* vlSelf);

VL_INLINE_OPT QData VMuxKeyInternal___024root___change_request(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___change_request\n"); );
    // Body
    return (VMuxKeyInternal___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VMuxKeyInternal___024root___change_request_1(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMuxKeyInternal___024root___eval_debug_assertions(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->SimReg__02Eclk & 0xfeU))) {
        Verilated::overWidthError("SimReg.clk");}
    if (VL_UNLIKELY((vlSelf->SimReg__02Ereset & 0xfeU))) {
        Verilated::overWidthError("SimReg.reset");}
    if (VL_UNLIKELY((vlSelf->state_wen & 0xfeU))) {
        Verilated::overWidthError("state_wen");}
    if (VL_UNLIKELY((vlSelf->state_dout & 0xf0U))) {
        Verilated::overWidthError("state_dout");}
    if (VL_UNLIKELY((vlSelf->top__02Eclk & 0xfeU))) {
        Verilated::overWidthError("top.clk");}
    if (VL_UNLIKELY((vlSelf->in & 0xfeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->top__02Ereset & 0xfeU))) {
        Verilated::overWidthError("top.reset");}
    if (VL_UNLIKELY((vlSelf->key & 0xfeU))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((vlSelf->default_out & 0xfeU))) {
        Verilated::overWidthError("default_out");}
    if (VL_UNLIKELY((vlSelf->lut & 0xf0U))) {
        Verilated::overWidthError("lut");}
}
#endif  // VL_DEBUG
