// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFulladder1__Syms.h"


void VFulladder1___024root__traceInitSub0(VFulladder1___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VFulladder1___024root__traceInitTop(VFulladder1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VFulladder1___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VFulladder1___024root__traceInitSub0(VFulladder1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"c", false,-1);
        tracep->declBit(c+2,"a", false,-1);
        tracep->declBit(c+3,"b", false,-1);
        tracep->declBit(c+4,"s", false,-1);
        tracep->declBit(c+5,"cip1", false,-1);
        tracep->declBit(c+1,"Fulladder1 c", false,-1);
        tracep->declBit(c+2,"Fulladder1 a", false,-1);
        tracep->declBit(c+3,"Fulladder1 b", false,-1);
        tracep->declBit(c+4,"Fulladder1 s", false,-1);
        tracep->declBit(c+5,"Fulladder1 cip1", false,-1);
    }
}

void VFulladder1___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VFulladder1___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VFulladder1___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VFulladder1___024root__traceRegister(VFulladder1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VFulladder1___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VFulladder1___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VFulladder1___024root__traceCleanup, vlSelf);
    }
}

void VFulladder1___024root__traceFullSub0(VFulladder1___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VFulladder1___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VFulladder1___024root* const __restrict vlSelf = static_cast<VFulladder1___024root*>(voidSelf);
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VFulladder1___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VFulladder1___024root__traceFullSub0(VFulladder1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->c));
        tracep->fullBit(oldp+2,(vlSelf->a));
        tracep->fullBit(oldp+3,(vlSelf->b));
        tracep->fullBit(oldp+4,(vlSelf->s));
        tracep->fullBit(oldp+5,(vlSelf->cip1));
    }
}
