// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode416.h for the primary calling header

#include "Vdecode416___024root.h"
#include "Vdecode416__Syms.h"

//==========


void Vdecode416___024root___ctor_var_reset(Vdecode416___024root* vlSelf);

Vdecode416___024root::Vdecode416___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdecode416___024root___ctor_var_reset(this);
}

void Vdecode416___024root::__Vconfigure(Vdecode416__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdecode416___024root::~Vdecode416___024root() {
}

void Vdecode416___024root___eval_initial(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___eval_initial\n"); );
}

void Vdecode416___024root___combo__TOP__1(Vdecode416___024root* vlSelf);

void Vdecode416___024root___eval_settle(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___eval_settle\n"); );
    // Body
    Vdecode416___024root___combo__TOP__1(vlSelf);
}

void Vdecode416___024root___final(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___final\n"); );
}

void Vdecode416___024root___ctor_var_reset(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = VL_RAND_RESET_I(4);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(16);
    vlSelf->decode416__DOT__i = VL_RAND_RESET_I(32);
}
