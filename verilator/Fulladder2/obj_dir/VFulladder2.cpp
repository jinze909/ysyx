// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFulladder2.h"
#include "VFulladder2__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFulladder2::VFulladder2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFulladder2__Syms(_vcontextp__, _vcname__, this)}
    , c0{vlSymsp->TOP.c0}
    , a0{vlSymsp->TOP.a0}
    , b0{vlSymsp->TOP.b0}
    , a1{vlSymsp->TOP.a1}
    , b1{vlSymsp->TOP.b1}
    , s0{vlSymsp->TOP.s0}
    , cip1{vlSymsp->TOP.cip1}
    , s1{vlSymsp->TOP.s1}
    , cip2{vlSymsp->TOP.cip2}
    , rootp{&(vlSymsp->TOP)}
{
}

VFulladder2::VFulladder2(const char* _vcname__)
    : VFulladder2(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFulladder2::~VFulladder2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFulladder2___024root___eval_initial(VFulladder2___024root* vlSelf);
void VFulladder2___024root___eval_settle(VFulladder2___024root* vlSelf);
void VFulladder2___024root___eval(VFulladder2___024root* vlSelf);
QData VFulladder2___024root___change_request(VFulladder2___024root* vlSelf);
#ifdef VL_DEBUG
void VFulladder2___024root___eval_debug_assertions(VFulladder2___024root* vlSelf);
#endif  // VL_DEBUG
void VFulladder2___024root___final(VFulladder2___024root* vlSelf);

static void _eval_initial_loop(VFulladder2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFulladder2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFulladder2___024root___eval_settle(&(vlSymsp->TOP));
        VFulladder2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFulladder2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Fulladder2.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFulladder2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFulladder2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFulladder2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFulladder2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFulladder2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFulladder2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Fulladder2.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFulladder2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VFulladder2::final() {
    VFulladder2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VFulladder2::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFulladder2::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VFulladder2___024root__traceInitTop(VFulladder2___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFulladder2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFulladder2___024root*>(voidSelf);
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFulladder2___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VFulladder2___024root__traceRegister(VFulladder2___024root* vlSelf, VerilatedVcd* tracep);

void VFulladder2::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VFulladder2___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
