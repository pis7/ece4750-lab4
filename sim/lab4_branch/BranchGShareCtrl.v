//=========================================================================
// Branch Predictor GShare Design Control Unit
//=========================================================================

module lab4_branch_BranchGShareCtrl
#(
    parameter PHT_size  = 2048
)
(
    input  logic         clk,
    input  logic         reset,
    input  logic update_en,
    input  logic update_val,

    // Status signals
    input logic entry_upper_reached,
    input logic entry_lower_reached,

    // Control signals
    output logic update_ghr,
    output logic increment_entry,
    output logic decrement_entry
);

localparam IDLE = 1'b0;
localparam UPDATE = 1'b1;

logic state;
logic nextState;

// State flip flop
always_ff @(posedge clk) begin
    if(reset) state <= IDLE;
    else state <= nextState;
end

// Next state logic
always_comb begin
    if(reset) nextState = IDLE;
    case(state)
        IDLE: begin
            if (update_en) nextState = UPDATE;
            else nextState = IDLE;
        end
        UPDATE: begin
            if (!update_en) nextState = IDLE;
            else nextState = UPDATE;
        end
        default: begin
            nextState = IDLE;
        end
    endcase
end

// Output logic
always_comb begin
    case(state)
        IDLE: begin
            update_ghr = 1'b0;
            increment_entry = 1'b0;
            decrement_entry = 1'b0;
        end
        UPDATE: begin
            update_ghr = 1'b1;
            increment_entry = update_val && !entry_upper_reached;
            decrement_entry = !update_val && !entry_lower_reached;
        end
        default: begin
            update_ghr = 1'b0;
            increment_entry = 1'b0;
            decrement_entry = 1'b0;
        end
    endcase
end

endmodule
