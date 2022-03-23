// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKeyInternal__Syms.h"


void VMuxKeyInternal___024root__traceInitSub0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VMuxKeyInternal___024root__traceInitTop(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VMuxKeyInternal___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VMuxKeyInternal___024root__traceInitSub0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+10,"SimReg.clk", false,-1);
        tracep->declBit(c+11,"SimReg.reset", false,-1);
        tracep->declBit(c+12,"state_wen", false,-1);
        tracep->declBus(c+13,"state_dout", false,-1, 3,0);
        tracep->declBus(c+14,"state_din", false,-1, 3,0);
        tracep->declBit(c+15,"top.clk", false,-1);
        tracep->declBit(c+16,"in", false,-1);
        tracep->declBit(c+17,"top.reset", false,-1);
        tracep->declBit(c+18,"top.out", false,-1);
        tracep->declBus(c+19,"MuxKeyWithDefault.out", false,-1, 0,0);
        tracep->declBus(c+20,"key", false,-1, 0,0);
        tracep->declBus(c+21,"default_out", false,-1, 0,0);
        tracep->declBus(c+22,"lut", false,-1, 3,0);
        tracep->declBus(c+24,"SimReg STATE_LEN", false,-1, 31,0);
        tracep->declBus(c+25,"SimReg INIT_STATE", false,-1, 31,0);
        tracep->declBit(c+10,"SimReg clk", false,-1);
        tracep->declBit(c+11,"SimReg reset", false,-1);
        tracep->declBit(c+12,"SimReg state_wen", false,-1);
        tracep->declBus(c+13,"SimReg state_dout", false,-1, 3,0);
        tracep->declBus(c+14,"SimReg state_din", false,-1, 3,0);
        tracep->declBit(c+15,"top clk", false,-1);
        tracep->declBit(c+16,"top in", false,-1);
        tracep->declBit(c+17,"top reset", false,-1);
        tracep->declBit(c+18,"top out", false,-1);
        tracep->declBus(c+26,"top A", false,-1, 3,0);
        tracep->declBus(c+27,"top B", false,-1, 3,0);
        tracep->declBus(c+28,"top C", false,-1, 3,0);
        tracep->declBus(c+29,"top D", false,-1, 3,0);
        tracep->declBus(c+30,"top E", false,-1, 3,0);
        tracep->declBus(c+31,"top F", false,-1, 3,0);
        tracep->declBus(c+32,"top G", false,-1, 3,0);
        tracep->declBus(c+33,"top H", false,-1, 3,0);
        tracep->declBus(c+34,"top I", false,-1, 3,0);
        tracep->declBus(c+23,"top state", false,-1, 3,0);
        tracep->declBus(c+1,"top next_state", false,-1, 3,0);
        tracep->declBus(c+35,"MuxKeyWithDefault NR_KEY", false,-1, 31,0);
        tracep->declBus(c+36,"MuxKeyWithDefault KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+36,"MuxKeyWithDefault DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+19,"MuxKeyWithDefault out", false,-1, 0,0);
        tracep->declBus(c+20,"MuxKeyWithDefault key", false,-1, 0,0);
        tracep->declBus(c+21,"MuxKeyWithDefault default_out", false,-1, 0,0);
        tracep->declBus(c+22,"MuxKeyWithDefault lut", false,-1, 3,0);
        tracep->declBus(c+35,"MuxKeyWithDefault i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+36,"MuxKeyWithDefault i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+36,"MuxKeyWithDefault i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+36,"MuxKeyWithDefault i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+19,"MuxKeyWithDefault i0 out", false,-1, 0,0);
        tracep->declBus(c+20,"MuxKeyWithDefault i0 key", false,-1, 0,0);
        tracep->declBus(c+21,"MuxKeyWithDefault i0 default_out", false,-1, 0,0);
        tracep->declBus(c+22,"MuxKeyWithDefault i0 lut", false,-1, 3,0);
        tracep->declBus(c+35,"MuxKeyWithDefault i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+2+i*1,"MuxKeyWithDefault i0 pair_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+4+i*1,"MuxKeyWithDefault i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+6+i*1,"MuxKeyWithDefault i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+8,"MuxKeyWithDefault i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+9,"MuxKeyWithDefault i0 hit", false,-1);
        tracep->declBus(c+37,"MuxKeyWithDefault i0 i", false,-1, 31,0);
    }
}

void VMuxKeyInternal___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VMuxKeyInternal___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VMuxKeyInternal___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VMuxKeyInternal___024root__traceRegister(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VMuxKeyInternal___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VMuxKeyInternal___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VMuxKeyInternal___024root__traceCleanup, vlSelf);
    }
}

void VMuxKeyInternal___024root__traceFullSub0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VMuxKeyInternal___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VMuxKeyInternal___024root* const __restrict vlSelf = static_cast<VMuxKeyInternal___024root*>(voidSelf);
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VMuxKeyInternal___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VMuxKeyInternal___024root__traceFullSub0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__next_state),4);
        tracep->fullCData(oldp+2,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
        tracep->fullCData(oldp+3,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
        tracep->fullBit(oldp+4,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+5,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
        tracep->fullBit(oldp+6,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+7,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+10,(vlSelf->SimReg__02Eclk));
        tracep->fullBit(oldp+11,(vlSelf->SimReg__02Ereset));
        tracep->fullBit(oldp+12,(vlSelf->state_wen));
        tracep->fullCData(oldp+13,(vlSelf->state_dout),4);
        tracep->fullCData(oldp+14,(vlSelf->state_din),4);
        tracep->fullBit(oldp+15,(vlSelf->top__02Eclk));
        tracep->fullBit(oldp+16,(vlSelf->in));
        tracep->fullBit(oldp+17,(vlSelf->top__02Ereset));
        tracep->fullBit(oldp+18,(vlSelf->top__02Eout));
        tracep->fullBit(oldp+19,(vlSelf->MuxKeyWithDefault__02Eout));
        tracep->fullBit(oldp+20,(vlSelf->key));
        tracep->fullBit(oldp+21,(vlSelf->default_out));
        tracep->fullCData(oldp+22,(vlSelf->lut),4);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__state),4);
        tracep->fullIData(oldp+24,(4U),32);
        tracep->fullIData(oldp+25,(0U),32);
        tracep->fullCData(oldp+26,(0U),4);
        tracep->fullCData(oldp+27,(1U),4);
        tracep->fullCData(oldp+28,(2U),4);
        tracep->fullCData(oldp+29,(3U),4);
        tracep->fullCData(oldp+30,(4U),4);
        tracep->fullCData(oldp+31,(5U),4);
        tracep->fullCData(oldp+32,(6U),4);
        tracep->fullCData(oldp+33,(7U),4);
        tracep->fullCData(oldp+34,(8U),4);
        tracep->fullIData(oldp+35,(2U),32);
        tracep->fullIData(oldp+36,(1U),32);
        tracep->fullIData(oldp+37,(2U),32);
    }
}
