// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum)) 
           | (1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (1U & (IData)(vlSelf->top__DOT__dut__DOT__count)));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (1U & (IData)(vlSelf->top__DOT__dut__DOT__count)));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry 
        = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                 & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry = 1U;
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry = 1U;
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))) 
                    ^ ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry) 
                       << 1U))));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                  >> 1U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                             >> 1U) & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (2U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                         >> 1U)) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)) 
                    << 1U)));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry 
        = (1U & (((IData)(vlSelf->top__DOT__dut__DOT__count) 
                  >> 1U) | (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (2U & (((~ ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                         >> 1U)) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)) 
                    << 1U)));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry 
        = (1U & (((IData)(vlSelf->top__DOT__dut__DOT__count) 
                  >> 1U) | (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum)) 
           | (4U & ((0xfffffffcU & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))) 
                    ^ ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry) 
                       << 2U))));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                  >> 2U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                             >> 2U) & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | ((IData)((((IData)(vlSelf->top__DOT__dut__DOT__count) 
                        >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry))) 
              << 2U));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry 
        = (((IData)(vlSelf->top__DOT__dut__DOT__count) 
            >> 2U) & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | ((1U ^ (((IData)(vlSelf->top__DOT__dut__DOT__count) 
                      >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry))) 
              << 2U));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry 
        = (IData)((((IData)(vlSelf->top__DOT__dut__DOT__count) 
                    >> 2U) | (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum)) 
           | (8U & ((0xfffffff8U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))) 
                    ^ ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry) 
                       << 3U))));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                  >> 3U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                             >> 3U) & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (8U & (8U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry) 
                          << 3U))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (8U & (8U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry) 
                          << 3U))));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
    vlSelf->top__DOT__dut__DOT__sum_01 = ((0x1f0U & (IData)(vlSelf->top__DOT__dut__DOT__sum_01)) 
                                          | (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum)) 
           | (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                      ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                     >> 4U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                  >> 4U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                             >> 4U) & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum)) 
           | (2U & ((0xffffffeU & (((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                   >> 4U)) ^ ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry) 
                                              << 1U))));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                  >> 5U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                             >> 5U) & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (2U & (2U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry) 
                          << 1U))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (2U & (2U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry) 
                          << 1U))));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum)) 
           | (4U & ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry) 
                    << 2U)));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                  >> 6U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                             >> 6U) & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (4U & (4U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry) 
                          << 2U))));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (4U & (4U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry) 
                          << 2U))));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry 
        = (1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum)) 
           | (8U & ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry) 
                    << 3U)));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value 
        = ((0xffU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value)) 
           | (0x100U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)) 
                        << 8U)));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (8U & (8U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry) 
                          << 3U))));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value 
        = ((0xffU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value)) 
           | (0x100U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)) 
                        << 8U)));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (8U & (8U ^ ((IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry) 
                          << 3U))));
    vlSelf->top__DOT__dut__DOT__sum_01 = ((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__sum_01)) 
                                          | ((0x100U 
                                              & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                                  << 1U) 
                                                 | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                      ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                                     << 1U) 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry) 
                                                       << 8U)))) 
                                             | ((IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum) 
                                                << 4U)));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value 
        = ((0x100U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value)) 
           | (((IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub) 
               << 4U) | (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value 
        = ((0x100U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value)) 
           | (((IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub) 
               << 4U) | (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)));
    vlSelf->top__DOT__dut__DOT__flag_less_load = (1U 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value) 
                                                     >> 8U));
    vlSelf->top__DOT__dut__DOT__flag_equal_load = (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value) 
                                                        >> 8U)) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value)))))));
    vlSelf->top__DOT__dut__DOT__flag_less_shift = (1U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value) 
                                                      >> 8U));
    vlSelf->top__DOT__dut__DOT__flag_equal_shift = 
        (1U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value) 
                   >> 8U)) & (~ (IData)((0U != (0xffU 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value)))))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
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
    vlSelf->M_i = VL_RAND_RESET_I(5);
    vlSelf->N_i = VL_RAND_RESET_I(5);
    vlSelf->result_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__flag_less_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__flag_equal_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__flag_less_shift = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__flag_equal_shift = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__A_tmp = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__dut__DOT__Q_tmp = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__dut__DOT__M_tmp = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__dut__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__sum_01 = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__REG = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__dut__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
