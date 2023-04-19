// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFulladderN.h for the primary calling header

#include "VFulladderN___024root.h"
#include "VFulladderN__Syms.h"

//==========

VL_INLINE_OPT void VFulladderN___024root___combo__TOP__1(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___combo__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->in_x);
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->in_y);
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    vlSelf->out_c = (1U & __Vtemp4[2U]);
    vlSelf->out_s = (vlSelf->in_x + vlSelf->in_y);
    vlSelf->out_s = (vlSelf->in_x + vlSelf->in_y);
}

void VFulladderN___024root___eval(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___eval\n"); );
    // Body
    VFulladderN___024root___combo__TOP__1(vlSelf);
}

QData VFulladderN___024root___change_request_1(VFulladderN___024root* vlSelf);

VL_INLINE_OPT QData VFulladderN___024root___change_request(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___change_request\n"); );
    // Body
    return (VFulladderN___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VFulladderN___024root___change_request_1(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFulladderN___024root___eval_debug_assertions(VFulladderN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFulladderN___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
