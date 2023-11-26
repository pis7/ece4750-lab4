//========================================================================
// utb_BranchBimodalCtrl
//========================================================================
// A basic Verilog unit test bench for the Bimodal Branch Control module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN Bimodal
`endif

`include "BranchBimodalCtrl.v"
`include "vc/trace.v"
`include "vc/mem-msgs.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

    logic                    reset;

    // Unit signals
    logic update_en;
    logic update_val;
    logic[31:0] PC;
    logic prediction;

    // Status signals
    logic entry_upper_reached;
    logic entry_lower_reached;

    // Control signals
    logic increment_entry;
    logic decrement_entry;

    lab4_branch_BranchBimodalCtrl
    #(
        .PHT_size(2048)
    )
    DUT
    (
        .*
    );

    // General logic
    localparam y = 1'b1;
    localparam n = 1'b0;
    localparam dc = 1'dx;

    // States
    localparam IDLE = 1'b0;
    localparam UPDATE = 1'b1;

    initial begin

        //--------------------------------------------------------------------
        // Unit Testing #1 Update decrement entry, not at lower limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 1: Update decrement entry, not at lower limit");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(n,   n,   n,   n);

        $display("");
        $display("Waiting for update_en");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           inc  dec
        //           ent  ent
        //
        test_outputs(n,   n);

        $display("");
        $display("update_en is high, update_val is low and lower limit not reached - decrement");
        @(negedge clk);
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(y,   n,   n,   n);

        @(posedge clk);
        //           inc  dec
        //           ent  ent
        //
        test_outputs(n,   y);

        delay( $urandom_range(0, 127) );

        $display();
        $display("All tests passed!");
        $finish();

    end

    task delay( int delay_val );
      begin
          for( int i = 0; i < delay_val; i = i + 1 ) begin
              #1;
          end
      end
    endtask

    function void set_inputs
    (
        input logic t_update_en,
        input logic t_update_val,
        input logic t_entry_upper_reached,
        input logic t_entry_lower_reached
    );
    begin
        assign update_en = t_update_en;
        assign update_val = t_update_val;
        assign entry_upper_reached = t_entry_upper_reached;
        assign entry_lower_reached = t_entry_lower_reached;
    end
    endfunction

    function void test_outputs
    (
        input logic t_increment_entry,
        input logic t_decrement_entry,
        // input logic t_state,
        // input logic t_nextState
    );
    begin
        assert(increment_entry == t_increment_entry) begin
            $display("increment_entry is correct.  Expected: %h, Actual: %h", t_increment_entry,increment_entry); pass();
        end else begin
            $display("increment_entry is incorrect.  Expected: %h, Actual: %h", t_increment_entry,increment_entry); fail(); $finish();
        end
        
        assert(decrement_entry == t_decrement_entry) begin
            $display("decrement_entry is correct.  Expected: %h, Actual: %h", t_decrement_entry,decrement_entry); pass();
        end else begin
            $display("decrement_entry is incorrect.  Expected: %h, Actual: %h", t_decrement_entry,decrement_entry); fail(); $finish();
        end

        // assert(DUT.state == t_state) begin
        //     $display("state is correct.  Expected: %h, Actual: %h", t_state,DUT.state); pass();
        // end else begin
        //     $display("state is incorrect.  Expected: %h, Actual: %h", t_state,DUT.state); fail(); $finish();
        // end

        // assert(DUT.nextState == t_nextState) begin
        //     $display("nextState is correct.  Expected: %h, Actual: %h", t_nextState,DUT.nextState); pass();
        // end else begin
        //     $display("nextState is incorrect.  Expected: %h, Actual: %h", t_nextState,DUT.nextState); fail(); $finish();
        // end
        
    end
    endfunction

endmodule
