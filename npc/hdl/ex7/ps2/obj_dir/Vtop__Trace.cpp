// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer),10);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[0]),8);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[1]),8);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[2]),8);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[3]),8);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[4]),8);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[5]),8);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[6]),8);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[7]),8);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr),3);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr),3);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__u_ps2_keyboard__DOT__count),4);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__ascii),8);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__count),8);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__u_process_key__DOT__state),3);
            tracep->chgCData(oldp+16,((0xfU & (IData)(vlSelf->top__DOT__ascii))),4);
            tracep->chgCData(oldp+17,((0xfU & ((IData)(vlSelf->top__DOT__ascii) 
                                               >> 4U))),4);
            tracep->chgCData(oldp+18,((0xfU & (IData)(vlSelf->top__DOT__count))),4);
            tracep->chgCData(oldp+19,((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                               >> 4U))),4);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__data),8);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__u_process_key__DOT__temp),8);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+24,(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i),32);
            tracep->chgCData(oldp+25,((0xfU & (IData)(vlSelf->top__DOT__data))),4);
            tracep->chgCData(oldp+26,((0xfU & ((IData)(vlSelf->top__DOT__data) 
                                               >> 4U))),4);
        }
        tracep->chgBit(oldp+27,(vlSelf->clk));
        tracep->chgBit(oldp+28,(vlSelf->clrn));
        tracep->chgBit(oldp+29,(vlSelf->ps2_clk));
        tracep->chgBit(oldp+30,(vlSelf->ps2_data));
        tracep->chgCData(oldp+31,(vlSelf->data0),7);
        tracep->chgCData(oldp+32,(vlSelf->data1),7);
        tracep->chgCData(oldp+33,(vlSelf->ascii0),7);
        tracep->chgCData(oldp+34,(vlSelf->ascii1),7);
        tracep->chgCData(oldp+35,(vlSelf->count0),7);
        tracep->chgCData(oldp+36,(vlSelf->count1),7);
        tracep->chgBit(oldp+37,(vlSelf->ready));
        tracep->chgBit(oldp+38,(vlSelf->sampling));
        tracep->chgBit(oldp+39,(vlSelf->overflow));
        tracep->chgBit(oldp+40,(vlSelf->nextdata_n));
        tracep->chgCData(oldp+41,(((0U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
                                    ? ((IData)(vlSelf->ready)
                                        ? 1U : 0U) : 
                                   ((1U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
                                     ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
                                              ? 0U : (IData)(vlSelf->top__DOT__u_process_key__DOT__state))))),3);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
