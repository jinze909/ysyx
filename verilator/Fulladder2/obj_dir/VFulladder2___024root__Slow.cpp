// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFulladder2.h for the primary calling header

#include "VFulladder2___024root.h"
#include "VFulladder2__Syms.h"

//==========


void VFulladder2___024root___ctor_var_reset(VFulladder2___024root* vlSelf);

VFulladder2___024root::VFulladder2___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFulladder2___024root___ctor_var_reset(this);
}

void VFulladder2___024root::__Vconfigure(VFulladder2__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFulladder2___024root::~VFulladder2___024root() {
}

void VFulladder2___024root___eval_initial(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___eval_initial\n"); );
}

void VFulladder2___024root___combo__TOP__1(VFulladder2___024root* vlSelf);

void VFulladder2___024root___eval_settle(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___eval_settle\n"); );
    // Body
    VFulladder2___024root___combo__TOP__1(vlSelf);
}

void VFulladder2___024root___final(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___final\n"); );
}

void VFulladder2___024root___ctor_var_reset(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->c0 = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(1);
    vlSelf->b0 = VL_RAND_RESET_I(1);
    vlSelf->a1 = VL_RAND_RESET_I(1);
    vlSelf->b1 = VL_RAND_RESET_I(1);
    vlSelf->s0 = VL_RAND_RESET_I(1);
    vlSelf->cip1 = VL_RAND_RESET_I(1);
    vlSelf->s1 = VL_RAND_RESET_I(1);
    vlSelf->cip2 = VL_RAND_RESET_I(1);
}
