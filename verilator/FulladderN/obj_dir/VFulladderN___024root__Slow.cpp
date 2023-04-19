// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFulladderN.h for the primary calling header

#include "VFulladderN___024root.h"
#include "VFulladderN__Syms.h"

//==========


void VFulladderN___024root___ctor_var_reset(VFulladderN___024root* vlSelf);

VFulladderN___024root::VFulladderN___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFulladderN___024root___ctor_var_reset(this);
}

void VFulladderN___024root::__Vconfigure(VFulladderN__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFulladderN___024root::~VFulladderN___024root() {
}

void VFulladderN___024root___eval_initial(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___eval_initial\n"); );
}

void VFulladderN___024root___combo__TOP__1(VFulladderN___024root* vlSelf);

void VFulladderN___024root___eval_settle(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___eval_settle\n"); );
    // Body
    VFulladderN___024root___combo__TOP__1(vlSelf);
}

void VFulladderN___024root___final(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___final\n"); );
}

void VFulladderN___024root___ctor_var_reset(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->in_x = VL_RAND_RESET_Q(64);
    vlSelf->in_y = VL_RAND_RESET_Q(64);
    vlSelf->out_s = VL_RAND_RESET_Q(64);
    vlSelf->out_c = VL_RAND_RESET_I(1);
}
