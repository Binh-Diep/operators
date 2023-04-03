/* verilator lint_off UNUSED */
module top(
    //inputs
    input logic clk_i,
    input logic [3:0] operand_a_i,
    input logic [3:0] operand_b_i,
    //outputs
    output logic [7:0] mul_4_o
);
    //code
    mul_4bit dut (
        .operand_a_i (operand_a_i),
        .operand_b_i (operand_b_i),
        .mul_4_o     (mul_4_o)
    );
endmodule : top
