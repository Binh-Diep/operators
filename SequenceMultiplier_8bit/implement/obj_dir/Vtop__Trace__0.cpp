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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__flag_less_load));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__flag_equal_load));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__flag_less_shift));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__dut__DOT__flag_equal_shift));
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__A_tmp),6);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__Q_tmp),6);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__M_tmp),6);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__dut__DOT__count),3);
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__dut__DOT__sum_01),9);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__dut__DOT__REG),13);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__current_state),3);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__A_tmp),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__M_tmp),8);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
        bufp->chgCData(oldp+14,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__A_tmp))),4);
        bufp->chgCData(oldp+15,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))),4);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum),4);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+20,((1U & (IData)(vlSelf->top__DOT__dut__DOT__A_tmp))));
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     >> 1U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                     >> 1U))));
        bufp->chgBit(oldp+25,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                      >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     >> 2U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                     >> 2U))));
        bufp->chgBit(oldp+28,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                      >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     >> 3U))));
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                     >> 3U))));
        bufp->chgBit(oldp+31,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                      >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
        bufp->chgCData(oldp+32,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+33,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+34,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                       & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                      >> 7U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                                 >> 7U) 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))))));
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum),4);
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     >> 4U))));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                     >> 4U))));
        bufp->chgBit(oldp+41,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                      >> 4U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     >> 5U))));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                     >> 5U))));
        bufp->chgBit(oldp+44,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                      >> 5U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     >> 6U))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                     >> 6U))));
        bufp->chgBit(oldp+47,((1U & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                     >> 7U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                     >> 7U))));
        bufp->chgBit(oldp+50,((1U & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))));
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__dut__DOT__count),8);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value),9);
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
        bufp->chgBit(oldp+54,((1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))));
        bufp->chgCData(oldp+55,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__count))),4);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub),4);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+60,((1U & (IData)(vlSelf->top__DOT__dut__DOT__count))));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 1U))));
        bufp->chgBit(oldp+62,((1U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                         >> 1U)) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 2U))));
        bufp->chgBit(oldp+64,((IData)((((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                        >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 3U))));
        bufp->chgBit(oldp+66,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
        bufp->chgCData(oldp+67,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub),4);
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 4U))));
        bufp->chgBit(oldp+73,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 5U))));
        bufp->chgBit(oldp+75,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 6U))));
        bufp->chgBit(oldp+77,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 7U))));
        bufp->chgBit(oldp+79,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
        bufp->chgSData(oldp+80,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value),9);
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
        bufp->chgBit(oldp+82,((1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))));
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub),4);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+87,((1U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                         >> 1U)) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+88,((1U ^ (((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                      >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+89,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub),4);
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+94,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
        bufp->chgBit(oldp+95,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+96,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+97,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
    }
    bufp->chgBit(oldp+98,(vlSelf->clk_i));
    bufp->chgCData(oldp+99,(vlSelf->M_i),5);
    bufp->chgCData(oldp+100,(vlSelf->N_i),5);
    bufp->chgCData(oldp+101,(vlSelf->result_o),8);
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
