// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFulladder1.h"
#include "VFulladder1__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFulladder1::VFulladder1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFulladder1__Syms(_vcontextp__, _vcname__, this)}
    , c{vlSymsp->TOP.c}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , cip1{vlSymsp->TOP.cip1}
    , rootp{&(vlSymsp->TOP)}
{
}

VFulladder1::VFulladder1(const char* _vcname__)
    : VFulladder1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFulladder1::~VFulladder1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFulladder1___024root___eval_initial(VFulladder1___024root* vlSelf);
void VFulladder1___024root___eval_settle(VFulladder1___024root* vlSelf);
void VFulladder1___024root___eval(VFulladder1___024root* vlSelf);
QData VFulladder1___024root___change_request(VFulladder1___024root* vlSelf);
#ifdef VL_DEBUG
void VFulladder1___024root___eval_debug_assertions(VFulladder1___024root* vlSelf);
#endif  // VL_DEBUG
void VFulladder1___024root___final(VFulladder1___024root* vlSelf);

static void _eval_initial_loop(VFulladder1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFulladder1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFulladder1___024root___eval_settle(&(vlSymsp->TOP));
        VFulladder1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFulladder1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Fulladder1.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFulladder1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFulladder1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFulladder1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFulladder1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFulladder1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFulladder1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Fulladder1.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFulladder1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VFulladder1::final() {
    VFulladder1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VFulladder1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFulladder1::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VFulladder1___024root__traceInitTop(VFulladder1___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFulladder1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFulladder1___024root*>(voidSelf);
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFulladder1___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VFulladder1___024root__traceRegister(VFulladder1___024root* vlSelf, VerilatedVcd* tracep);

void VFulladder1::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VFulladder1___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
