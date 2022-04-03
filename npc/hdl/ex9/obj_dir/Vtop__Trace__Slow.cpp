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
        tracep->declBit(c+14,"clk", false,-1);
        tracep->declBit(c+15,"rst", false,-1);
        tracep->declBit(c+16,"VGA_CLK", false,-1);
        tracep->declBit(c+17,"VGA_HSYNC", false,-1);
        tracep->declBit(c+18,"VGA_VSYNC", false,-1);
        tracep->declBit(c+19,"VGA_BLANK_N", false,-1);
        tracep->declBus(c+20,"VGA_R", false,-1, 7,0);
        tracep->declBus(c+21,"VGA_G", false,-1, 7,0);
        tracep->declBus(c+22,"VGA_B", false,-1, 7,0);
        tracep->declBit(c+14,"top clk", false,-1);
        tracep->declBit(c+15,"top rst", false,-1);
        tracep->declBit(c+16,"top VGA_CLK", false,-1);
        tracep->declBit(c+17,"top VGA_HSYNC", false,-1);
        tracep->declBit(c+18,"top VGA_VSYNC", false,-1);
        tracep->declBit(c+19,"top VGA_BLANK_N", false,-1);
        tracep->declBus(c+20,"top VGA_R", false,-1, 7,0);
        tracep->declBus(c+21,"top VGA_G", false,-1, 7,0);
        tracep->declBus(c+22,"top VGA_B", false,-1, 7,0);
        tracep->declBus(c+11,"top h_addr", false,-1, 9,0);
        tracep->declBus(c+1,"top v_addr", false,-1, 9,0);
        tracep->declBus(c+2,"top vga_data", false,-1, 23,0);
        tracep->declBus(c+3,"top v_haddr", false,-1, 6,0);
        tracep->declBus(c+4,"top v_vaddr", false,-1, 4,0);
        tracep->declBus(c+5,"top vdata", false,-1, 7,0);
        tracep->declBus(c+6,"top vcnt", false,-1, 3,0);
        tracep->declBus(c+7,"top hcnt", false,-1, 3,0);
        tracep->declBus(c+8,"top font_line", false,-1, 11,0);
        tracep->declBit(c+14,"top my_vga_ctrl pclk", false,-1);
        tracep->declBit(c+15,"top my_vga_ctrl reset", false,-1);
        tracep->declBus(c+2,"top my_vga_ctrl vga_data", false,-1, 23,0);
        tracep->declBus(c+11,"top my_vga_ctrl h_addr", false,-1, 9,0);
        tracep->declBus(c+1,"top my_vga_ctrl v_addr", false,-1, 9,0);
        tracep->declBit(c+17,"top my_vga_ctrl hsync", false,-1);
        tracep->declBit(c+18,"top my_vga_ctrl vsync", false,-1);
        tracep->declBit(c+19,"top my_vga_ctrl valid", false,-1);
        tracep->declBus(c+20,"top my_vga_ctrl vga_r", false,-1, 7,0);
        tracep->declBus(c+21,"top my_vga_ctrl vga_g", false,-1, 7,0);
        tracep->declBus(c+22,"top my_vga_ctrl vga_b", false,-1, 7,0);
        tracep->declBus(c+23,"top my_vga_ctrl h_frontporch", false,-1, 31,0);
        tracep->declBus(c+24,"top my_vga_ctrl h_active", false,-1, 31,0);
        tracep->declBus(c+25,"top my_vga_ctrl h_backporch", false,-1, 31,0);
        tracep->declBus(c+26,"top my_vga_ctrl h_total", false,-1, 31,0);
        tracep->declBus(c+27,"top my_vga_ctrl v_frontporch", false,-1, 31,0);
        tracep->declBus(c+28,"top my_vga_ctrl v_active", false,-1, 31,0);
        tracep->declBus(c+29,"top my_vga_ctrl v_backporch", false,-1, 31,0);
        tracep->declBus(c+30,"top my_vga_ctrl v_total", false,-1, 31,0);
        tracep->declBus(c+12,"top my_vga_ctrl x_cnt", false,-1, 9,0);
        tracep->declBus(c+9,"top my_vga_ctrl y_cnt", false,-1, 9,0);
        tracep->declBit(c+13,"top my_vga_ctrl h_valid", false,-1);
        tracep->declBit(c+10,"top my_vga_ctrl v_valid", false,-1);
        tracep->declBus(c+3,"top my_vmem h_addr", false,-1, 6,0);
        tracep->declBus(c+4,"top my_vmem v_addr", false,-1, 4,0);
        tracep->declBus(c+5,"top my_vmem vga_data", false,-1, 7,0);
        tracep->declBus(c+7,"top my_fmem haddr", false,-1, 3,0);
        tracep->declBus(c+5,"top my_fmem ascii", false,-1, 7,0);
        tracep->declBus(c+8,"top my_fmem data", false,-1, 11,0);
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
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__v_addr),10);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__vga_data),24);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__v_haddr),7);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__v_vaddr),5);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__vdata),8);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__vcnt),4);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__hcnt),4);
        tracep->fullSData(oldp+8,(vlSelf->top__DOT__my_fmem__DOT__fmem
                                  [(((IData)(vlSelf->top__DOT__vdata) 
                                     << 4U) | (IData)(vlSelf->top__DOT__hcnt))]),12);
        tracep->fullSData(oldp+9,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
        tracep->fullSData(oldp+11,(vlSelf->top__DOT__h_addr),10);
        tracep->fullSData(oldp+12,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
        tracep->fullBit(oldp+14,(vlSelf->clk));
        tracep->fullBit(oldp+15,(vlSelf->rst));
        tracep->fullBit(oldp+16,(vlSelf->VGA_CLK));
        tracep->fullBit(oldp+17,(vlSelf->VGA_HSYNC));
        tracep->fullBit(oldp+18,(vlSelf->VGA_VSYNC));
        tracep->fullBit(oldp+19,(vlSelf->VGA_BLANK_N));
        tracep->fullCData(oldp+20,(vlSelf->VGA_R),8);
        tracep->fullCData(oldp+21,(vlSelf->VGA_G),8);
        tracep->fullCData(oldp+22,(vlSelf->VGA_B),8);
        tracep->fullIData(oldp+23,(0x60U),32);
        tracep->fullIData(oldp+24,(0x90U),32);
        tracep->fullIData(oldp+25,(0x310U),32);
        tracep->fullIData(oldp+26,(0x320U),32);
        tracep->fullIData(oldp+27,(2U),32);
        tracep->fullIData(oldp+28,(0x23U),32);
        tracep->fullIData(oldp+29,(0x203U),32);
        tracep->fullIData(oldp+30,(0x20dU),32);
    }
}
