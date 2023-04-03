/* verilator lint_off UNUSED */
module mul_8bit (
    //inputs
    input logic clk_i,
    input logic [4:0] M_i,
    input logic [4:0] N_i,
    //outputs
    output logic [7:0] result_o
);
    //variables
    logic flag_less_load;
    logic flag_equal_load;
    logic flag_less_shift;
    logic flag_equal_shift;
    logic [5:0]  A_tmp;
    logic [5:0]  Q_tmp;
    logic [5:0]  M_tmp;
    logic [2:0]  count;
    logic [8:0]  sum_01;
    logic [12:0] REG;
    typedef enum logic [2:0] {
    	INIT     = 3'b000,
    	PRE_BOOT = 3'b001,
    	LOAD     = 3'b010,
    	SHIFT    = 3'b011,
    	UPLOAD   = 3'b100,
    	CALC     = 3'b101,
    	SEND     = 3'b110
    } state_e;
    state_e current_state;
    //module
    brcomp BR_LOAD(
        .operand_a_i ({5'h0,count}),
        .operand_b_i ({5'h0,3'b100}),
        .less_o      (flag_less_load),
        .equal_o     (flag_equal_load)
    );
    brcomp BR_SHIFT(
        .operand_a_i ({5'h0,count}),
        .operand_b_i ({5'h0,3'b000}),
        .less_o      (flag_less_shift),
        .equal_o     (flag_equal_shift)
    );
    adder_8bit ADD_CALC(
        .M_i      ({2'b0,A_tmp}),//8bit
        .N_i      ({2'b0,M_tmp}),//8bit
        .result_o (sum_01)
    );
    //code
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                A_tmp <= 6'h0;
                Q_tmp <= 6'h0;
                M_tmp <= 6'h0;
                count <= 3'h0;
                current_state <= PRE_BOOT;
            end
            PRE_BOOT: begin
                M_tmp <= {1'b0,M_i};
                Q_tmp <= {1'b0,N_i};
                current_state <= LOAD;
            end
            LOAD: begin
                if (flag_less_load & (!flag_equal_load)) begin
                    REG[12:0] <= {A_tmp,Q_tmp,REG[0]};
                    current_state <= SHIFT;
                end
                else begin
                    current_state <= SEND;
                end
            end
            SHIFT: begin
                if ((!flag_less_shift) & (!flag_equal_shift)) begin
                    REG[12:0] <= (REG[12])?({2'b11,REG[12:2]}):({2'b00,REG[12:2]});
                    current_state <= UPLOAD;
                end
                else begin
                    current_state <= UPLOAD;
                end
            end
            UPLOAD: begin
                A_tmp <= REG[12:7];
                Q_tmp <= REG[6:1];
                current_state <= CALC;
            end
            CALC: begin
                case (REG[2:0])
                    3'b000,3'b111: begin
                        A_tmp <= (A_tmp + 6'h0);
                    end
                    3'b001,3'b010: begin
                        A_tmp <= sum_01[5:0];
                    end
                    3'b011: begin
                        A_tmp <= (A_tmp + {M_tmp[4:0],1'b0});
                    end
                    3'b100: begin
                        A_tmp <= (A_tmp + (~({M_tmp[4:0],1'b0}) + 1));
                    end
                    3'b101,3'b110: begin
                        A_tmp <= (A_tmp + (~(M_tmp) + 1));
                    end
                    default: A_tmp <= 6'h0;
                endcase
                count         <= (count + 1);
                current_state <= LOAD; 
            end
            SEND: begin
                result_o <= REG[8:1];
            end
            default: result_o <= 8'h00;
        endcase
    end
endmodule : mul_8bit
