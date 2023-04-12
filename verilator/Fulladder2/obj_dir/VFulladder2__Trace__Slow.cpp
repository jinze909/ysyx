// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFulladder2__Syms.h"


void VFulladder2___024root__traceInitSub0(VFulladder2___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VFulladder2___024root__traceInitTop(VFulladder2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VFulladder2___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VFulladder2___024root__traceInitSub0(VFulladder2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"c0", false,-1);
        tracep->declBit(c+2,"a0", false,-1);
        tracep->declBit(c+3,"b0", false,-1);
        tracep->declBit(c+4,"a1", false,-1);
        tracep->declBit(c+5,"b1", false,-1);
        tracep->declBit(c+6,"s0", false,-1);
        tracep->declBit(c+7,"cip1", false,-1);
        tracep->declBit(c+8,"s1", false,-1);
        tracep->declBit(c+9,"cip2", false,-1);
        tracep->declBit(c+1,"Fulladder2 c0", false,-1);
        tracep->declBit(c+2,"Fulladder2 a0", false,-1);
        tracep->declBit(c+3,"Fulladder2 b0", false,-1);
        tracep->declBit(c+4,"Fulladder2 a1", false,-1);
        tracep->declBit(c+5,"Fulladder2 b1", false,-1);
        tracep->declBit(c+6,"Fulladder2 s0", false,-1);
        tracep->declBit(c+7,"Fulladder2 cip1", false,-1);
        tracep->declBit(c+8,"Fulladder2 s1", false,-1);
        tracep->declBit(c+9,"Fulladder2 cip2", false,-1);
    }
}

void VFulladder2___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VFulladder2___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VFulladder2___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VFulladder2___024root__traceRegister(VFulladder2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VFulladder2___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VFulladder2___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VFulladder2___024root__traceCleanup, vlSelf);
    }
}

void VFulladder2___024root__traceFullSub0(VFulladder2___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VFulladder2___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VFulladder2___024root* const __restrict vlSelf = static_cast<VFulladder2___024root*>(voidSelf);
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VFulladder2___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VFulladder2___024root__traceFullSub0(VFulladder2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladder2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->c0));
        tracep->fullBit(oldp+2,(vlSelf->a0));
        tracep->fullBit(oldp+3,(vlSelf->b0));
        tracep->fullBit(oldp+4,(vlSelf->a1));
        tracep->fullBit(oldp+5,(vlSelf->b1));
        tracep->fullBit(oldp+6,(vlSelf->s0));
        tracep->fullBit(oldp+7,(vlSelf->cip1));
        tracep->fullBit(oldp+8,(vlSelf->s1));
        tracep->fullBit(oldp+9,(vlSelf->cip2));
    }
}
