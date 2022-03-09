// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41b.h for the primary calling header

#include "Vmux41b___024root.h"
#include "Vmux41b__Syms.h"

//==========


void Vmux41b___024root___ctor_var_reset(Vmux41b___024root* vlSelf);

Vmux41b___024root::Vmux41b___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmux41b___024root___ctor_var_reset(this);
}

void Vmux41b___024root::__Vconfigure(Vmux41b__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmux41b___024root::~Vmux41b___024root() {
}

void Vmux41b___024root___eval_initial(Vmux41b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41b___024root___eval_initial\n"); );
}

void Vmux41b___024root___combo__TOP__1(Vmux41b___024root* vlSelf);

void Vmux41b___024root___eval_settle(Vmux41b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41b___024root___eval_settle\n"); );
    // Body
    Vmux41b___024root___combo__TOP__1(vlSelf);
}

void Vmux41b___024root___final(Vmux41b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41b___024root___final\n"); );
}

void Vmux41b___024root___ctor_var_reset(Vmux41b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41b___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x0 = 0;
    vlSelf->x1 = 0;
    vlSelf->x2 = 0;
    vlSelf->x3 = 0;
    vlSelf->y = 0;
    vlSelf->f = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
}
