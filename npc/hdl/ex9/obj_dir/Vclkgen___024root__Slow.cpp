// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclkgen.h for the primary calling header

#include "Vclkgen___024root.h"
#include "Vclkgen__Syms.h"

//==========


void Vclkgen___024root___ctor_var_reset(Vclkgen___024root* vlSelf);

Vclkgen___024root::Vclkgen___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vclkgen___024root___ctor_var_reset(this);
}

void Vclkgen___024root::__Vconfigure(Vclkgen__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vclkgen___024root::~Vclkgen___024root() {
}

extern const VlWide<14>/*447:0*/ Vclkgen__ConstPool__CONST_ffb37be8_0;
extern const VlWide<13>/*415:0*/ Vclkgen__ConstPool__CONST_8502e202_0;

void Vclkgen___024root___initial__TOP__1(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 12, 4096, 0, VL_CVT_PACK_STR_NW(14, Vclkgen__ConstPool__CONST_ffb37be8_0)
                 ,  &(vlSelf->top__DOT__my_fmem__DOT__fmem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(13, Vclkgen__ConstPool__CONST_8502e202_0)
                 ,  &(vlSelf->top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
}

void Vclkgen___024root___settle__TOP__3(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->top__DOT__vdata = vlSelf->top__DOT__my_vmem__DOT__vga_mem
        [(((IData)(vlSelf->top__DOT__v_vaddr) << 7U) 
          | (IData)(vlSelf->top__DOT__v_haddr))];
    if (vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) {
        vlSelf->top__DOT__h_addr = (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)));
        vlSelf->VGA_BLANK_N = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) 
                               & 1U);
    } else {
        vlSelf->top__DOT__h_addr = 0U;
        vlSelf->VGA_BLANK_N = 0U;
    }
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

void Vclkgen___024root___eval_initial(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___eval_initial\n"); );
    // Body
    Vclkgen___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clkin = vlSelf->clkin;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__top__02Erst = vlSelf->top__02Erst;
}

void Vclkgen___024root___eval_settle(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___eval_settle\n"); );
    // Body
    Vclkgen___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vclkgen___024root___final(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___final\n"); );
}

void Vclkgen___024root___ctor_var_reset(Vclkgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclkgen___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clkin = VL_RAND_RESET_I(1);
    vlSelf->clkgen__02Erst = VL_RAND_RESET_I(1);
    vlSelf->clken = VL_RAND_RESET_I(1);
    vlSelf->clkout = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->top__02Erst = VL_RAND_RESET_I(1);
    vlSelf->VGA_CLK = VL_RAND_RESET_I(1);
    vlSelf->VGA_HSYNC = VL_RAND_RESET_I(1);
    vlSelf->VGA_VSYNC = VL_RAND_RESET_I(1);
    vlSelf->VGA_BLANK_N = VL_RAND_RESET_I(1);
    vlSelf->VGA_R = VL_RAND_RESET_I(8);
    vlSelf->VGA_G = VL_RAND_RESET_I(8);
    vlSelf->VGA_B = VL_RAND_RESET_I(8);
    vlSelf->clkgen__DOT__clkcount = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__h_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__v_addr = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__vga_data = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__v_haddr = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__v_vaddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__vdata = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__vcnt = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__hcnt = VL_RAND_RESET_I(4);
    vlSelf->top__DOT_____05Fcnt_vdata = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__vga_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__my_fmem__DOT__fmem[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->__Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
