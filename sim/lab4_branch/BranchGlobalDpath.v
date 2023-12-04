//=========================================================================
// Branch Predictor Global Design Datapath Unit
//=========================================================================

module lab4_branch_BranchGlobalDpath
#(
  parameter PHT_size  = 2048
)
(
  input  logic clk,
  input  logic reset,
  input  logic update_val,
  output logic prediction,

  // Status signals
  output logic entry_upper_reached,
  output logic entry_lower_reached,

  // Control signals
  input logic update_ghr,
  input logic increment_entry,
  input logic decrement_entry
);

// GHR length
localparam ghr_length = $clog2(PHT_size);

// Counts array
logic [PHT_size-1:0][1:0] counts; // May not be fully toggled

// Global register
logic [ghr_length-1:0] ghr;

// PHT entry update
always_ff @(posedge clk) begin
  if (reset) begin
    ghr <= {ghr_length{1'b0}};
    counts <= {PHT_size{2'b0}};
  end
  else if (increment_entry) counts[ghr] <= counts[ghr] + 1'b1; // Increment saturating counter if below upper limit
  else if (decrement_entry) counts[ghr] <= counts[ghr] - 1'b1; // Decrement saturating counter if above lower limit
  if (!reset && update_ghr) ghr <= ((ghr << 1) | {{(ghr_length-1){1'b0}}, update_val}); // Update GHR
end

// Limit checker
assign entry_upper_reached = counts[ghr] == 2'b11;
assign entry_lower_reached = counts[ghr] == 2'b00;

// Combinational prediction generation
assign prediction = counts[ghr][1]; // Prediction is the MSB of the PHT entry indexed by the PC

endmodule
