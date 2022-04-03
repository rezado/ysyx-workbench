// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclkgen.h"
#include "Vclkgen__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vclkgen::Vclkgen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vclkgen__Syms(_vcontextp__, _vcname__, this)}
    , clkin{vlSymsp->TOP.clkin}
    , clkgen__02Erst{vlSymsp->TOP.clkgen__02Erst}
    , clken{vlSymsp->TOP.clken}
    , clkout{vlSymsp->TOP.clkout}
    , clk{vlSymsp->TOP.clk}
    , top__02Erst{vlSymsp->TOP.top__02Erst}
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

Vclkgen::Vclkgen(const char* _vcname__)
    : Vclkgen(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vclkgen::~Vclkgen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vclkgen___024root___eval_initial(Vclkgen___024root* vlSelf);
void Vclkgen___024root___eval_settle(Vclkgen___024root* vlSelf);
void Vclkgen___024root___eval(Vclkgen___024root* vlSelf);
QData Vclkgen___024root___change_request(Vclkgen___024root* vlSelf);
#ifdef VL_DEBUG
void Vclkgen___024root___eval_debug_assertions(Vclkgen___024root* vlSelf);
#endif  // VL_DEBUG
void Vclkgen___024root___final(Vclkgen___024root* vlSelf);

static void _eval_initial_loop(Vclkgen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vclkgen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vclkgen___024root___eval_settle(&(vlSymsp->TOP));
        Vclkgen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vclkgen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/clkgen.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vclkgen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vclkgen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclkgen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclkgen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vclkgen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vclkgen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/clkgen.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vclkgen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vclkgen::final() {
    Vclkgen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vclkgen::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vclkgen::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vclkgen___024root__traceInitTop(Vclkgen___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vclkgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclkgen___024root*>(voidSelf);
    Vclkgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vclkgen___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vclkgen___024root__traceRegister(Vclkgen___024root* vlSelf, VerilatedVcd* tracep);

void Vclkgen::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vclkgen___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
