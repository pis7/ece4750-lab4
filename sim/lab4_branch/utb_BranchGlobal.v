//========================================================================
// utb_BranchGlobal
//========================================================================
// A basic Verilog unit test bench for the Global Branch module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN BranchGlobal
`endif

`include "BranchGlobal.v"
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

    lab4_branch_BranchGlobal
    #(
        .PHT_size(PHT_size)
    )
    DUT
    (
        .*
    );

    // PHT size
    localparam PHT_size = 64;

    // PHT index size
    localparam PHT_index_size = $clog2(PHT_size);

    // General logic
    localparam y = 1'b1;
    localparam n = 1'b0;
    localparam dc = 1'dx;

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

        for (int i = 0; i < 20; i++) begin

            // Predict on empty table - no branches
            predict(n);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #2: Series of branches, always taken
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Series of branches, always taken");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        for (int i = 0; i < 20; i++) begin

            if (i > PHT_index_size + 1) begin

                // Predict T when GHR = 111111, update with T
                predict_and_update(y, y);
            end else begin

                // Predict NT otherwise, update with T
                predict_and_update(n, y);
            end

        end
            
        delay( $urandom_range(0, 127) );
        
        //--------------------------------------------------------------------
        // Unit Testing #3: Series of branches, always not taken
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 3: Series of branches, always not taken");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        for (int i = 0; i < 20; i++) begin

            // Predict NT, update with NT
            predict_and_update(n, n);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #4: Series of branches, alternating between taken and not taken, counter has MSB = 0
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 4: Series of branches, alternating between taken and not taken, counter has MSB = 0");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        // Predict NT on GHR = 000000, update with T
        predict_and_update(n, y);

        // Predict NT on GHR = 000001, update with NT
        predict_and_update(n, n);

        // Predict NT on GHR = 000010, update with T
        predict_and_update(n, y);

        // Predict NT on GHR = 000101, update with NT
        predict_and_update(n, n);

        // Predict NT on GHR = 001010, update with T
        predict_and_update(n, y);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101010, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101010, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n);
        
        // Predict T on GHR = 101010, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n);
        
        // Predict T on GHR = 101010, count == 11, update with T -> inc count
        predict_and_update(y, y);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
            predict_and_update(n, n);
            
            // Predict T on GHR = 101010, count == 11, update with T -> inc count
            predict_and_update(y, y);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #5: Series of branches, pattern T -> T -> NT
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 5: Series of branches, pattern T -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000001, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000110, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 001101, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 110110, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 101101, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 110110, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 101101, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict T on GHR = 110110, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict T on GHR = 101101, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict T on GHR = 110110, count == 11, update with T -> inc count
        predict_and_update(y, y);

        // Predict T on GHR = 101101, count == 11, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        for (int i = 0; i < 20; i++) begin

            // Predict T on GHR = 110110, count == 11, update with T -> inc count
            predict_and_update(y, y);

            // Predict T on GHR = 101101, count == 11, update with T -> inc count
            predict_and_update(y, y);

            // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
            predict_and_update(n, n);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #6: Series of branches, pattern NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 6: Series of branches, pattern NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000100, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100100, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100100, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict T on GHR = 100100, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict T on GHR = 100100, count == 11, update with T -> inc count
        predict_and_update(y, y);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict T on GHR = 100100, count == 11, update with T -> inc count
            predict_and_update(y, y);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #7: Series of branches, pattern T -> T -> T -> NT
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 7: Series of branches, pattern T -> T -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000001, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000011, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000111, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001110, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 011101, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 111011, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101110, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 011101, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 111011, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101110, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict T on GHR = 011101, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict T on GHR = 111011, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101110, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict T on GHR = 011101, count == 11, update with T -> inc count
        predict_and_update(y, y);

        // Predict T on GHR = 111011, count == 11, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 101110, count == 11, update with T -> inc count
            predict_and_update(y, y);

            // Predict T on GHR = 011101, count == 11, update with T -> inc count
            predict_and_update(y, y);

            // Predict T on GHR = 111011, count == 11, update with T -> inc count
            predict_and_update(y, y);

            // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
            predict_and_update(n, n);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #8: Series of branches, pattern NT -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 8: Series of branches, pattern NT -> NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001000, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001000, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001000, count == 10, update with T -> inc count
        predict_and_update(y, y);
        
        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 010001, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict NT on GHR = 100010, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict NT on GHR = 001000, count == 11, update with T -> inc count
            predict_and_update(y, y);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #9: Series of branches, pattern T -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 9: Series of branches, pattern T -> NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000010, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000100, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 001001, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001100, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 011001, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001100, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 011001, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001100, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 011001, count == 10, update with T -> inc count
        predict_and_update(y, y);

        // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001100, count == 11, update with T -> inc count
        predict_and_update(y, y);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 011001, count == 11, update with T -> inc count
            predict_and_update(y, y);

            // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict NT on GHR = 001100, count == 11, update with T -> inc count
            predict_and_update(y, y);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #10: Series of branches, pattern T -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 10: Series of branches, pattern T -> NT -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 000010, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 000101, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 001010, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101010, count == 00, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101010, count == 01, update with T -> inc count
        predict_and_update(n, y);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n);

        // Predict NT on GHR = 101010, count == 10, update with T -> inc count
        predict_and_update(y, y);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
            predict_and_update(n, n);

            // Predict NT on GHR = 101010, count == 11, update with T -> inc count
            predict_and_update(y, y);
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
        input logic t_update_val
    );
    begin
        assign update_en = t_update_en;
        assign update_val = t_update_val;
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
        input logic t_predict
    );
    begin
        @(negedge clk);
        // ----Predict ----
        //         upd  upd
        //         en   val
        //
        set_inputs(n,   n);

        @(negedge clk);
        //           prd
        test_outputs(t_predict);

        delay( $urandom_range(0, 127) );
    end
    endfunction

    function void update
    (
        input logic t_update
    );
    begin
        @(negedge clk);
        // ---- Update ----
        //         upd  upd
        //         en   val
        //
        set_inputs(y,   t_update);

        @(negedge clk);
        //         upd  upd
        //         en   val
        //
        set_inputs(n,   t_update);

        delay( $urandom_range(0, 127) );
    end
    endfunction

    function void predict_and_update
    (
        input logic t_predict,
        input logic t_update

    );
    begin
        predict(t_predict);
        update(t_update);
    end
    endfunction

endmodule
