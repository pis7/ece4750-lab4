//========================================================================
// utb_BranchGShareDpath
//========================================================================
// A basic Verilog unit test bench for the GShare Branch Datapath module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN BranchGShare
`endif

`include "BranchGShareDpath.v"
`include "vc/trace.v"
`include "vc/mem-msgs.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

    logic                    reset;

    // Unit signals
    logic update_val;
    logic[31:0] PC;
    logic prediction;

    // Status signals
    logic entry_upper_reached;
    logic entry_lower_reached;

    // Control signals
    logic update_ghr;
    logic increment_entry;
    logic decrement_entry;

    lab4_branch_BranchGShareDpath
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
        // Unit Testing #1 Increment entry if not reached limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 1: Increment entry if not reached limit");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         upd  PC            upd   inc  dec         
        //         val                ghr   ent  ent
        //
        set_inputs(y,   32'hFFFFFFFF, n,    n,   n);

        $display("");
        $display("Waiting for inc/dec signal");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           prd  ent  ent  pht         
        //                upp  low  idx
        //                rcd  rcd
        test_outputs(n,   n,   y,   11'b11111111111);

        $display("");
        $display("Received increment signal");
        @(negedge clk);
        //         upd  PC            upd  inc  dec         
        //         val                ghr    ent  ent
        //
        set_inputs(y,   32'hFFFFFFFF, y,    y,   n);

        $display("");
        $display("GHR has changed, but PC XOR's it to all 1's");
        @(negedge clk);
        //           prd  ent  ent  pht         
        //                upp  low  idx
        //                rcd  rcd
        test_outputs(n,   n,   y,   11'b11111111110);

        //         upd  PC            upd   inc  dec         
        //         val                ghr   ent  ent
        //
        set_inputs(y,   32'hFFFFFFFF, n,    n,   n);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #2 Do not decrement entry if reached limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Do not decrement entry if reached limit");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        $display("");
        $display("Fill PHT and GHR");
        for (int i = 0; i < 128; i++) begin
            @(negedge clk);
            //         upd  PC     upd   inc  dec         
            //         val         ghr   ent  ent
            //
            set_inputs(y,   32'd0, y,    y,   n);
        end
        
        @(negedge clk);
        //           prd  ent  ent  pht       
        //                upp  low  idx
        //                rcd  rcd
        test_outputs(n,   n,   n,   11'b11111111111);

        $display("");
        $display("Received decrement signal");
        @(negedge clk);
        //         upd  PC     upd   inc  dec         
        //         val         ghr   ent  ent
        //
        set_inputs(n,   32'd0, y,    n,   y);

        @(negedge clk);
        //           prd  ent  ent  pht          
        //                upp  low  idx
        //                rcd  rcd
        test_outputs(n,   n,   y,   11'b11111111110);

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
        input logic t_update_val,
        input logic [31:0] t_PC,
        input logic t_update_ghr,
        input logic t_increment_entry,
        input logic t_decrement_entry
    );
    begin
        assign update_val = t_update_val;
        assign PC = t_PC;
        assign update_ghr = t_update_ghr;
        assign increment_entry = t_increment_entry;
        assign decrement_entry = t_decrement_entry;
    end
    endfunction

    function void test_outputs
    (
        input logic t_prediction,
        input logic t_entry_upper_reached,
        input logic t_entry_lower_reached,
        input logic [10:0] t_pht_index
    );
    begin
        assert(prediction == t_prediction) begin
            $display("prediction is correct.  Expected: %h, Actual: %h", t_prediction,prediction); pass();
        end else begin
            $display("prediction is incorrect.  Expected: %h, Actual: %h", t_prediction,prediction); fail(); $finish();
        end
        
        assert(entry_upper_reached == t_entry_upper_reached) begin
            $display("entry_upper_reached is correct.  Expected: %h, Actual: %h", t_entry_upper_reached,entry_upper_reached); pass();
        end else begin
            $display("entry_upper_reached is incorrect.  Expected: %h, Actual: %h", t_entry_upper_reached,entry_upper_reached); fail(); $finish();
        end
        
        assert(entry_lower_reached == t_entry_lower_reached) begin
            $display("entry_lower_reached is correct.  Expected: %h, Actual: %h", t_entry_lower_reached,entry_lower_reached); pass();
        end else begin
            $display("entry_lower_reached is incorrect.  Expected: %h, Actual: %h", t_entry_lower_reached,entry_lower_reached); fail(); $finish();
        end
        
        assert(DUT.pht_index == t_pht_index) begin
            $display("pht_index is correct.  Expected: %h, Actual: %h", t_pht_index,DUT.pht_index); pass();
        end else begin
            $display("pht_index is incorrect.  Expected: %h, Actual: %h", t_pht_index,DUT.pht_index); fail(); $finish();
        end
        
    end
    endfunction

endmodule
