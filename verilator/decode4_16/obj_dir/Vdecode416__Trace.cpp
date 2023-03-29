// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode416__Syms.h"


void Vdecode416___024root__traceChgSub0(Vdecode416___024root* vlSelf, VerilatedVcd* tracep);

void Vdecode416___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdecode416___024root* const __restrict vlSelf = static_cast<Vdecode416___024root*>(voidSelf);
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vdecode416___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdecode416___024root__traceChgSub0(Vdecode416___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->x),4);
        tracep->chgBit(oldp+1,(vlSelf->en));
        tracep->chgSData(oldp+2,(vlSelf->y),16);
        tracep->chgIData(oldp+3,(vlSelf->decode416__DOT__i),32);
    }
}

void Vdecode416___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vdecode416___024root* const __restrict vlSelf = static_cast<Vdecode416___024root*>(voidSelf);
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
