// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfont_mem.h for the primary calling header

#ifndef VERILATED_VFONT_MEM___024ROOT_H_
#define VERILATED_VFONT_MEM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfont_mem__Syms;
class Vfont_mem_VerilatedVcd;


//----------

VL_MODULE(Vfont_mem___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(VGA_CLK,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);

    // LOCAL SIGNALS
    CData/*6:0*/ top__DOT__v_haddr;
    CData/*4:0*/ top__DOT__v_vaddr;
    CData/*7:0*/ top__DOT__vdata;
    CData/*3:0*/ top__DOT__vcnt;
    CData/*3:0*/ top__DOT__hcnt;
    CData/*3:0*/ top__DOT_____05Fcnt_vdata;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__v_valid;
    SData/*9:0*/ top__DOT__h_addr;
    SData/*9:0*/ top__DOT__v_addr;
    SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__y_cnt;
    IData/*23:0*/ top__DOT__vga_data;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__my_vmem__DOT__vga_mem;
    VlUnpacked<SData/*11:0*/, 4096> top__DOT__my_fmem__DOT__fmem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vfont_mem__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfont_mem___024root);  ///< Copying not allowed
  public:
    Vfont_mem___024root(const char* name);
    ~Vfont_mem___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfont_mem__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
