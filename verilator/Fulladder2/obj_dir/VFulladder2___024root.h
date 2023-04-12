// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFulladder2.h for the primary calling header

#ifndef VERILATED_VFULLADDER2___024ROOT_H_
#define VERILATED_VFULLADDER2___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VFulladder2__Syms;
class VFulladder2_VerilatedVcd;


//----------

VL_MODULE(VFulladder2___024root) {
  public:

    // PORTS
    VL_IN8(c0,0,0);
    VL_IN8(a0,0,0);
    VL_IN8(b0,0,0);
    VL_IN8(a1,0,0);
    VL_IN8(b1,0,0);
    VL_OUT8(s0,0,0);
    VL_OUT8(cip1,0,0);
    VL_OUT8(s1,0,0);
    VL_OUT8(cip2,0,0);

    // INTERNAL VARIABLES
    VFulladder2__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFulladder2___024root);  ///< Copying not allowed
  public:
    VFulladder2___024root(const char* name);
    ~VFulladder2___024root();

    // INTERNAL METHODS
    void __Vconfigure(VFulladder2__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
