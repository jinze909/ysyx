// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFulladder1__Syms.h"


void VFulladder1___024root__traceChgSub0(VFulladder1___024root* vlSelf, VerilatedVcd* tracep);

void VFulladder1___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VFulladder1___024root* const __restrict vlSelf = static_cast<VFulladder1___024root*>(voidSelf);
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VFulladder1___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VFulladder1___024root__traceChgSub0(VFulladder1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->c));
        tracep->chgBit(oldp+1,(vlSelf->a));
        tracep->chgBit(oldp+2,(vlSelf->b));
        tracep->chgBit(oldp+3,(vlSelf->s));
        tracep->chgBit(oldp+4,(vlSelf->cip1));
    }
}

void VFulladder1___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VFulladder1___024root* const __restrict vlSelf = static_cast<VFulladder1___024root*>(voidSelf);
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
