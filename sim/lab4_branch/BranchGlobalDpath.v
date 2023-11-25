//=========================================================================
// Branch Predictor Global Design Datapath Unit
//=========================================================================

module lab4_branch_BranchBimodalDpath
#(
  parameter PHT_size  = 2048
)
(
  input  logic         clk,
  input  logic         reset,
  input  logic update_val,
  input  logic[31:0] PC,
  output logic prediction,

  // Status signals
  output logic entry_upper_reached,
  output logic entry_lower_reached,

  // Control signals
  input logic update_gbr,
  input logic increment_entry,
  input logic decrement_entry
);

// GBR length
logic gbr_length = $clog2(PHT_size);

// Counts array
logic [PHT_size-1:0][1:0] counts;

// Global register
logic [$clog2(PHT_size)-1:0] gbr;

// PHT entry update
always_ff(@posedge clk) begin
  if (reset) begin
    gbr <= {gbr_length{1'b0}};
    counts <= {PHT_size{2'b0}};
  end
  else if (increment_entry) counts[gbr] <= counts[gbr] + 1'b1; // Increment saturating counter if below upper limit
  else if (decrement_entry) counts[gbr] <= counts[gbr] - 1'b1; // Decrement saturating counter if above lower limit
  if (!reset && update_gbr) gbr <= ((gbr << 1) | {(gbr_length-1){1'b0}, update_val}); // Update GBR
end

// Limit checker
assign entry_upper_reached = counts[gbr] == 2'b11;
assign entry_lower_reached = counts[gbr] == 2'b00;

// Combinational prediction generation
assign prediction = counts[gbr][1]; // Prediction is the MSB of the PHT entry indexed by the PC

endmodule

`endif