#define MAX_SIM 20
void set_random(Vtop *dut, vluint64_t sim_unit){
    dut -> operand_a_i = 4; //4bit: 0 - 15
    dut -> operand_b_i = 15;//4bit: 0 - 15
}
