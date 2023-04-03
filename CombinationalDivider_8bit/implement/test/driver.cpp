#define MAX_SIM 100
void set_random(Vtop *dut, vluint64_t sim_unit){
    dut -> dividend_i = rand()%60; //8bit: 0 - 255
    dut -> divisor_i  = 8;        //4bit: 0 - 15
}
