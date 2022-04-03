// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbcd7seg.h"
#include "Vbcd7seg__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbcd7seg::Vbcd7seg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vbcd7seg__Syms(_vcontextp__, _vcname__, this)}
    , process_key__02Eclk{vlSymsp->TOP.process_key__02Eclk}
    , process_key__02Eclrn{vlSymsp->TOP.process_key__02Eclrn}
    , data{vlSymsp->TOP.data}
    , process_key__02Eready{vlSymsp->TOP.process_key__02Eready}
    , ascii{vlSymsp->TOP.ascii}
    , process_key__02Enextdata_n{vlSymsp->TOP.process_key__02Enextdata_n}
    , count{vlSymsp->TOP.count}
    , top__02Eclk{vlSymsp->TOP.top__02Eclk}
    , top__02Eclrn{vlSymsp->TOP.top__02Eclrn}
    , ps2_clk{vlSymsp->TOP.ps2_clk}
    , ps2_data{vlSymsp->TOP.ps2_data}
    , data0{vlSymsp->TOP.data0}
    , data1{vlSymsp->TOP.data1}
    , ascii0{vlSymsp->TOP.ascii0}
    , ascii1{vlSymsp->TOP.ascii1}
    , count0{vlSymsp->TOP.count0}
    , count1{vlSymsp->TOP.count1}
    , top__02Eready{vlSymsp->TOP.top__02Eready}
    , sampling{vlSymsp->TOP.sampling}
    , overflow{vlSymsp->TOP.overflow}
    , top__02Enextdata_n{vlSymsp->TOP.top__02Enextdata_n}
    , rootp{&(vlSymsp->TOP)}
{
}

Vbcd7seg::Vbcd7seg(const char* _vcname__)
    : Vbcd7seg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vbcd7seg::~Vbcd7seg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbcd7seg___024root___eval_initial(Vbcd7seg___024root* vlSelf);
void Vbcd7seg___024root___eval_settle(Vbcd7seg___024root* vlSelf);
void Vbcd7seg___024root___eval(Vbcd7seg___024root* vlSelf);
QData Vbcd7seg___024root___change_request(Vbcd7seg___024root* vlSelf);
#ifdef VL_DEBUG
void Vbcd7seg___024root___eval_debug_assertions(Vbcd7seg___024root* vlSelf);
#endif  // VL_DEBUG
void Vbcd7seg___024root___final(Vbcd7seg___024root* vlSelf);

static void _eval_initial_loop(Vbcd7seg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbcd7seg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbcd7seg___024root___eval_settle(&(vlSymsp->TOP));
        Vbcd7seg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbcd7seg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/process_key.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbcd7seg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbcd7seg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbcd7seg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbcd7seg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbcd7seg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbcd7seg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/process_key.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbcd7seg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vbcd7seg::final() {
    Vbcd7seg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vbcd7seg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vbcd7seg::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vbcd7seg___024root__traceInitTop(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbcd7seg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbcd7seg___024root*>(voidSelf);
    Vbcd7seg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vbcd7seg___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vbcd7seg___024root__traceRegister(Vbcd7seg___024root* vlSelf, VerilatedVcd* tracep);

void Vbcd7seg::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vbcd7seg___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
