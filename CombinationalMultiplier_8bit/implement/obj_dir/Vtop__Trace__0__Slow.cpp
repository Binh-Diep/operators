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
    tracep->declBit(c+58,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+60,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+61,"mul_4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+58,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+60,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+61,"mul_4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+59,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+60,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+61,"mul_4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1,"addend_01",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,"augend_01",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,"addend_02",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,"augend_02",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,"addend_03",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,"augend_03",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,"sum_add01",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,"sum_add02",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("AD1 ");
    tracep->declBus(c+1,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+9,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"sum_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+10,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+12,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+7,"tmp_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+13,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+16,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+19,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+12,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+22,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("AD2 ");
    tracep->declBus(c+3,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+4,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+25,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"sum_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+26,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+27,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+28,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+8,"tmp_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+29,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+32,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+27,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+35,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+28,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+38,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("AD3 ");
    tracep->declBus(c+5,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+6,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+41,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"sum_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+43,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+42,"tmp_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+46,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+43,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+49,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+52,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+55,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(4);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__dut__DOT__addend_01),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__dut__DOT__augend_01),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__addend_02),4);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__augend_02),4);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__addend_03),4);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__augend_03),4);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__AD1__DOT__tmp_sum),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__AD2__DOT__tmp_sum),4);
    bufp->fullBit(oldp+9,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                   & (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                  >> 3U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                              ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry))))));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+13,((1U & (IData)(vlSelf->top__DOT__dut__DOT__addend_01))));
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->top__DOT__dut__DOT__augend_01))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                  >> 1U))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_01) 
                                  >> 1U))));
    bufp->fullBit(oldp+18,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                   >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                  >> 2U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_01) 
                                  >> 2U))));
    bufp->fullBit(oldp+21,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                   >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                  >> 3U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_01) 
                                  >> 3U))));
    bufp->fullBit(oldp+24,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_01) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_01)) 
                                   >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD1__DOT__full_adder_03__DOT__carry)))));
    bufp->fullBit(oldp+25,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                    & (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                   >> 3U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                              >> 3U) 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry))))));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+29,((1U & (IData)(vlSelf->top__DOT__dut__DOT__addend_02))));
    bufp->fullBit(oldp+30,((1U & (IData)(vlSelf->top__DOT__dut__DOT__augend_02))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                  >> 1U))));
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_02) 
                                  >> 1U))));
    bufp->fullBit(oldp+34,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                   >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                  >> 2U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_02) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                   >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                  >> 3U))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_02) 
                                  >> 3U))));
    bufp->fullBit(oldp+40,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_02) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_02)) 
                                   >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD2__DOT__full_adder_03__DOT__carry)))));
    bufp->fullBit(oldp+41,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                    & (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                   >> 3U) | ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                              >> 3U) 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry))))));
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__dut__DOT__AD3__DOT__tmp_sum),4);
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+46,((1U & (IData)(vlSelf->top__DOT__dut__DOT__addend_03))));
    bufp->fullBit(oldp+47,((1U & (IData)(vlSelf->top__DOT__dut__DOT__augend_03))));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)))));
    bufp->fullBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                  >> 1U))));
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_03) 
                                  >> 1U))));
    bufp->fullBit(oldp+51,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                   >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                  >> 2U))));
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_03) 
                                  >> 2U))));
    bufp->fullBit(oldp+54,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                   >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                  >> 3U))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__augend_03) 
                                  >> 3U))));
    bufp->fullBit(oldp+57,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__addend_03) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__augend_03)) 
                                   >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__AD3__DOT__full_adder_03__DOT__carry)))));
    bufp->fullBit(oldp+58,(vlSelf->clk_i));
    bufp->fullCData(oldp+59,(vlSelf->operand_a_i),4);
    bufp->fullCData(oldp+60,(vlSelf->operand_b_i),4);
    bufp->fullCData(oldp+61,(vlSelf->mul_4_o),8);
    bufp->fullBit(oldp+62,(0U));
}
