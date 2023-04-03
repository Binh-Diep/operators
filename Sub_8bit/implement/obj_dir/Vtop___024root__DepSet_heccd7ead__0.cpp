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
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (1U & (~ ((IData)(vlSelf->M_i) ^ (~ (IData)(vlSelf->N_i))))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry 
        = (1U & (((IData)(vlSelf->M_i) & (~ (IData)(vlSelf->N_i))) 
                 | ((IData)(vlSelf->M_i) ^ (~ (IData)(vlSelf->N_i)))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (2U & (((0xfffffffeU & (IData)(vlSelf->M_i)) 
                     ^ ((~ ((IData)(vlSelf->N_i) >> 1U)) 
                        << 1U)) ^ ((IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry) 
                                   << 1U))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry 
        = (1U & ((((IData)(vlSelf->M_i) >> 1U) & (~ 
                                                  ((IData)(vlSelf->N_i) 
                                                   >> 1U))) 
                 | ((((IData)(vlSelf->M_i) >> 1U) ^ 
                     (~ ((IData)(vlSelf->N_i) >> 1U))) 
                    & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (4U & (((0xfffffffcU & (IData)(vlSelf->M_i)) 
                     ^ ((~ ((IData)(vlSelf->N_i) >> 2U)) 
                        << 2U)) ^ ((IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry) 
                                   << 2U))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry 
        = (1U & ((((IData)(vlSelf->M_i) >> 2U) & (~ 
                                                  ((IData)(vlSelf->N_i) 
                                                   >> 2U))) 
                 | ((((IData)(vlSelf->M_i) >> 2U) ^ 
                     (~ ((IData)(vlSelf->N_i) >> 2U))) 
                    & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub)) 
           | (8U & (((0xfffffff8U & (IData)(vlSelf->M_i)) 
                     ^ ((~ ((IData)(vlSelf->N_i) >> 3U)) 
                        << 3U)) ^ ((IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry) 
                                   << 3U))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry 
        = (1U & ((((IData)(vlSelf->M_i) >> 3U) & (~ 
                                                  ((IData)(vlSelf->N_i) 
                                                   >> 3U))) 
                 | ((((IData)(vlSelf->M_i) >> 3U) ^ 
                     (~ ((IData)(vlSelf->N_i) >> 3U))) 
                    & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xeU & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (1U & ((((IData)(vlSelf->M_i) >> 4U) ^ 
                     (~ ((IData)(vlSelf->N_i) >> 4U))) 
                    ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry 
        = (1U & ((((IData)(vlSelf->M_i) >> 4U) & (~ 
                                                  ((IData)(vlSelf->N_i) 
                                                   >> 4U))) 
                 | ((((IData)(vlSelf->M_i) >> 4U) ^ 
                     (~ ((IData)(vlSelf->N_i) >> 4U))) 
                    & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xdU & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (2U & (((0xffffffeU & ((IData)(vlSelf->M_i) 
                                    >> 4U)) ^ ((~ ((IData)(vlSelf->N_i) 
                                                   >> 5U)) 
                                               << 1U)) 
                    ^ ((IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry) 
                       << 1U))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry 
        = (1U & ((((IData)(vlSelf->M_i) >> 5U) & (~ 
                                                  ((IData)(vlSelf->N_i) 
                                                   >> 5U))) 
                 | ((((IData)(vlSelf->M_i) >> 5U) ^ 
                     (~ ((IData)(vlSelf->N_i) >> 5U))) 
                    & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((0xbU & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | (4U & (((0xffffffcU & ((IData)(vlSelf->M_i) 
                                    >> 4U)) ^ ((~ ((IData)(vlSelf->N_i) 
                                                   >> 6U)) 
                                               << 2U)) 
                    ^ ((IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry) 
                       << 2U))));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry 
        = (1U & ((((IData)(vlSelf->M_i) >> 6U) & (~ 
                                                  ((IData)(vlSelf->N_i) 
                                                   >> 6U))) 
                 | ((((IData)(vlSelf->M_i) >> 6U) ^ 
                     (~ ((IData)(vlSelf->N_i) >> 6U))) 
                    & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry))));
    vlSelf->result_o = ((0xffU & (IData)(vlSelf->result_o)) 
                        | (0x100U & ((~ ((((IData)(vlSelf->M_i) 
                                           >> 7U) & 
                                          (~ ((IData)(vlSelf->N_i) 
                                              >> 7U))) 
                                         | ((((IData)(vlSelf->M_i) 
                                              >> 7U) 
                                             ^ (~ ((IData)(vlSelf->N_i) 
                                                   >> 7U))) 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))) 
                                     << 8U)));
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub 
        = ((7U & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub)) 
           | ((1U ^ ((((IData)(vlSelf->M_i) ^ (IData)(vlSelf->N_i)) 
                      >> 7U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))) 
              << 3U));
    vlSelf->result_o = ((0x100U & (IData)(vlSelf->result_o)) 
                        | (((IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sub) 
                            << 4U) | (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sub)));
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
}
#endif  // VL_DEBUG
