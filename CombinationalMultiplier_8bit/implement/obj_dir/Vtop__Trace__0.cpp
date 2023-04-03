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
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__dut__DOT__addend_01),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__dut__DOT__augend_01),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__addend_02),4);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__augend_02),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__addend_03),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__augend_03),4);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum),4);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum),4);
        bufp->chgBit(oldp+8,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                      & (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                     >> 3U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                                 ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                                >> 3U) 
                                               & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry))))));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelf->top__DOT__dut__DOT__addend_01))));
        bufp->chgBit(oldp+13,((1U & (IData)(vlSelf->top__DOT__dut__DOT__augend_01))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                     ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                     >> 1U))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_01) 
                                     >> 1U))));
        bufp->chgBit(oldp+17,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                      >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                     >> 2U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_01) 
                                     >> 2U))));
        bufp->chgBit(oldp+20,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                      >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                     >> 3U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_01) 
                                     >> 3U))));
        bufp->chgBit(oldp+23,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                      >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry)))));
        bufp->chgBit(oldp+24,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                       & (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                      >> 3U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry))))));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+28,((1U & (IData)(vlSelf->top__DOT__dut__DOT__addend_02))));
        bufp->chgBit(oldp+29,((1U & (IData)(vlSelf->top__DOT__dut__DOT__augend_02))));
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                     ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                     >> 1U))));
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_02) 
                                     >> 1U))));
        bufp->chgBit(oldp+33,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                      >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                     >> 2U))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_02) 
                                     >> 2U))));
        bufp->chgBit(oldp+36,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                      >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                     >> 3U))));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_02) 
                                     >> 3U))));
        bufp->chgBit(oldp+39,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                      >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry)))));
        bufp->chgBit(oldp+40,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                       & (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                      >> 3U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry))))));
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum),4);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry));
        bufp->chgBit(oldp+45,((1U & (IData)(vlSelf->top__DOT__dut__DOT__addend_03))));
        bufp->chgBit(oldp+46,((1U & (IData)(vlSelf->top__DOT__dut__DOT__augend_03))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                     ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                     >> 1U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_03) 
                                     >> 1U))));
        bufp->chgBit(oldp+50,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                      >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry)))));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                     >> 2U))));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_03) 
                                     >> 2U))));
        bufp->chgBit(oldp+53,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                      >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry)))));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                     >> 3U))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_03) 
                                     >> 3U))));
        bufp->chgBit(oldp+56,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                       ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                      >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry)))));
    }
    bufp->chgBit(oldp+57,(vlSelf->clk_i));
    bufp->chgCData(oldp+58,(vlSelf->operand_a_i),4);
    bufp->chgCData(oldp+59,(vlSelf->operand_b_i),4);
    bufp->chgCData(oldp+60,(vlSelf->mul_4_o),8);
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
