// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

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

extern "C" void npc_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    npc_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void npc_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    npc_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0;
    CData/*0:0*/ __Vdly__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    IData/*23:0*/ __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0;
    IData/*23:0*/ __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<4>/*127:0*/ __Vtemp66;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus;
    // Body
    __Vdly__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way 
        = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way;
    __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0 = 0U;
    __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0 = 0U;
    __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
        = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus;
    __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
         & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_write_TOP(
                                                                                (((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                                                                & (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we))
                                                                                 ? vlSelf->top__DOT__mem_addr
                                                                                 : 0x80000000ULL), 
                                                                                ((IData)(vlSelf->top__DOT__mem_mem_wen)
                                                                                 ? vlSelf->top__DOT__mem_rf_rdata2
                                                                                 : 0ULL), (IData)(vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__mask));
    }
    __Vdly__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way))));
    vlSelf->stall = (1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok)));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime 
        = ((IData)(vlSelf->rst) ? 0ULL : (1ULL + vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime));
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_pc = 0x80000000ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_pc = vlSelf->top__DOT__mem_pc;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_rdata = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_rdata = vlSelf->top__DOT__mem_rdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_csr_data = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_csr_data = vlSelf->top__DOT__mem_csr_data;
    }
    if (((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
         & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way))) {
        __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0 
            = (0x800000U | vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag);
        __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index;
    }
    if (((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
         & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)))) {
        __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0 
            = (0x800000U | vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag);
        __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_alu_result = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_alu_result = vlSelf->top__DOT__mem_alu_result;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp = 0ULL;
    } else if ((((0x2004000ULL == vlSelf->top__DOT__mem_addr) 
                 & (IData)(vlSelf->top__DOT__MEM_ena)) 
                & (IData)(vlSelf->top__DOT__mem_mem_wen))) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp 
            = ((0x2004000ULL == vlSelf->top__DOT__mem_addr)
                ? ((IData)(vlSelf->top__DOT__mem_mem_wen)
                    ? vlSelf->top__DOT__mem_rf_rdata2
                    : 0ULL) : 0ULL);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_load = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_load = vlSelf->top__DOT__ex_load;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_mem_ena = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_mem_ena = vlSelf->top__DOT__ex_mem_ena;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_alu_src1 = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_alu_src1 = vlSelf->top__DOT__id_alu_src1;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_sel_alures = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_sel_alures = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ 
                                                       ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__word) 
                                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulh)) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhsu)) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_mulhu)))))));
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_alu_op = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_alu_op = vlSelf->top__DOT__id_alu_op;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_sel_memdata = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_sel_memdata = vlSelf->top__DOT__ex_sel_memdata;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_mem_mask = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_mem_mask = vlSelf->top__DOT__ex_mem_mask;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause = 0ULL;
    } else if ((0x30200073U != vlSelf->top__DOT__id_inst)) {
        if ((0x73U == vlSelf->top__DOT__id_inst)) {
            vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause 
                = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata;
        } else if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint) {
            vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause = 0x8000000000000007ULL;
        } else if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause) {
            vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mcause 
                = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec = 0ULL;
    } else if ((0x30200073U != vlSelf->top__DOT__id_inst)) {
        if ((0x73U != vlSelf->top__DOT__id_inst)) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc)))) {
                        if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus)))) {
                            if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec) {
                                vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mtvec 
                                    = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip = 0ULL;
    } else if ((0x30200073U == vlSelf->top__DOT__id_inst)) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip 
            = (0xffffffffffffff7fULL & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip);
    } else if ((0x73U != vlSelf->top__DOT__id_inst)) {
        if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint) {
            vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip 
                = (0x80ULL | vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip);
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec)))) {
                        if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie)))) {
                            if (((0x73U == (0x7fU & vlSelf->top__DOT__id_inst)) 
                                 & (0x344U == (vlSelf->top__DOT__id_inst 
                                               >> 0x14U)))) {
                                vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mip 
                                    = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_ebreak = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_ebreak = vlSelf->top__DOT__mem_ebreak;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_inst = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_inst = vlSelf->top__DOT__mem_inst;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie = 0x80ULL;
    } else if ((0x30200073U != vlSelf->top__DOT__id_inst)) {
        if ((0x73U != vlSelf->top__DOT__id_inst)) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc)))) {
                        if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus)))) {
                            if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mtvec)))) {
                                if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mie) {
                                    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie 
                                        = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus = 0xa00001800ULL;
    } else if ((0x30200073U == vlSelf->top__DOT__id_inst)) {
        __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
            = ((0xfffffffffffffff7ULL & __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                                                 >> 7U))))) 
                  << 3U));
        __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
            = (0x80ULL | __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus);
    } else if ((0x73U != vlSelf->top__DOT__id_inst)) {
        if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint) {
            __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                = ((0xffffffffffffff7fULL & __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                                                     >> 3U))))) 
                      << 7U));
            __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                = (0xfffffffffffffff7ULL & __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus);
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc)))) {
                if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mstatus) {
                    __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                        = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc = 0ULL;
    } else if ((0x30200073U != vlSelf->top__DOT__id_inst)) {
        if ((0x73U == vlSelf->top__DOT__id_inst)) {
            vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc 
                = vlSelf->top__DOT__id_pc;
        } else if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint) {
            vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc 
                = vlSelf->top__DOT__id_pc;
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mcause)))) {
            if (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__we_mepc) {
                vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mepc 
                    = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__csr_wdata;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_sel_rfres = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_sel_rfres = vlSelf->top__DOT__mem_sel_rfres;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_alu_src2 = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_alu_src2 = ((((((((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2))))) 
                                               & vlSelf->top__DOT__id_rf_rdata2) 
                                              | ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                        >> 1U))))) 
                                                 & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)) 
                                             | ((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                       >> 2U))))) 
                                                & (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__id_inst 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__id_inst)))))) 
                                            | (4ULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                        >> 3U))))))) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                     >> 4U))))) 
                                              & (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS) 
                                                                         >> 0xbU))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immS))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                    >> 5U))))) 
                                             & (QData)((IData)(vlSelf->top__DOT__id_rf_rdata2)))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_alusrc2) 
                                                                   >> 6U))))) 
                                            & (QData)((IData)(
                                                              (0x1fU 
                                                               & (IData)(vlSelf->top__DOT__id_rf_rdata2))))));
    }
    if (vlSelf->top__DOT__wb_rf_we) {
        __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 
            = vlSelf->top__DOT__rf_wdata;
        __Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0 
            = vlSelf->top__DOT__wb_rf_waddr;
    }
    if (__Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab__v0;
    }
    if (__Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab__v0;
    }
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
        = __Vdly__top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus;
    if (__Vdlyvset__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0) {
        vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf__v0;
    }
    vlSelf->pc = vlSelf->top__DOT__wb_pc;
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_pc = 0x80000000ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_pc = vlSelf->top__DOT__ex_pc;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_csr_data = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_csr_data = vlSelf->top__DOT__ex_csr_data;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                 & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid)) 
                | ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                   & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state))))) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag 
            = (0x7fffffU & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                    >> 9U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                 & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid)) 
                | ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                   & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state))))) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index 
            = (0x3fU & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                >> 3U)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_alu_result = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_alu_result = vlSelf->top__DOT__ex_alu_result;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_rf_rdata2 = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_rf_rdata2 = vlSelf->top__DOT__ex_rf_rdata2;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_mem_wen = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_mem_wen = vlSelf->top__DOT__ex_mem_wen;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_load = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_load = vlSelf->top__DOT__id_load;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_mem_ena = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_mem_ena = ((IData)(vlSelf->top__DOT__id_load) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store));
    }
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin 
        = (IData)((0U != (0xeU & vlSelf->top__DOT__ex_alu_op)));
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_sel_memdata = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_sel_memdata = (((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu)) 
                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu)) 
                                             << 1U) 
                                            | ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh)) 
                                               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb)));
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_mem_mask = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_mem_mask = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ld) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sd))
                                          ? 1U : ((
                                                   ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lw) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sw)) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lwu))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lh) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sh)) 
                                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lhu))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lb) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_sb)) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_lbu))
                                                     ? 8U
                                                     : 0U))));
    }
    if (VL_UNLIKELY(vlSelf->top__DOT__wb_ebreak)) {
        Vtop___024root____Vdpiimwrap_top__DOT__finish_sim_TOP();
        VL_FINISH_MT("/home/bill/ysyx-workbench/npc/vsrc/top.v", 346, "");
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_ebreak = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_ebreak = vlSelf->top__DOT__ex_ebreak;
    }
    Vtop___024root____Vdpiimwrap_top__DOT__get_inst_TOP(vlSelf->top__DOT__wb_inst);
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_inst = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_inst = vlSelf->top__DOT__ex_inst;
    }
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_sel_rfres = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_sel_rfres = vlSelf->top__DOT__ex_sel_rfres;
    }
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b 
        = ((IData)((0U != (0xeU & vlSelf->top__DOT__ex_alu_op)))
            ? (~ vlSelf->top__DOT__ex_alu_src2) : vlSelf->top__DOT__ex_alu_src2);
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_rf_waddr = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_rf_waddr = vlSelf->top__DOT__mem_rf_waddr;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_rf_we = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__wb_rf_we = vlSelf->top__DOT__mem_rf_we;
    }
    VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result 
        = ((vlSelf->top__DOT__ex_alu_src1 + vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp57[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp57[0U]))));
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_pc = 0x80000000ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_pc = vlSelf->top__DOT__id_pc;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_csr_data = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_csr_data = vlSelf->top__DOT__id_csr_data;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_rf_rdata2 = 0ULL;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_rf_rdata2 = vlSelf->top__DOT__id_rf_rdata2;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_mem_wen = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_mem_wen = vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__store;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_ebreak = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_ebreak = (0x100073U == vlSelf->top__DOT__id_inst);
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_inst = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_inst = vlSelf->top__DOT__id_inst;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_sel_rfres = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_sel_rfres = (((0x73U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__id_inst)) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT__id_load) 
                                            << 1U) 
                                           | (1U & 
                                              (~ ((IData)(vlSelf->top__DOT__id_load) 
                                                  | (0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__id_inst)))))));
    }
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_rf_waddr = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_rf_waddr = vlSelf->top__DOT__ex_rf_waddr;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_rf_we = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__mem_rf_we = vlSelf->top__DOT__ex_rf_we;
    }
    VL_EXTEND_WQ(65,64, __Vtemp59, vlSelf->top__DOT__ex_alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp60, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
    VL_ADD_W(3, __Vtemp61, __Vtemp59, __Vtemp60);
    VL_EXTEND_WI(65,1, __Vtemp62, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
    vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__alu_res 
        = (((((((((((((((((- (QData)((IData)((0U != 
                                              (3U & vlSelf->top__DOT__ex_alu_op))))) 
                          & vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result) 
                         | ((- (QData)((IData)((1U 
                                                & (vlSelf->top__DOT__ex_alu_op 
                                                   >> 3U))))) 
                            & (QData)((IData)((1U & 
                                               (~ (1U 
                                                   & __Vtemp63[2U]))))))) 
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_pc = 0x80000000ULL;
    } else if (vlSelf->top__DOT__id_ena) {
        vlSelf->top__DOT__id_pc = vlSelf->top__DOT__pc_out;
    }
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
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_rf_waddr = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_rf_waddr = (0x1fU & (vlSelf->top__DOT__id_inst 
                                                  >> 7U));
    }
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_mem 
        = ((IData)(vlSelf->top__DOT__mem_rf_we) & (~ (IData)(vlSelf->top__DOT__mem_load)));
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))) {
        vlSelf->top__DOT__ex_rf_we = 0U;
    } else if (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok) {
        vlSelf->top__DOT__ex_rf_we = ((((((((((((((
                                                   (((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__id_inst))) 
                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr)) 
                                                           | (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__id_inst))) 
                                                          | (0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->top__DOT__id_inst))) 
                                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__r_type)) 
                                                        | (IData)(vlSelf->top__DOT__id_load)) 
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
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_srlw)) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_slti)) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_ori)) 
                                      | (0x73U == (0x7fU 
                                                   & vlSelf->top__DOT__id_inst)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__pc_out = 0x7ffffffcULL;
    } else if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok)) 
                         | (IData)(vlSelf->top__DOT__id_stall))))) {
        vlSelf->top__DOT__pc_out = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc;
    }
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_forwarding__DOT__we_forward_ex 
        = ((IData)(vlSelf->top__DOT__ex_rf_we) & (~ (IData)(vlSelf->top__DOT__ex_load)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_inst = 0U;
    } else if (vlSelf->top__DOT__id_ena) {
        vlSelf->top__DOT__id_inst = ((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))
                                      ? (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data 
                                                 >> 
                                                 (0x20U 
                                                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                     << 3U))))
                                      : (((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit))) 
                                          & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                          (1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                 >> 2U))]) 
                                         | ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit))) 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x40U) 
                                                     + 
                                                     (0x20U 
                                                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                         << 3U)))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x20U 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                           << 3U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      (0x20U 
                                                       & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                          << 3U))))))) 
                                               | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[
                                                  (3U 
                                                   & (((IData)(0x40U) 
                                                       + 
                                                       (0x20U 
                                                        & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                           << 3U))) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      (0x20U 
                                                       & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset) 
                                                          << 3U)))))))));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                 & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid)) 
                | ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
                   & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state))))) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_offset 
            = (7U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc));
    }
    if ((((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
            & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid)) 
           | (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) 
          | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) 
         & (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))) {
        VL_EXTEND_WQ(128,64, __Vtemp66, vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data);
        __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[0U] 
            = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                  ? 0U : __Vtemp66[0U]) & (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                               ? 0xffffffffU
                                               : 0U))) 
               | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                  [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][0U] 
                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                      ? 0xffffffffU : 0U)));
        __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[1U] 
            = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                  ? 0U : __Vtemp66[1U]) & (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                               ? 0xffffffffU
                                               : 0U))) 
               | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                  [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][1U] 
                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                      ? 0xffffffffU : 0U)));
        __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[2U] 
            = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                  ? (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data)
                  : __Vtemp66[2U]) & (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                          ? 0U : 0xffffffffU))) 
               | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                  [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][2U] 
                  & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                      ? 0U : 0xffffffffU)));
        __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[3U] 
            = ((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                  ? (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data 
                             >> 0x20U)) : __Vtemp66[3U]) 
                & (~ ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                       ? 0U : 0xffffffffU))) | (vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                                                [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][3U] 
                                                & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way)
                                                    ? 0U
                                                    : 0xffffffffU)));
        __Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr;
    }
    if ((((((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
            & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid)) 
           | (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) 
          | (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) 
         & (3U != (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)))) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U] 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][0U];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U] 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][1U];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U] 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][2U];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U] 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr][3U];
    } else {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_rdata[3U] 
            = VL_RANDOM_I(32);
    }
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
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
        = ((0x100000U & (vlSelf->top__DOT__id_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->top__DOT__id_inst) 
                                      | ((0x800U & 
                                          (vlSelf->top__DOT__id_inst 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->top__DOT__id_inst 
                                               >> 0x14U)))));
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
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way 
        = __Vdly__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__replace_way;
    if (__Vdlyvset__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[0U];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[1U];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[2U];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[3U];
    }
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
            << 7U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge) 
                       << 6U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu) 
                                  << 5U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt) 
                                             << 4U) 
                                            | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne) 
                                                << 3U) 
                                               | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_jalr) 
                                                      << 1U) 
                                                     | (0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__id_inst)))))))));
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__b_type 
        = ((((((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_beq) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bne)) 
              | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bge)) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bgeu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_blt)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_bltu));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data = 0ULL;
    } else if ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_ret_data 
            = vlSelf->top__DOT__mem_rdata;
    }
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
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state));
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
    vlSelf->top__DOT__sel_memdata = ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))
                                      ? 1U : (IData)(vlSelf->top__DOT__mem_sel_memdata));
    vlSelf->top__DOT__mem_mask = (((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                   | (IData)(vlSelf->top__DOT__mem_mem_wen))
                                   ? (IData)(vlSelf->top__DOT__mem_mem_mask)
                                   : ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))
                                       ? 0xfU : 0U));
    vlSelf->top__DOT__MEM_ena = ((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                 | (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)));
    if ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))) {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag_tab
            [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index];
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag 
            = vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag_tab
            [vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index];
    } else {
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag = 0U;
        vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag = 0U;
    }
    vlSelf->top__DOT__mem_addr = (((IData)(vlSelf->top__DOT__mem_mem_ena) 
                                   | (IData)(vlSelf->top__DOT__mem_mem_wen))
                                   ? vlSelf->top__DOT__mem_alu_result
                                   : ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))
                                       ? (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag)) 
                                           << 9U) | (QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index) 
                                                                     << 3U))))
                                       : 0ULL));
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
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag 
            >> 0x17U) & ((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_vtag) 
                         == vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit 
        = ((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag 
            >> 0x17U) & ((0x7fffffU & vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_vtag) 
                         == vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_tag));
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
                                            & (IData)(vlSelf->top__DOT__mem_mem_wen));
    vlSelf->top__DOT__u_MEM__DOT__mem_ena = ((0x2004000ULL 
                                              != vlSelf->top__DOT__mem_addr) 
                                             & (IData)(vlSelf->top__DOT__MEM_ena));
    vlSelf->top__DOT__mtcmp_re = (((0x2004000ULL == vlSelf->top__DOT__mem_addr) 
                                   & (IData)(vlSelf->top__DOT__MEM_ena)) 
                                  & (~ (IData)(vlSelf->top__DOT__mem_mem_wen)));
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
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way0_hit) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__way1_hit));
    if (vlSelf->top__DOT__u_MEM__DOT__mem_ena) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read_TOP(
                                                                                (((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena) 
                                                                                & (~ (IData)(vlSelf->top__DOT__u_MEM__DOT__mem_we)))
                                                                                 ? vlSelf->top__DOT__mem_addr
                                                                                 : 0x80000000ULL), vlSelf->__Vtask_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read__4__rdata);
        vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata 
            = vlSelf->__Vtask_top__DOT__u_MEM__DOT__u_mem__DOT__npc_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata = 0ULL;
    }
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
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok 
        = ((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
           | ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)) 
              & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit)));
    vlSelf->top__DOT__u_MEM__DOT__mem_rdata = (((vlSelf->top__DOT__u_MEM__DOT__u_mem__DOT__tmpdata 
                                                 & (- (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__mem_ena)))) 
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
    vlSelf->top__DOT__id_ena = (1U & (~ ((~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok)) 
                                         | (IData)(vlSelf->top__DOT__id_stall))));
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_e5f87c57_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    // Body
    vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint 
        = ((((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtime 
              >= vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__u_clint__DOT__mtimecmp) 
             & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mstatus 
                        >> 3U))) & (IData)((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_CSRs__DOT__mie 
                                            >> 7U))) 
           & (~ ((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__id_stall))));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__addr_ok));
    __Vtemp117[0U] = 1U;
    __Vtemp117[1U] = 0U;
    __Vtemp117[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp118, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
    VL_EXTEND_WQ(65,64, __Vtemp119, (~ vlSelf->top__DOT__id_rf_rdata2));
    VL_ADD_W(3, __Vtemp120, __Vtemp118, __Vtemp119);
    VL_ADD_W(3, __Vtemp121, __Vtemp117, __Vtemp120);
    __Vtemp124[0U] = 1U;
    __Vtemp124[1U] = 0U;
    __Vtemp124[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp125, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
    VL_EXTEND_WQ(65,64, __Vtemp126, (~ vlSelf->top__DOT__id_rf_rdata2));
    VL_ADD_W(3, __Vtemp127, __Vtemp125, __Vtemp126);
    VL_ADD_W(3, __Vtemp128, __Vtemp124, __Vtemp127);
    vlSelf->top__DOT__branch = (1U & (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype) 
                                       | ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype) 
                                          >> 1U)) | 
                                      ((4U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                        ? (0ULL == vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)
                                        : ((8U & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                            ? (0ULL 
                                               != vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sub_result)
                                            : ((0x10U 
                                                & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                ? (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt)
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                    ? 
                                                   (~ 
                                                    (1U 
                                                     & __Vtemp121[2U]))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                     ? 
                                                    (~ (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__lt))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__sel_btype))
                                                      ? 
                                                     (1U 
                                                      & __Vtemp128[2U])
                                                      : 
                                                     (((0x73U 
                                                        == vlSelf->top__DOT__id_inst) 
                                                       | (0x30200073U 
                                                          == vlSelf->top__DOT__id_inst)) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__tint))))))))));
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
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__cache_hit) 
                     << 4U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__valid) 
                                << 3U) | (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state)));
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state 
        = Vtop__ConstPool__TABLE_e5f87c57_0[__Vtableidx1];
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
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
        = ((IData)(vlSelf->rst) ? 0x7ffffffcULL : ((IData)(vlSelf->top__DOT__branch)
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
                                                      (vlSelf->top__DOT__id_pc 
                                                       + 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ 
                                                                                >> 0x14U))))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immJ))))
                                                       : 
                                                      ((2U 
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
                                                         | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immB)))))))
                                                     : 0ULL)
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc_out)));
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
    vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__ram_addr 
        = (0x3fU & ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__next_state))
                     ? (IData)((vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__nextpc 
                                >> 3U)) : ((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__state))
                                            ? (IData)(vlSelf->top__DOT__u_ysyx_22040088_IFU__DOT__icache__DOT__reg_index)
                                            : 0U)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
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
