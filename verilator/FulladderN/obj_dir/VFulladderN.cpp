// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFulladderN.h"
#include "VFulladderN__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFulladderN::VFulladderN(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFulladderN__Syms(_vcontextp__, _vcname__, this)}
    , in_x{vlSymsp->TOP.in_x}
    , in_y{vlSymsp->TOP.in_y}
    , out_s{vlSymsp->TOP.out_s}
    , out_c{vlSymsp->TOP.out_c}
    , rootp{&(vlSymsp->TOP)}
{
}

VFulladderN::VFulladderN(const char* _vcname__)
    : VFulladderN(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFulladderN::~VFulladderN() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFulladderN___024root___eval_initial(VFulladderN___024root* vlSelf);
void VFulladderN___024root___eval_settle(VFulladderN___024root* vlSelf);
void VFulladderN___024root___eval(VFulladderN___024root* vlSelf);
QData VFulladderN___024root___change_request(VFulladderN___024root* vlSelf);
#ifdef VL_DEBUG
void VFulladderN___024root___eval_debug_assertions(VFulladderN___024root* vlSelf);
#endif  // VL_DEBUG
void VFulladderN___024root___final(VFulladderN___024root* vlSelf);

static void _eval_initial_loop(VFulladderN__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFulladderN___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFulladderN___024root___eval_settle(&(vlSymsp->TOP));
        VFulladderN___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFulladderN___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FulladderN.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFulladderN___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFulladderN::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFulladderN::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFulladderN___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFulladderN___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFulladderN___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FulladderN.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFulladderN___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VFulladderN::final() {
    VFulladderN___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VFulladderN::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFulladderN::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VFulladderN___024root__traceInitTop(VFulladderN___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFulladderN___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFulladderN___024root*>(voidSelf);
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFulladderN___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VFulladderN___024root__traceRegister(VFulladderN___024root* vlSelf, VerilatedVcd* tracep);

void VFulladderN::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VFulladderN___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
