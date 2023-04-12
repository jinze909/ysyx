// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFulladder1.h for the primary calling header

#include "VFulladder1___024root.h"
#include "VFulladder1__Syms.h"

//==========

VL_INLINE_OPT void VFulladder1___024root___combo__TOP__1(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->s = (((IData)(vlSelf->a) ^ (IData)(vlSelf->b)) 
                 ^ (IData)(vlSelf->c));
    vlSelf->cip1 = (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                    | (((IData)(vlSelf->a) ^ (IData)(vlSelf->b)) 
                       & (IData)(vlSelf->c)));
}

void VFulladder1___024root___eval(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___eval\n"); );
    // Body
    VFulladder1___024root___combo__TOP__1(vlSelf);
}

QData VFulladder1___024root___change_request_1(VFulladder1___024root* vlSelf);

VL_INLINE_OPT QData VFulladder1___024root___change_request(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___change_request\n"); );
    // Body
    return (VFulladder1___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VFulladder1___024root___change_request_1(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFulladder1___024root___eval_debug_assertions(VFulladder1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->c & 0xfeU))) {
        Verilated::overWidthError("c");}
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
