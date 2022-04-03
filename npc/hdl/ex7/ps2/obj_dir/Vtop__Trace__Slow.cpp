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
        tracep->declBit(c+28,"clk", false,-1);
        tracep->declBit(c+29,"clrn", false,-1);
        tracep->declBit(c+30,"ps2_clk", false,-1);
        tracep->declBit(c+31,"ps2_data", false,-1);
        tracep->declBus(c+32,"data0", false,-1, 6,0);
        tracep->declBus(c+33,"data1", false,-1, 6,0);
        tracep->declBus(c+34,"ascii0", false,-1, 6,0);
        tracep->declBus(c+35,"ascii1", false,-1, 6,0);
        tracep->declBus(c+36,"count0", false,-1, 6,0);
        tracep->declBus(c+37,"count1", false,-1, 6,0);
        tracep->declBit(c+38,"ready", false,-1);
        tracep->declBit(c+39,"sampling", false,-1);
        tracep->declBit(c+40,"overflow", false,-1);
        tracep->declBit(c+41,"nextdata_n", false,-1);
        tracep->declBit(c+28,"top clk", false,-1);
        tracep->declBit(c+29,"top clrn", false,-1);
        tracep->declBit(c+30,"top ps2_clk", false,-1);
        tracep->declBit(c+31,"top ps2_data", false,-1);
        tracep->declBus(c+32,"top data0", false,-1, 6,0);
        tracep->declBus(c+33,"top data1", false,-1, 6,0);
        tracep->declBus(c+34,"top ascii0", false,-1, 6,0);
        tracep->declBus(c+35,"top ascii1", false,-1, 6,0);
        tracep->declBus(c+36,"top count0", false,-1, 6,0);
        tracep->declBus(c+37,"top count1", false,-1, 6,0);
        tracep->declBit(c+38,"top ready", false,-1);
        tracep->declBit(c+39,"top sampling", false,-1);
        tracep->declBit(c+40,"top overflow", false,-1);
        tracep->declBit(c+41,"top nextdata_n", false,-1);
        tracep->declBus(c+14,"top ascii", false,-1, 7,0);
        tracep->declBus(c+15,"top count", false,-1, 7,0);
        tracep->declBus(c+21,"top data", false,-1, 7,0);
        tracep->declBit(c+28,"top u_ps2_keyboard clk", false,-1);
        tracep->declBit(c+29,"top u_ps2_keyboard clrn", false,-1);
        tracep->declBit(c+30,"top u_ps2_keyboard ps2_clk", false,-1);
        tracep->declBit(c+31,"top u_ps2_keyboard ps2_data", false,-1);
        tracep->declBit(c+41,"top u_ps2_keyboard nextdata_n", false,-1);
        tracep->declBus(c+21,"top u_ps2_keyboard data", false,-1, 7,0);
        tracep->declBit(c+38,"top u_ps2_keyboard ready", false,-1);
        tracep->declBit(c+40,"top u_ps2_keyboard overflow", false,-1);
        tracep->declBit(c+39,"top u_ps2_keyboard sampling", false,-1);
        tracep->declBus(c+1,"top u_ps2_keyboard buffer", false,-1, 9,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+2+i*1,"top u_ps2_keyboard fifo", true,(i+0), 7,0);}}
        tracep->declBus(c+10,"top u_ps2_keyboard w_ptr", false,-1, 2,0);
        tracep->declBus(c+11,"top u_ps2_keyboard r_ptr", false,-1, 2,0);
        tracep->declBus(c+12,"top u_ps2_keyboard count", false,-1, 3,0);
        tracep->declBus(c+13,"top u_ps2_keyboard ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+28,"top u_process_key clk", false,-1);
        tracep->declBit(c+29,"top u_process_key clrn", false,-1);
        tracep->declBus(c+21,"top u_process_key data", false,-1, 7,0);
        tracep->declBit(c+38,"top u_process_key ready", false,-1);
        tracep->declBus(c+14,"top u_process_key ascii", false,-1, 7,0);
        tracep->declBit(c+41,"top u_process_key nextdata_n", false,-1);
        tracep->declBus(c+15,"top u_process_key count", false,-1, 7,0);
        tracep->declBus(c+22,"top u_process_key temp", false,-1, 7,0);
        tracep->declBus(c+16,"top u_process_key state", false,-1, 2,0);
        tracep->declBus(c+42,"top u_process_key next_state", false,-1, 2,0);
        tracep->declBus(c+43,"top u_process_key READ", false,-1, 31,0);
        tracep->declBus(c+44,"top u_process_key OUT", false,-1, 31,0);
        tracep->declBus(c+45,"top u_process_key IDLE", false,-1, 31,0);
        tracep->declBus(c+46,"top u_process_key outMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+47,"top u_process_key outMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+47,"top u_process_key outMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+22,"top u_process_key outMux out", false,-1, 7,0);
        tracep->declBus(c+21,"top u_process_key outMux key", false,-1, 7,0);
        tracep->declBus(c+48,"top u_process_key outMux default_out", false,-1, 7,0);
        tracep->declArray(c+49,"top u_process_key outMux lut", false,-1, 1103,0);
        tracep->declBus(c+46,"top u_process_key outMux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+47,"top u_process_key outMux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+47,"top u_process_key outMux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+44,"top u_process_key outMux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+22,"top u_process_key outMux i0 out", false,-1, 7,0);
        tracep->declBus(c+21,"top u_process_key outMux i0 key", false,-1, 7,0);
        tracep->declBus(c+48,"top u_process_key outMux i0 default_out", false,-1, 7,0);
        tracep->declArray(c+49,"top u_process_key outMux i0 lut", false,-1, 1103,0);
        tracep->declBus(c+84,"top u_process_key outMux i0 PAIR_LEN", false,-1, 31,0);
        tracep->declBus(c+23,"top u_process_key outMux i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+24,"top u_process_key outMux i0 hit", false,-1);
        tracep->declBus(c+25,"top u_process_key outMux i0 i", false,-1, 31,0);
        tracep->declBus(c+26,"top u_data0 b", false,-1, 3,0);
        tracep->declBus(c+32,"top u_data0 h", false,-1, 6,0);
        tracep->declBus(c+27,"top u_data1 b", false,-1, 3,0);
        tracep->declBus(c+33,"top u_data1 h", false,-1, 6,0);
        tracep->declBus(c+17,"top u_ascii0 b", false,-1, 3,0);
        tracep->declBus(c+34,"top u_ascii0 h", false,-1, 6,0);
        tracep->declBus(c+18,"top u_ascii1 b", false,-1, 3,0);
        tracep->declBus(c+35,"top u_ascii1 h", false,-1, 6,0);
        tracep->declBus(c+19,"top u_count0 b", false,-1, 3,0);
        tracep->declBus(c+36,"top u_count0 h", false,-1, 6,0);
        tracep->declBus(c+20,"top u_count1 b", false,-1, 3,0);
        tracep->declBus(c+37,"top u_count1 h", false,-1, 6,0);
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

extern const VlWide<35>/*1119:0*/ Vtop__ConstPool__CONST_34ea32d8_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer),10);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[0]),8);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[1]),8);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[2]),8);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[3]),8);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[4]),8);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[5]),8);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[6]),8);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[7]),8);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr),3);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr),3);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__u_ps2_keyboard__DOT__count),4);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync),3);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__ascii),8);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__count),8);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__u_process_key__DOT__state),3);
        tracep->fullCData(oldp+17,((0xfU & (IData)(vlSelf->top__DOT__ascii))),4);
        tracep->fullCData(oldp+18,((0xfU & ((IData)(vlSelf->top__DOT__ascii) 
                                            >> 4U))),4);
        tracep->fullCData(oldp+19,((0xfU & (IData)(vlSelf->top__DOT__count))),4);
        tracep->fullCData(oldp+20,((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                            >> 4U))),4);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__data),8);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__u_process_key__DOT__temp),8);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+25,(vlSelf->top__DOT__u_process_key__DOT__outMux__DOT__i0__DOT__i),32);
        tracep->fullCData(oldp+26,((0xfU & (IData)(vlSelf->top__DOT__data))),4);
        tracep->fullCData(oldp+27,((0xfU & ((IData)(vlSelf->top__DOT__data) 
                                            >> 4U))),4);
        tracep->fullBit(oldp+28,(vlSelf->clk));
        tracep->fullBit(oldp+29,(vlSelf->clrn));
        tracep->fullBit(oldp+30,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+31,(vlSelf->ps2_data));
        tracep->fullCData(oldp+32,(vlSelf->data0),7);
        tracep->fullCData(oldp+33,(vlSelf->data1),7);
        tracep->fullCData(oldp+34,(vlSelf->ascii0),7);
        tracep->fullCData(oldp+35,(vlSelf->ascii1),7);
        tracep->fullCData(oldp+36,(vlSelf->count0),7);
        tracep->fullCData(oldp+37,(vlSelf->count1),7);
        tracep->fullBit(oldp+38,(vlSelf->ready));
        tracep->fullBit(oldp+39,(vlSelf->sampling));
        tracep->fullBit(oldp+40,(vlSelf->overflow));
        tracep->fullBit(oldp+41,(vlSelf->nextdata_n));
        tracep->fullCData(oldp+42,(((0U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
                                     ? ((IData)(vlSelf->ready)
                                         ? 1U : 0U)
                                     : ((1U == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__u_process_key__DOT__state))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__u_process_key__DOT__state))))),3);
        tracep->fullIData(oldp+43,(0U),32);
        tracep->fullIData(oldp+44,(1U),32);
        tracep->fullIData(oldp+45,(2U),32);
        tracep->fullIData(oldp+46,(0x45U),32);
        tracep->fullIData(oldp+47,(8U),32);
        tracep->fullCData(oldp+48,(0U),8);
        tracep->fullWData(oldp+49,(Vtop__ConstPool__CONST_34ea32d8_0),1104);
        tracep->fullIData(oldp+84,(0x10U),32);
    }
}
