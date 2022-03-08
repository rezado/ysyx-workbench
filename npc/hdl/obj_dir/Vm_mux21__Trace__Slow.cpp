// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vm_mux21__Syms.h"


void Vm_mux21___024root__traceInitSub0(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vm_mux21___024root__traceInitTop(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vm_mux21___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vm_mux21___024root__traceInitSub0(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"s", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"m_mux21 a", false,-1);
        tracep->declBit(c+2,"m_mux21 b", false,-1);
        tracep->declBit(c+3,"m_mux21 s", false,-1);
        tracep->declBit(c+4,"m_mux21 y", false,-1);
    }
}

void Vm_mux21___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vm_mux21___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vm_mux21___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vm_mux21___024root__traceRegister(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vm_mux21___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vm_mux21___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vm_mux21___024root__traceCleanup, vlSelf);
    }
}

void Vm_mux21___024root__traceFullSub0(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vm_mux21___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vm_mux21___024root* const __restrict vlSelf = static_cast<Vm_mux21___024root*>(voidSelf);
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vm_mux21___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vm_mux21___024root__traceFullSub0(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->a));
        tracep->fullBit(oldp+2,(vlSelf->b));
        tracep->fullBit(oldp+3,(vlSelf->s));
        tracep->fullBit(oldp+4,(vlSelf->y));
    }
}
