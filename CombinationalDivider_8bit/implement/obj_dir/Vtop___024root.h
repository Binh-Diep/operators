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
    VL_IN8(dividend_i,7,0);
    VL_IN8(divisor_i,3,0);
    VL_OUT8(quotient_o,7,0);
    VL_OUT8(remainder_o,4,0);
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_0;
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_1;
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_2;
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_3;
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_4;
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_5;
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_6;
    CData/*0:0*/ top__DOT__dut__DOT__tmp_sel_7;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d0;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d1;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d2;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d3;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d4;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d5;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d6;
    CData/*4:0*/ top__DOT__dut__DOT__tmp_d7;
    CData/*4:0*/ top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i;
    CData/*4:0*/ top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i;
    CData/*4:0*/ top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i;
    CData/*4:0*/ top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i;
    CData/*4:0*/ top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i;
    CData/*4:0*/ top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i;
    CData/*4:0*/ top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i;
    CData/*0:0*/ top__DOT__dut__DOT__row_01__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_01__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_01__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_01__DOT__b5bit_4;
    CData/*0:0*/ top__DOT__dut__DOT__row_02__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_02__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_02__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_02__DOT__b5bit_4;
    CData/*0:0*/ top__DOT__dut__DOT__row_03__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_03__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_03__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_03__DOT__b5bit_4;
    CData/*0:0*/ top__DOT__dut__DOT__row_04__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_04__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_04__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_04__DOT__b5bit_4;
    CData/*0:0*/ top__DOT__dut__DOT__row_05__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_05__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_05__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_05__DOT__b5bit_4;
    CData/*0:0*/ top__DOT__dut__DOT__row_06__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_06__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_06__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_06__DOT__b5bit_4;
    CData/*0:0*/ top__DOT__dut__DOT__row_07__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_07__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_07__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_07__DOT__b5bit_4;
    CData/*0:0*/ top__DOT__dut__DOT__row_08__DOT__b5bit_1;
    CData/*0:0*/ top__DOT__dut__DOT__row_08__DOT__b5bit_2;
    CData/*0:0*/ top__DOT__dut__DOT__row_08__DOT__b5bit_3;
    CData/*0:0*/ top__DOT__dut__DOT__row_08__DOT__b5bit_4;
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
