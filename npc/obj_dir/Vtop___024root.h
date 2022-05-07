// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*1:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1;
    CData/*3:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2;
    CData/*2:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__sel_nextpc;
    CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi;
    CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr;
    CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin;
    IData/*20:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__immJ;
    QData/*63:0*/ top__DOT__alu_src1;
    QData/*63:0*/ top__DOT__alu_src2;
    QData/*63:0*/ top__DOT__rf_wdata;
    QData/*63:0*/ top__DOT__nextpc;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b;
    QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf;
    VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*67:0*/, 4> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 4> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 4> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 3> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 3> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<5>/*131:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut;
    VlWide<9>/*271:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc2__DOT____Vcellinp__u_MuxKeyWithDefault__lut;
    VlWide<7>/*200:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut;
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
