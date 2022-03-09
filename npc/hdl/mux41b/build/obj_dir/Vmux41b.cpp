// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux41b.h"
#include "Vmux41b__Syms.h"

//============================================================
// Constructors

Vmux41b::Vmux41b(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmux41b__Syms(_vcontextp__, _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , y{vlSymsp->TOP.y}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmux41b::Vmux41b(const char* _vcname__)
    : Vmux41b(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmux41b::~Vmux41b() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux41b___024root___eval_initial(Vmux41b___024root* vlSelf);
void Vmux41b___024root___eval_settle(Vmux41b___024root* vlSelf);
void Vmux41b___024root___eval(Vmux41b___024root* vlSelf);
QData Vmux41b___024root___change_request(Vmux41b___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux41b___024root___eval_debug_assertions(Vmux41b___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41b___024root___final(Vmux41b___024root* vlSelf);

static void _eval_initial_loop(Vmux41b__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux41b___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux41b___024root___eval_settle(&(vlSymsp->TOP));
        Vmux41b___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/bill/ysyx-workbench/npc/hdl/mux41b/vsrc/mux41b.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmux41b::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux41b::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux41b___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux41b___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/bill/ysyx-workbench/npc/hdl/mux41b/vsrc/mux41b.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmux41b::final() {
    Vmux41b___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmux41b::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmux41b::name() const {
    return vlSymsp->name();
}
