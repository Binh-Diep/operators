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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__tmp_sel_0));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__tmp_sel_1));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__tmp_sel_2));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__dut__DOT__tmp_sel_3));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__dut__DOT__tmp_sel_4));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__dut__DOT__tmp_sel_5));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__dut__DOT__tmp_sel_6));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__dut__DOT__tmp_sel_7));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__tmp_d0),5);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__tmp_d1),5);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__tmp_d2),5);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__tmp_d3),5);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__tmp_d4),5);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__tmp_d5),5);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__tmp_d6),5);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__tmp_d7),5);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_1));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_2));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_3));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_4));
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i),5);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_1));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_2));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_3));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_4));
        bufp->chgBit(oldp+25,((1U & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                     >> 1U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                     >> 2U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                     >> 3U))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                     >> 4U))));
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i),5);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_1));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_2));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_3));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_4));
        bufp->chgBit(oldp+35,((1U & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                     >> 1U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                     >> 2U))));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                     >> 3U))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                     >> 4U))));
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i),5);
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_1));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_2));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_3));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_4));
        bufp->chgBit(oldp+45,((1U & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                     >> 1U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                     >> 2U))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                     >> 3U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                     >> 4U))));
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i),5);
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_1));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_2));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_3));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_4));
        bufp->chgBit(oldp+55,((1U & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i))));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                     >> 1U))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                     >> 2U))));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                     >> 3U))));
        bufp->chgBit(oldp+59,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                     >> 4U))));
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i),5);
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_1));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_2));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_3));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_4));
        bufp->chgBit(oldp+65,((1U & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i))));
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                     >> 1U))));
        bufp->chgBit(oldp+67,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                     >> 2U))));
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                     >> 3U))));
        bufp->chgBit(oldp+69,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                     >> 4U))));
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i),5);
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_1));
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_2));
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_3));
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_4));
        bufp->chgBit(oldp+75,((1U & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i))));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                     >> 1U))));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                     >> 2U))));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                     >> 3U))));
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                     >> 4U))));
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i),5);
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_1));
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_2));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_3));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_4));
        bufp->chgBit(oldp+85,((1U & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i))));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                     >> 1U))));
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                     >> 2U))));
        bufp->chgBit(oldp+88,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                     >> 3U))));
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                     >> 4U))));
    }
    bufp->chgBit(oldp+90,(vlSelf->clk_i));
    bufp->chgCData(oldp+91,(vlSelf->dividend_i),8);
    bufp->chgCData(oldp+92,(vlSelf->divisor_i),4);
    bufp->chgCData(oldp+93,(vlSelf->quotient_o),8);
    bufp->chgCData(oldp+94,(vlSelf->remainder_o),5);
    bufp->chgCData(oldp+95,((1U & ((IData)(vlSelf->dividend_i) 
                                   >> 7U))),5);
    bufp->chgCData(oldp+96,(vlSelf->divisor_i),5);
    bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->dividend_i) 
                                 >> 7U))));
    bufp->chgBit(oldp+98,((1U & (IData)(vlSelf->divisor_i))));
    bufp->chgBit(oldp+99,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0) 
                                  & ((IData)(vlSelf->dividend_i) 
                                     >> 7U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                                & (((IData)(vlSelf->dividend_i) 
                                                    >> 7U) 
                                                   ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+100,(0U));
    bufp->chgBit(oldp+101,((1U & ((IData)(vlSelf->divisor_i) 
                                  >> 1U))));
    bufp->chgBit(oldp+102,((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                  & (((IData)(vlSelf->divisor_i) 
                                      >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_1))))));
    bufp->chgBit(oldp+103,(0U));
    bufp->chgBit(oldp+104,((1U & ((IData)(vlSelf->divisor_i) 
                                  >> 2U))));
    bufp->chgBit(oldp+105,((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                  & (((IData)(vlSelf->divisor_i) 
                                      >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_2))))));
    bufp->chgBit(oldp+106,(0U));
    bufp->chgBit(oldp+107,((1U & ((IData)(vlSelf->divisor_i) 
                                  >> 3U))));
    bufp->chgBit(oldp+108,((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                                  & (((IData)(vlSelf->divisor_i) 
                                      >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_3))))));
    bufp->chgBit(oldp+109,(0U));
    bufp->chgBit(oldp+110,((1U & ((IData)(vlSelf->divisor_i) 
                                  >> 4U))));
    bufp->chgBit(oldp+111,(((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_0)) 
                            & (IData)(vlSelf->top__DOT__dut__DOT__row_01__DOT__b5bit_4))));
    bufp->chgBit(oldp+112,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i)) 
                                  | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                        ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+113,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                      >> 1U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 1U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_1)))))));
    bufp->chgBit(oldp+114,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                      >> 2U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_2)))))));
    bufp->chgBit(oldp+115,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                      >> 3U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 3U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_3)))))));
    bufp->chgBit(oldp+116,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                      >> 4U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_1)) 
                                                 & (IData)(
                                                           (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_02__x5bit_i) 
                                                             >> 4U) 
                                                            ^ (IData)(vlSelf->top__DOT__dut__DOT__row_02__DOT__b5bit_4))))))));
    bufp->chgBit(oldp+117,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i)) 
                                  | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                        ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+118,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                      >> 1U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 1U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_1)))))));
    bufp->chgBit(oldp+119,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                      >> 2U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_2)))))));
    bufp->chgBit(oldp+120,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                      >> 3U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 3U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_3)))))));
    bufp->chgBit(oldp+121,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                      >> 4U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_2)) 
                                                 & (IData)(
                                                           (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_03__x5bit_i) 
                                                             >> 4U) 
                                                            ^ (IData)(vlSelf->top__DOT__dut__DOT__row_03__DOT__b5bit_4))))))));
    bufp->chgBit(oldp+122,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i)) 
                                  | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                        ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+123,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                      >> 1U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 1U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_1)))))));
    bufp->chgBit(oldp+124,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                      >> 2U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_2)))))));
    bufp->chgBit(oldp+125,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                      >> 3U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 3U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_3)))))));
    bufp->chgBit(oldp+126,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                      >> 4U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_3)) 
                                                 & (IData)(
                                                           (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_04__x5bit_i) 
                                                             >> 4U) 
                                                            ^ (IData)(vlSelf->top__DOT__dut__DOT__row_04__DOT__b5bit_4))))))));
    bufp->chgBit(oldp+127,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i)) 
                                  | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                        ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+128,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                      >> 1U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 1U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_1)))))));
    bufp->chgBit(oldp+129,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                      >> 2U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_2)))))));
    bufp->chgBit(oldp+130,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                      >> 3U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 3U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_3)))))));
    bufp->chgBit(oldp+131,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                      >> 4U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_4)) 
                                                 & (IData)(
                                                           (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_05__x5bit_i) 
                                                             >> 4U) 
                                                            ^ (IData)(vlSelf->top__DOT__dut__DOT__row_05__DOT__b5bit_4))))))));
    bufp->chgBit(oldp+132,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i)) 
                                  | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                        ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+133,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                      >> 1U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 1U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_1)))))));
    bufp->chgBit(oldp+134,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                      >> 2U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_2)))))));
    bufp->chgBit(oldp+135,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                      >> 3U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 3U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_3)))))));
    bufp->chgBit(oldp+136,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                      >> 4U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_5)) 
                                                 & (IData)(
                                                           (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_06__x5bit_i) 
                                                             >> 4U) 
                                                            ^ (IData)(vlSelf->top__DOT__dut__DOT__row_06__DOT__b5bit_4))))))));
    bufp->chgBit(oldp+137,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i)) 
                                  | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                        ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+138,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                      >> 1U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 1U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_1)))))));
    bufp->chgBit(oldp+139,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                      >> 2U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_2)))))));
    bufp->chgBit(oldp+140,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                      >> 3U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 3U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_3)))))));
    bufp->chgBit(oldp+141,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                      >> 4U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_6)) 
                                                 & (IData)(
                                                           (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_07__x5bit_i) 
                                                             >> 4U) 
                                                            ^ (IData)(vlSelf->top__DOT__dut__DOT__row_07__DOT__b5bit_4))))))));
    bufp->chgBit(oldp+142,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i)) 
                                  | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                        ^ (IData)(vlSelf->divisor_i)))))));
    bufp->chgBit(oldp+143,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                      >> 1U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 1U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_1)))))));
    bufp->chgBit(oldp+144,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                      >> 2U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_2)))))));
    bufp->chgBit(oldp+145,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                      >> 3U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                 & ((((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                      ^ (IData)(vlSelf->divisor_i)) 
                                                     >> 3U) 
                                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_3)))))));
    bufp->chgBit(oldp+146,((1U & (((IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7) 
                                   & ((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                      >> 4U)) | ((~ (IData)(vlSelf->top__DOT__dut__DOT__tmp_sel_7)) 
                                                 & (IData)(
                                                           (((IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__row_08__x5bit_i) 
                                                             >> 4U) 
                                                            ^ (IData)(vlSelf->top__DOT__dut__DOT__row_08__DOT__b5bit_4))))))));
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
