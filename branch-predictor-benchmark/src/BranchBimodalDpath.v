//=========================================================================
// Branch Predictor Bimodal Design Datapath Unit
//=========================================================================

module lab4_branch_BranchBimodalDpath
#(
  parameter PHT_size  = 2048
)
(
  input  logic         clk,
  input  logic         reset,
  input  logic[31:0] PC,
  output logic prediction,

  // Status signals
  output logic entry_upper_reached,
  output logic entry_lower_reached,

  // Control signals
  input logic increment_entry,
  input logic decrement_entry
);

// PC index length
localparam pc_index_length = $clog2(PHT_size);

// Counts array
logic [PHT_size-1:0][1:0] counts;

// PC index
logic [pc_index_length-1:0] pc_index;
assign pc_index = PC[pc_index_length+1:2];

// PHT entry update
always_ff @(posedge clk) begin
  if (reset) begin
    counts <= {PHT_size{2'b0}};
  end
  else if (increment_entry) counts[pc_index] <= counts[pc_index] + 1'b1; // Increment saturating counter if below upper limit
  else if (decrement_entry) counts[pc_index] <= counts[pc_index] - 1'b1; // Decrement saturating counter if above lower limit
end

// Limit checker
assign entry_upper_reached = counts[pc_index] == 2'b11;
assign entry_lower_reached = counts[pc_index] == 2'b00;

// Combinational prediction generation
assign prediction = counts[pc_index][1]; // Prediction is the MSB of the PHT entry indexed by the PC

endmodule
