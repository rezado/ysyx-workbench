// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"in", false,-1);
        tracep->declBit(c+3,"reset", false,-1);
        tracep->declBit(c+4,"out", false,-1);
        tracep->declBit(c+1,"top clk", false,-1);
        tracep->declBit(c+2,"top in", false,-1);
        tracep->declBit(c+3,"top reset", false,-1);
        tracep->declBit(c+4,"top out", false,-1);
        tracep->declBus(c+7,"top A", false,-1, 3,0);
        tracep->declBus(c+8,"top B", false,-1, 3,0);
        tracep->declBus(c+9,"top C", false,-1, 3,0);
        tracep->declBus(c+10,"top D", false,-1, 3,0);
        tracep->declBus(c+11,"top E", false,-1, 3,0);
        tracep->declBus(c+12,"top F", false,-1, 3,0);
        tracep->declBus(c+13,"top G", false,-1, 3,0);
        tracep->declBus(c+14,"top H", false,-1, 3,0);
        tracep->declBus(c+15,"top I", false,-1, 3,0);
        tracep->declBus(c+5,"top state", false,-1, 3,0);
        tracep->declBus(c+6,"top next_state", false,-1, 3,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->in));
        tracep->fullBit(oldp+3,(vlSelf->reset));
        tracep->fullBit(oldp+4,(vlSelf->out));
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__state),4);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__next_state),4);
        tracep->fullCData(oldp+7,(0U),4);
        tracep->fullCData(oldp+8,(1U),4);
        tracep->fullCData(oldp+9,(2U),4);
        tracep->fullCData(oldp+10,(3U),4);
        tracep->fullCData(oldp+11,(4U),4);
        tracep->fullCData(oldp+12,(5U),4);
        tracep->fullCData(oldp+13,(6U),4);
        tracep->fullCData(oldp+14,(7U),4);
        tracep->fullCData(oldp+15,(8U),4);
    }
}
