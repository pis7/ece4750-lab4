//========================================================================
// utb_BranchBimodal
//========================================================================
// A basic Verilog unit test bench for the Bimodal Branch module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN BranchBimodal
`endif

`include "BranchBimodal.v"
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

    lab4_branch_BranchBimodal
    #(
        .PHT_size(PHT_size)
    )
    DUT
    (
        .*
    );

    // PHT size
    localparam PHT_size = 64;

    // General logic
    localparam y = 1'b1;
    localparam n = 1'b0;
    localparam dc = 1'dx;

    // PC test values
    int unsigned thisPC;
    int unsigned thisPC1;
    int unsigned thisPC2;
    int unsigned thisPC3;

    initial begin

        //--------------------------------------------------------------------
        // Unit Testing #1: Loop with no branches
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 1: Loop with no branches");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        thisPC = $urandom_range(0, 2147483648);

        for (int i = 0; i < 20; i++) begin

            // Predict on empty table - no branches
            predict(n, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #2: Loop with single branch, always taken
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Loop with single branch, always taken");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        for (int i = 0; i < 20; i++) begin

            if (i < 2) begin

                // Predict NT on counter = 00 or 01, update with T
                predict_and_update(n, y, thisPC);
            end else begin

                // Predict T on counter = 10 or 11, update with T
                predict_and_update(y, y, thisPC);
            end
        end
            
        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #3: Loop with a single branch, always not taken
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 3: Loop with a single branch, always not taken");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on counter = 00, update with NT
            predict_and_update(n, n, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #4: Loop with a single branch, alternating between taken and not taken, counter has MSB = 0
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 4: Loop with a single branch, alternating between taken and not taken, counter has MSB = 0");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        thisPC = $urandom_range(0, 2147483648);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on counter = 00, update with T
            predict_and_update(n, y, thisPC);

            // Predict NT on counter = 01, update with NT
            predict_and_update(n, n, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #5: Loop with a single branch, alternating between taken and not taken, counter already has MSB = 1
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 5: Loop with a single branch, alternating between taken and not taken, counter already has MSB = 1");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        thisPC = $urandom_range(0, 2147483648);
        
        //         upd  upd  PC
        //         en   val
        //
        set_inputs(y,   y,   thisPC);
        @(negedge clk);
        @(negedge clk);

        for (int i = 0; i < 20; i++) begin

            // Predict T on counter = 10, update with T
            predict_and_update(y, y, thisPC);

            // Predict T on counter = 11, update with NT
            predict_and_update(y, n, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #6: Loop with a single branch, pattern T -> T -> NT
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 6: Loop with a single branch, pattern T -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on empty table, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with T
        predict_and_update(n, y, thisPC);

        // Predict T on counter = 10, update with NT
        predict_and_update(y, n, thisPC);

        // Predict NT on counter = 01, update with T
        predict_and_update(n, y, thisPC);

        // Predict T on counter = 10, update with T
        predict_and_update(y, y, thisPC);

        // Predict T on counter = 11, update with NT
        predict_and_update(y, n, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict T on counter = 10, update with T
            predict_and_update(y, y, thisPC);

            // Predict T on counter = 11, update with T
            predict_and_update(y, y, thisPC);

            // Predict T on counter = 11, update with NT
            predict_and_update(y, n, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #7: Loop with a single branch, pattern NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 7: Loop with a single branch, pattern NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on empty table, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on counter = 01, update with NT
            predict_and_update(n, n, thisPC);

            // Predict NT on counter = 00, update with NT
            predict_and_update(n, n, thisPC);

            // Predict NT on counter = 00, update with T
            predict_and_update(n, y, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #8: Loop with a single branch, pattern T -> T -> T -> NT
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 8: Loop with a single branch, pattern T -> T -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on empty table, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with T
        predict_and_update(n, y, thisPC);

        // Predict T on counter = 10, update with T
        predict_and_update(y, y, thisPC);

        // Predict T on counter = 11, update with NT
        predict_and_update(y, n, thisPC);

        // Predict T on counter = 10, update with T
        predict_and_update(y, y, thisPC);

        // Predict T on counter = 11, update with T
        predict_and_update(y, y, thisPC);

        // Predict T on counter = 11, update with T
        predict_and_update(y, y, thisPC);

        // Predict T on counter = 11, update with NT
        predict_and_update(y, n, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict T on counter = 10, update with T
            predict_and_update(y, y, thisPC);

            // Predict T on counter = 11, update with T
            predict_and_update(y, y, thisPC);

            // Predict T on counter = 11, update with T
            predict_and_update(y, y, thisPC);

            // Predict T on counter = 11, update with NT
            predict_and_update(y, n, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #9: Loop with a single branch, pattern NT -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 9: Loop with a single branch, pattern NT -> NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on empty table, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on counter = 01, update with NT
            predict_and_update(n, n, thisPC);

            // Predict NT on counter = 00, update with NT
            predict_and_update(n, n, thisPC);

            // Predict NT on counter = 00, update with NT
            predict_and_update(n, n, thisPC);

            // Predict NT on counter = 00, update with T
            predict_and_update(n, y, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #10: Loop with a single branch, pattern T -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 10: Loop with a single branch, pattern T -> NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on empty table, update with T
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with T
        predict_and_update(n, y, thisPC);

        // Predict T on counter = 10, update with NT
        predict_and_update(y, n, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on counter = 01, update with T
            predict_and_update(n, y, thisPC);

            // Predict T on counter = 10, update with NT
            predict_and_update(y, n, thisPC);

            // Predict NT on counter = 01, update with NT
            predict_and_update(n, n, thisPC);

            // Predict NT on counter = 00, update with T
            predict_and_update(n, y, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #11: Loop with a single branch, pattern T -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 11: Loop with a single branch, pattern T -> NT -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on empty table, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on counter = 00, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on counter = 01, update with NT
        predict_and_update(n, n, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on counter = 00, update with T
            predict_and_update(n, y, thisPC);

            // Predict NT on counter = 01, update with NT
            predict_and_update(n, n, thisPC);

            // Predict NT on counter = 00, update with T
            predict_and_update(n, y, thisPC);

            // Predict NT on counter = 01, update with NT
            predict_and_update(n, n, thisPC);
        end

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
        input logic [31:0] t_PC
    );
    begin
        assign update_en = t_update_en;
        assign update_val = t_update_val;
        assign PC = t_PC;
    end
    endfunction

    function void test_outputs
    (
        input logic t_prediction
    );
    begin
        assert(prediction == t_prediction) begin
            //$display("prediction is correct.  Expected: %h, Actual: %h", t_prediction,prediction);
            pass();
        end else begin
            $display("prediction is incorrect.  Expected: %h, Actual: %h", t_prediction,prediction); fail(); $finish();
        end
        
    end
    endfunction

    function void predict
    (
        input logic t_predict,
        input int unsigned t_thisPC
    );
    begin
        @(negedge clk);
        // ----------- Predict -----------
        //         upd  upd  PC
        //         en   val
        //
        set_inputs(n,   n,   t_thisPC);

        //           prd
        test_outputs(t_predict);

        delay( $urandom_range(0, 127) );
    end
    endfunction

    function void update
    (
        input logic t_update,
        input int unsigned t_thisPC
    );
    begin
        @(negedge clk);
        // ----------- Update -----------
        //         upd  upd         PC
        //         en   val
        //
        set_inputs(y,   t_update,   t_thisPC);

        @(negedge clk);
        //         upd  upd         PC
        //         en   val
        //
        set_inputs(n,   t_update,   t_thisPC);

        delay( $urandom_range(0, 127) );
    end
    endfunction

    function void predict_and_update
    (
        input logic t_predict,
        input logic t_update,
        input int unsigned t_thisPC

    );
    begin
        predict(t_predict, t_thisPC);
        update(t_update, t_thisPC);
    end
    endfunction

endmodule
