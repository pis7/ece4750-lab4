//=========================================================================
// Branch Predictor Bimodal Design Control Unit
//=========================================================================

module lab4_branch_BranchBimodalCtrl
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
    output logic increment_entry,
    output logic decrement_entry
);

always_comb begin
    if (reset) begin
        increment_entry = 1'b0;
        decrement_entry = 1'b0;
    end else if (update_en) begin
        increment_entry = update_val && !entry_upper_reached;
        decrement_entry = !update_val && !entry_lower_reached;
    end else begin
        increment_entry = 1'b0;
        decrement_entry = 1'b0;
    end
end

endmodule
