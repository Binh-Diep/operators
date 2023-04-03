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
    vlSelf->top__DOT__dut__DOT__addend_03 = ((8U & 
                                              ((IData)(vlSelf->operand_a_i) 
                                               & (IData)(vlSelf->operand_b_i))) 
                                             | (((IData)(
                                                         (((IData)(vlSelf->operand_a_i) 
                                                           >> 3U) 
                                                          & ((IData)(vlSelf->operand_b_i) 
                                                             >> 2U))) 
                                                 << 2U) 
                                                | (((IData)(
                                                            (((IData)(vlSelf->operand_a_i) 
                                                              >> 3U) 
                                                             & ((IData)(vlSelf->operand_b_i) 
                                                                >> 1U))) 
                                                    << 1U) 
                                                   | (IData)(
                                                             (((IData)(vlSelf->operand_a_i) 
                                                               >> 3U) 
                                                              & (IData)(vlSelf->operand_b_i))))));
    vlSelf->top__DOT__dut__DOT__addend_02 = (((IData)(
                                                      (((IData)(vlSelf->operand_a_i) 
                                                        >> 2U) 
                                                       & ((IData)(vlSelf->operand_b_i) 
                                                          >> 3U))) 
                                              << 3U) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->operand_a_i) 
                                                    & (IData)(vlSelf->operand_b_i))) 
                                                | ((2U 
                                                    & (((IData)(vlSelf->operand_a_i) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->operand_b_i))) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->operand_a_i) 
                                                          >> 2U) 
                                                         & (IData)(vlSelf->operand_b_i))))));
    vlSelf->top__DOT__dut__DOT__addend_01 = (((IData)(
                                                      (((IData)(vlSelf->operand_a_i) 
                                                        >> 1U) 
                                                       & ((IData)(vlSelf->operand_b_i) 
                                                          >> 3U))) 
                                              << 3U) 
                                             | ((4U 
                                                 & (((IData)(vlSelf->operand_a_i) 
                                                     << 1U) 
                                                    & (IData)(vlSelf->operand_b_i))) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->operand_a_i) 
                                                       & (IData)(vlSelf->operand_b_i))) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->operand_a_i) 
                                                          >> 1U) 
                                                         & (IData)(vlSelf->operand_b_i))))));
    vlSelf->top__DOT__dut__DOT__augend_01 = ((4U & 
                                              (((IData)(vlSelf->operand_a_i) 
                                                << 2U) 
                                               & ((IData)(vlSelf->operand_b_i) 
                                                  >> 1U))) 
                                             | ((2U 
                                                 & (((IData)(vlSelf->operand_a_i) 
                                                     << 1U) 
                                                    & ((IData)(vlSelf->operand_b_i) 
                                                       >> 1U))) 
                                                | (1U 
                                                   & ((IData)(vlSelf->operand_a_i) 
                                                      & ((IData)(vlSelf->operand_b_i) 
                                                         >> 1U)))));
    vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum = 
        ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum)) 
         | (1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01))));
    vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry 
        = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                 & (IData)(vlSelf->top__DOT__dut__DOT__augend_01)));
    vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum = 
        ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum)) 
         | (2U & ((0xfffffffeU & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry) 
                     << 1U))));
    vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                  >> 1U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                             >> 1U) & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum = 
        ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum)) 
         | (4U & ((0xfffffffcU & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry) 
                     << 2U))));
    vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                  >> 2U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                             >> 2U) & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum = 
        ((7U & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum)) 
         | (8U & ((0xfffffff8U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry) 
                     << 3U))));
    vlSelf->mul_4_o = ((0xfcU & (IData)(vlSelf->mul_4_o)) 
                       | ((2U & ((IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum) 
                                 << 1U)) | (1U & ((IData)(vlSelf->operand_a_i) 
                                                  & (IData)(vlSelf->operand_b_i)))));
    vlSelf->top__DOT__dut__DOT__augend_02 = ((8U & 
                                              (((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                               | (((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                                   ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry) 
                                                     << 3U)))) 
                                             | (7U 
                                                & ((IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum) 
                                                   >> 1U)));
    vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum = 
        ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum)) 
         | (1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02))));
    vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry 
        = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                 & (IData)(vlSelf->top__DOT__dut__DOT__augend_02)));
    vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum = 
        ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum)) 
         | (2U & ((0xfffffffeU & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry) 
                     << 1U))));
    vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                  >> 1U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                             >> 1U) & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum = 
        ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum)) 
         | (4U & ((0xfffffffcU & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry) 
                     << 2U))));
    vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                  >> 2U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                             >> 2U) & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum = 
        ((7U & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum)) 
         | (8U & ((0xfffffff8U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry) 
                     << 3U))));
    vlSelf->mul_4_o = ((0xfbU & (IData)(vlSelf->mul_4_o)) 
                       | (4U & ((IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum) 
                                << 2U)));
    vlSelf->top__DOT__dut__DOT__augend_03 = ((8U & 
                                              (((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                               | (((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                                   ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry) 
                                                     << 3U)))) 
                                             | (7U 
                                                & ((IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum) 
                                                   >> 1U)));
    vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum = 
        ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum)) 
         | (1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03))));
    vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry 
        = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                 & (IData)(vlSelf->top__DOT__dut__DOT__augend_03)));
    vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum = 
        ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum)) 
         | (2U & ((0xfffffffeU & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry) 
                     << 1U))));
    vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                  >> 1U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                             >> 1U) & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum = 
        ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum)) 
         | (4U & ((0xfffffffcU & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry) 
                     << 2U))));
    vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry 
        = (1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                   & (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                  >> 2U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                              ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                             >> 2U) & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum = 
        ((7U & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum)) 
         | (8U & ((0xfffffff8U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03))) 
                  ^ ((IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry) 
                     << 3U))));
    vlSelf->mul_4_o = ((7U & (IData)(vlSelf->mul_4_o)) 
                       | ((0x80U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                      & (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                     << 4U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                                << 4U) 
                                               & ((IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry) 
                                                  << 7U)))) 
                          | ((IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum) 
                             << 3U)));
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
    if (VL_UNLIKELY((vlSelf->operand_a_i & 0xf0U))) {
        Verilated::overWidthError("operand_a_i");}
    if (VL_UNLIKELY((vlSelf->operand_b_i & 0xf0U))) {
        Verilated::overWidthError("operand_b_i");}
}
#endif  // VL_DEBUG
