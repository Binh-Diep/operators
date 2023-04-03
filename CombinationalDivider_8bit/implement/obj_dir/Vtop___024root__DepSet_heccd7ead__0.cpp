// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_1 
        = (1U & ((~ ((IData)(vlSelf->dividend_i) >> 7U)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_2 
        = (1U & (((IData)(vlSelf->divisor_i) >> 1U) 
                 | ((IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_1) 
                    & (~ ((IData)(vlSelf->divisor_i) 
                          >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_3 
        = (1U & (((IData)(vlSelf->divisor_i) >> 2U) 
                 | ((IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_2) 
                    & (~ ((IData)(vlSelf->divisor_i) 
                          >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_4 
        = (1U & (((IData)(vlSelf->divisor_i) >> 3U) 
                 | ((IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_3) 
                    & (~ ((IData)(vlSelf->divisor_i) 
                          >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_0 = (1U & (IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_4));
    vlSelf->top__DOT__dut__DOT__tmp_d0 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d0)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0) 
                                                    & ((IData)(vlSelf->dividend_i) 
                                                       >> 7U)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                                      & (((IData)(vlSelf->dividend_i) 
                                                          >> 7U) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d0 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d0)) 
                                          | (2U & (
                                                   ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                                    << 1U) 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->divisor_i)) 
                                                      ^ 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_1) 
                                                       << 1U)))));
    vlSelf->top__DOT__dut__DOT__tmp_d0 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d0)) 
                                          | (4U & (
                                                   ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                                    << 2U) 
                                                   & ((0xfffffffcU 
                                                       & (IData)(vlSelf->divisor_i)) 
                                                      ^ 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_2) 
                                                       << 2U)))));
    vlSelf->top__DOT__dut__DOT__tmp_d0 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d0)) 
                                          | (8U & (
                                                   ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                                    << 3U) 
                                                   & ((0xfffffff8U 
                                                       & (IData)(vlSelf->divisor_i)) 
                                                      ^ 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_3) 
                                                       << 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_d0 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d0)) 
                                          | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_4)) 
                                             << 4U));
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i 
        = ((0x1eU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_d0) 
                     << 1U)) | (1U & ((IData)(vlSelf->dividend_i) 
                                      >> 6U)));
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_2 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                      >> 1U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 1U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_1) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_3 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                      >> 2U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 2U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_2) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_4 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                      >> 3U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 3U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_3) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_1 = ((IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_4) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                    ^ (IData)(vlSelf->divisor_i)) 
                                                   >> 4U)));
    vlSelf->top__DOT__dut__DOT__tmp_d1 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d1)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d1 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d1)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                                        << 1U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                       << 1U) 
                                                      & ((0xfffffffeU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_1) 
                                                          << 1U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d1 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d1)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                                        << 2U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                       << 2U) 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_2) 
                                                          << 2U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d1 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d1)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                       << 3U) 
                                                      & ((0xfffffff8U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_3) 
                                                          << 3U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d1 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d1)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                                     << 4U) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i))) 
                                                | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                    & (IData)(
                                                              (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                                >> 4U) 
                                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_4)))) 
                                                   << 4U))));
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i 
        = ((0x1eU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_d1) 
                     << 1U)) | (1U & ((IData)(vlSelf->dividend_i) 
                                      >> 5U)));
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_2 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                      >> 1U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 1U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_1) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_3 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                      >> 2U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 2U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_2) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_4 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                      >> 3U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 3U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_3) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_2 = ((IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_4) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                    ^ (IData)(vlSelf->divisor_i)) 
                                                   >> 4U)));
    vlSelf->top__DOT__dut__DOT__tmp_d2 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d2)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d2 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d2)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                                        << 1U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                       << 1U) 
                                                      & ((0xfffffffeU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_1) 
                                                          << 1U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d2 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d2)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                                        << 2U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                       << 2U) 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_2) 
                                                          << 2U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d2 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d2)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                       << 3U) 
                                                      & ((0xfffffff8U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_3) 
                                                          << 3U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d2 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d2)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                                     << 4U) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i))) 
                                                | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                    & (IData)(
                                                              (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                                >> 4U) 
                                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_4)))) 
                                                   << 4U))));
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i 
        = ((0x1eU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_d2) 
                     << 1U)) | (1U & ((IData)(vlSelf->dividend_i) 
                                      >> 4U)));
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_2 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                      >> 1U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 1U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_1) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_3 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                      >> 2U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 2U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_2) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_4 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                      >> 3U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 3U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_3) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_3 = ((IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_4) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                    ^ (IData)(vlSelf->divisor_i)) 
                                                   >> 4U)));
    vlSelf->top__DOT__dut__DOT__tmp_d3 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d3)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d3 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d3)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                                        << 1U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                       << 1U) 
                                                      & ((0xfffffffeU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_1) 
                                                          << 1U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d3 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d3)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                                        << 2U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                       << 2U) 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_2) 
                                                          << 2U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d3 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d3)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                       << 3U) 
                                                      & ((0xfffffff8U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_3) 
                                                          << 3U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d3 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d3)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                                     << 4U) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i))) 
                                                | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                    & (IData)(
                                                              (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                                >> 4U) 
                                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_4)))) 
                                                   << 4U))));
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i 
        = ((0x1eU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_d3) 
                     << 1U)) | (1U & ((IData)(vlSelf->dividend_i) 
                                      >> 3U)));
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_2 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                      >> 1U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 1U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_1) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_3 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                      >> 2U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 2U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_2) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_4 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                      >> 3U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 3U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_3) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_4 = ((IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_4) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                    ^ (IData)(vlSelf->divisor_i)) 
                                                   >> 4U)));
    vlSelf->top__DOT__dut__DOT__tmp_d4 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d4)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d4 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d4)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                                        << 1U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                       << 1U) 
                                                      & ((0xfffffffeU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_1) 
                                                          << 1U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d4 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d4)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                                        << 2U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                       << 2U) 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_2) 
                                                          << 2U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d4 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d4)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                       << 3U) 
                                                      & ((0xfffffff8U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_3) 
                                                          << 3U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d4 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d4)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                                     << 4U) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i))) 
                                                | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                    & (IData)(
                                                              (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                                >> 4U) 
                                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_4)))) 
                                                   << 4U))));
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i 
        = ((0x1eU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_d4) 
                     << 1U)) | (1U & ((IData)(vlSelf->dividend_i) 
                                      >> 2U)));
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_2 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                      >> 1U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 1U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_1) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_3 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                      >> 2U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 2U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_2) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_4 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                      >> 3U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 3U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_3) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_5 = ((IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_4) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                    ^ (IData)(vlSelf->divisor_i)) 
                                                   >> 4U)));
    vlSelf->top__DOT__dut__DOT__tmp_d5 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d5)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d5 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d5)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                                        << 1U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                       << 1U) 
                                                      & ((0xfffffffeU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_1) 
                                                          << 1U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d5 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d5)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                                        << 2U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                       << 2U) 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_2) 
                                                          << 2U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d5 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d5)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                       << 3U) 
                                                      & ((0xfffffff8U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_3) 
                                                          << 3U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d5 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d5)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                                     << 4U) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i))) 
                                                | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                    & (IData)(
                                                              (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                                >> 4U) 
                                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_4)))) 
                                                   << 4U))));
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i 
        = ((0x1eU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_d5) 
                     << 1U)) | (1U & ((IData)(vlSelf->dividend_i) 
                                      >> 1U)));
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_2 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                      >> 1U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 1U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_1) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_3 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                      >> 2U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 2U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_2) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_4 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                      >> 3U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 3U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_3) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_6 = ((IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_4) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                    ^ (IData)(vlSelf->divisor_i)) 
                                                   >> 4U)));
    vlSelf->top__DOT__dut__DOT__tmp_d6 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d6)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d6 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d6)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                                        << 1U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                       << 1U) 
                                                      & ((0xfffffffeU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_1) 
                                                          << 1U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d6 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d6)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                                        << 2U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                       << 2U) 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_2) 
                                                          << 2U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d6 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d6)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                       << 3U) 
                                                      & ((0xfffffff8U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_3) 
                                                          << 3U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d6 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d6)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                                     << 4U) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i))) 
                                                | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                    & (IData)(
                                                              (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                                >> 4U) 
                                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_4)))) 
                                                   << 4U))));
    vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i 
        = ((0x1eU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_d6) 
                     << 1U)) | (1U & (IData)(vlSelf->dividend_i)));
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_1 
        = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i)) 
                 & (IData)(vlSelf->divisor_i)));
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_2 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                      >> 1U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 1U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_1) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 1U)))));
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_3 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                      >> 2U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 2U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_2) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 2U)))));
    vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_4 
        = (1U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                      >> 3U)) & ((IData)(vlSelf->divisor_i) 
                                 >> 3U)) | ((IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_3) 
                                            & (~ (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                   ^ (IData)(vlSelf->divisor_i)) 
                                                  >> 3U)))));
    vlSelf->top__DOT__dut__DOT__tmp_sel_7 = ((IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_4) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                    ^ (IData)(vlSelf->divisor_i)) 
                                                   >> 4U)));
    vlSelf->quotient_o = ((0x80U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                    << 7U)) | ((0x40U 
                                                & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                      << 5U)) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7))))))))));
    vlSelf->top__DOT__dut__DOT__tmp_d7 = ((0x1eU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d7)) 
                                          | (1U & (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i)) 
                                                   | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                         ^ (IData)(vlSelf->divisor_i))))));
    vlSelf->top__DOT__dut__DOT__tmp_d7 = ((0x1dU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d7)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                                        << 1U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                       << 1U) 
                                                      & ((0xfffffffeU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_1) 
                                                          << 1U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d7 = ((0x1bU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d7)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                                        << 2U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                       << 2U) 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_2) 
                                                          << 2U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d7 = ((0x17U & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d7)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                                        << 3U) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i))) 
                                                   | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                       << 3U) 
                                                      & ((0xfffffff8U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                             ^ (IData)(vlSelf->divisor_i))) 
                                                         ^ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_3) 
                                                          << 3U))))));
    vlSelf->top__DOT__dut__DOT__tmp_d7 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_d7)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                                     << 4U) 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i))) 
                                                | (((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                    & (IData)(
                                                              (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                                >> 4U) 
                                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_4)))) 
                                                   << 4U))));
    vlSelf->remainder_o = vlSelf->top__DOT__dut__DOT__tmp_d7;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->divisor_i & 0xf0U))) {
        Verilated::overWidthError("divisor_i");}
}
#endif  // VL_DEBUG
