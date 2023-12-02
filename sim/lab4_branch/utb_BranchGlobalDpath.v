//========================================================================
// utb_BranchGlobalDpath
//========================================================================
// A basic Verilog unit test bench for the Global Branch Datapath module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN BranchGlobal
`endif

`include "BranchGlobalDpath.v"
`include "vc/trace.v"
`include "vc/mem-msgs.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

    logic                    reset;

    // Unit signals
    logic update_val;
    logic prediction;

    // Status signals
    logic entry_upper_reached;
    logic entry_lower_reached;

    // Control signals
    logic update_ghr;
    logic increment_entry;
    logic decrement_entry;

    lab4_branch_BranchGlobalDpath
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
        //         upd  upd   inc  dec         
        //         val  ghr   ent  ent
        //
        set_inputs(y,   n,    n,   n);

        $display("");
        $display("Waiting for inc/dec signal");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           prd  ent  ent  ghr         
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y,   11'b00000000000);

        $display("");
        $display("Received increment signal");
        @(negedge clk);
        //         upd  upd   inc  dec         
        //         val  ghr   ent  ent
        //
        set_inputs(y,   y,    y,   n);

        $display("");
        $display("GHR has changed, so indexing different PHT entry");
        @(negedge clk);
        //           prd  ent  ent  ghr         
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y,   11'b00000000001);

        //         upd  upd   inc  dec         
        //         val  ghr   ent  ent
        //
        set_inputs(y,   n,    n,   n);

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
            //         upd  upd   inc  dec         
            //         val  ghr   ent  ent
            //
            set_inputs(y,   y,    y,   n);
        end

        @(negedge clk);
        //           prd  ent  ent  ghr       
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   n,   11'b11111111111);

        $display("");
        $display("Received decrement signal");
        @(negedge clk);
        //         upd  upd   inc  dec         
        //         val  ghr   ent  ent
        //
        set_inputs(n,   y,    n,   y);

        @(negedge clk);
        //           prd  ent  ent   ghr          
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y,    11'b11111111110);

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
        input logic t_update_ghr,
        input logic t_increment_entry,
        input logic t_decrement_entry
    );
    begin
        assign update_val = t_update_val;
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
        input logic [10:0] t_ghr
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
        
        assert(DUT.ghr == t_ghr) begin
            $display("ghr is correct.  Expected: %h, Actual: %h", t_ghr,DUT.ghr); pass();
        end else begin
            $display("ghr is incorrect.  Expected: %h, Actual: %h", t_ghr,DUT.ghr); fail(); $finish();
        end
        
    end
    endfunction

endmodule
