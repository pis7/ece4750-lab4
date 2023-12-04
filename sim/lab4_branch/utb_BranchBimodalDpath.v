//========================================================================
// utb_BranchBimodalDpath
//========================================================================
// A basic Verilog unit test bench for the Bimodal Branch Datapath module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN BranchBimodal
`endif

`include "BranchBimodalDpath.v"
`include "vc/trace.v"
`include "vc/mem-msgs.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

    logic                    reset;

    // Unit signals
    logic[31:0] PC;
    logic prediction;

    // Status signals
    logic entry_upper_reached;
    logic entry_lower_reached;

    // Control signals
    logic increment_entry;
    logic decrement_entry;

    lab4_branch_BranchBimodalDpath
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
        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   n);

        $display("");
        $display("Waiting for inc/dec signal");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y);

        $display("");
        $display("Received increment signal");
        @(negedge clk);
        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  y,   n);

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   n);

        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   n);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #2 Decrement entry if not reached limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Decrement entry if not reached limit");
        $display("---------------------------------------");

        @(negedge clk);
        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   n);

        $display("");
        $display("Waiting for inc/dec signal");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   n);

        $display("");
        $display("Received decrement signal");
        @(negedge clk);
        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   y);

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y);

        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   n);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #3 Upper limit set if counter = 2'b11
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 3: Upper limit set if counter = 2'b11");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         PC             inc  dec         
        //                        ent  ent
        //
        set_inputs(32'hFFFFFFFF,  n,   n);

        $display("");
        $display("Waiting for inc/dec signal");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y);

        $display("");
        $display("Received increment signal");
        for (int i = 0; i < 3; i++) begin
            @(negedge clk);
            //         PC             inc  dec         
            //                        ent  ent
            //
            set_inputs(32'hFFFFFFFF,  y,   n);
        end

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(y,   y,   n);

        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   n);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #4 Do not decrement entry if reached limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 4: Do not decrement entry if reached limit");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   n);

        $display("");
        $display("Waiting for inc/dec signal");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y);

        $display("");
        $display("Received increment signal");
        @(negedge clk);
        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  y,   n);

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   n);

        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   n);

        $display("");
        $display("Decrement entry, lower limit should be set");
        @(negedge clk);
        //         PC      inc  dec         
        //                 ent  ent
        //
        set_inputs(32'd0,  n,   y);

        @(negedge clk);
        //           prd  ent  ent           
        //                upp  low
        //                rcd  rcd
        test_outputs(n,   n,   y);

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
        input logic [31:0] t_PC,
        input logic t_increment_entry,
        input logic t_decrement_entry
    );
    begin
        assign PC = t_PC;
        assign increment_entry = t_increment_entry;
        assign decrement_entry = t_decrement_entry;
    end
    endfunction

    function void test_outputs
    (
        input logic t_prediction,
        input logic t_entry_upper_reached,
        input logic t_entry_lower_reached
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
        
    end
    endfunction

endmodule
