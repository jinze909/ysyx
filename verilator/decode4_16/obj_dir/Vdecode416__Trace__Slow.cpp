// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode416__Syms.h"


void Vdecode416___024root__traceInitSub0(Vdecode416___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecode416___024root__traceInitTop(Vdecode416___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecode416___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vdecode416___024root__traceInitSub0(Vdecode416___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"x", false,-1, 3,0);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBus(c+3,"y", false,-1, 15,0);
        tracep->declBus(c+1,"decode416 x", false,-1, 3,0);
        tracep->declBit(c+2,"decode416 en", false,-1);
        tracep->declBus(c+3,"decode416 y", false,-1, 15,0);
        tracep->declBus(c+4,"decode416 i", false,-1, 31,0);
    }
}

void Vdecode416___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vdecode416___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vdecode416___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vdecode416___024root__traceRegister(Vdecode416___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vdecode416___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vdecode416___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vdecode416___024root__traceCleanup, vlSelf);
    }
}

void Vdecode416___024root__traceFullSub0(Vdecode416___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecode416___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdecode416___024root* const __restrict vlSelf = static_cast<Vdecode416___024root*>(voidSelf);
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecode416___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdecode416___024root__traceFullSub0(Vdecode416___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode416__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->x),4);
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullSData(oldp+3,(vlSelf->y),16);
        tracep->fullIData(oldp+4,(vlSelf->decode416__DOT__i),32);
    }
}
