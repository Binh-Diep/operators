// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->dividend_i = VL_RAND_RESET_I(8);
    vlSelf->divisor_i = VL_RAND_RESET_I(4);
    vlSelf->quotient_o = VL_RAND_RESET_I(8);
    vlSelf->remainder_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_sel_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_sel_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_sel_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_sel_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_sel_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_sel_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_sel_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_sel_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__tmp_d0 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_d1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_d2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_d3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_d4 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_d5 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_d6 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__tmp_d7 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_4 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
