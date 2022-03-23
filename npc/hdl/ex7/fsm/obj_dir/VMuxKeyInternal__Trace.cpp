// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKeyInternal__Syms.h"


void VMuxKeyInternal___024root__traceChgSub0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep);

void VMuxKeyInternal___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VMuxKeyInternal___024root* const __restrict vlSelf = static_cast<VMuxKeyInternal___024root*>(voidSelf);
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VMuxKeyInternal___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VMuxKeyInternal___024root__traceChgSub0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__next_state),4);
            tracep->chgCData(oldp+1,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
            tracep->chgCData(oldp+2,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
            tracep->chgBit(oldp+3,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+4,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
            tracep->chgBit(oldp+5,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+6,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+7,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+9,(vlSelf->SimReg__02Eclk));
        tracep->chgBit(oldp+10,(vlSelf->SimReg__02Ereset));
        tracep->chgBit(oldp+11,(vlSelf->state_wen));
        tracep->chgCData(oldp+12,(vlSelf->state_dout),4);
        tracep->chgCData(oldp+13,(vlSelf->state_din),4);
        tracep->chgBit(oldp+14,(vlSelf->top__02Eclk));
        tracep->chgBit(oldp+15,(vlSelf->in));
        tracep->chgBit(oldp+16,(vlSelf->top__02Ereset));
        tracep->chgBit(oldp+17,(vlSelf->top__02Eout));
        tracep->chgBit(oldp+18,(vlSelf->MuxKeyWithDefault__02Eout));
        tracep->chgBit(oldp+19,(vlSelf->key));
        tracep->chgBit(oldp+20,(vlSelf->default_out));
        tracep->chgCData(oldp+21,(vlSelf->lut),4);
        tracep->chgCData(oldp+22,(vlSelf->top__DOT__state),4);
    }
}

void VMuxKeyInternal___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VMuxKeyInternal___024root* const __restrict vlSelf = static_cast<VMuxKeyInternal___024root*>(voidSelf);
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
