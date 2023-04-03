/* verilator lint_off UNUSED */
module top(
    //inputs
    input logic clk_i,
    input logic [7:0] operand_a_i,
    input logic [7:0] operand_b_i,
    //outputs
    output logic less_o,
    output logic equal_o
);
    brcomp dut(
        .operand_a_i (operand_a_i),
        .operand_b_i (operand_b_i),
        .less_o      (less_o),
        .equal_o     (equal_o)
    );
endmodule : top
