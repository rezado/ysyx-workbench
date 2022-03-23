// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKeyInternal.h for the primary calling header

#include "VMuxKeyInternal___024root.h"
#include "VMuxKeyInternal__Syms.h"

//==========


void VMuxKeyInternal___024root___ctor_var_reset(VMuxKeyInternal___024root* vlSelf);

VMuxKeyInternal___024root::VMuxKeyInternal___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMuxKeyInternal___024root___ctor_var_reset(this);
}

void VMuxKeyInternal___024root::__Vconfigure(VMuxKeyInternal__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMuxKeyInternal___024root::~VMuxKeyInternal___024root() {
}

extern const VlUnpacked<CData/*3:0*/, 32> VMuxKeyInternal__ConstPool__TABLE_0ac1c4cf_0;

void VMuxKeyInternal___024root___settle__TOP__4(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___settle__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelf->lut));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->top__02Eout = ((4U == (IData)(vlSelf->top__DOT__state)) 
                           | (8U == (IData)(vlSelf->top__DOT__state)));
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

void VMuxKeyInternal___024root___eval_initial(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__SimReg__02Eclk = vlSelf->SimReg__02Eclk;
    vlSelf->__Vclklast__TOP__top__02Eclk = vlSelf->top__02Eclk;
}

void VMuxKeyInternal___024root___eval_settle(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval_settle\n"); );
    // Body
    VMuxKeyInternal___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VMuxKeyInternal___024root___final(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___final\n"); );
}

void VMuxKeyInternal___024root___ctor_var_reset(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->SimReg__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->SimReg__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->state_wen = VL_RAND_RESET_I(1);
    vlSelf->state_dout = VL_RAND_RESET_I(4);
    vlSelf->state_din = VL_RAND_RESET_I(4);
    vlSelf->top__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(1);
    vlSelf->top__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->top__02Eout = VL_RAND_RESET_I(1);
    vlSelf->MuxKeyWithDefault__02Eout = VL_RAND_RESET_I(1);
    vlSelf->key = VL_RAND_RESET_I(1);
    vlSelf->default_out = VL_RAND_RESET_I(1);
    vlSelf->lut = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__next_state = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
