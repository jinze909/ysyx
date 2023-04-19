// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFulladderN__Syms.h"


void VFulladderN___024root__traceChgSub0(VFulladderN___024root* vlSelf, VerilatedVcd* tracep);

void VFulladderN___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VFulladderN___024root* const __restrict vlSelf = static_cast<VFulladderN___024root*>(voidSelf);
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VFulladderN___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VFulladderN___024root__traceChgSub0(VFulladderN___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgQData(oldp+0,(vlSelf->in_x),64);
        tracep->chgQData(oldp+2,(vlSelf->in_y),64);
        tracep->chgQData(oldp+4,(vlSelf->out_s),64);
        tracep->chgBit(oldp+6,(vlSelf->out_c));
    }
}

void VFulladderN___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VFulladderN___024root* const __restrict vlSelf = static_cast<VFulladderN___024root*>(voidSelf);
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
