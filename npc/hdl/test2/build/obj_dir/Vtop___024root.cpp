// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Variables
    CData/*3:0*/ top__DOT__t;
    // Body
    top__DOT__t = 0U;
    if ((1U & (IData)(vlSelf->x))) {
        top__DOT__t = (8U & (IData)(top__DOT__t));
    }
    if ((2U & (IData)(vlSelf->x))) {
        top__DOT__t = (1U | (8U & (IData)(top__DOT__t)));
    }
    if ((4U & (IData)(vlSelf->x))) {
        top__DOT__t = (2U | (8U & (IData)(top__DOT__t)));
    }
    if ((8U & (IData)(vlSelf->x))) {
        top__DOT__t = (3U | (8U & (IData)(top__DOT__t)));
    }
    if ((0x10U & (IData)(vlSelf->x))) {
        top__DOT__t = (4U | (8U & (IData)(top__DOT__t)));
    }
    if ((0x20U & (IData)(vlSelf->x))) {
        top__DOT__t = (5U | (8U & (IData)(top__DOT__t)));
    }
    if ((0x40U & (IData)(vlSelf->x))) {
        top__DOT__t = (6U | (8U & (IData)(top__DOT__t)));
    }
    if ((0x80U & (IData)(vlSelf->x))) {
        top__DOT__t = (7U | (IData)(top__DOT__t));
    }
    top__DOT__t = ((7U & (IData)(top__DOT__t)) | ((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->x))) 
                                                  << 3U));
    vlSelf->y = top__DOT__t;
    vlSelf->h = ((4U & (IData)(top__DOT__t)) ? ((2U 
                                                 & (IData)(top__DOT__t))
                                                 ? 
                                                ((1U 
                                                  & (IData)(top__DOT__t))
                                                  ? 7U
                                                  : 0x7dU)
                                                 : 
                                                ((1U 
                                                  & (IData)(top__DOT__t))
                                                  ? 0x6dU
                                                  : 0x66U))
                  : ((2U & (IData)(top__DOT__t)) ? 
                     ((1U & (IData)(top__DOT__t)) ? 0x4fU
                       : 0x5bU) : ((1U & (IData)(top__DOT__t))
                                    ? 6U : 0x3fU)));
    vlSelf->h = (0x7fU & (~ (IData)(vlSelf->h)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
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
}
#endif  // VL_DEBUG
