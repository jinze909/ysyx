// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFulladder2.h for the primary calling header

#include "VFulladder2___024root.h"
#include "VFulladder2__Syms.h"

//==========

VL_INLINE_OPT void VFulladder2___024root___combo__TOP__1(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->s0 = (((IData)(vlSelf->a0) ^ (IData)(vlSelf->b0)) 
                  ^ (IData)(vlSelf->c0));
    vlSelf->cip1 = (((IData)(vlSelf->a0) & (IData)(vlSelf->b0)) 
                    | (((IData)(vlSelf->a0) ^ (IData)(vlSelf->b0)) 
                       & (IData)(vlSelf->c0)));
    vlSelf->s1 = (((IData)(vlSelf->a1) ^ (IData)(vlSelf->b1)) 
                  ^ (IData)(vlSelf->cip1));
    vlSelf->cip2 = (((IData)(vlSelf->a1) & (IData)(vlSelf->b1)) 
                    | (((IData)(vlSelf->a1) ^ (IData)(vlSelf->b1)) 
                       & (IData)(vlSelf->cip1)));
}

void VFulladder2___024root___eval(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___eval\n"); );
    // Body
    VFulladder2___024root___combo__TOP__1(vlSelf);
}

QData VFulladder2___024root___change_request_1(VFulladder2___024root* vlSelf);

VL_INLINE_OPT QData VFulladder2___024root___change_request(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___change_request\n"); );
    // Body
    return (VFulladder2___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VFulladder2___024root___change_request_1(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFulladder2___024root___eval_debug_assertions(VFulladder2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladder2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->c0 & 0xfeU))) {
        Verilated::overWidthError("c0");}
    if (VL_UNLIKELY((vlSelf->a0 & 0xfeU))) {
        Verilated::overWidthError("a0");}
    if (VL_UNLIKELY((vlSelf->b0 & 0xfeU))) {
        Verilated::overWidthError("b0");}
    if (VL_UNLIKELY((vlSelf->a1 & 0xfeU))) {
        Verilated::overWidthError("a1");}
    if (VL_UNLIKELY((vlSelf->b1 & 0xfeU))) {
        Verilated::overWidthError("b1");}
}
#endif  // VL_DEBUG
