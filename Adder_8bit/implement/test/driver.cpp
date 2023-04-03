#define MAX_SIM 10
void set_random(Vtop *dut, vluint64_t sim_unit){
	dut -> M_i = 0b11111111; //255
	dut -> N_i = 0b11111111; //255
}
