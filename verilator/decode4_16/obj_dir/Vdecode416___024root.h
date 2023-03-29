// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode416.h for the primary calling header

#ifndef VERILATED_VDECODE416___024ROOT_H_
#define VERILATED_VDECODE416___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdecode416__Syms;
class Vdecode416_VerilatedVcd;


//----------

VL_MODULE(Vdecode416___024root) {
  public:

    // PORTS
    VL_IN8(x,3,0);
    VL_IN8(en,0,0);
    VL_OUT16(y,15,0);

    // LOCAL SIGNALS
    IData/*31:0*/ decode416__DOT__i;

    // INTERNAL VARIABLES
    Vdecode416__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdecode416___024root);  ///< Copying not allowed
  public:
    Vdecode416___024root(const char* name);
    ~Vdecode416___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdecode416__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
