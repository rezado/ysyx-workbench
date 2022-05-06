// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    sc_in<bool> clk;
    sc_in<bool> rst;
    sc_in<uint32_t> inst;
    sc_out<vluint64_t> pc;

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi;
    CData/*0:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin;
    QData/*63:0*/ top__DOT__rf_wdata;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IFU__DOT__pc_add;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__top__clk;
    CData/*0:0*/ __Vcellinp__top__rst;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__top__clk;
    IData/*31:0*/ __Vcellinp__top__inst;
    QData/*63:0*/ __Vcellout__top__pc;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
