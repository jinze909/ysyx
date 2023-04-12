// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFulladder2__Syms.h"


void VFulladder2___024root__traceChgSub0(VFulladder2___024root* vlSelf, VerilatedVcd* tracep);

void VFulladder2___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VFulladder2___024root* const __restrict vlSelf = static_cast<VFulladder2___024root*>(voidSelf);
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VFulladder2___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VFulladder2___024root__traceChgSub0(VFulladder2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->c0));
        tracep->chgBit(oldp+1,(vlSelf->a0));
        tracep->chgBit(oldp+2,(vlSelf->b0));
        tracep->chgBit(oldp+3,(vlSelf->a1));
        tracep->chgBit(oldp+4,(vlSelf->b1));
        tracep->chgBit(oldp+5,(vlSelf->s0));
        tracep->chgBit(oldp+6,(vlSelf->cip1));
        tracep->chgBit(oldp+7,(vlSelf->s1));
        tracep->chgBit(oldp+8,(vlSelf->cip2));
    }
}

void VFulladder2___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VFulladder2___024root* const __restrict vlSelf = static_cast<VFulladder2___024root*>(voidSelf);
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
