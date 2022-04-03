// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclkgen.h for the primary calling header

#include "Vclkgen___024root.h"
#include "Vclkgen__Syms.h"

//==========

VL_INLINE_OPT void Vclkgen___024root___combo__TOP__2(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
}

VL_INLINE_OPT void Vclkgen___024root___sequent__TOP__4(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->clkgen__02Erst) {
        vlSelf->clkgen__DOT__clkcount = 0U;
        vlSelf->clkout = 0U;
    } else if (vlSelf->clken) {
        vlSelf->clkgen__DOT__clkcount = ((IData)(1U) 
                                         + vlSelf->clkgen__DOT__clkcount);
        if ((0x61a8U <= vlSelf->clkgen__DOT__clkcount)) {
            vlSelf->clkout = (1U & (~ (IData)(vlSelf->clkout)));
            vlSelf->clkgen__DOT__clkcount = 0U;
        }
    }
}

VL_INLINE_OPT void Vclkgen___024root___sequent__TOP__5(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*3:0*/ __Vdly__top__DOT_____05Fcnt_vdata;
    // Body
    __Vdly__top__DOT_____05Fcnt_vdata = vlSelf->top__DOT_____05Fcnt_vdata;
    vlSelf->__Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
        = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    __Vdly__top__DOT_____05Fcnt_vdata = ((IData)(vlSelf->top__02Erst)
                                          ? 1U : (0xfU 
                                                  & ((IData)(vlSelf->top__DOT_____05Fcnt_vdata) 
                                                     << 1U)));
    if (VL_UNLIKELY((0xfU > (IData)(vlSelf->top__DOT_____05Fcnt_vdata)))) {
        VL_WRITEF("vdata:%x\n",8,vlSelf->top__DOT__vdata);
    }
    vlSelf->__Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
        = ((IData)(vlSelf->top__02Erst) ? 1U : ((0x320U 
                                                 == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))
                                                 ? 1U
                                                 : 
                                                (0x3ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)))));
    vlSelf->top__DOT_____05Fcnt_vdata = __Vdly__top__DOT_____05Fcnt_vdata;
}

VL_INLINE_OPT void Vclkgen___024root___sequent__TOP__6(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*6:0*/ __Vdly__top__DOT__v_haddr;
    CData/*3:0*/ __Vdly__top__DOT__hcnt;
    CData/*4:0*/ __Vdly__top__DOT__v_vaddr;
    CData/*3:0*/ __Vdly__top__DOT__vcnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    // Body
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__vcnt = vlSelf->top__DOT__vcnt;
    __Vdly__top__DOT__hcnt = vlSelf->top__DOT__hcnt;
    __Vdly__top__DOT__v_vaddr = vlSelf->top__DOT__v_vaddr;
    __Vdly__top__DOT__v_haddr = vlSelf->top__DOT__v_haddr;
    if (vlSelf->top__02Erst) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if (((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                & (0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)))) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 
            (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    }
    if (((0U == (IData)(vlSelf->top__DOT__h_addr)) 
         & (0U == (IData)(vlSelf->top__DOT__v_addr)))) {
        __Vdly__top__DOT__v_vaddr = 0U;
        __Vdly__top__DOT__vcnt = 0U;
    }
    if ((0x275U == (IData)(vlSelf->top__DOT__h_addr))) {
        __Vdly__top__DOT__vcnt = (0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__vcnt)));
        if ((0xfU == (IData)(vlSelf->top__DOT__vcnt))) {
            __Vdly__top__DOT__v_vaddr = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__v_vaddr)));
            __Vdly__top__DOT__vcnt = 0U;
        }
    }
    if (((0U == (IData)(vlSelf->top__DOT__h_addr)) 
         & (0U == (IData)(vlSelf->top__DOT__v_addr)))) {
        __Vdly__top__DOT__v_haddr = 0U;
        __Vdly__top__DOT__hcnt = 0U;
    }
    if ((0x275U == (IData)(vlSelf->top__DOT__h_addr))) {
        __Vdly__top__DOT__v_haddr = 0U;
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
    vlSelf->top__DOT__v_vaddr = __Vdly__top__DOT__v_vaddr;
    vlSelf->top__DOT__hcnt = __Vdly__top__DOT__hcnt;
    vlSelf->top__DOT__v_haddr = __Vdly__top__DOT__v_haddr;
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->top__DOT__vdata = vlSelf->top__DOT__my_vmem__DOT__vga_mem
        [(((IData)(vlSelf->top__DOT__v_vaddr) << 7U) 
          | (IData)(vlSelf->top__DOT__v_haddr))];
    vlSelf->top__DOT__v_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                              - (IData)(0x24U)))
                                 : 0U);
    vlSelf->top__DOT__vga_data = (((0xbU >= (IData)(vlSelf->top__DOT__vcnt)) 
                                   & (vlSelf->top__DOT__my_fmem__DOT__fmem
                                      [(((IData)(vlSelf->top__DOT__vdata) 
                                         << 4U) | (IData)(vlSelf->top__DOT__hcnt))] 
                                      >> (IData)(vlSelf->top__DOT__vcnt)))
                                   ? 0xffffffU : 0U);
    vlSelf->VGA_R = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->top__DOT__vga_data);
}

VL_INLINE_OPT void Vclkgen___024root___sequent__TOP__7(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->__Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->VGA_BLANK_N = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
                           & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
    vlSelf->top__DOT__h_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
}

void Vclkgen___024root___eval(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___eval\n"); );
    // Body
    Vclkgen___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clkin) & (~ (IData)(vlSelf->__Vclklast__TOP__clkin)))) {
        Vclkgen___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->top__02Erst) & (~ (IData)(vlSelf->__Vclklast__TOP__top__02Erst))))) {
        Vclkgen___024root___sequent__TOP__5(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vclkgen___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->top__02Erst) & (~ (IData)(vlSelf->__Vclklast__TOP__top__02Erst))))) {
        Vclkgen___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clkin = vlSelf->clkin;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__top__02Erst = vlSelf->top__02Erst;
}

QData Vclkgen___024root___change_request_1(Vclkgen___024root* vlSelf);

VL_INLINE_OPT QData Vclkgen___024root___change_request(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___change_request\n"); );
    // Body
    return (Vclkgen___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vclkgen___024root___change_request_1(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vclkgen___024root___eval_debug_assertions(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clkin & 0xfeU))) {
        Verilated::overWidthError("clkin");}
    if (VL_UNLIKELY((vlSelf->clkgen__02Erst & 0xfeU))) {
        Verilated::overWidthError("clkgen.rst");}
    if (VL_UNLIKELY((vlSelf->clken & 0xfeU))) {
        Verilated::overWidthError("clken");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->top__02Erst & 0xfeU))) {
        Verilated::overWidthError("top.rst");}
}
#endif  // VL_DEBUG
