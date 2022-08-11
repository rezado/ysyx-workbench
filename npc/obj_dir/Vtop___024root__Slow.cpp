// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__get_inv_TOP(IData/*31:0*/ inv);
void Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP();
void Vtop___024root____Vdpiimwrap_top__DOT__get_inst_TOP(IData/*31:0*/ inst);
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_a244a12e_0;
void Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    // Body
    VL_WRITEF("inv:0\n");
    Vtop___024root____Vdpiimwrap_top__DOT__get_inv_TOP(0U);
    if (VL_UNLIKELY(vlSelf->top__DOT__wb_ebreak)) {
        Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP();
        VL_FINISH_MT("/home/bill/ysyx-workbench/npc/vsrc/top.v", 356, "");
    }
    Vtop___024root____Vdpiimwrap_top__DOT__get_inst_TOP(vlSelf->top__DOT__wb_inst);
    vlSelf->pc = vlSelf->top__DOT__wb_pc;
    vlSelf->top__DOT__rf_wdata = ((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->top__DOT__wb_sel_rfres))))) 
                                    & vlSelf->top__DOT__wb_alu_result) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__wb_sel_rfres) 
                                                             >> 1U))))) 
                                      & vlSelf->top__DOT__wb_rdata)) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__wb_sel_rfres) 
                                                            >> 2U))))) 
                                     & vlSelf->top__DOT__wb_csr_data));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin 
        = (IData)((0U != (0xeU & vlSelf->top__DOT__ex_alu_op)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b 
        = ((IData)((0U != (0xeU & vlSelf->top__DOT__ex_alu_op)))
            ? (~ vlSelf->top__DOT__ex_alu_src2) : vlSelf->top__DOT__ex_alu_src2);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem 
        = ((IData)(vlSelf->top__DOT__mem_rf_we) & (~ (IData)(vlSelf->top__DOT__mem_load)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex 
        = ((IData)(vlSelf->top__DOT__ex_rf_we) & (~ (IData)(vlSelf->top__DOT__ex_load)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
        = ((0x100000U & (vlSelf->top__DOT__id_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->top__DOT__id_inst) 
                                      | ((0x800U & 
                                          (vlSelf->top__DOT__id_inst 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->top__DOT__id_inst 
                                               >> 0x14U)))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS 
        = ((0xfe0U & (vlSelf->top__DOT__id_inst >> 0x14U)) 
           | (0x1fU & (vlSelf->top__DOT__id_inst >> 7U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc 
        = ((0x73U == (0x7fU & vlSelf->top__DOT__id_inst)) 
           & (0x341U == (vlSelf->top__DOT__id_inst 
                         >> 0x14U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus 
        = ((0x73U == (0x7fU & vlSelf->top__DOT__id_inst)) 
           & (0x300U == (vlSelf->top__DOT__id_inst 
                         >> 0x14U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause 
        = ((0x73U == (0x7fU & vlSelf->top__DOT__id_inst)) 
           & (0x342U == (vlSelf->top__DOT__id_inst 
                         >> 0x14U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec 
        = ((0x73U == (0x7fU & vlSelf->top__DOT__id_inst)) 
           & (0x305U == (vlSelf->top__DOT__id_inst 
                         >> 0x14U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie 
        = ((0x73U == (0x7fU & vlSelf->top__DOT__id_inst)) 
           & (0x304U == (vlSelf->top__DOT__id_inst 
                         >> 0x14U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB 
        = ((0x1000U & (vlSelf->top__DOT__id_inst >> 0x13U)) 
           | ((0x800U & (vlSelf->top__DOT__id_inst 
                         << 4U)) | ((0x7e0U & (vlSelf->top__DOT__id_inst 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->top__DOT__id_inst 
                                                >> 7U)))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
        = (((- (QData)((IData)((vlSelf->top__DOT__id_inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->top__DOT__id_inst 
                              >> 0x14U))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai 
        = ((IData)((0x5013U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0x20U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli 
        = ((IData)((0x1013U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x1aU)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli 
        = ((IData)((0x5013U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x1aU)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti 
        = (IData)((0x2013U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw 
        = (IData)((0x1bU == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw 
        = ((IData)((0x403bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw 
        = ((IData)((0x603bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw 
        = ((IData)((0x103bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw 
        = ((IData)((0x101bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0x20U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0x20U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add 
        = ((IData)((0x33U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub 
        = ((IData)((0x33U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0x20U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or 
        = ((IData)((0x6033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt 
        = ((IData)((0x2033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu 
        = ((IData)((0x3033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and 
        = ((IData)((0x7033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor 
        = ((IData)((0x4033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll 
        = ((IData)((0x1033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl 
        = ((IData)((0x5033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra 
        = ((IData)((0x5033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0x20U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul 
        = ((IData)((0x33U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div 
        = ((IData)((0x4033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu 
        = ((IData)((0x7033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu 
        = ((IData)((0x5033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem 
        = ((IData)((0x6033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh 
        = ((IData)((0x1033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu 
        = ((IData)((0x2033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu 
        = ((IData)((0x3033U == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (0x20U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw 
        = ((IData)((0x703bU == (0x707fU & vlSelf->top__DOT__id_inst))) 
           & (1U == (vlSelf->top__DOT__id_inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd 
        = (IData)((0x3023U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld 
        = (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->top__DOT__id_inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr 
        = (((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
            | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))
            ? (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index)
            : 0U);
    if ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab
            [(0x3fU & (IData)((vlSelf->top__DOT__pc_out 
                               >> 3U)))];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab
            [(0x3fU & (IData)((vlSelf->top__DOT__pc_out 
                               >> 3U)))];
    } else {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag = 0U;
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag = 0U;
    }
    VL_EXTEND_WI(65,1, __Vtemp1, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
        = ((vlSelf->top__DOT__ex_alu_src1 + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp1[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp1[0U]))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres 
        = (((IData)((0x7073U == (0x707fU & vlSelf->top__DOT__id_inst))) 
            << 5U) | (((IData)((0x6073U == (0x707fU 
                                            & vlSelf->top__DOT__id_inst))) 
                       << 4U) | (((IData)((0x5073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__id_inst))) 
                                  << 3U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc) 
                                             << 2U) 
                                            | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw))))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type 
        = (((((((((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add) 
                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub)) 
                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or)) 
                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt)) 
                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu)) 
                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and)) 
                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor)) 
                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll)) 
                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl)) 
                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra)) 
                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw)) 
                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw)) 
                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw)) 
                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul)) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div)) 
                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu)) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu)) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word 
        = (((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw) 
                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu)) 
                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw)) 
                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw)) 
                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw)) 
                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw));
    vlSelf->top__DOT__id_load = (((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu)) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype 
        = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu) 
            << 6U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge) 
                       << 5U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu) 
                                  << 4U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt) 
                                             << 3U) 
                                            | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)))))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type 
        = ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag 
            >> 0x17U) & ((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag) 
                         == vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag 
            >> 0x17U) & ((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag) 
                         == vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag));
    vlSelf->top__DOT__icache_wr_req = ((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                       & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                           ? (0U != 
                                              (0x7fffffU 
                                               & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag))
                                           : (0U != 
                                              (0x7fffffU 
                                               & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->top__DOT__ex_alu_src1 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->top__DOT__ex_alu_src2 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->top__DOT__ex_alu_src1 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->top__DOT__ex_alu_src2 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
                                               >> 0x3fU)))))));
    vlSelf->top__DOT__id_alu_op = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw)) 
                                    << 0x10U) | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw)) 
                                                  << 0xfU) 
                                                 | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu)) 
                                                     << 0xeU) 
                                                    | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem)) 
                                                        << 0xdU) 
                                                       | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw) 
                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div)) 
                                                           << 0xcU) 
                                                          | (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw) 
                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul)) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh)) 
                                                              << 0xbU) 
                                                             | (((0x37U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT__id_inst)) 
                                                                 << 0xaU) 
                                                                | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra) 
                                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
                                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
                                                                    << 9U) 
                                                                   | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl) 
                                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                                                                       << 8U) 
                                                                      | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll) 
                                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
                                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                                                                          << 7U) 
                                                                         | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor) 
                                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                                                             << 6U) 
                                                                            | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori)) 
                                                                                << 5U) 
                                                                               | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                                                << 4U) 
                                                                                | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                                                << 3U) 
                                                                                | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti)) 
                                                                                << 2U) 
                                                                                | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw)) 
                                                                                << 1U) 
                                                                                | (((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi)) 
                                                                                | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__id_inst))) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__id_inst))) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->top__DOT__id_load)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw))))))))))))))))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2 
        = (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
            << 6U) | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw) 
                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                       << 5U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store) 
                                  << 4U) | ((((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__id_inst)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                             << 3U) 
                                            | ((((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__id_inst)) 
                                                 | (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__id_inst))) 
                                                << 2U) 
                                               | ((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                | (IData)(vlSelf->top__DOT__id_load)) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti)) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori)) 
                                                   << 1U) 
                                                  | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type))))))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
            << 3U) | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw) 
                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                       << 2U) | (((((0x17U == (0x7fU 
                                               & vlSelf->top__DOT__id_inst)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                  << 1U) | ((((((((
                                                   ((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type)) 
                                                        | (IData)(vlSelf->top__DOT__id_load)) 
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti)) 
                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori)))));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit))) 
            & (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                 << 5U))) ? 0U : (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                       << 5U))))) 
               | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                  (1U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset))] 
                  >> (0x1fU & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                               << 5U))))) | ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit))) 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                          << 5U)))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x40U) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                            << 5U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                           << 5U))))))) 
                                                | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                                   (3U 
                                                    & (((IData)(0x40U) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                            << 5U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                           << 5U))))))));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit));
    vlSelf->top__DOT__sel_memdata = (((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                      | (IData)(vlSelf->top__DOT__icache_wr_req))
                                      ? 1U : (IData)(vlSelf->top__DOT__mem_sel_memdata));
    vlSelf->top__DOT__mem_mask = (((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                   | (IData)(vlSelf->top__DOT__mem_mem_wen))
                                   ? (IData)(vlSelf->top__DOT__mem_mem_mask)
                                   : ((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))
                                       ? 0xfU : ((IData)(vlSelf->top__DOT__icache_wr_req)
                                                  ? 0xfU
                                                  : 0U)));
    vlSelf->top__DOT__mem_wen = ((IData)(vlSelf->top__DOT__mem_mem_wen) 
                                 | (IData)(vlSelf->top__DOT__icache_wr_req));
    vlSelf->top__DOT__mem_addr = (((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                   | (IData)(vlSelf->top__DOT__mem_mem_wen))
                                   ? vlSelf->top__DOT__mem_alu_result
                                   : ((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))
                                       ? (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)) 
                                           << 9U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset)))))
                                       : ((IData)(vlSelf->top__DOT__icache_wr_req)
                                           ? (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)) 
                                               << 9U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index) 
                                                                  << 3U) 
                                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset)))))
                                           : 0ULL)));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__ex_alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
        = (((((((((((((((((- (QData)((IData)((0U != 
                                              (3U & vlSelf->top__DOT__ex_alu_op))))) 
                          & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result) 
                         | ((- (QData)((IData)((1U 
                                                & (vlSelf->top__DOT__ex_alu_op 
                                                   >> 3U))))) 
                            & (QData)((IData)((1U & 
                                               (~ (1U 
                                                   & __Vtemp7[2U]))))))) 
                        | ((- (QData)((IData)((1U & 
                                               (vlSelf->top__DOT__ex_alu_op 
                                                >> 2U))))) 
                           & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result)) 
                       | ((- (QData)((IData)((1U & 
                                              (vlSelf->top__DOT__ex_alu_op 
                                               >> 4U))))) 
                          & (vlSelf->top__DOT__ex_alu_src1 
                             & vlSelf->top__DOT__ex_alu_src2))) 
                      | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                                   >> 5U))))) 
                         & (vlSelf->top__DOT__ex_alu_src1 
                            | vlSelf->top__DOT__ex_alu_src2))) 
                     | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                                  >> 6U))))) 
                        & (vlSelf->top__DOT__ex_alu_src1 
                           ^ vlSelf->top__DOT__ex_alu_src2))) 
                    | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                                 >> 7U))))) 
                       & (vlSelf->top__DOT__ex_alu_src1 
                          << (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2))))) 
                   | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                                >> 8U))))) 
                      & (vlSelf->top__DOT__ex_alu_src1 
                         >> (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2))))) 
                  | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                               >> 9U))))) 
                     & VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__ex_alu_src1, 
                                      (0x3fU & (IData)(vlSelf->top__DOT__ex_alu_src2))))) 
                 | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                              >> 0xaU))))) 
                    & vlSelf->top__DOT__ex_alu_src2)) 
                | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                             >> 0xbU))))) 
                   & VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2))) 
               | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                            >> 0xcU))))) 
                  & VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2))) 
              | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                           >> 0xdU))))) 
                 & VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2))) 
             | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                          >> 0xeU))))) 
                & (vlSelf->top__DOT__ex_alu_src1 * vlSelf->top__DOT__ex_alu_src2))) 
            | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                         >> 0xfU))))) 
               & VL_DIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2))) 
           | ((- (QData)((IData)((1U & (vlSelf->top__DOT__ex_alu_op 
                                        >> 0x10U))))) 
              & VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_alu_src1, vlSelf->top__DOT__ex_alu_src2)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2 
        = (1U & ((IData)((0U != (0x71U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2)))) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1 
        = (1U & ((((((IData)((0U != (0xdU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1)))) 
                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type)) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw)) 
                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs)) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc)));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_cen 
        = (1U & (~ ((((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit)) 
                     | (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) 
                    | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit) 
                     << 4U) | (((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                                << 3U) | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state 
        = Vtop__ConstPool__TABLE_a244a12e_0[__Vtableidx1];
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit));
    vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask 
        = ((1U & (IData)(vlSelf->top__DOT__mem_mask))
            ? 0xffU : ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                        ? ((0U == (7U & (IData)(vlSelf->top__DOT__mem_addr)))
                            ? 0xfU : ((4U == (7U & (IData)(vlSelf->top__DOT__mem_addr)))
                                       ? 0xf0U : 0U))
                        : ((4U & (IData)(vlSelf->top__DOT__mem_mask))
                            ? ((0U == (7U & (IData)(vlSelf->top__DOT__mem_addr)))
                                ? 3U : ((2U == (7U 
                                                & (IData)(vlSelf->top__DOT__mem_addr)))
                                         ? 0xcU : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__mem_addr)))
                                                    ? 0x30U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__mem_addr)))
                                                     ? 0xc0U
                                                     : 0U))))
                            : ((8U & (IData)(vlSelf->top__DOT__mem_mask))
                                ? ((0U == (7U & (IData)(vlSelf->top__DOT__mem_addr)))
                                    ? 1U : ((1U == 
                                             (7U & (IData)(vlSelf->top__DOT__mem_addr)))
                                             ? 2U : 
                                            ((2U == 
                                              (7U & (IData)(vlSelf->top__DOT__mem_addr)))
                                              ? 4U : 
                                             ((3U == 
                                               (7U 
                                                & (IData)(vlSelf->top__DOT__mem_addr)))
                                               ? 8U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__mem_addr)))
                                                   ? 0x10U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__mem_addr)))
                                                    ? 0x20U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__mem_addr)))
                                                     ? 0x40U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__mem_addr)))
                                                      ? 0x80U
                                                      : 0U))))))))
                                : 0U))));
    vlSelf->top__DOT__u_MEM__DOT__mem_we = ((0x2004000ULL 
                                             != vlSelf->top__DOT__mem_addr) 
                                            & (IData)(vlSelf->top__DOT__mem_wen));
    vlSelf->top__DOT__mtcmp_re = ((0x2004000ULL == vlSelf->top__DOT__mem_addr) 
                                  & (~ (IData)(vlSelf->top__DOT__mem_wen)));
    vlSelf->top__DOT__ex_alu_result = ((1U & (IData)(vlSelf->top__DOT__ex_sel_alures))
                                        ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res
                                        : ((2U & (IData)(vlSelf->top__DOT__ex_sel_alures))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res)))
                                            : ((4U 
                                                & (IData)(vlSelf->top__DOT__ex_sel_alures))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
                                                                                >> 0x3fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
                                                                      >> 0x20U))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT__ex_sel_alures))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
                                                                       >> 0x20U)))
                                                    : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex) 
             & ((IData)(vlSelf->top__DOT__ex_rf_waddr) 
                == (0x1fU & (vlSelf->top__DOT__id_inst 
                             >> 0x14U)))) & (0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))) 
           & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem) 
             & ((IData)(vlSelf->top__DOT__mem_rf_waddr) 
                == (0x1fU & (vlSelf->top__DOT__id_inst 
                             >> 0x14U)))) & (0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))) 
           & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb 
        = ((((IData)(vlSelf->top__DOT__wb_rf_we) & 
             ((IData)(vlSelf->top__DOT__wb_rf_waddr) 
              == (0x1fU & (vlSelf->top__DOT__id_inst 
                           >> 0x14U)))) & (0U != (0x1fU 
                                                  & (vlSelf->top__DOT__id_inst 
                                                     >> 0x14U)))) 
           & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2));
    vlSelf->top__DOT__id_stall = ((((((((IData)(vlSelf->top__DOT__ex_rf_we) 
                                        & (IData)(vlSelf->top__DOT__ex_load)) 
                                       & ((IData)(vlSelf->top__DOT__ex_rf_waddr) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__id_inst 
                                                 >> 0xfU)))) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1)) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__id_inst 
                                                  >> 0xfU)))) 
                                    | (((((IData)(vlSelf->top__DOT__ex_rf_we) 
                                          & (IData)(vlSelf->top__DOT__ex_load)) 
                                         & ((IData)(vlSelf->top__DOT__ex_rf_waddr) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0x14U)))) 
                                        & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__id_inst 
                                                    >> 0x14U))))) 
                                   | (((((IData)(vlSelf->top__DOT__mem_rf_we) 
                                         & (IData)(vlSelf->top__DOT__mem_load)) 
                                        & ((IData)(vlSelf->top__DOT__mem_rf_waddr) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__id_inst 
                                                  >> 0xfU)))) 
                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__id_inst 
                                                   >> 0xfU))))) 
                                  | (((((IData)(vlSelf->top__DOT__mem_rf_we) 
                                        & (IData)(vlSelf->top__DOT__mem_load)) 
                                       & ((IData)(vlSelf->top__DOT__mem_rf_waddr) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))) 
                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2)) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__id_inst 
                                                  >> 0x14U)))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex) 
             & ((IData)(vlSelf->top__DOT__ex_rf_waddr) 
                == (0x1fU & (vlSelf->top__DOT__id_inst 
                             >> 0xfU)))) & (0U != (0x1fU 
                                                   & (vlSelf->top__DOT__id_inst 
                                                      >> 0xfU)))) 
           & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem) 
             & ((IData)(vlSelf->top__DOT__mem_rf_waddr) 
                == (0x1fU & (vlSelf->top__DOT__id_inst 
                             >> 0xfU)))) & (0U != (0x1fU 
                                                   & (vlSelf->top__DOT__id_inst 
                                                      >> 0xfU)))) 
           & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb 
        = ((((IData)(vlSelf->top__DOT__wb_rf_we) & 
             ((IData)(vlSelf->top__DOT__wb_rf_waddr) 
              == (0x1fU & (vlSelf->top__DOT__id_inst 
                           >> 0xfU)))) & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__id_inst 
                                                    >> 0xfU)))) 
           & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1));
    if ((0x2004000ULL != vlSelf->top__DOT__mem_addr)) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read_TOP(
                                                                                (((0x2004000ULL 
                                                                                != vlSelf->top__DOT__mem_addr) 
                                                                                & (~ (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we)))
                                                                                 ? vlSelf->top__DOT__mem_addr
                                                                                 : 0x80000000ULL), vlSelf->__Vtask_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read__4__rdata);
        vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata 
            = vlSelf->__Vtask_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata = 0ULL;
    }
    vlSelf->top__DOT__id_rf_rdata2 = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb))
                                       ? ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex)
                                           ? vlSelf->top__DOT__ex_alu_result
                                           : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem)
                                               ? vlSelf->top__DOT__mem_alu_result
                                               : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb)
                                                   ? vlSelf->top__DOT__rf_wdata
                                                   : 0ULL)))
                                       : ((0U == (0x1fU 
                                                  & (vlSelf->top__DOT__id_inst 
                                                     >> 0x14U)))
                                           ? 0ULL : 
                                          vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__id_inst 
                                             >> 0x14U))]));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint 
        = ((((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime 
              >= vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp) 
             & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                        >> 3U))) & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie 
                                            >> 7U))) 
           & (~ ((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))));
    vlSelf->top__DOT__if_ena = (1U & (~ ((~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok)) 
                                         | (IData)(vlSelf->top__DOT__id_stall))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb))
            ? ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex)
                ? vlSelf->top__DOT__ex_alu_result : 
               ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem)
                 ? vlSelf->top__DOT__mem_alu_result
                 : ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb)
                     ? vlSelf->top__DOT__rf_wdata : 0ULL)))
            : ((0U == (0x1fU & (vlSelf->top__DOT__id_inst 
                                >> 0xfU))) ? 0ULL : 
               vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
               [(0x1fU & (vlSelf->top__DOT__id_inst 
                          >> 0xfU))]));
    vlSelf->top__DOT__u_MEM__DOT__mem_rdata = (((vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata 
                                                 & (- (QData)((IData)(
                                                                      (0x2004000ULL 
                                                                       != vlSelf->top__DOT__mem_addr))))) 
                                                & (((QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask) 
                                                                                >> 7U)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask) 
                                                                                >> 6U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask) 
                                                                                >> 5U)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask) 
                                                                                >> 4U)))))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask) 
                                                                                >> 3U)))) 
                                                                       << 0x18U) 
                                                                      | ((0xff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask) 
                                                                                >> 2U)))) 
                                                                             << 0x10U)) 
                                                                         | ((0xff00U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask)))))))))))) 
                                               >> (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__mem_addr) 
                                                      << 3U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata 
        = ((((((((- (QData)((IData)((((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x341U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U))) 
                                     | (0x30200073U 
                                        == vlSelf->top__DOT__id_inst))))) 
                 & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc) 
                | ((- (QData)((IData)(((0x73U == (0x7fU 
                                                  & vlSelf->top__DOT__id_inst)) 
                                       & (0x300U == 
                                          (vlSelf->top__DOT__id_inst 
                                           >> 0x14U)))))) 
                   & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus)) 
               | ((- (QData)((IData)(((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      & (0x342U == 
                                         (vlSelf->top__DOT__id_inst 
                                          >> 0x14U)))))) 
                  & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause)) 
              | ((- (QData)((IData)(((((0x73U == (0x7fU 
                                                  & vlSelf->top__DOT__id_inst)) 
                                       & (0x305U == 
                                          (vlSelf->top__DOT__id_inst 
                                           >> 0x14U))) 
                                      | (0x73U == vlSelf->top__DOT__id_inst)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))))) 
                 & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec)) 
             | ((- (QData)((IData)(((0x73U == (0x7fU 
                                               & vlSelf->top__DOT__id_inst)) 
                                    & (0x304U == (vlSelf->top__DOT__id_inst 
                                                  >> 0x14U)))))) 
                & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie)) 
            | ((- (QData)((IData)(((0x73U == (0x7fU 
                                              & vlSelf->top__DOT__id_inst)) 
                                   & (0x344U == (vlSelf->top__DOT__id_inst 
                                                 >> 0x14U)))))) 
               & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip)) 
           | ((- (QData)((IData)(vlSelf->top__DOT__mtcmp_re))) 
              & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result 
        = (1ULL + (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                   + (~ vlSelf->top__DOT__id_rf_rdata2)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1))) 
                   >> 0x20U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
        = (8U | ((IData)((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1))) 
                 << 4U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
        = (0x40U | (((IData)(vlSelf->top__DOT__id_pc) 
                     << 8U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1)) 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
        = (((IData)(vlSelf->top__DOT__id_pc) >> 0x18U) 
           | ((IData)((vlSelf->top__DOT__id_pc >> 0x20U)) 
              << 8U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
        = (0x200U | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1) 
                      << 0xcU) | ((IData)((vlSelf->top__DOT__id_pc 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
        = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1) 
            >> 0x14U) | ((IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
        = (0x1000U | ((IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                               >> 0x20U)) >> 0x14U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata 
        = ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres))
            ? vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1
            : ((2U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres))
                ? (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata 
                   | vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1)
                : ((4U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres))
                    ? (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata 
                       & (~ vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1))
                    : ((8U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres))
                        ? (QData)((IData)((0x1fU & 
                                           (vlSelf->top__DOT__id_inst 
                                            >> 0xfU))))
                        : ((0x10U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres))
                            ? (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata 
                               | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__id_inst 
                                                     >> 0xfU)))))
                            : ((0x20U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres))
                                ? (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata 
                                   & (~ (QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__id_inst 
                                                            >> 0xfU))))))
                                : ((0x73U == vlSelf->top__DOT__id_inst)
                                    ? 0xbULL : 0ULL)))))));
    vlSelf->top__DOT__id_csr_data = (((0x73U == (0x7fU 
                                                 & vlSelf->top__DOT__id_inst)) 
                                      | (IData)(vlSelf->top__DOT__mtcmp_re))
                                      ? vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata
                                      : 0ULL);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt 
        = (1U & (((IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                           >> 0x3fU)) & (~ (IData)(
                                                   (vlSelf->top__DOT__id_rf_rdata2 
                                                    >> 0x3fU)))) 
                 | ((~ ((IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->top__DOT__id_rf_rdata2 
                                                       >> 0x3fU)))) 
                    & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result 
                               >> 0x3fU)))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U];
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U];
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
            << 0x1cU) | (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
                         >> 4U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
            << 0x1cU) | (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
                         >> 4U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
                   >> 4U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
            << 0x18U) | (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
                         >> 8U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
            << 0x18U) | (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
                         >> 8U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
                   >> 8U));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
            << 0x14U) | (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
            << 0x14U) | (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__mem_rdata = ((IData)(vlSelf->top__DOT__mtcmp_re)
                                    ? vlSelf->top__DOT__id_csr_data
                                    : ((1U & (IData)(vlSelf->top__DOT__sel_memdata))
                                        ? ((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                            ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                            : ((2U 
                                                & (IData)(vlSelf->top__DOT__mem_mask))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__mem_mask))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 0xfU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__mem_mask))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_MEM__DOT__mem_rdata 
                                                                                >> 7U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata)))))
                                                     : 0ULL))))
                                        : ((2U & (IData)(vlSelf->top__DOT__sel_memdata))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__mem_mask))
                                                ? vlSelf->top__DOT__u_MEM__DOT__mem_rdata
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__mem_mask))
                                                    ? (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__mem_mask))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->top__DOT__mem_mask))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_rdata))))
                                                      : 0ULL))))
                                            : 0ULL)));
    __Vtemp29[0U] = 1U;
    __Vtemp29[1U] = 0U;
    __Vtemp29[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp30, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
    VL_EXTEND_WQ(65,64, __Vtemp31, (~ vlSelf->top__DOT__id_rf_rdata2));
    VL_ADD_W(3, __Vtemp32, __Vtemp30, __Vtemp31);
    VL_ADD_W(3, __Vtemp33, __Vtemp29, __Vtemp32);
    __Vtemp36[0U] = 1U;
    __Vtemp36[1U] = 0U;
    __Vtemp36[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp37, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
    VL_EXTEND_WQ(65,64, __Vtemp38, (~ vlSelf->top__DOT__id_rf_rdata2));
    VL_ADD_W(3, __Vtemp39, __Vtemp37, __Vtemp38);
    VL_ADD_W(3, __Vtemp40, __Vtemp36, __Vtemp39);
    vlSelf->top__DOT__branch = (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype) 
                                      | ((2U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                          ? (0ULL == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)
                                          : ((4U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                              ? (0ULL 
                                                 != vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)
                                              : ((8U 
                                                  & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                  ? (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                   ? 
                                                  (~ 
                                                   (1U 
                                                    & __Vtemp33[2U]))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                    ? 
                                                   (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                     ? 
                                                    (1U 
                                                     & __Vtemp40[2U])
                                                     : 
                                                    (((0x73U 
                                                       == vlSelf->top__DOT__id_inst) 
                                                      | (0x30200073U 
                                                         == vlSelf->top__DOT__id_inst)) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))))))))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
        = ((IData)(vlSelf->rst) ? 0x80000000ULL : ((IData)(vlSelf->top__DOT__if_ena)
                                                    ? 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res))
                                                     ? 
                                                    (vlSelf->top__DOT__pc_out 
                                                     + 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res 
                                                                                >> 0x14U))))))))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__branch)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__branch)
                                                       ? 
                                                      ((((0x73U 
                                                          == vlSelf->top__DOT__id_inst) 
                                                         | (0x30200073U 
                                                            == vlSelf->top__DOT__id_inst)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))
                                                        ? vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                         ? 
                                                        (0xfffffffffffffffeULL 
                                                         & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                                            + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext))
                                                         : 
                                                        (vlSelf->top__DOT__id_pc 
                                                         + 
                                                         (((- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB) 
                                                                                >> 0xcU))))) 
                                                           << 0xdU) 
                                                          | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB))))))
                                                       : 0ULL)
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->top__DOT__pc_out)))
                                                    : vlSelf->top__DOT__pc_out));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
                               == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
           == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
              == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
              == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1) 
              == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__id_alu_src1 = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                      ? vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                      : 0ULL);
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__icache_wr_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_alu_op = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__id_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_rf_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mtcmp_re = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_alu_op = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__ex_sel_rfres = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ex_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_mem_mask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ex_sel_alures = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ex_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_rf_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_sel_memdata = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ex_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ex_ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_sel_rfres = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_mem_mask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mem_sel_alures = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mem_rf_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_sel_memdata = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mem_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mem_ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_mask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__sel_memdata = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_sel_rfres = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__wb_rf_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_rf_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__wb_ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__data_ok = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__load_res = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_cen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_re2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_csrres = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(272, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardA_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__ForwardB_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_MEM__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_MEM__DOT__mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read__4__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
