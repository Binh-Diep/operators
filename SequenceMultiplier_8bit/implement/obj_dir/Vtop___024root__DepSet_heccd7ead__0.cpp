// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__top__DOT__dut__DOT__A_tmp;
    CData/*2:0*/ __Vdly__top__DOT__dut__DOT__current_state;
    CData/*5:0*/ __Vdly__top__DOT__dut__DOT__Q_tmp;
    SData/*12:0*/ __Vdly__top__DOT__dut__DOT__REG;
    // Body
    __Vdly__top__DOT__dut__DOT__REG = vlSelf->top__DOT__dut__DOT__REG;
    __Vdly__top__DOT__dut__DOT__Q_tmp = vlSelf->top__DOT__dut__DOT__Q_tmp;
    __Vdly__top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__current_state;
    __Vdly__top__DOT__dut__DOT__A_tmp = vlSelf->top__DOT__dut__DOT__A_tmp;
    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            vlSelf->result_o = ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                 ? 0U : (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__REG) 
                                                  >> 1U)));
        } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            __Vdly__top__DOT__dut__DOT__A_tmp = (0x3fU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                       ? (IData)(vlSelf->top__DOT__dut__DOT__A_tmp)
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                        + 
                                                        (~ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                        + 
                                                        (~ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))))
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                        + 
                                                        (~ 
                                                         (0x3eU 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                                             << 1U)))))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                       + 
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                                           << 1U)))
                                                       : (IData)(vlSelf->top__DOT__dut__DOT__sum_01))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                       ? (IData)(vlSelf->top__DOT__dut__DOT__sum_01)
                                                       : (IData)(vlSelf->top__DOT__dut__DOT__A_tmp)))));
            vlSelf->top__DOT__dut__DOT__count = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__dut__DOT__count)));
            __Vdly__top__DOT__dut__DOT__current_state = 2U;
        } else {
            __Vdly__top__DOT__dut__DOT__A_tmp = (0x3fU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__REG) 
                                                    >> 7U));
            __Vdly__top__DOT__dut__DOT__Q_tmp = (0x3fU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__REG) 
                                                    >> 1U));
            __Vdly__top__DOT__dut__DOT__current_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            if ((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__flag_less_shift)) 
                       & (~ (IData)(vlSelf->top__DOT__dut__DOT__flag_equal_shift))))) {
                __Vdly__top__DOT__dut__DOT__REG = (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__REG))
                                                    ? 
                                                   (0x1800U 
                                                    | (0x7ffU 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__REG) 
                                                          >> 2U)))
                                                    : 
                                                   (0x7ffU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__REG) 
                                                       >> 2U)));
                __Vdly__top__DOT__dut__DOT__current_state = 4U;
            } else {
                __Vdly__top__DOT__dut__DOT__current_state = 4U;
            }
        } else if (((IData)(vlSelf->top__DOT__dut__DOT__flag_less_load) 
                    & (~ (IData)(vlSelf->top__DOT__dut__DOT__flag_equal_load)))) {
            __Vdly__top__DOT__dut__DOT__REG = (((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                << 7U) 
                                               | (((IData)(vlSelf->top__DOT__dut__DOT__Q_tmp) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT__REG))));
            __Vdly__top__DOT__dut__DOT__current_state = 3U;
        } else {
            __Vdly__top__DOT__dut__DOT__current_state = 6U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        vlSelf->top__DOT__dut__DOT__M_tmp = vlSelf->M_i;
        __Vdly__top__DOT__dut__DOT__Q_tmp = vlSelf->N_i;
        __Vdly__top__DOT__dut__DOT__current_state = 2U;
    } else {
        __Vdly__top__DOT__dut__DOT__A_tmp = 0U;
        vlSelf->top__DOT__dut__DOT__count = 0U;
        __Vdly__top__DOT__dut__DOT__Q_tmp = 0U;
        vlSelf->top__DOT__dut__DOT__M_tmp = 0U;
        __Vdly__top__DOT__dut__DOT__current_state = 1U;
    }
    vlSelf->top__DOT__dut__DOT__current_state = __Vdly__top__DOT__dut__DOT__current_state;
    vlSelf->top__DOT__dut__DOT__Q_tmp = __Vdly__top__DOT__dut__DOT__Q_tmp;
    vlSelf->top__DOT__dut__DOT__REG = __Vdly__top__DOT__dut__DOT__REG;
    vlSelf->top__DOT__dut__DOT__A_tmp = __Vdly__top__DOT__dut__DOT__A_tmp;
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum)) 
           | (1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))));
    vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry 
        = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                 & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)));
    vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (1U & (IData)(vlSelf->top__DOT__dut__DOT__count)));
    vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (1U & (IData)(vlSelf->top__DOT__dut__DOT__count)));
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->M_i & 0xe0U))) {
        Verilated::overWidthError("M_i");}
    if (VL_UNLIKELY((vlSelf->N_i & 0xe0U))) {
        Verilated::overWidthError("N_i");}
}
#endif  // VL_DEBUG
