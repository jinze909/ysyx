// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFulladder1.h for the primary calling header

#ifndef VERILATED_VFULLADDER1___024ROOT_H_
#define VERILATED_VFULLADDER1___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VFulladder1__Syms;
class VFulladder1_VerilatedVcd;


//----------

VL_MODULE(VFulladder1___024root) {
  public:

    // PORTS
    VL_IN8(c,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(s,0,0);
    VL_OUT8(cip1,0,0);

    // INTERNAL VARIABLES
    VFulladder1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFulladder1___024root);  ///< Copying not allowed
  public:
    VFulladder1___024root(const char* name);
    ~VFulladder1___024root();

    // INTERNAL METHODS
    void __Vconfigure(VFulladder1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
