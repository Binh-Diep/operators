/* verilator lint_off UNUSED */
module top(
    //inputs
    input logic clk_i,
    input logic [7:0] dividend_i,
    input logic [3:0] divisor_i,
    //outputs
    output logic [7:0] quotient_o,
    output logic [4:0] remainder_o
);
    div_8bit dut(
        .dividend_i   (dividend_i),
        .divisor_i    (divisor_i),
        .quotient_o   (quotient_o),
        .remainder_o  (remainder_o)
    );
endmodule : top
