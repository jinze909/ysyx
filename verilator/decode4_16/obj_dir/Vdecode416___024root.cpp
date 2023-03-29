// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode416.h for the primary calling header

#include "Vdecode416___024root.h"
#include "Vdecode416__Syms.h"

//==========

VL_INLINE_OPT void Vdecode416___024root___combo__TOP__1(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___combo__TOP__1\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->decode416__DOT__i = 0x10U;
    }
    if (vlSelf->en) {
        vlSelf->y = ((0xfff8U & (IData)(vlSelf->y)) 
                     | (((2U == (IData)(vlSelf->x)) 
                         << 2U) | (((1U == (IData)(vlSelf->x)) 
                                    << 1U) | (0U == (IData)(vlSelf->x)))));
        vlSelf->y = ((0xffc7U & (IData)(vlSelf->y)) 
                     | (((5U == (IData)(vlSelf->x)) 
                         << 5U) | (((4U == (IData)(vlSelf->x)) 
                                    << 4U) | ((3U == (IData)(vlSelf->x)) 
                                              << 3U))));
        vlSelf->y = ((0xfe3fU & (IData)(vlSelf->y)) 
                     | (((8U == (IData)(vlSelf->x)) 
                         << 8U) | (((7U == (IData)(vlSelf->x)) 
                                    << 7U) | ((6U == (IData)(vlSelf->x)) 
                                              << 6U))));
        vlSelf->y = ((0xf1ffU & (IData)(vlSelf->y)) 
                     | (((0xbU == (IData)(vlSelf->x)) 
                         << 0xbU) | (((0xaU == (IData)(vlSelf->x)) 
                                      << 0xaU) | ((9U 
                                                   == (IData)(vlSelf->x)) 
                                                  << 9U))));
        vlSelf->y = ((0x8fffU & (IData)(vlSelf->y)) 
                     | (((0xeU == (IData)(vlSelf->x)) 
                         << 0xeU) | (((0xdU == (IData)(vlSelf->x)) 
                                      << 0xdU) | ((0xcU 
                                                   == (IData)(vlSelf->x)) 
                                                  << 0xcU))));
        vlSelf->y = ((0x7fffU & (IData)(vlSelf->y)) 
                     | ((0xfU == (IData)(vlSelf->x)) 
                        << 0xfU));
    } else {
        vlSelf->y = 0U;
    }
}

void Vdecode416___024root___eval(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___eval\n"); );
    // Body
    Vdecode416___024root___combo__TOP__1(vlSelf);
}

QData Vdecode416___024root___change_request_1(Vdecode416___024root* vlSelf);

VL_INLINE_OPT QData Vdecode416___024root___change_request(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___change_request\n"); );
    // Body
    return (Vdecode416___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdecode416___024root___change_request_1(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdecode416___024root___eval_debug_assertions(Vdecode416___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode416___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x & 0xf0U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
