//=========================================================================
// Branch Predictor Global Design
//=========================================================================

`ifndef LAB4_BRANCH_BRANCH_GLOBAL_V
`define LAB4_BRANCH_BRANCH_GLOBAL_V

`include "vc/mem-msgs.v"
`include "vc/queues.v"
`include "vc/trace.v"
`include "BranchGlobalCtrl.v"
`include "BranchGlobalDpath.v"

module lab4_branch_BranchGlobal
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
