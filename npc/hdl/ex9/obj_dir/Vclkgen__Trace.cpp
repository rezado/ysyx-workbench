// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclkgen__Syms.h"


void Vclkgen___024root__traceChgSub0(Vclkgen___024root* vlSelf, VerilatedVcd* tracep);

void Vclkgen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vclkgen___024root* const __restrict vlSelf = static_cast<Vclkgen___024root*>(voidSelf);
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vclkgen___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vclkgen___024root__traceChgSub0(Vclkgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__v_addr),10);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__vga_data),24);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__v_haddr),7);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__v_vaddr),5);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__vdata),8);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__vcnt),4);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__hcnt),4);
            tracep->chgSData(oldp+7,(vlSelf->top__DOT__my_fmem__DOT__fmem
                                     [(((IData)(vlSelf->top__DOT__vdata) 
                                        << 4U) | (IData)(vlSelf->top__DOT__hcnt))]),12);
            tracep->chgSData(oldp+8,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+10,(vlSelf->top__DOT__h_addr),10);
            tracep->chgSData(oldp+11,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
        }
        tracep->chgBit(oldp+13,(vlSelf->clkin));
        tracep->chgBit(oldp+14,(vlSelf->clkgen__02Erst));
        tracep->chgBit(oldp+15,(vlSelf->clken));
        tracep->chgBit(oldp+16,(vlSelf->clkout));
        tracep->chgBit(oldp+17,(vlSelf->clk));
        tracep->chgBit(oldp+18,(vlSelf->top__02Erst));
        tracep->chgBit(oldp+19,(vlSelf->VGA_CLK));
        tracep->chgBit(oldp+20,(vlSelf->VGA_HSYNC));
        tracep->chgBit(oldp+21,(vlSelf->VGA_VSYNC));
        tracep->chgBit(oldp+22,(vlSelf->VGA_BLANK_N));
        tracep->chgCData(oldp+23,(vlSelf->VGA_R),8);
        tracep->chgCData(oldp+24,(vlSelf->VGA_G),8);
        tracep->chgCData(oldp+25,(vlSelf->VGA_B),8);
        tracep->chgIData(oldp+26,(vlSelf->clkgen__DOT__clkcount),32);
    }
}

void Vclkgen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vclkgen___024root* const __restrict vlSelf = static_cast<Vclkgen___024root*>(voidSelf);
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
