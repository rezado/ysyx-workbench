// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(clrn,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(data0,6,0);
    VL_OUT8(data1,6,0);
    VL_OUT8(ascii0,6,0);
    VL_OUT8(ascii1,6,0);
    VL_OUT8(count0,6,0);
    VL_OUT8(count1,6,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(sampling,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(nextdata_n,0,0);

    // LOCAL SIGNALS
    CData/*7:0*/ top__DOT__ascii;
    CData/*7:0*/ top__DOT__count;
    CData/*7:0*/ top__DOT__data;
    CData/*2:0*/ top__DOT__u_ps2_keyboard__DOT__w_ptr;
    CData/*2:0*/ top__DOT__u_ps2_keyboard__DOT__r_ptr;
    CData/*3:0*/ top__DOT__u_ps2_keyboard__DOT__count;
    CData/*2:0*/ top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync;
    CData/*7:0*/ top__DOT__u_process_key__DOT__temp;
    CData/*2:0*/ top__DOT__u_process_key__DOT__state;
    CData/*2:0*/ top__DOT__u_process_key__DOT__next_state;
    SData/*9:0*/ top__DOT__u_ps2_keyboard__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__u_ps2_keyboard__DOT__fifo;
    VlUnpacked<SData/*15:0*/, 69> top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*7:0*/, 69> top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 69> top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__u_ps2_keyboard__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__clrn;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
