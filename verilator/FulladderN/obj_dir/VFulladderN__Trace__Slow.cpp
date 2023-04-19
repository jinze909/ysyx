// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFulladderN__Syms.h"


void VFulladderN___024root__traceInitSub0(VFulladderN___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VFulladderN___024root__traceInitTop(VFulladderN___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VFulladderN___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VFulladderN___024root__traceInitSub0(VFulladderN___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declQuad(c+1,"in_x", false,-1, 63,0);
        tracep->declQuad(c+3,"in_y", false,-1, 63,0);
        tracep->declQuad(c+5,"out_s", false,-1, 63,0);
        tracep->declBit(c+7,"out_c", false,-1);
        tracep->declQuad(c+1,"FulladderN in_x", false,-1, 63,0);
        tracep->declQuad(c+3,"FulladderN in_y", false,-1, 63,0);
        tracep->declQuad(c+5,"FulladderN out_s", false,-1, 63,0);
        tracep->declBit(c+7,"FulladderN out_c", false,-1);
    }
}

void VFulladderN___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VFulladderN___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VFulladderN___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VFulladderN___024root__traceRegister(VFulladderN___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VFulladderN___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VFulladderN___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VFulladderN___024root__traceCleanup, vlSelf);
    }
}

void VFulladderN___024root__traceFullSub0(VFulladderN___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VFulladderN___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VFulladderN___024root* const __restrict vlSelf = static_cast<VFulladderN___024root*>(voidSelf);
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VFulladderN___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VFulladderN___024root__traceFullSub0(VFulladderN___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFulladderN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->in_x),64);
        tracep->fullQData(oldp+3,(vlSelf->in_y),64);
        tracep->fullQData(oldp+5,(vlSelf->out_s),64);
        tracep->fullBit(oldp+7,(vlSelf->out_c));
    }
}
