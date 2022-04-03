// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclkgen__Syms.h"


void Vclkgen___024root__traceInitSub0(Vclkgen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vclkgen___024root__traceInitTop(Vclkgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vclkgen___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vclkgen___024root__traceInitSub0(Vclkgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+14,"clkin", false,-1);
        tracep->declBit(c+15,"clkgen.rst", false,-1);
        tracep->declBit(c+16,"clken", false,-1);
        tracep->declBit(c+17,"clkout", false,-1);
        tracep->declBit(c+18,"clk", false,-1);
        tracep->declBit(c+19,"top.rst", false,-1);
        tracep->declBit(c+20,"VGA_CLK", false,-1);
        tracep->declBit(c+21,"VGA_HSYNC", false,-1);
        tracep->declBit(c+22,"VGA_VSYNC", false,-1);
        tracep->declBit(c+23,"VGA_BLANK_N", false,-1);
        tracep->declBus(c+24,"VGA_R", false,-1, 7,0);
        tracep->declBus(c+25,"VGA_G", false,-1, 7,0);
        tracep->declBus(c+26,"VGA_B", false,-1, 7,0);
        tracep->declBit(c+14,"clkgen clkin", false,-1);
        tracep->declBit(c+15,"clkgen rst", false,-1);
        tracep->declBit(c+16,"clkgen clken", false,-1);
        tracep->declBit(c+17,"clkgen clkout", false,-1);
        tracep->declBus(c+28,"clkgen clk_freq", false,-1, 31,0);
        tracep->declBus(c+29,"clkgen countlimit", false,-1, 31,0);
        tracep->declBus(c+27,"clkgen clkcount", false,-1, 31,0);
        tracep->declBit(c+18,"top clk", false,-1);
        tracep->declBit(c+19,"top rst", false,-1);
        tracep->declBit(c+20,"top VGA_CLK", false,-1);
        tracep->declBit(c+21,"top VGA_HSYNC", false,-1);
        tracep->declBit(c+22,"top VGA_VSYNC", false,-1);
        tracep->declBit(c+23,"top VGA_BLANK_N", false,-1);
        tracep->declBus(c+24,"top VGA_R", false,-1, 7,0);
        tracep->declBus(c+25,"top VGA_G", false,-1, 7,0);
        tracep->declBus(c+26,"top VGA_B", false,-1, 7,0);
        tracep->declBus(c+11,"top h_addr", false,-1, 9,0);
        tracep->declBus(c+1,"top v_addr", false,-1, 9,0);
        tracep->declBus(c+2,"top vga_data", false,-1, 23,0);
        tracep->declBus(c+3,"top v_haddr", false,-1, 6,0);
        tracep->declBus(c+4,"top v_vaddr", false,-1, 4,0);
        tracep->declBus(c+5,"top vdata", false,-1, 7,0);
        tracep->declBus(c+6,"top vcnt", false,-1, 3,0);
        tracep->declBus(c+7,"top hcnt", false,-1, 3,0);
        tracep->declBus(c+8,"top font_line", false,-1, 11,0);
        tracep->declBit(c+18,"top my_vga_ctrl pclk", false,-1);
        tracep->declBit(c+19,"top my_vga_ctrl reset", false,-1);
        tracep->declBus(c+2,"top my_vga_ctrl vga_data", false,-1, 23,0);
        tracep->declBus(c+11,"top my_vga_ctrl h_addr", false,-1, 9,0);
        tracep->declBus(c+1,"top my_vga_ctrl v_addr", false,-1, 9,0);
        tracep->declBit(c+21,"top my_vga_ctrl hsync", false,-1);
        tracep->declBit(c+22,"top my_vga_ctrl vsync", false,-1);
        tracep->declBit(c+23,"top my_vga_ctrl valid", false,-1);
        tracep->declBus(c+24,"top my_vga_ctrl vga_r", false,-1, 7,0);
        tracep->declBus(c+25,"top my_vga_ctrl vga_g", false,-1, 7,0);
        tracep->declBus(c+26,"top my_vga_ctrl vga_b", false,-1, 7,0);
        tracep->declBus(c+30,"top my_vga_ctrl h_frontporch", false,-1, 31,0);
        tracep->declBus(c+31,"top my_vga_ctrl h_active", false,-1, 31,0);
        tracep->declBus(c+32,"top my_vga_ctrl h_backporch", false,-1, 31,0);
        tracep->declBus(c+33,"top my_vga_ctrl h_total", false,-1, 31,0);
        tracep->declBus(c+34,"top my_vga_ctrl v_frontporch", false,-1, 31,0);
        tracep->declBus(c+35,"top my_vga_ctrl v_active", false,-1, 31,0);
        tracep->declBus(c+36,"top my_vga_ctrl v_backporch", false,-1, 31,0);
        tracep->declBus(c+37,"top my_vga_ctrl v_total", false,-1, 31,0);
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

void Vclkgen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vclkgen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vclkgen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vclkgen___024root__traceRegister(Vclkgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vclkgen___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vclkgen___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vclkgen___024root__traceCleanup, vlSelf);
    }
}

void Vclkgen___024root__traceFullSub0(Vclkgen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vclkgen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vclkgen___024root* const __restrict vlSelf = static_cast<Vclkgen___024root*>(voidSelf);
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vclkgen___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vclkgen___024root__traceFullSub0(Vclkgen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        tracep->fullBit(oldp+14,(vlSelf->clkin));
        tracep->fullBit(oldp+15,(vlSelf->clkgen__02Erst));
        tracep->fullBit(oldp+16,(vlSelf->clken));
        tracep->fullBit(oldp+17,(vlSelf->clkout));
        tracep->fullBit(oldp+18,(vlSelf->clk));
        tracep->fullBit(oldp+19,(vlSelf->top__02Erst));
        tracep->fullBit(oldp+20,(vlSelf->VGA_CLK));
        tracep->fullBit(oldp+21,(vlSelf->VGA_HSYNC));
        tracep->fullBit(oldp+22,(vlSelf->VGA_VSYNC));
        tracep->fullBit(oldp+23,(vlSelf->VGA_BLANK_N));
        tracep->fullCData(oldp+24,(vlSelf->VGA_R),8);
        tracep->fullCData(oldp+25,(vlSelf->VGA_G),8);
        tracep->fullCData(oldp+26,(vlSelf->VGA_B),8);
        tracep->fullIData(oldp+27,(vlSelf->clkgen__DOT__clkcount),32);
        tracep->fullIData(oldp+28,(0x3e8U),32);
        tracep->fullIData(oldp+29,(0x61a8U),32);
        tracep->fullIData(oldp+30,(0x60U),32);
        tracep->fullIData(oldp+31,(0x90U),32);
        tracep->fullIData(oldp+32,(0x310U),32);
        tracep->fullIData(oldp+33,(0x320U),32);
        tracep->fullIData(oldp+34,(2U),32);
        tracep->fullIData(oldp+35,(0x23U),32);
        tracep->fullIData(oldp+36,(0x203U),32);
        tracep->fullIData(oldp+37,(0x20dU),32);
    }
}
