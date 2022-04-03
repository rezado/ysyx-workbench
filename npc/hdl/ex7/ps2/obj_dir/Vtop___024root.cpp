// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*2:0*/ __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    CData/*2:0*/ __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr;
    CData/*3:0*/ __Vdly__top__DOT__u_ps2_keyboard__DOT__count;
    // Body
    __Vdly__top__DOT__u_ps2_keyboard__DOT__count = vlSelf->top__DOT__u_ps2_keyboard__DOT__count;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr = vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr = vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr;
    __Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0 = 0U;
    vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clrn) {
        if (vlSelf->ready) {
            if ((1U & (~ (IData)(vlSelf->nextdata_n)))) {
                __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr)));
                if (((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr))))) {
                    vlSelf->ready = 0U;
                }
            }
        }
        if (vlSelf->sampling) {
            if ((0xaU == (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))) {
                if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer)) 
                                  & (IData)(vlSelf->ps2_data)) 
                                 & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer) 
                                                    >> 1U)))))) {
                    VL_WRITEF("receive %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer) 
                                                   >> 1U)));
                    __Vdlyvval__top__DOT__u_ps2_keyboard__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__u_ps2_keyboard__DOT__fifo__v0 
                        = vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr;
                    vlSelf->ready = 1U;
                    __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr)));
                    vlSelf->overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__u_ps2_keyboard__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__u_ps2_keyboard__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))) {
                    vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT____Vlvbound1) 
                                        << (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))));
                }
                __Vdly__top__DOT__u_ps2_keyboard__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count)));
            }
        }
    } else {
        __Vdly__top__DOT__u_ps2_keyboard__DOT__count = 0U;
        __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr = 0U;
        __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr = 0U;
        vlSelf->overflow = 0U;
        vlSelf->ready = 0U;
    }
    vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr = __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr;
    vlSelf->top__DOT__u_ps2_keyboard__DOT__count = __Vdly__top__DOT__u_ps2_keyboard__DOT__count;
    vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr = __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0) {
        vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[__Vdlyvdim0__top__DOT__u_ps2_keyboard__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    }
    vlSelf->sampling = (IData)((4U == (6U & (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*7:0*/ __Vdly__top__DOT__count;
    // Body
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
    if (vlSelf->clrn) {
        if ((0U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))) {
            vlSelf->nextdata_n = 1U;
        } else if (VL_UNLIKELY((1U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state)))) {
            VL_WRITEF("data is %x\n",8,vlSelf->top__DOT__data);
            vlSelf->top__DOT__ascii = vlSelf->top__DOT__u_process_key__DOT__temp;
            vlSelf->nextdata_n = 0U;
            if (VL_UNLIKELY((0xf0U == (IData)(vlSelf->top__DOT__data)))) {
                __Vdly__top__DOT__count = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__count)));
                VL_WRITEF("count is %3#\n",8,vlSelf->top__DOT__count);
            }
        }
        vlSelf->top__DOT__u_process_key__DOT__state 
            = vlSelf->top__DOT__u_process_key__DOT__next_state;
    } else {
        vlSelf->top__DOT__u_process_key__DOT__state = 0U;
        __Vdly__top__DOT__count = 0U;
    }
    vlSelf->top__DOT__count = __Vdly__top__DOT__count;
    vlSelf->top__DOT__u_process_key__DOT__next_state 
        = ((0U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
            ? ((IData)(vlSelf->ready) ? 1U : 0U) : 
           ((1U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
             ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
                      ? 0U : (IData)(vlSelf->top__DOT__u_process_key__DOT__state))));
    vlSelf->ascii0 = ((8U & (IData)(vlSelf->top__DOT__ascii))
                       ? ((4U & (IData)(vlSelf->top__DOT__ascii))
                           ? ((2U & (IData)(vlSelf->top__DOT__ascii))
                               ? ((1U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x71U : 0x79U)
                               : ((1U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x5eU : 0x39U))
                           : ((2U & (IData)(vlSelf->top__DOT__ascii))
                               ? ((1U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x7cU : 0x77U)
                               : ((1U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x6fU : 0x7fU)))
                       : ((4U & (IData)(vlSelf->top__DOT__ascii))
                           ? ((2U & (IData)(vlSelf->top__DOT__ascii))
                               ? ((1U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 7U : 0x7dU) : 
                              ((1U & (IData)(vlSelf->top__DOT__ascii))
                                ? 0x6dU : 0x66U)) : 
                          ((2U & (IData)(vlSelf->top__DOT__ascii))
                            ? ((1U & (IData)(vlSelf->top__DOT__ascii))
                                ? 0x4fU : 0x5bU) : 
                           ((1U & (IData)(vlSelf->top__DOT__ascii))
                             ? 6U : 0x3fU))));
    vlSelf->ascii0 = (0x7fU & (~ (IData)(vlSelf->ascii0)));
    vlSelf->ascii1 = ((0x80U & (IData)(vlSelf->top__DOT__ascii))
                       ? ((0x40U & (IData)(vlSelf->top__DOT__ascii))
                           ? ((0x20U & (IData)(vlSelf->top__DOT__ascii))
                               ? ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x71U : 0x79U)
                               : ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x5eU : 0x39U))
                           : ((0x20U & (IData)(vlSelf->top__DOT__ascii))
                               ? ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x7cU : 0x77U)
                               : ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 0x6fU : 0x7fU)))
                       : ((0x40U & (IData)(vlSelf->top__DOT__ascii))
                           ? ((0x20U & (IData)(vlSelf->top__DOT__ascii))
                               ? ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                                   ? 7U : 0x7dU) : 
                              ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                                ? 0x6dU : 0x66U)) : 
                          ((0x20U & (IData)(vlSelf->top__DOT__ascii))
                            ? ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                                ? 0x4fU : 0x5bU) : 
                           ((0x10U & (IData)(vlSelf->top__DOT__ascii))
                             ? 6U : 0x3fU))));
    vlSelf->ascii1 = (0x7fU & (~ (IData)(vlSelf->ascii1)));
    vlSelf->count0 = ((8U & (IData)(vlSelf->top__DOT__count))
                       ? ((4U & (IData)(vlSelf->top__DOT__count))
                           ? ((2U & (IData)(vlSelf->top__DOT__count))
                               ? ((1U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x71U : 0x79U)
                               : ((1U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x5eU : 0x39U))
                           : ((2U & (IData)(vlSelf->top__DOT__count))
                               ? ((1U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x7cU : 0x77U)
                               : ((1U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x6fU : 0x7fU)))
                       : ((4U & (IData)(vlSelf->top__DOT__count))
                           ? ((2U & (IData)(vlSelf->top__DOT__count))
                               ? ((1U & (IData)(vlSelf->top__DOT__count))
                                   ? 7U : 0x7dU) : 
                              ((1U & (IData)(vlSelf->top__DOT__count))
                                ? 0x6dU : 0x66U)) : 
                          ((2U & (IData)(vlSelf->top__DOT__count))
                            ? ((1U & (IData)(vlSelf->top__DOT__count))
                                ? 0x4fU : 0x5bU) : 
                           ((1U & (IData)(vlSelf->top__DOT__count))
                             ? 6U : 0x3fU))));
    vlSelf->count0 = (0x7fU & (~ (IData)(vlSelf->count0)));
    vlSelf->count1 = ((0x80U & (IData)(vlSelf->top__DOT__count))
                       ? ((0x40U & (IData)(vlSelf->top__DOT__count))
                           ? ((0x20U & (IData)(vlSelf->top__DOT__count))
                               ? ((0x10U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x71U : 0x79U)
                               : ((0x10U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x5eU : 0x39U))
                           : ((0x20U & (IData)(vlSelf->top__DOT__count))
                               ? ((0x10U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x7cU : 0x77U)
                               : ((0x10U & (IData)(vlSelf->top__DOT__count))
                                   ? 0x6fU : 0x7fU)))
                       : ((0x40U & (IData)(vlSelf->top__DOT__count))
                           ? ((0x20U & (IData)(vlSelf->top__DOT__count))
                               ? ((0x10U & (IData)(vlSelf->top__DOT__count))
                                   ? 7U : 0x7dU) : 
                              ((0x10U & (IData)(vlSelf->top__DOT__count))
                                ? 0x6dU : 0x66U)) : 
                          ((0x20U & (IData)(vlSelf->top__DOT__count))
                            ? ((0x10U & (IData)(vlSelf->top__DOT__count))
                                ? 0x4fU : 0x5bU) : 
                           ((0x10U & (IData)(vlSelf->top__DOT__count))
                             ? 6U : 0x3fU))));
    vlSelf->count1 = (0x7fU & (~ (IData)(vlSelf->count1)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__data = vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo
        [vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr];
    vlSelf->data0 = ((8U & (IData)(vlSelf->top__DOT__data))
                      ? ((4U & (IData)(vlSelf->top__DOT__data))
                          ? ((2U & (IData)(vlSelf->top__DOT__data))
                              ? ((1U & (IData)(vlSelf->top__DOT__data))
                                  ? 0x71U : 0x79U) : 
                             ((1U & (IData)(vlSelf->top__DOT__data))
                               ? 0x5eU : 0x39U)) : 
                         ((2U & (IData)(vlSelf->top__DOT__data))
                           ? ((1U & (IData)(vlSelf->top__DOT__data))
                               ? 0x7cU : 0x77U) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__data))
                                                    ? 0x6fU
                                                    : 0x7fU)))
                      : ((4U & (IData)(vlSelf->top__DOT__data))
                          ? ((2U & (IData)(vlSelf->top__DOT__data))
                              ? ((1U & (IData)(vlSelf->top__DOT__data))
                                  ? 7U : 0x7dU) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__data))
                                                    ? 0x6dU
                                                    : 0x66U))
                          : ((2U & (IData)(vlSelf->top__DOT__data))
                              ? ((1U & (IData)(vlSelf->top__DOT__data))
                                  ? 0x4fU : 0x5bU) : 
                             ((1U & (IData)(vlSelf->top__DOT__data))
                               ? 6U : 0x3fU))));
    vlSelf->data0 = (0x7fU & (~ (IData)(vlSelf->data0)));
    vlSelf->data1 = ((0x80U & (IData)(vlSelf->top__DOT__data))
                      ? ((0x40U & (IData)(vlSelf->top__DOT__data))
                          ? ((0x20U & (IData)(vlSelf->top__DOT__data))
                              ? ((0x10U & (IData)(vlSelf->top__DOT__data))
                                  ? 0x71U : 0x79U) : 
                             ((0x10U & (IData)(vlSelf->top__DOT__data))
                               ? 0x5eU : 0x39U)) : 
                         ((0x20U & (IData)(vlSelf->top__DOT__data))
                           ? ((0x10U & (IData)(vlSelf->top__DOT__data))
                               ? 0x7cU : 0x77U) : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->top__DOT__data))
                                                    ? 0x6fU
                                                    : 0x7fU)))
                      : ((0x40U & (IData)(vlSelf->top__DOT__data))
                          ? ((0x20U & (IData)(vlSelf->top__DOT__data))
                              ? ((0x10U & (IData)(vlSelf->top__DOT__data))
                                  ? 7U : 0x7dU) : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->top__DOT__data))
                                                    ? 0x6dU
                                                    : 0x66U))
                          : ((0x20U & (IData)(vlSelf->top__DOT__data))
                              ? ((0x10U & (IData)(vlSelf->top__DOT__data))
                                  ? 0x4fU : 0x5bU) : 
                             ((0x10U & (IData)(vlSelf->top__DOT__data))
                               ? 6U : 0x3fU))));
    vlSelf->data1 = (0x7fU & (~ (IData)(vlSelf->data1)));
    vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__lut_out = 0U;
    vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__hit = 0U;
    vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x45U, vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i)) {
        vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__lut_out 
            = ((IData)(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__lut_out) 
               | ((- (IData)(((IData)(vlSelf->top__DOT__data) 
                              == ((0x44U >= (0x7fU 
                                             & vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i))
                                   ? vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__key_list
                                  [(0x7fU & vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i)]
                                   : 0U)))) & ((0x44U 
                                                >= 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i))
                                                ? vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__data_list
                                               [(0x7fU 
                                                 & vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i)]
                                                : 0U)));
        vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__hit 
            = ((IData)(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__hit) 
               | ((IData)(vlSelf->top__DOT__data) == 
                  ((0x44U >= (0x7fU & vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i))
                    ? vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__key_list
                   [(0x7fU & vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i)]
                    : 0U)));
        vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i 
            = ((IData)(1U) + vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i);
    }
    vlSelf->top__DOT__u_process_key__DOT__temp = ((IData)(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__hit)
                                                   ? (IData)(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__lut_out)
                                                   : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->clrn)) & (IData)(vlSelf->__Vclklast__TOP__clrn)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__clrn = vlSelf->clrn;
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
    if (VL_UNLIKELY((vlSelf->clrn & 0xfeU))) {
        Verilated::overWidthError("clrn");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
