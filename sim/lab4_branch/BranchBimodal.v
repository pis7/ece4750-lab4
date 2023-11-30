//=========================================================================
// Branch Predictor Bimodal Design
//=========================================================================

`ifndef LAB4_BRANCH_BRANCH_BIMODAL_V
`define LAB4_BRANCH_BRANCH_BIMODAL_V

`include "BranchBimodalCtrl.v"
`include "BranchBimodalDpath.v"

module lab4_branch_BranchBimodal
#(
  parameter PHT_size  = 2048
)
(
  input  logic         clk,
  input  logic         reset,
  input logic update_en,
  input logic update_val,
  input logic[31:0] PC,
  output logic prediction
);

// Status signals
logic entry_upper_reached;
logic entry_lower_reached;

// Control signals
logic increment_entry;
logic decrement_entry;

lab4_branch_BranchBimodalCtrl
#(
  .PHT_size(PHT_size)
)
ctrl
(
  .*
);

lab4_branch_BranchBimodalDpath
#(
  .PHT_size(PHT_size)
)
dpath
(
  .*
);

endmodule

`endif
