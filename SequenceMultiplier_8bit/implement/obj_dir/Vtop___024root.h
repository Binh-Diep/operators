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
    VL_IN8(M_i,4,0);
    VL_IN8(N_i,4,0);
    VL_OUT8(result_o,7,0);
    CData/*0:0*/ top__DOT__dut__DOT__flag_less_load;
    CData/*0:0*/ top__DOT__dut__DOT__flag_equal_load;
    CData/*0:0*/ top__DOT__dut__DOT__flag_less_shift;
    CData/*0:0*/ top__DOT__dut__DOT__flag_equal_shift;
    CData/*5:0*/ top__DOT__dut__DOT__A_tmp;
    CData/*5:0*/ top__DOT__dut__DOT__Q_tmp;
    CData/*5:0*/ top__DOT__dut__DOT__M_tmp;
    CData/*2:0*/ top__DOT__dut__DOT__count;
    CData/*2:0*/ top__DOT__dut__DOT__current_state;
    CData/*3:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub;
    CData/*0:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry;
    CData/*3:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub;
    CData/*0:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry;
    CData/*3:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub;
    CData/*0:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry;
    CData/*3:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub;
    CData/*0:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry;
    CData/*3:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum;
    CData/*0:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry;
    CData/*3:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum;
    CData/*0:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry;
    CData/*0:0*/ top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    SData/*8:0*/ top__DOT__dut__DOT__sum_01;
    SData/*12:0*/ top__DOT__dut__DOT__REG;
    SData/*8:0*/ top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value;
    SData/*8:0*/ top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value;
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
