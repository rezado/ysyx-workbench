// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfont_mem.h for the primary calling header

#include "Vfont_mem___024root.h"
#include "Vfont_mem__Syms.h"

//==========


void Vfont_mem___024root___ctor_var_reset(Vfont_mem___024root* vlSelf);

Vfont_mem___024root::Vfont_mem___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfont_mem___024root___ctor_var_reset(this);
}

void Vfont_mem___024root::__Vconfigure(Vfont_mem__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfont_mem___024root::~Vfont_mem___024root() {
}

extern const VlWide<14>/*447:0*/ Vfont_mem__ConstPool__CONST_ffb37be8_0;
extern const VlWide<13>/*415:0*/ Vfont_mem__ConstPool__CONST_8502e202_0;

void Vfont_mem___024root___initial__TOP__1(Vfont_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfont_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfont_mem___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 12, 4096, 0, VL_CVT_PACK_STR_NW(14, Vfont_mem__ConstPool__CONST_ffb37be8_0)
                 ,  &(vlSelf->top__DOT__my_fmem__DOT__fmem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(13, Vfont_mem__ConstPool__CONST_8502e202_0)
                 ,  &(vlSelf->top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
}

void Vfont_mem___024root___settle__TOP__3(Vfont_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfont_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfont_mem___024root___settle__TOP__3\n"); );
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

void Vfont_mem___024root___eval_initial(Vfont_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfont_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfont_mem___024root___eval_initial\n"); );
    // Body
    Vfont_mem___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vfont_mem___024root___eval_settle(Vfont_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfont_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfont_mem___024root___eval_settle\n"); );
    // Body
    Vfont_mem___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vfont_mem___024root___final(Vfont_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfont_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfont_mem___024root___final\n"); );
}

void Vfont_mem___024root___ctor_var_reset(Vfont_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfont_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfont_mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->VGA_CLK = VL_RAND_RESET_I(1);
    vlSelf->VGA_HSYNC = VL_RAND_RESET_I(1);
    vlSelf->VGA_VSYNC = VL_RAND_RESET_I(1);
    vlSelf->VGA_BLANK_N = VL_RAND_RESET_I(1);
    vlSelf->VGA_R = VL_RAND_RESET_I(8);
    vlSelf->VGA_G = VL_RAND_RESET_I(8);
    vlSelf->VGA_B = VL_RAND_RESET_I(8);
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
