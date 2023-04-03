// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(operand_a_i,3,0);
    VL_IN8(operand_b_i,3,0);
    VL_OUT8(mul_4_o,7,0);
    CData/*3:0*/ top__DOT__dut__DOT__addend_01;
    CData/*3:0*/ top__DOT__dut__DOT__augend_01;
    CData/*3:0*/ top__DOT__dut__DOT__addend_02;
    CData/*3:0*/ top__DOT__dut__DOT__augend_02;
    CData/*3:0*/ top__DOT__dut__DOT__addend_03;
    CData/*3:0*/ top__DOT__dut__DOT__augend_03;
    CData/*3:0*/ top__DOT__dut__DOT__AD1__DOT__tmp_sum;
    CData/*0:0*/ top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry;
    CData/*3:0*/ top__DOT__dut__DOT__AD2__DOT__tmp_sum;
    CData/*0:0*/ top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry;
    CData/*3:0*/ top__DOT__dut__DOT__AD3__DOT__tmp_sum;
    CData/*0:0*/ top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
