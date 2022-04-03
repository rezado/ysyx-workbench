// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbcd7seg.h for the primary calling header

#ifndef VERILATED_VBCD7SEG___024ROOT_H_
#define VERILATED_VBCD7SEG___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vbcd7seg__Syms;
class Vbcd7seg_VerilatedVcd;


//----------

VL_MODULE(Vbcd7seg___024root) {
  public:

    // PORTS
    VL_IN8(process_key__02Eclk,0,0);
    VL_IN8(top__02Eclk,0,0);
    VL_IN8(top__02Eclrn,0,0);
    VL_IN8(process_key__02Eclrn,0,0);
    VL_IN8(data,7,0);
    VL_IN8(process_key__02Eready,0,0);
    VL_OUT8(ascii,7,0);
    VL_OUT8(process_key__02Enextdata_n,0,0);
    VL_OUT8(count,7,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(data0,6,0);
    VL_OUT8(data1,6,0);
    VL_OUT8(ascii0,6,0);
    VL_OUT8(ascii1,6,0);
    VL_OUT8(count0,6,0);
    VL_OUT8(count1,6,0);
    VL_OUT8(top__02Eready,0,0);
    VL_OUT8(sampling,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(top__02Enextdata_n,0,0);

    // LOCAL SIGNALS
    CData/*7:0*/ process_key__DOT__temp;
    CData/*7:0*/ process_key__DOT__outMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ process_key__DOT__outMux__DOT__i0__DOT__hit;
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
    CData/*7:0*/ top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__hit;
    SData/*9:0*/ top__DOT__u_ps2_keyboard__DOT__buffer;
    IData/*31:0*/ process_key__DOT__outMux__DOT__i0__DOT__i;
    IData/*31:0*/ top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i;
    VlUnpacked<SData/*15:0*/, 69> process_key__DOT__outMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*7:0*/, 69> process_key__DOT__outMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 69> process_key__DOT__outMux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__u_ps2_keyboard__DOT__fifo;
    VlUnpacked<SData/*15:0*/, 69> top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*7:0*/, 69> top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 69> top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__u_ps2_keyboard__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__process_key__02Eclk;
    CData/*0:0*/ __Vclklast__TOP__top__02Eclk;
    CData/*0:0*/ __Vclklast__TOP__top__02Eclrn;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vbcd7seg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbcd7seg___024root);  ///< Copying not allowed
  public:
    Vbcd7seg___024root(const char* name);
    ~Vbcd7seg___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vbcd7seg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
