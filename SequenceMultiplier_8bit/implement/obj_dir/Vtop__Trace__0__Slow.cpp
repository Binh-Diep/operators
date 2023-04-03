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
    tracep->declBit(c+99,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+101,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+102,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+99,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+101,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+102,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+99,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+101,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+102,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1,"flag_less_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"flag_equal_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"flag_less_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"flag_equal_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+5,"A_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,"Q_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,"M_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,"sum_01",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+10,"REG",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 12,0);
    {
        const char* __VenumItemNames[]
        = {"INIT", "PRE_BOOT", "LOAD", "SHIFT", "UPLOAD", 
                                "CALC", "SEND"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(1, "mul_8bit.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+11,"current_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->pushNamePrefix("ADD_CALC ");
    tracep->declBus(c+12,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+9,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+103,"tmp_cin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"tmp_cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("full_adder_4bit_01 ");
    tracep->declBus(c+15,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+16,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"sum_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+17,"tmp_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+21,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+24,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+27,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+30,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_4bit_02 ");
    tracep->declBus(c+33,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+14,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"sum_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+14,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+38,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+36,"tmp_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+40,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+43,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+38,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+46,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+49,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BR_LOAD ");
    tracep->declBus(c+52,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+104,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"tmp_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->pushNamePrefix("substractor ");
    tracep->declBus(c+52,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+104,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+53,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+105,"tmp_cin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+54,"tmp_cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+55,"tmp_cn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("full_adder_4bit_01 ");
    tracep->declBus(c+56,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"sub_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+60,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+54,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+57,"tmp_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+61,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+62,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+64,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+60,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+66,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+54,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_4bit_02 ");
    tracep->declBus(c+68,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+54,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+69,"sub_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+54,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+70,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+72,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+55,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+69,"tmp_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+73,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+70,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+75,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+77,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+72,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+79,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+55,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("BR_SHIFT ");
    tracep->declBus(c+52,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+108,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+3,"less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"tmp_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->pushNamePrefix("substractor ");
    tracep->declBus(c+52,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+108,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+81,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+105,"tmp_cin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"tmp_cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"tmp_cn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("full_adder_4bit_01 ");
    tracep->declBus(c+56,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"sub_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+87,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+84,"tmp_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+61,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+62,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+64,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+87,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+66,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_4bit_02 ");
    tracep->declBus(c+68,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+82,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"sub_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+82,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+94,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+91,"tmp_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+73,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+75,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+77,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+94,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+79,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(6);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__dut__DOT__flag_less_load));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__dut__DOT__flag_equal_load));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__dut__DOT__flag_less_shift));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__dut__DOT__flag_equal_shift));
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__A_tmp),6);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__Q_tmp),6);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__M_tmp),6);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__count),3);
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__dut__DOT__sum_01),9);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__dut__DOT__REG),13);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__current_state),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__A_tmp),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__M_tmp),8);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
    bufp->fullCData(oldp+15,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__A_tmp))),4);
    bufp->fullCData(oldp+16,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))),4);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__tmp_sum),4);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+21,((1U & (IData)(vlSelf->top__DOT__dut__DOT__A_tmp))));
    bufp->fullBit(oldp+22,((1U & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  >> 1U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                  >> 1U))));
    bufp->fullBit(oldp+26,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                   >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  >> 2U))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                  >> 2U))));
    bufp->fullBit(oldp+29,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                   >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  >> 3U))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                  >> 3U))));
    bufp->fullBit(oldp+32,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                   >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
    bufp->fullCData(oldp+33,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+34,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+35,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    & (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                   >> 7U) | ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                               ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))))));
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__tmp_sum),4);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  >> 4U))));
    bufp->fullBit(oldp+41,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                  >> 4U))));
    bufp->fullBit(oldp+42,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                   >> 4U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  >> 5U))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                  >> 5U))));
    bufp->fullBit(oldp+45,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                    ^ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)) 
                                   >> 5U) ^ (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  >> 6U))));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                  >> 6U))));
    bufp->fullBit(oldp+48,((1U & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry))));
    bufp->fullBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                  >> 7U))));
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                  >> 7U))));
    bufp->fullBit(oldp+51,((1U & (IData)(vlSelf->top__DOT__dut__DOT__ADD_CALC__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))));
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__dut__DOT__count),8);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__tmp_value),9);
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
    bufp->fullBit(oldp+55,((1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))));
    bufp->fullCData(oldp+56,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__count))),4);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub),4);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelf->top__DOT__dut__DOT__count))));
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                  >> 1U))));
    bufp->fullBit(oldp+63,((1U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                      >> 1U)) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                  >> 2U))));
    bufp->fullBit(oldp+65,((IData)((((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                     >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+66,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                  >> 3U))));
    bufp->fullBit(oldp+67,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
    bufp->fullCData(oldp+68,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub),4);
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+73,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                  >> 4U))));
    bufp->fullBit(oldp+74,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                  >> 5U))));
    bufp->fullBit(oldp+76,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                  >> 6U))));
    bufp->fullBit(oldp+78,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+79,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                  >> 7U))));
    bufp->fullBit(oldp+80,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_LOAD__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
    bufp->fullSData(oldp+81,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__tmp_value),9);
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
    bufp->fullBit(oldp+83,((1U & (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))));
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__tmp_sub),4);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+88,((1U & ((~ ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                      >> 1U)) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+89,((1U ^ (((IData)(vlSelf->top__DOT__dut__DOT__count) 
                                   >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+90,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__tmp_sub),4);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+95,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
    bufp->fullBit(oldp+96,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+97,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+98,((1U & (1U ^ (IData)(vlSelf->top__DOT__dut__DOT__BR_SHIFT__DOT__substractor__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
    bufp->fullBit(oldp+99,(vlSelf->clk_i));
    bufp->fullCData(oldp+100,(vlSelf->M_i),5);
    bufp->fullCData(oldp+101,(vlSelf->N_i),5);
    bufp->fullCData(oldp+102,(vlSelf->result_o),8);
    bufp->fullBit(oldp+103,(0U));
    bufp->fullCData(oldp+104,(4U),8);
    bufp->fullBit(oldp+105,(1U));
    bufp->fullCData(oldp+106,(0xbU),4);
    bufp->fullCData(oldp+107,(0xfU),4);
    bufp->fullCData(oldp+108,(0U),8);
}
