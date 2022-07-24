// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void npc_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__npc_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__npc_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    npc_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void finish_sim();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP\n"); );
    // Body
    finish_sim();
}

extern "C" void get_inv(int inv);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__get_inv_TOP(IData/*31:0*/ inv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__get_inv_TOP\n"); );
    // Body
    int inv__Vcvt;
    for (size_t inv__Vidx = 0; inv__Vidx < 1; ++inv__Vidx) inv__Vcvt = inv;
    get_inv(inv__Vcvt);
}

extern "C" void get_inst(int inst);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__get_inst_TOP(IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__get_inst_TOP\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    get_inst(inst__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void npc_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    npc_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 = 0U;
    Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_write_TOP(
                                                                     (((IData)(vlSelf->top__DOT__mem_ena) 
                                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store))
                                                                       ? vlSelf->top__DOT__alu_result
                                                                       : 0x80000000ULL), vlSelf->top__DOT__rf_rdata2, 
                                                                     ((IData)(vlSelf->top__DOT__u_mem__DOT__mask) 
                                                                      & (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)))));
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__inst))) {
        Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP();
        VL_FINISH_MT("/home/bill/ysyx-workbench/npc/vsrc/top.v", 121, "");
    }
    if (((((((((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                             | (0x6fU == (0x7fU & vlSelf->top__DOT__inst))) 
                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                           | (0x37U == (0x7fU & vlSelf->top__DOT__inst))) 
                          | (0x17U == (0x7fU & vlSelf->top__DOT__inst))) 
                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw)) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw))) {
        __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 
            = ((((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__sel_rfres))))) 
                 & vlSelf->top__DOT__alu_result) | 
                ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_rfres) 
                                           >> 1U))))) 
                 & ((1U & (IData)(vlSelf->top__DOT__mem_mask))
                     ? vlSelf->top__DOT__mem_rdata : 
                    ((2U & (IData)(vlSelf->top__DOT__mem_mask))
                      ? (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mem_rdata 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_rdata)))
                      : ((4U & (IData)(vlSelf->top__DOT__mem_mask))
                          ? (((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mem_rdata 
                                                             >> 0xfU)))))) 
                              << 0x10U) | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__mem_rdata)))))
                          : ((8U & (IData)(vlSelf->top__DOT__mem_mask))
                              ? (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mem_rdata 
                                                                 >> 7U)))))) 
                                  << 8U) | (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->top__DOT__mem_rdata)))))
                              : 0ULL)))))) | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__sel_rfres) 
                                                                     >> 2U))))) 
                                              & ((1U 
                                                  & (IData)(vlSelf->top__DOT__mem_mask))
                                                  ? vlSelf->top__DOT__mem_rdata
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__mem_mask))
                                                   ? (QData)((IData)(vlSelf->top__DOT__mem_rdata))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__mem_mask))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__mem_rdata))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__mem_mask))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__mem_rdata))))
                                                     : 0ULL))))));
        __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__inst >> 7U));
    }
    vlSelf->top__DOT__pc_out = ((IData)(vlSelf->rst)
                                 ? 0x80000000ULL : vlSelf->top__DOT__npc);
    if (__Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    // Body
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : vlSelf->top__DOT__pc_out);
    Vtop___024root____Vdpiimwrap_top__DOT__npc_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__npc_read__0__rdata);
    vlSelf->top__DOT__inst_data = vlSelf->__Vtask_top__DOT__npc_read__0__rdata;
    vlSelf->top__DOT__inst = ((0U == (7U & (IData)(vlSelf->pc)))
                               ? (IData)(vlSelf->top__DOT__inst_data)
                               : ((4U == (7U & (IData)(vlSelf->pc)))
                                   ? (IData)((vlSelf->top__DOT__inst_data 
                                              >> 0x20U))
                                   : 0U));
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
    vlSelf->top__DOT__rf_rdata2 = ((0U == (0x1fU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 0x14U)))
                                    ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__inst 
                                              >> 0x14U))]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext 
        = (((- (QData)((IData)((vlSelf->top__DOT__inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->top__DOT__inst 
                              >> 0x14U))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai 
        = ((IData)((0x5013U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli 
        = ((IData)((0x1013U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x1aU)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli 
        = ((IData)((0x5013U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x1aU)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw 
        = ((IData)((0x103bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw 
        = (IData)((0x1bU == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw 
        = ((IData)((0x403bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw 
        = ((IData)((0x603bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw 
        = ((IData)((0x101bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->top__DOT__inst)));
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
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul 
        = ((IData)((0x33U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div 
        = ((IData)((0x4033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu 
        = ((IData)((0x7033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu 
        = ((IData)((0x5033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem 
        = ((IData)((0x6033U == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (1U == (vlSelf->top__DOT__inst >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__inst))) 
           & (0x20U == (vlSelf->top__DOT__inst >> 0x19U)));
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
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__inst)));
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
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type 
        = ((((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add) 
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
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb));
    vlSelf->top__DOT__mem_mask = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))
                                   ? 1U : ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw)) 
                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu))
                                            ? 2U : 
                                           ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh)) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu))
                                             ? 4U : 
                                            ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu))
                                              ? 8U : 0U))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word 
        = ((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw) 
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
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load 
        = (((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__rf_rdata1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rf_rdata1))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__rf_rdata1 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rf_rdata1))) 
                   >> 0x20U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
        = (8U | ((IData)((QData)((IData)(vlSelf->top__DOT__rf_rdata1))) 
                 << 4U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__rf_rdata1))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__rf_rdata1)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
        = (0x40U | (((IData)(vlSelf->pc) << 8U) | ((IData)(
                                                           ((QData)((IData)(vlSelf->top__DOT__rf_rdata1)) 
                                                            >> 0x20U)) 
                                                   >> 0x1cU)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
        = (((IData)(vlSelf->pc) >> 0x18U) | ((IData)(
                                                     (vlSelf->pc 
                                                      >> 0x20U)) 
                                             << 8U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
        = (0x200U | (((IData)(vlSelf->top__DOT__rf_rdata1) 
                      << 0xcU) | ((IData)((vlSelf->pc 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
        = (((IData)(vlSelf->top__DOT__rf_rdata1) >> 0x14U) 
           | ((IData)((vlSelf->top__DOT__rf_rdata1 
                       >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
        = (0x1000U | ((IData)((vlSelf->top__DOT__rf_rdata1 
                               >> 0x20U)) >> 0x14U));
    vlSelf->top__DOT__sel_alures = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word) 
                                     << 1U) | (1U & 
                                               (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word))));
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
    vlSelf->top__DOT__mem_ena = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load) 
                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
    vlSelf->top__DOT__inv = ((~ (((((((((((((((((((
                                                   (((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                               | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                              | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                             | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd)) 
                                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add)) 
                                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sub)) 
                                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or)) 
                                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt)) 
                                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu)) 
                                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and)) 
                                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xor)) 
                                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sll)) 
                                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srl)) 
                                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sra)) 
                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq)) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)) 
                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu)) 
                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_add)) 
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw)) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_subw)) 
                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu)) 
                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu)) 
                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem))) 
                             & (0x100073U != vlSelf->top__DOT__inst));
    vlSelf->top__DOT__sel_nextpc = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
                                     << 6U) | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu)) 
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
                                                           | (((((((((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
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
                                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)) 
                                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw)) 
                                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
                                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)) 
                                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw))))))));
    vlSelf->top__DOT__sel_alusrc1 = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraiw)) 
                                      << 3U) | ((((
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srliw)) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                                                 << 2U) 
                                                | (((((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst)) 
                                                      | (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__inst))) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                    << 1U) 
                                                   | ((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type)) 
                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)) 
                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)) 
                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srai)) 
                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slli)) 
                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srli)) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw)) 
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_xori)) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slliw)))));
    vlSelf->top__DOT__alu_op = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remu) 
                                 << 0x10U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divu) 
                                               << 0xfU) 
                                              | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_rem)) 
                                                  << 0xdU) 
                                                 | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_div)) 
                                                     << 0xcU) 
                                                    | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulw) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mul)) 
                                                        << 0xbU) 
                                                       | (((0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__inst)) 
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
                                                                      | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_or) 
                                                                          << 5U) 
                                                                         | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_and) 
                                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_andi)) 
                                                                             << 4U) 
                                                                            | ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sltiu)) 
                                                                                << 3U) 
                                                                               | (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slt) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
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
                                                                                & vlSelf->top__DOT__inst))) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__inst))) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addw)) 
                                                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addiw)))))))))))))))));
    vlSelf->top__DOT__sel_alusrc2 = (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sllw) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sraw)) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                                      << 6U) | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_divw) 
                                                  | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_remw)) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store) 
                                                    << 4U) 
                                                   | ((((0x6fU 
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
                                                         | ((((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__load)) 
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
                                                             << 1U) 
                                                            | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type) 
                                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type))))))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U];
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U];
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
            << 0x1cU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
                         >> 4U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
            << 0x1cU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
                         >> 4U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
                   >> 4U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
            << 0x18U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
                         >> 8U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
            << 0x18U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
                         >> 8U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
                   >> 8U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
            << 0x14U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
            << 0x14U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
                   >> 0xcU));
    Vtop___024root____Vdpiimwrap_top__DOT__get_inv_TOP(
                                                       (- (IData)((IData)(vlSelf->top__DOT__inv))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin 
        = (IData)((0U != (0xeU & vlSelf->top__DOT__alu_op)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2 
        = ((((((((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__sel_alusrc2))))) 
                 & vlSelf->top__DOT__rf_rdata2) | (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                                                          >> 1U))))) 
                                                   & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext)) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                            >> 2U))))) 
                  & (((QData)((IData)((- (IData)((vlSelf->top__DOT__inst 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)((0xfffff000U 
                                                   & vlSelf->top__DOT__inst)))))) 
              | (4ULL & (- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                                  >> 3U))))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                          >> 4U))))) 
                & (((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__immS) 
                                              >> 0xbU))))) 
                    << 0xcU) | (QData)((IData)(vlSelf->top__DOT__immS))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                         >> 5U))))) 
               & (QData)((IData)(vlSelf->top__DOT__rf_rdata2)))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__sel_alusrc2) 
                                        >> 6U))))) 
              & (QData)((IData)((0x1fU & (IData)(vlSelf->top__DOT__rf_rdata2))))));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b 
        = ((IData)((0U != (0xeU & vlSelf->top__DOT__alu_op)))
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
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alusrc1) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alusrc1) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alusrc1) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alusrc1) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_genALUsrc1__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
            : 0ULL);
    VL_EXTEND_WI(65,1, __Vtemp34, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
            + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp34[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp34[0U]))));
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
    VL_EXTEND_WQ(65,64, __Vtemp36, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp37, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
    VL_ADD_W(3, __Vtemp38, __Vtemp36, __Vtemp37);
    VL_EXTEND_WI(65,1, __Vtemp39, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp40, __Vtemp38, __Vtemp39);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
        = (((((((((((((((((- (QData)((IData)((0U != 
                                              (3U & vlSelf->top__DOT__alu_op))))) 
                          & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result) 
                         | ((- (QData)((IData)((1U 
                                                & (vlSelf->top__DOT__alu_op 
                                                   >> 3U))))) 
                            & (QData)((IData)((1U & 
                                               (~ (1U 
                                                   & __Vtemp40[2U]))))))) 
                        | ((- (QData)((IData)((1U & 
                                               (vlSelf->top__DOT__alu_op 
                                                >> 2U))))) 
                           & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result)) 
                       | ((- (QData)((IData)((1U & 
                                              (vlSelf->top__DOT__alu_op 
                                               >> 4U))))) 
                          & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                             & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
                      | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                                   >> 5U))))) 
                         & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                            | vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
                     | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                                  >> 6U))))) 
                        & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                           ^ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
                    | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                                 >> 7U))))) 
                       & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                          << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))))) 
                   | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                                >> 8U))))) 
                      & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                         >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))))) 
                  | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                               >> 9U))))) 
                     & VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, 
                                      (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))))) 
                 | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                              >> 0xaU))))) 
                    & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)) 
                | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                             >> 0xbU))))) 
                   & VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
               | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                            >> 0xcU))))) 
                  & VL_DIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
              | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                           >> 0xdU))))) 
                 & VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
             | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                          >> 0xeU))))) 
                & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1 
                   * vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
            | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                         >> 0xfU))))) 
               & VL_DIV_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2))) 
           | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_op 
                                        >> 0x10U))))) 
              & VL_MODDIV_QQQ(64, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src1, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_src2)));
    vlSelf->top__DOT__alu_result = ((1U & (IData)(vlSelf->top__DOT__sel_alures))
                                     ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res
                                     : ((2U & (IData)(vlSelf->top__DOT__sel_alures))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res)))
                                         : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res));
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
    Vtop___024root____Vdpiimwrap_top__DOT__npc_read_TOP(
                                                        (((IData)(vlSelf->top__DOT__mem_ena) 
                                                          & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store)))
                                                          ? vlSelf->top__DOT__alu_result
                                                          : 0x80000000ULL), vlSelf->__Vtask_top__DOT__u_mem__DOT__npc_read__5__rdata);
    vlSelf->top__DOT__u_mem__DOT__tmpdata = vlSelf->__Vtask_top__DOT__u_mem__DOT__npc_read__5__rdata;
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U] 
        = (IData)(((1U & (IData)(vlSelf->top__DOT__alu_result))
                    ? (4ULL + vlSelf->pc) : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U] 
        = (IData)((((1U & (IData)(vlSelf->top__DOT__alu_result))
                     ? (4ULL + vlSelf->pc) : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB) 
                   >> 0x20U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
        = (0x40U | ((IData)(((1U & (IData)(vlSelf->top__DOT__alu_result))
                              ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                              : (4ULL + vlSelf->pc))) 
                    << 7U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
        = (((IData)(((1U & (IData)(vlSelf->top__DOT__alu_result))
                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                      : (4ULL + vlSelf->pc))) >> 0x19U) 
           | ((IData)((((1U & (IData)(vlSelf->top__DOT__alu_result))
                         ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                         : (4ULL + vlSelf->pc)) >> 0x20U)) 
              << 7U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
        = (0x1000U | (((IData)(((0ULL == vlSelf->top__DOT__alu_result)
                                 ? (4ULL + vlSelf->pc)
                                 : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)) 
                       << 0xeU) | ((IData)((((1U & (IData)(vlSelf->top__DOT__alu_result))
                                              ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                              : (4ULL 
                                                 + vlSelf->pc)) 
                                            >> 0x20U)) 
                                   >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
        = (((IData)(((0ULL == vlSelf->top__DOT__alu_result)
                      ? (4ULL + vlSelf->pc) : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB)) 
            >> 0x12U) | ((IData)((((0ULL == vlSelf->top__DOT__alu_result)
                                    ? (4ULL + vlSelf->pc)
                                    : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
        = (0x40000U | (((IData)(((0ULL == vlSelf->top__DOT__alu_result)
                                  ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                  : (4ULL + vlSelf->pc))) 
                        << 0x15U) | ((IData)((((0ULL 
                                                == vlSelf->top__DOT__alu_result)
                                                ? (4ULL 
                                                   + vlSelf->pc)
                                                : vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB) 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
        = (((IData)(((0ULL == vlSelf->top__DOT__alu_result)
                      ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                      : (4ULL + vlSelf->pc))) >> 0xbU) 
           | ((IData)((((0ULL == vlSelf->top__DOT__alu_result)
                         ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                         : (4ULL + vlSelf->pc)) >> 0x20U)) 
              << 0x15U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
        = (0x1000000U | (((IData)((0xfffffffffffffffeULL 
                                   & (vlSelf->top__DOT__rf_rdata1 
                                      + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))) 
                          << 0x1cU) | ((IData)((((0ULL 
                                                  == vlSelf->top__DOT__alu_result)
                                                  ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_pcbranch__DOT__pcB
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->pc)) 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[9U] 
        = (((IData)((0xfffffffffffffffeULL & (vlSelf->top__DOT__rf_rdata1 
                                              + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext))) 
            >> 4U) | ((IData)(((0xfffffffffffffffeULL 
                                & (vlSelf->top__DOT__rf_rdata1 
                                   + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext)) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xaU] 
        = (0x40000000U | ((IData)(((0xfffffffffffffffeULL 
                                    & (vlSelf->top__DOT__rf_rdata1 
                                       + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__immI_sext)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xbU] 
        = ((IData)((vlSelf->pc + (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelf->top__DOT__immJ 
                                                          >> 0x14U))))) 
                                   << 0x15U) | (QData)((IData)(vlSelf->top__DOT__immJ))))) 
           << 3U);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xcU] 
        = (((IData)((vlSelf->pc + (((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__immJ 
                                                           >> 0x14U))))) 
                                    << 0x15U) | (QData)((IData)(vlSelf->top__DOT__immJ))))) 
            >> 0x1dU) | ((IData)(((vlSelf->pc + (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__immJ 
                                                                         >> 0x14U))))) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__immJ)))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xdU] 
        = (0x10U | (((IData)((4ULL + vlSelf->pc)) << 0xaU) 
                    | ((IData)(((vlSelf->pc + (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__immJ 
                                                                       >> 0x14U))))) 
                                                << 0x15U) 
                                               | (QData)((IData)(vlSelf->top__DOT__immJ)))) 
                                >> 0x20U)) >> 0x1dU)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xeU] 
        = (((IData)((4ULL + vlSelf->pc)) >> 0x16U) 
           | ((IData)(((4ULL + vlSelf->pc) >> 0x20U)) 
              << 0xaU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xfU] 
        = (0x400U | ((IData)(((4ULL + vlSelf->pc) >> 0x20U)) 
                     >> 0x16U));
    vlSelf->top__DOT__mem_rdata = ((vlSelf->top__DOT__u_mem__DOT__tmpdata 
                                    & (((QData)((IData)(
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
                                                                                & (IData)(vlSelf->top__DOT__u_mem__DOT__mask)))))))))))) 
                                   >> (0x38U & ((IData)(vlSelf->top__DOT__alu_result) 
                                                << 3U)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0U];
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[1U];
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
            << 0x19U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[2U] 
                         >> 7U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
            << 0x19U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[3U] 
                         >> 7U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
                    >> 7U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
            << 0x12U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[4U] 
                         >> 0xeU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
            << 0x12U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
                    >> 0xeU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
            << 0xbU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[6U] 
                        >> 0x15U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
            << 0xbU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[7U] 
                        >> 0x15U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
                    >> 0x15U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[9U] 
            << 4U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[8U] 
                      >> 0x1cU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xaU] 
            << 4U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[9U] 
                      >> 0x1cU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xbU] 
                     << 4U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xaU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xcU] 
            << 0x1dU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xbU] 
                         >> 3U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xdU] 
            << 0x1dU) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xcU] 
                         >> 3U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xdU] 
                    >> 3U));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xeU] 
            << 0x16U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xdU] 
                         >> 0xaU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xfU] 
            << 0x16U) | (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xeU] 
                         >> 0xaU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fU & (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT____Vcellinp__u_MuxKeyWithDefault__lut[0xfU] 
                    >> 0xaU));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                               == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_nextpc) == 
           vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__npc = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                              ? vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_gennextpc__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                              : 0x80000000ULL);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
