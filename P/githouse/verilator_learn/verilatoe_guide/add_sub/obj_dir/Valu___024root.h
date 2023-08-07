// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;
class Valu___024unit;


class Valu___024root final : public VerilatedModule {
  public:
    // CELLS
    Valu___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(op_in,1,0);
    VL_IN8(a_in,5,0);
    VL_IN8(b_in,5,0);
    VL_IN8(in_valid,0,0);
    VL_OUT8(out,5,0);
    VL_OUT8(out_valid,0,0);
    CData/*1:0*/ alu__DOT__op_in_r;
    CData/*5:0*/ alu__DOT__a_in_r;
    CData/*5:0*/ alu__DOT__b_in_r;
    CData/*0:0*/ alu__DOT__in_valid_r;
    CData/*5:0*/ alu__DOT__result;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
