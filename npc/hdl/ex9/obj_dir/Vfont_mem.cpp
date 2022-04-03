// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfont_mem.h"
#include "Vfont_mem__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfont_mem::Vfont_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfont_mem__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , VGA_CLK{vlSymsp->TOP.VGA_CLK}
    , VGA_HSYNC{vlSymsp->TOP.VGA_HSYNC}
    , VGA_VSYNC{vlSymsp->TOP.VGA_VSYNC}
    , VGA_BLANK_N{vlSymsp->TOP.VGA_BLANK_N}
    , VGA_R{vlSymsp->TOP.VGA_R}
    , VGA_G{vlSymsp->TOP.VGA_G}
    , VGA_B{vlSymsp->TOP.VGA_B}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfont_mem::Vfont_mem(const char* _vcname__)
    : Vfont_mem(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfont_mem::~Vfont_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfont_mem___024root___eval_initial(Vfont_mem___024root* vlSelf);
void Vfont_mem___024root___eval_settle(Vfont_mem___024root* vlSelf);
void Vfont_mem___024root___eval(Vfont_mem___024root* vlSelf);
QData Vfont_mem___024root___change_request(Vfont_mem___024root* vlSelf);
#ifdef VL_DEBUG
void Vfont_mem___024root___eval_debug_assertions(Vfont_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vfont_mem___024root___final(Vfont_mem___024root* vlSelf);

static void _eval_initial_loop(Vfont_mem__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfont_mem___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfont_mem___024root___eval_settle(&(vlSymsp->TOP));
        Vfont_mem___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfont_mem___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfont_mem___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfont_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfont_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfont_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfont_mem___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfont_mem___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfont_mem___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfont_mem::final() {
    Vfont_mem___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfont_mem::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfont_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vfont_mem___024root__traceInitTop(Vfont_mem___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfont_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfont_mem___024root*>(voidSelf);
    Vfont_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vfont_mem___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vfont_mem___024root__traceRegister(Vfont_mem___024root* vlSelf, VerilatedVcd* tracep);

void Vfont_mem::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vfont_mem___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
