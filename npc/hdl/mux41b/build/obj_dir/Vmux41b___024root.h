// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux41b.h for the primary calling header

#ifndef VERILATED_VMUX41B___024ROOT_H_
#define VERILATED_VMUX41B___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux41b__Syms;

//----------

VL_MODULE(Vmux41b___024root) {
  public:

    // PORTS
    VL_IN8(x0,1,0);
    VL_IN8(x1,1,0);
    VL_IN8(x2,1,0);
    VL_IN8(x3,1,0);
    VL_IN8(y,1,0);
    VL_OUT8(f,1,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*3:0*/, 4> mux41b__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> mux41b__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux41b__DOT__i0__DOT__i0__DOT__data_list;

    // INTERNAL VARIABLES
    Vmux41b__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux41b___024root);  ///< Copying not allowed
  public:
    Vmux41b___024root(const char* name);
    ~Vmux41b___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux41b__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
