// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFulladderN.h for the primary calling header

#ifndef VERILATED_VFULLADDERN___024ROOT_H_
#define VERILATED_VFULLADDERN___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VFulladderN__Syms;
class VFulladderN_VerilatedVcd;


//----------

VL_MODULE(VFulladderN___024root) {
  public:

    // PORTS
    VL_OUT8(out_c,0,0);
    VL_IN64(in_x,63,0);
    VL_IN64(in_y,63,0);
    VL_OUT64(out_s,63,0);

    // INTERNAL VARIABLES
    VFulladderN__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFulladderN___024root);  ///< Copying not allowed
  public:
    VFulladderN___024root(const char* name);
    ~VFulladderN___024root();

    // INTERNAL METHODS
    void __Vconfigure(VFulladderN__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
