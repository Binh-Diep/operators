module top(
    //inputs
    input logic clk_i,
    input logic [4:0] M_i,
    input logic [4:0] N_i,
    //outputs
    output logic [7:0] result_o
);
    //code
    mul_8bit dut (
        .clk_i    (clk_i),
    	.M_i      (M_i),
    	.N_i      (N_i),
    	.result_o (result_o)
    );
endmodule : top
