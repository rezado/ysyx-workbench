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

void Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf);
}

void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__get_inst_TOP(IData/*31:0*/ inst);
void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp45;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__pmem_read__0__rdata);
    vlSelf->top__DOT__inst_data = vlSelf->__Vtask_top__DOT__pmem_read__0__rdata;
    Vtop___024root____Vdpiimwrap_top__DOT__get_inst_TOP(vlSelf->top__DOT__inst);
    vlSelf->top__DOT__immJ = ((0x100000U & (vlSelf->top__DOT__inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->top__DOT__inst) 
                                 | ((0x800U & (vlSelf->top__DOT__inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->top__DOT__inst 
                                                 >> 0x14U)))));
    vlSelf->top__DOT__immB = ((0x1000U & (vlSelf->top__DOT__inst 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelf->top__DOT__inst 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->top__DOT__inst 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->top__DOT__inst 
                                                >> 7U)))));
    vlSelf->top__DOT__immS = ((0xfe0U & (vlSelf->top__DOT__inst 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->top__DOT__inst 
                                          >> 7U)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext 
        = (((- (QData)((IData)((vlSelf->top__DOT__inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->top__DOT__inst 
                              >> 0x14U))));
    vlSelf->top__DOT__rf_rdata2 = ((0U == (0x1fU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 0x14U)))
                                    ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__inst 
                                              >> 0x14U))]);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add 
        = ((IData)((0x33U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub 
        = ((IData)((0x33U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or 
        = ((IData)((0x6033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt 
        = ((IData)((0x2033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu 
        = ((IData)((0x3033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and 
        = ((IData)((0x7033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor 
        = ((IData)((0x4033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll 
        = ((IData)((0x1033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl 
        = ((IData)((0x5033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra 
        = ((IData)((0x5033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld 
        = (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd 
        = (IData)((0x3023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__rf_rdata1 = ((0U == (0x1fU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 0xfU)))
                                    ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__inst 
                                              >> 0xfU))]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB 
        = (vlSelf->pc + (((- (QData)((IData)((1U & 
                                              ((IData)(vlSelf->top__DOT__immB) 
                                               >> 0xcU))))) 
                          << 0xdU) | (QData)((IData)(vlSelf->top__DOT__immB))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type 
        = ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type 
        = ((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub)) 
                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or)) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt)) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load 
        = (((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
    vlSelf->top__DOT__mem_mask = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))
                                   ? 1U : (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw) 
                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw))
                                            ? 2U : 
                                           (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh))
                                             ? 4U : 
                                            (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb))
                                              ? 8U : 0U))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U] 
        = (IData)(vlSelf->pc);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U] 
        = (IData)((vlSelf->pc >> 0x20U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
        = (2U | ((IData)(vlSelf->top__DOT__rf_rdata1) 
                 << 2U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
        = (((IData)(vlSelf->top__DOT__rf_rdata1) >> 0x1eU) 
           | ((IData)((vlSelf->top__DOT__rf_rdata1 
                       >> 0x20U)) << 2U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
        = (4U | ((IData)((vlSelf->top__DOT__rf_rdata1 
                          >> 0x20U)) >> 0x1eU));
    vlSelf->top__DOT__sel_rfres = (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                    << 2U) | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)))));
    vlSelf->top__DOT__sel_nextpc = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
                                     << 6U) | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
                                                << 5U) 
                                               | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr) 
                                                         << 2U) 
                                                        | (((0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->top__DOT__inst)) 
                                                            << 1U) 
                                                           | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                  | (0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__inst))) 
                                                                 | (0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__inst))) 
                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))))))));
    vlSelf->top__DOT__mem_ena = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load) 
                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
    vlSelf->top__DOT__sel_alusrc1 = (((((0x17U == (0x7fU 
                                                   & vlSelf->top__DOT__inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->top__DOT__inst))) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                      << 1U) | (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type)) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)));
    vlSelf->top__DOT__alu_op = (((0x37U == (0x7fU & vlSelf->top__DOT__inst)) 
                                 << 0xaU) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra) 
                                              << 9U) 
                                             | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu) 
                                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
                                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
                                                                << 3U) 
                                                               | (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt) 
                                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
                                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
                                                                   << 2U) 
                                                                  | (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub) 
                                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq)) 
                                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)) 
                                                                      << 1U) 
                                                                     | (((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add) 
                                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi)) 
                                                                            | (0x17U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                           | (0x6fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top__DOT__inst))) 
                                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))))))))))));
    vlSelf->top__DOT__sel_alusrc2 = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store) 
                                      << 4U) | ((((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__inst)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                 << 3U) 
                                                | ((((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst)) 
                                                     | (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst))) 
                                                    << 2U) 
                                                   | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                       << 1U) 
                                                      | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type))))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U];
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U];
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin 
        = (IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__alu_op))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
        = ((((((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__sel_alusrc2))))) 
               & vlSelf->top__DOT__rf_rdata2) | ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                                                        >> 1U))))) 
                                                 & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext)) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                          >> 2U))))) 
                & (((- (QData)((IData)((vlSelf->top__DOT__inst 
                                        >> 0x1fU)))) 
                    << 0x14U) | (QData)((IData)((vlSelf->top__DOT__inst 
                                                 >> 0xcU)))))) 
            | (4ULL & (- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                                >> 3U))))))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                        >> 4U))))) 
              & (((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__immS) 
                                            >> 0xbU))))) 
                  << 0xcU) | (QData)((IData)(vlSelf->top__DOT__immS)))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__alu_op))))
            ? (~ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)
            : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alusrc1) 
                               == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_alusrc1) == 
           vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alusrc1) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alusrc1) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
            : 0ULL);
    VL_EXTEND_WI(65,1, __Vtemp39, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
            + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp39[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp39[0U]))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                           >> 0x1fU)) 
                                  & (~ (IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                >> 0x1fU)))) 
                                 | ((~ ((IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                                 >> 0x1fU)) 
                                        ^ (IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                   >> 0x1fU)))) 
                                    & (IData)((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
                                               >> 0x1fU)))))));
    VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp42, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
    VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
    VL_EXTEND_WI(65,1, __Vtemp44, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp45, __Vtemp43, __Vtemp44);
    vlSelf->top__DOT__alu_result = (((((((((((- (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(vlSelf->top__DOT__alu_op)))))) 
                                             & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result) 
                                            | ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                      >> 3U))))) 
                                               & (QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (1U 
                                                                      & __Vtemp45[2U]))))))) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                     >> 2U))))) 
                                              & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result)) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                    >> 4U))))) 
                                             & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                                & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                   >> 5U))))) 
                                            & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                               | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                  >> 6U))))) 
                                           & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                              ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                 >> 7U))))) 
                                          & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                             << (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__alu_op) 
                                                                >> 8U))))) 
                                         & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__alu_op) 
                                                               >> 9U))))) 
                                        & VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__alu_op) 
                                                              >> 0xaU))))) 
                                       & (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
                                                                                >> 0x13U))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2) 
                                                             << 0xcU))))));
    vlSelf->top__DOT__nextpc = ((((((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->top__DOT__sel_nextpc))))) 
                                      & (4ULL + vlSelf->pc)) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                               >> 1U))))) 
                                        & (vlSelf->pc 
                                           + (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__immJ 
                                                                      >> 0x14U))))) 
                                               << 0x15U) 
                                              | (QData)((IData)(vlSelf->top__DOT__immJ)))))) 
                                    | (0xfffffffffffffffeULL 
                                       & ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                                 >> 2U))))) 
                                          & (vlSelf->top__DOT__rf_rdata1 
                                             + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext)))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                             >> 3U))))) 
                                      & ((0ULL == vlSelf->top__DOT__alu_result)
                                          ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                          : (4ULL + vlSelf->pc)))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                            >> 4U))))) 
                                     & ((0ULL == vlSelf->top__DOT__alu_result)
                                         ? (4ULL + vlSelf->pc)
                                         : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB))) 
                                 | ((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                           >> 5U))))) 
                                    & ((1U & (IData)(
                                                     (vlSelf->top__DOT__alu_result 
                                                      >> 0x3fU)))
                                        ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                        : (4ULL + vlSelf->pc)))) 
                                | ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->top__DOT__sel_nextpc) 
                                                          >> 6U))))) 
                                   & ((1U & (IData)(
                                                    (vlSelf->top__DOT__alu_result 
                                                     >> 0x3fU)))
                                       ? (4ULL + vlSelf->pc)
                                       : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)));
    vlSelf->top__DOT__u_mem__DOT__mask = ((1U & (IData)(vlSelf->top__DOT__mem_mask))
                                           ? 0xffU : 
                                          ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->top__DOT__alu_result)))
                                                ? 0xfU
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__alu_result)))
                                                    ? 0xf0U
                                                    : 0U))
                                            : ((4U 
                                                & (IData)(vlSelf->top__DOT__mem_mask))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__alu_result)))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__alu_result)))
                                                     ? 0xcU
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__alu_result)))
                                                      ? 0x30U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__alu_result)))
                                                       ? 0xc0U
                                                       : 0U))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT__mem_mask))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__alu_result)))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__alu_result)))
                                                      ? 2U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__alu_result)))
                                                       ? 4U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__alu_result)))
                                                        ? 8U
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__alu_result)))
                                                         ? 0x10U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->top__DOT__alu_result)))
                                                          ? 0x20U
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->top__DOT__alu_result)))
                                                           ? 0x40U
                                                           : 
                                                          ((7U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->top__DOT__alu_result)))
                                                            ? 0x80U
                                                            : 0U))))))))
                                                    : 0U))));
    Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(
                                                         (((IData)(vlSelf->top__DOT__mem_ena) 
                                                           & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)))
                                                           ? vlSelf->top__DOT__alu_result
                                                           : 0x80000000ULL), vlSelf->__Vtask_top__DOT__u_mem__DOT__pmem_read__4__rdata);
    vlSelf->top__DOT__u_mem__DOT__tmpdata = vlSelf->__Vtask_top__DOT__u_mem__DOT__pmem_read__4__rdata;
    Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__pmem_write_TOP(
                                                                      (((IData)(vlSelf->top__DOT__mem_ena) 
                                                                        & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))
                                                                        ? vlSelf->top__DOT__alu_result
                                                                        : 0x80000000ULL), vlSelf->top__DOT__rf_rdata2, 
                                                                      ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                       & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)))));
    vlSelf->top__DOT__mem_rdata = (vlSelf->top__DOT__u_mem__DOT__tmpdata 
                                   & ((((QData)((IData)(
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                         >> 7U)))) 
                                                          << 0x18U) 
                                                         | ((0xff0000U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                               >> 6U)))) 
                                                                << 0x10U)) 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                                >> 5U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                                >> 4U)))))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                                >> 3U)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                                >> 1U)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT__u_mem__DOT__mask))))))))))) 
                                      >> (7U & (IData)(vlSelf->top__DOT__alu_result))));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__2(vlSelf);
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
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
    vlSelf->top__DOT__nextpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__inst_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_op = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__sel_nextpc = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__sel_alusrc1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__sel_alusrc2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rf_rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rf_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__immJ = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__immB = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__immS = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__sel_rfres = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_mask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_mem__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_mem__DOT__tmpdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_top__DOT__pmem_read__0__rdata = 0;
    vlSelf->__Vtask_top__DOT__u_mem__DOT__pmem_read__4__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
