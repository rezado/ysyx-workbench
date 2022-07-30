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
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__branch;
        CData/*0:0*/ top__DOT__id_load;
        CData/*1:0*/ top__DOT__ex_sel_rfres;
        CData/*0:0*/ top__DOT__ex_mem_wen;
        CData/*0:0*/ top__DOT__ex_mem_ena;
        CData/*3:0*/ top__DOT__ex_mem_mask;
        CData/*3:0*/ top__DOT__ex_sel_alures;
        CData/*1:0*/ top__DOT__ex_sel_memdata;
        CData/*0:0*/ top__DOT__ex_rf_we;
        CData/*4:0*/ top__DOT__ex_rf_waddr;
        CData/*0:0*/ top__DOT__ex_sys;
        CData/*0:0*/ top__DOT__ex_load;
        CData/*1:0*/ top__DOT__mem_sel_rfres;
        CData/*0:0*/ top__DOT__mem_mem_wen;
        CData/*0:0*/ top__DOT__mem_mem_ena;
        CData/*3:0*/ top__DOT__mem_mem_mask;
        CData/*3:0*/ top__DOT__mem_sel_alures;
        CData/*1:0*/ top__DOT__mem_sel_memdata;
        CData/*0:0*/ top__DOT__mem_rf_we;
        CData/*4:0*/ top__DOT__mem_rf_waddr;
        CData/*0:0*/ top__DOT__mem_sys;
        CData/*0:0*/ top__DOT__mem_load;
        CData/*1:0*/ top__DOT__wb_sel_rfres;
        CData/*0:0*/ top__DOT__wb_rf_we;
        CData/*4:0*/ top__DOT__wb_rf_waddr;
        CData/*0:0*/ top__DOT__wb_sys;
        CData/*3:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1;
        CData/*6:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2;
        CData/*6:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__lt;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu;
    };
    struct {
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem;
        CData/*0:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin;
        CData/*7:0*/ top__DOT__u_MEM__DOT__u_mem__DOT__mask;
        SData/*12:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__immB;
        SData/*11:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__immS;
        IData/*31:0*/ top__DOT__inst;
        IData/*31:0*/ top__DOT__id_inst;
        IData/*16:0*/ top__DOT__id_alu_op;
        IData/*31:0*/ top__DOT__ex_inst;
        IData/*16:0*/ top__DOT__ex_alu_op;
        IData/*31:0*/ top__DOT__mem_inst;
        IData/*31:0*/ top__DOT__wb_inst;
        IData/*20:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__immJ;
        QData/*63:0*/ top__DOT__pc_out;
        QData/*63:0*/ top__DOT__id_pc;
        QData/*63:0*/ top__DOT__id_alu_src1;
        QData/*63:0*/ top__DOT__id_rf_rdata2;
        QData/*63:0*/ top__DOT__rf_wdata;
        QData/*63:0*/ top__DOT__ex_pc;
        QData/*63:0*/ top__DOT__ex_alu_src1;
        QData/*63:0*/ top__DOT__ex_alu_src2;
        QData/*63:0*/ top__DOT__ex_rf_rdata2;
        QData/*63:0*/ top__DOT__ex_alu_result;
        QData/*63:0*/ top__DOT__mem_pc;
        QData/*63:0*/ top__DOT__mem_rf_rdata2;
    };
    struct {
        QData/*63:0*/ top__DOT__mem_alu_result;
        QData/*63:0*/ top__DOT__wb_pc;
        QData/*63:0*/ top__DOT__wb_alu_result;
        QData/*63:0*/ top__DOT__wb_rdata;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_IFU__DOT__nextpc;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_IFU__DOT__inst_data;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__sub_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__alu_res;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b;
        QData/*63:0*/ top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result;
        QData/*63:0*/ top__DOT__u_MEM__DOT__mem_rdata;
        QData/*63:0*/ top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf;
        VlUnpacked<VlWide<3>/*67:0*/, 4> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 4> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT____Vcellinp__u_ID_reg__rst;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<9>/*271:0*/ top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
