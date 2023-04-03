// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__dut__DOT__tmp_value),9);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub),4);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub),4);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
    }
    bufp->chgBit(oldp+10,(vlSelf->clk_i));
    bufp->chgCData(oldp+11,(vlSelf->operand_a_i),8);
    bufp->chgCData(oldp+12,(vlSelf->operand_b_i),8);
    bufp->chgBit(oldp+13,(vlSelf->less_o));
    bufp->chgBit(oldp+14,(vlSelf->equal_o));
    bufp->chgBit(oldp+15,((1U & ((((IData)(vlSelf->operand_a_i) 
                                   >> 7U) & (~ ((IData)(vlSelf->operand_b_i) 
                                                >> 7U))) 
                                 | ((((IData)(vlSelf->operand_a_i) 
                                      >> 7U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                   >> 7U))) 
                                    & (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))))));
    bufp->chgCData(oldp+16,((0xfU & (IData)(vlSelf->operand_a_i))),4);
    bufp->chgCData(oldp+17,((0xfU & (~ (IData)(vlSelf->operand_b_i)))),4);
    bufp->chgBit(oldp+18,((1U & (IData)(vlSelf->operand_a_i))));
    bufp->chgBit(oldp+19,((1U & (~ (IData)(vlSelf->operand_b_i)))));
    bufp->chgBit(oldp+20,((1U & (~ ((IData)(vlSelf->operand_a_i) 
                                    ^ (~ (IData)(vlSelf->operand_b_i)))))));
    bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->operand_a_i) 
                                 >> 1U))));
    bufp->chgBit(oldp+22,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                    >> 1U)))));
    bufp->chgBit(oldp+23,((1U & ((((IData)(vlSelf->operand_a_i) 
                                   >> 1U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                >> 1U))) 
                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
    bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->operand_a_i) 
                                 >> 2U))));
    bufp->chgBit(oldp+25,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                    >> 2U)))));
    bufp->chgBit(oldp+26,((1U & ((((IData)(vlSelf->operand_a_i) 
                                   >> 2U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                >> 2U))) 
                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
    bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->operand_a_i) 
                                 >> 3U))));
    bufp->chgBit(oldp+28,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                    >> 3U)))));
    bufp->chgBit(oldp+29,((1U & ((((IData)(vlSelf->operand_a_i) 
                                   >> 3U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                >> 3U))) 
                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
    bufp->chgCData(oldp+30,((0xfU & ((IData)(vlSelf->operand_a_i) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+31,((0xfU & (~ ((IData)(vlSelf->operand_b_i) 
                                        >> 4U)))),4);
    bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->operand_a_i) 
                                 >> 4U))));
    bufp->chgBit(oldp+33,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                    >> 4U)))));
    bufp->chgBit(oldp+34,((1U & ((((IData)(vlSelf->operand_a_i) 
                                   >> 4U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                >> 4U))) 
                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->operand_a_i) 
                                 >> 5U))));
    bufp->chgBit(oldp+36,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                    >> 5U)))));
    bufp->chgBit(oldp+37,((1U & ((((IData)(vlSelf->operand_a_i) 
                                   >> 5U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                >> 5U))) 
                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
    bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->operand_a_i) 
                                 >> 6U))));
    bufp->chgBit(oldp+39,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                    >> 6U)))));
    bufp->chgBit(oldp+40,((1U & ((((IData)(vlSelf->operand_a_i) 
                                   >> 6U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                >> 6U))) 
                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
    bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->operand_a_i) 
                                 >> 7U))));
    bufp->chgBit(oldp+42,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                    >> 7U)))));
    bufp->chgBit(oldp+43,((1U ^ ((((IData)(vlSelf->operand_a_i) 
                                   ^ (IData)(vlSelf->operand_b_i)) 
                                  >> 7U) ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
