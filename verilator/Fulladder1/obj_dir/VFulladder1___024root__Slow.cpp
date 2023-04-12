// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFulladder1.h for the primary calling header

#include "VFulladder1___024root.h"
#include "VFulladder1__Syms.h"

//==========


void VFulladder1___024root___ctor_var_reset(VFulladder1___024root* vlSelf);

VFulladder1___024root::VFulladder1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFulladder1___024root___ctor_var_reset(this);
}

void VFulladder1___024root::__Vconfigure(VFulladder1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFulladder1___024root::~VFulladder1___024root() {
}

void VFulladder1___024root___eval_initial(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___eval_initial\n"); );
}

void VFulladder1___024root___combo__TOP__1(VFulladder1___024root* vlSelf);

void VFulladder1___024root___eval_settle(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___eval_settle\n"); );
    // Body
    VFulladder1___024root___combo__TOP__1(vlSelf);
}

void VFulladder1___024root___final(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___final\n"); );
}

void VFulladder1___024root___ctor_var_reset(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->c = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(1);
    vlSelf->cip1 = VL_RAND_RESET_I(1);
}
