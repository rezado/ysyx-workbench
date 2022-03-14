// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu___024root.h"
#include "Valu__Syms.h"

//==========

VL_INLINE_OPT void Valu___024root___combo__TOP__1(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__1\n"); );
    // Variables
    CData/*3:0*/ alu__DOT__add_sub_result;
    CData/*3:0*/ alu__DOT__less_result;
    CData/*3:0*/ alu__DOT__adder_b;
    CData/*0:0*/ alu__DOT__adder_cin;
    // Body
    alu__DOT__adder_cin = (((1U == (IData)(vlSelf->op)) 
                            | (6U == (IData)(vlSelf->op))) 
                           | (7U == (IData)(vlSelf->op)));
    alu__DOT__adder_b = (0xfU & ((((1U == (IData)(vlSelf->op)) 
                                   | (6U == (IData)(vlSelf->op))) 
                                  | (7U == (IData)(vlSelf->op)))
                                  ? (~ (IData)(vlSelf->B))
                                  : (IData)(vlSelf->B)));
    vlSelf->carry = (1U & ((((IData)(vlSelf->A) + (IData)(alu__DOT__adder_b)) 
                            + (IData)(alu__DOT__adder_cin)) 
                           >> 4U));
    alu__DOT__add_sub_result = (0xfU & (((IData)(vlSelf->A) 
                                         + (IData)(alu__DOT__adder_b)) 
                                        + (IData)(alu__DOT__adder_cin)));
    vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                >> 3U)) == (1U & ((IData)(alu__DOT__adder_b) 
                                                  >> 3U))) 
                        & ((1U & ((IData)(alu__DOT__add_sub_result) 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U))));
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(alu__DOT__add_sub_result)))));
    alu__DOT__less_result = (1U & ((((IData)(vlSelf->A) 
                                     >> 3U) & (~ ((IData)(vlSelf->B) 
                                                  >> 3U))) 
                                   | ((~ (((IData)(vlSelf->A) 
                                           ^ (IData)(vlSelf->B)) 
                                          >> 3U)) & 
                                      ((IData)(alu__DOT__add_sub_result) 
                                       >> 3U))));
    vlSelf->result = (0xfU & (((((((((- (IData)((0U 
                                                 == (IData)(vlSelf->op)))) 
                                     | (- (IData)((1U 
                                                   == (IData)(vlSelf->op))))) 
                                    & (IData)(alu__DOT__add_sub_result)) 
                                   | ((- (IData)((2U 
                                                  == (IData)(vlSelf->op)))) 
                                      & (~ (IData)(vlSelf->A)))) 
                                  | ((- (IData)((3U 
                                                 == (IData)(vlSelf->op)))) 
                                     & ((IData)(vlSelf->A) 
                                        & (IData)(vlSelf->B)))) 
                                 | ((- (IData)((4U 
                                                == (IData)(vlSelf->op)))) 
                                    & ((IData)(vlSelf->A) 
                                       | (IData)(vlSelf->B)))) 
                                | ((- (IData)((5U == (IData)(vlSelf->op)))) 
                                   & ((IData)(vlSelf->A) 
                                      ^ (IData)(vlSelf->B)))) 
                               | ((- (IData)((6U == (IData)(vlSelf->op)))) 
                                  & (IData)(alu__DOT__less_result))) 
                              | ((- (IData)((7U == (IData)(vlSelf->op)))) 
                                 & (IData)(vlSelf->zero))));
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__1(vlSelf);
}

QData Valu___024root___change_request_1(Valu___024root* vlSelf);

VL_INLINE_OPT QData Valu___024root___change_request(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___change_request\n"); );
    // Body
    return (Valu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Valu___024root___change_request_1(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
