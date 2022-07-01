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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*6:0*/ top__DOT__sel_nextpc;
        CData/*1:0*/ top__DOT__sel_alusrc1;
        CData/*4:0*/ top__DOT__sel_alusrc2;
        CData/*2:0*/ top__DOT__sel_rfres;
        CData/*0:0*/ top__DOT__mem_ena;
        CData/*3:0*/ top__DOT__mem_mask;
        CData/*1:0*/ top__DOT__sel_alures;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin;
        CData/*7:0*/ top__DOT__u_mem__DOT__mask;
        SData/*10:0*/ top__DOT__alu_op;
        SData/*12:0*/ top__DOT__immB;
        SData/*11:0*/ top__DOT__immS;
        IData/*20:0*/ top__DOT__immJ;
        QData/*63:0*/ top__DOT__nextpc;
        QData/*63:0*/ top__DOT__rf_rdata1;
        QData/*63:0*/ top__DOT__rf_rdata2;
        QData/*63:0*/ top__DOT__alu_result;
        QData/*63:0*/ top__DOT__mem_rdata;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__alu_res;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB;
    };
    struct {
        QData/*63:0*/ top__DOT__u_mem__DOT__tmpdata;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf;
        VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<5>/*131:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut;
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
