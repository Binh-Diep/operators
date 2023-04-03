// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+14,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+11,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+14,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+12,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+14,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"tmp_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->pushNamePrefix("substractor ");
    tracep->declBus(c+12,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+45,"tmp_cin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"tmp_cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"tmp_cn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("full_adder_4bit_01 ");
    tracep->declBus(c+17,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+18,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+45,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"sub_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+45,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3,"tmp_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+19,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+22,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+25,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+28,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_4bit_02 ");
    tracep->declBus(c+31,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+32,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+2,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"sub_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+2,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+7,"tmp_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+33,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+36,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+39,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+42,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__dut__DOT__tmp_value),9);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub),4);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub),4);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+11,(vlSelf->clk_i));
    bufp->fullCData(oldp+12,(vlSelf->operand_a_i),8);
    bufp->fullCData(oldp+13,(vlSelf->operand_b_i),8);
    bufp->fullBit(oldp+14,(vlSelf->less_o));
    bufp->fullBit(oldp+15,(vlSelf->equal_o));
    bufp->fullBit(oldp+16,((1U & ((((IData)(vlSelf->operand_a_i) 
                                    >> 7U) & (~ ((IData)(vlSelf->operand_b_i) 
                                                 >> 7U))) 
                                  | ((((IData)(vlSelf->operand_a_i) 
                                       >> 7U) ^ (~ 
                                                 ((IData)(vlSelf->operand_b_i) 
                                                  >> 7U))) 
                                     & (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))))));
    bufp->fullCData(oldp+17,((0xfU & (IData)(vlSelf->operand_a_i))),4);
    bufp->fullCData(oldp+18,((0xfU & (~ (IData)(vlSelf->operand_b_i)))),4);
    bufp->fullBit(oldp+19,((1U & (IData)(vlSelf->operand_a_i))));
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->operand_b_i)))));
    bufp->fullBit(oldp+21,((1U & (~ ((IData)(vlSelf->operand_a_i) 
                                     ^ (~ (IData)(vlSelf->operand_b_i)))))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->operand_a_i) 
                                  >> 1U))));
    bufp->fullBit(oldp+23,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                     >> 1U)))));
    bufp->fullBit(oldp+24,((1U & ((((IData)(vlSelf->operand_a_i) 
                                    >> 1U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                 >> 1U))) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->operand_a_i) 
                                  >> 2U))));
    bufp->fullBit(oldp+26,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                     >> 2U)))));
    bufp->fullBit(oldp+27,((1U & ((((IData)(vlSelf->operand_a_i) 
                                    >> 2U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                 >> 2U))) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->operand_a_i) 
                                  >> 3U))));
    bufp->fullBit(oldp+29,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                     >> 3U)))));
    bufp->fullBit(oldp+30,((1U & ((((IData)(vlSelf->operand_a_i) 
                                    >> 3U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                 >> 3U))) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
    bufp->fullCData(oldp+31,((0xfU & ((IData)(vlSelf->operand_a_i) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+32,((0xfU & (~ ((IData)(vlSelf->operand_b_i) 
                                         >> 4U)))),4);
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->operand_a_i) 
                                  >> 4U))));
    bufp->fullBit(oldp+34,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                     >> 4U)))));
    bufp->fullBit(oldp+35,((1U & ((((IData)(vlSelf->operand_a_i) 
                                    >> 4U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                 >> 4U))) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->operand_a_i) 
                                  >> 5U))));
    bufp->fullBit(oldp+37,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                     >> 5U)))));
    bufp->fullBit(oldp+38,((1U & ((((IData)(vlSelf->operand_a_i) 
                                    >> 5U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                 >> 5U))) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->operand_a_i) 
                                  >> 6U))));
    bufp->fullBit(oldp+40,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                     >> 6U)))));
    bufp->fullBit(oldp+41,((1U & ((((IData)(vlSelf->operand_a_i) 
                                    >> 6U) ^ (~ ((IData)(vlSelf->operand_b_i) 
                                                 >> 6U))) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelf->operand_a_i) 
                                  >> 7U))));
    bufp->fullBit(oldp+43,((1U & (~ ((IData)(vlSelf->operand_b_i) 
                                     >> 7U)))));
    bufp->fullBit(oldp+44,((1U ^ ((((IData)(vlSelf->operand_a_i) 
                                    ^ (IData)(vlSelf->operand_b_i)) 
                                   >> 7U) ^ (IData)(vlSelf->top__DOT__dut__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
    bufp->fullBit(oldp+45,(1U));
}
