//=========================================================================
// Branch Predictor GShare Design
//=========================================================================

`ifndef LAB4_BRANCH_BRANCH_GSHARE_V
`define LAB4_BRANCH_BRANCH_GSHARE_V

`include "vc/mem-msgs.v"
`include "vc/queues.v"
`include "vc/trace.v"
`include "BranchGShareCtrl.v"
`include "BranchGShareDpath.v"

module lab4_branch_BranchGShare
#(
  parameter PHT_size  = 2048
)
(
  input  logic         clk,
  input  logic         reset,
  input logic update_en,
  input logic update_val,
  input logic [31:0] PC,
  output logic prediction

);

// Status signals
logic entry_upper_reached;
logic entry_lower_reached;

// Control signals
logic update_ghr;
logic increment_entry;
logic decrement_entry;

lab4_branch_BranchGlobalCtrl
#(
  .PHT_size(PHT_size)
)
ctrl
(
  .*
);

lab4_branch_BranchGlobalDpath
#(
  .PHT_size(PHT_size)
)
dpath
(
  .*
);


endmodule

`endif
