// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
        = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->__Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
        = ((IData)(vlSelf->rst) ? 1U : ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))
                                         ? 1U : (0x3ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*6:0*/ __Vdly__top__DOT__v_haddr;
    CData/*4:0*/ __Vdly__top__DOT__v_vaddr;
    CData/*3:0*/ __Vdly__top__DOT__vcnt;
    CData/*3:0*/ __Vdly__top__DOT__hcnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    IData/*23:0*/ top__DOT__vga_data;
    // Body
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__hcnt = vlSelf->top__DOT__hcnt;
    __Vdly__top__DOT__vcnt = vlSelf->top__DOT__vcnt;
    __Vdly__top__DOT__v_vaddr = vlSelf->top__DOT__v_vaddr;
    __Vdly__top__DOT__v_haddr = vlSelf->top__DOT__v_haddr;
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if (((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                & (0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)))) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 
            (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if (((0U == (IData)(vlSelf->top__DOT__h_addr)) 
         & (0U == ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                    ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                 - (IData)(0x24U)))
                    : 0U)))) {
        __Vdly__top__DOT__v_haddr = 0U;
        __Vdly__top__DOT__v_vaddr = 0U;
        __Vdly__top__DOT__vcnt = 0U;
        __Vdly__top__DOT__hcnt = 0U;
    }
    if ((0x275U == (IData)(vlSelf->top__DOT__h_addr))) {
        __Vdly__top__DOT__vcnt = (0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__vcnt)));
        __Vdly__top__DOT__v_haddr = 0U;
        if (VL_UNLIKELY((0xfU == (IData)(vlSelf->top__DOT__vcnt)))) {
            __Vdly__top__DOT__v_vaddr = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__v_vaddr)));
            VL_WRITEF("vdata:%3#\n",8,vlSelf->top__DOT__vdata);
            __Vdly__top__DOT__vcnt = 0U;
        }
    } else if ((0x276U > (IData)(vlSelf->top__DOT__h_addr))) {
        __Vdly__top__DOT__hcnt = (0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__hcnt)));
        if ((8U == (IData)(vlSelf->top__DOT__hcnt))) {
            __Vdly__top__DOT__v_haddr = (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__v_haddr)));
            __Vdly__top__DOT__hcnt = 0U;
        }
    }
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->top__DOT__vcnt = __Vdly__top__DOT__vcnt;
    vlSelf->top__DOT__hcnt = __Vdly__top__DOT__hcnt;
    vlSelf->top__DOT__v_haddr = __Vdly__top__DOT__v_haddr;
    vlSelf->top__DOT__v_vaddr = __Vdly__top__DOT__v_vaddr;
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->top__DOT__vdata = vlSelf->top__DOT__my_vmem__DOT__vga_mem
        [(((IData)(vlSelf->top__DOT__v_vaddr) << 7U) 
          | (IData)(vlSelf->top__DOT__v_haddr))];
    top__DOT__vga_data = (((0xbU >= (IData)(vlSelf->top__DOT__vcnt)) 
                           & (vlSelf->top__DOT__my_fmem__DOT__fmem
                              [(((IData)(vlSelf->top__DOT__vdata) 
                                 << 4U) | (IData)(vlSelf->top__DOT__hcnt))] 
                              >> (IData)(vlSelf->top__DOT__vcnt)))
                           ? 0xffffffU : 0U);
    vlSelf->VGA_R = (0xffU & (top__DOT__vga_data >> 0x10U));
    vlSelf->VGA_G = (0xffU & (top__DOT__vga_data >> 8U));
    vlSelf->VGA_B = (0xffU & top__DOT__vga_data);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
    // Body
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->__Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    top__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                           & (0x310U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->VGA_BLANK_N = ((IData)(top__DOT__my_vga_ctrl__DOT__h_valid) 
                           & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
    vlSelf->top__DOT__h_addr = ((IData)(top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
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
