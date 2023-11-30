//========================================================================
// utb_BranchGShare
//========================================================================
// A basic Verilog unit test bench for the GShare Branch module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN BranchGShare
`endif

`include "BranchGShare.v"
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

    lab4_branch_BranchGShare
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

    // PC test values
    int unsigned thisPC;
    int unsigned thisPC1;
    int unsigned thisPC2;
    int unsigned thisPC3;
    int unsigned thisPC4;
    int unsigned thisPC5;


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

            if (i > PHT_index_size + 1) begin

                // Predict T when GHR = 111111, update with T
                predict_and_update(y, y, thisPC);
            end else begin

                // Predict NT otherwise, update with T
                predict_and_update(n, y, thisPC);
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

            // Predict NT, update with NT
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

        // Predict NT on GHR = 000000, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000001, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000010, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000101, update with NT
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001010, update with T
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101010, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101010, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);
        
        // Predict T on GHR = 101010, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);
        
        // Predict T on GHR = 101010, count == 11, update with T -> inc count
        predict_and_update(y, y, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);
            
            // Predict T on GHR = 101010, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #5: Loop with a single branch, pattern T -> T -> NT
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 5: Loop with a single branch, pattern T -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000001, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000110, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 001101, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 110110, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 101101, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 110110, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 101101, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict T on GHR = 110110, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict T on GHR = 101101, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict T on GHR = 110110, count == 11, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict T on GHR = 101101, count == 11, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict T on GHR = 110110, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

            // Predict T on GHR = 101101, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

            // Predict NT on GHR = 011011, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #6: Loop with a single branch, pattern NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 6: Loop with a single branch, pattern NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000100, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100100, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100100, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict T on GHR = 100100, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict T on GHR = 100100, count == 11, update with T -> inc count
        predict_and_update(y, y, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 001001, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict NT on GHR = 010010, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict T on GHR = 100100, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #7: Loop with a single branch, pattern T -> T -> T -> NT
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 7: Loop with a single branch, pattern T -> T -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000001, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000011, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000111, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001110, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 011101, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 111011, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101110, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 011101, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 111011, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101110, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict T on GHR = 011101, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict T on GHR = 111011, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101110, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict T on GHR = 011101, count == 11, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict T on GHR = 111011, count == 11, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 101110, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

            // Predict T on GHR = 011101, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

            // Predict T on GHR = 111011, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

            // Predict NT on GHR = 110111, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #8: Loop with a single branch, pattern NT -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 8: Loop with a single branch, pattern NT -> NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000000, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001000, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001000, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001000, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);
        
        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 010001, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict NT on GHR = 100010, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict NT on GHR = 000100, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict NT on GHR = 001000, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #9: Loop with a single branch, pattern T -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 9: Loop with a single branch, pattern T -> NT -> NT -> T");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000010, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000100, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 001001, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001100, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 011001, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001100, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 011001, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001100, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 011001, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001100, count == 11, update with T -> inc count
        predict_and_update(y, y, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 011001, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);

            // Predict NT on GHR = 110011, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict NT on GHR = 100110, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict NT on GHR = 001100, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #10: Loop with a single branch, pattern T -> NT -> NT -> T
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 10: Loop with a single branch, pattern T -> NT -> T -> NT");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        thisPC = $urandom_range(0, 2147483648);

        // Predict NT on GHR = 000000, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000001, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 000010, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 000101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 001010, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101010, count == 00, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101010, count == 01, update with T -> inc count
        predict_and_update(n, y, thisPC);

        // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
        predict_and_update(n, n, thisPC);

        // Predict NT on GHR = 101010, count == 10, update with T -> inc count
        predict_and_update(y, y, thisPC);

        for (int i = 0; i < 20; i++) begin

            // Predict NT on GHR = 010101, count == 00, update with NT -> dec count
            predict_and_update(n, n, thisPC);

            // Predict NT on GHR = 101010, count == 11, update with T -> inc count
            predict_and_update(y, y, thisPC);
        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #11: Loop with 5 branches, always taken
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 11: Loop with 5 branches, always taken");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        // Unique PHT indices
        thisPC1 = 0; // index = 000000
        thisPC2 = 4; // index = 000001
        thisPC3 = 20; // index = 000101
        thisPC4 = 200; // index = 110010
        thisPC5 = 252; // index = 111111
        
        // Branch 1: GHR = 000000 -> PHT_idx = 000000 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC1);

        // Branch 2: GHR = 000001 -> PHT_idx = 000000 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC2);

        // Branch 3: GHR = 000011 -> PHT_idx = 000110 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC3);
                           
        // Branch 4: GHR = 000111 -> PHT_idx = 110100 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC4);

        // Branch 5: GHR = 001111 -> PHT_idx = 110000 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC5);

        
        
        // Branch 1: GHR = 011111 -> PHT_idx = 011111 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC1);

        // Branch 2: GHR = 111111 -> PHT_idx = 111110 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC2);

        // Branch 3: GHR = 111111 -> PHT_idx = 111010 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC3);
                           
        // Branch 4: GHR = 111111 -> PHT_idx = 001101 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC4);

        // Branch 5: GHR = 111111 -> PHT_idx = 000000 -> Predict T on counter = 10 -> update with T
        predict_and_update(y, y, thisPC5);

        
        
        // Branch 1: GHR = 111111 -> PHT_idx = 111111 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC1);

        // Branch 2: GHR = 111111 -> PHT_idx = 111110 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC2);

        // Branch 3: GHR = 111111 -> PHT_idx = 111010 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC3);
                           
        // Branch 4: GHR = 111111 -> PHT_idx = 001101 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC4);

        // Branch 5: GHR = 111111 -> PHT_idx = 000000 -> Predict T on counter = 11 -> update with T
        predict_and_update(y, y, thisPC5);

        
        
        // Branch 1: GHR = 111111 -> PHT_idx = 111111 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC1);

        // Branch 2: GHR = 111111 -> PHT_idx = 111110 -> Predict NT on counter = 10 -> update with T
        predict_and_update(y, y, thisPC2);

        // Branch 3: GHR = 111111 -> PHT_idx = 111010 -> Predict NT on counter = 10 -> update with T
        predict_and_update(y, y, thisPC3);
                           
        // Branch 4: GHR = 111111 -> PHT_idx = 001101 -> Predict NT on counter = 10 -> update with T
        predict_and_update(y, y, thisPC4);

        // Branch 5: GHR = 111111 -> PHT_idx = 000000 -> Predict T on counter = 11 -> update with T
        predict_and_update(y, y, thisPC5);

        
        
        // Branch 1: GHR = 111111 -> PHT_idx = 111111 -> Predict NT on counter = 10 -> update with T
        predict_and_update(y, y, thisPC1);

        // Branch 2: GHR = 111111 -> PHT_idx = 111110 -> Predict NT on counter = 11 -> update with T
        predict_and_update(y, y, thisPC2);

        // Branch 3: GHR = 111111 -> PHT_idx = 111010 -> Predict NT on counter = 11 -> update with T
        predict_and_update(y, y, thisPC3);
                           
        // Branch 4: GHR = 111111 -> PHT_idx = 001101 -> Predict NT on counter = 11 -> update with T
        predict_and_update(y, y, thisPC4);

        // Branch 5: GHR = 111111 -> PHT_idx = 000000 -> Predict T on counter = 11 -> update with T
        predict_and_update(y, y, thisPC5);



        for (int i = 0; i < 20; i++) begin

            // Branch 1: GHR = 111111 -> PHT_idx = 111111 -> Predict NT on counter = 11 -> update with T
            predict_and_update(y, y, thisPC1);

            // Branch 2: GHR = 111111 -> PHT_idx = 111110 -> Predict NT on counter = 11 -> update with T
            predict_and_update(y, y, thisPC2);

            // Branch 3: GHR = 111111 -> PHT_idx = 111010 -> Predict NT on counter = 11 -> update with T
            predict_and_update(y, y, thisPC3);
                            
            // Branch 4: GHR = 111111 -> PHT_idx = 001101 -> Predict NT on counter = 11 -> update with T
            predict_and_update(y, y, thisPC4);

            // Branch 5: GHR = 111111 -> PHT_idx = 000000 -> Predict T on counter = 11 -> update with T
            predict_and_update(y, y, thisPC5);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #12: Loop with 5 branches, always not taken
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 12: Loop with 5 branches, always not taken");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        // Unique PHT indices
        thisPC1 = 0; // index = 000000
        thisPC2 = 4; // index = 000001
        thisPC3 = 20; // index = 000101
        thisPC4 = 200; // index = 110010
        thisPC5 = 252; // index = 111111
        
        for (int i = 0; i < 20; i++) begin  
        
            // Branch 1: GHR = 000000 -> PHT_idx = 000000 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC1);

            // Branch 2: GHR = 000000 -> PHT_idx = 000001 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC2);

            // Branch 3: GHR = 000000 -> PHT_idx = 000101 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC3);
                            
            // Branch 4: GHR = 000000 -> PHT_idx = 110010 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC4);

            // Branch 5: GHR = 000000 -> PHT_idx = 111111 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC5);

        end

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #13: Loop with 5 branches, alternating between taken and not taken
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 13: Loop with 5 branches, alternating between taken and not taken");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        
        // Unique PHT indices
        thisPC1 = 0; // index = 000000
        thisPC2 = 4; // index = 000001
        thisPC3 = 20; // index = 000101
        thisPC4 = 200; // index = 110010
        thisPC5 = 252; // index = 111111
        
        // Branch 1: GHR = 000000 -> PHT_idx = 000000 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC1);

        // Branch 2: GHR = 000001 -> PHT_idx = 000000 -> Predict NT on counter = 01 -> update with NT
        predict_and_update(n, n, thisPC2);

        // Branch 3: GHR = 000010 -> PHT_idx = 000111 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC3);
                           
        // Branch 4: GHR = 000101 -> PHT_idx = 110111 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC4);
                           
        // Branch 5: GHR = 001010 -> PHT_idx = 110101 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC5);

        
        
        // Branch 1: GHR = 010101 -> PHT_idx = 010101 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC1);
                           
        // Branch 2: GHR = 101010 -> PHT_idx = 101011 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC2);
                           
        // Branch 3: GHR = 010101 -> PHT_idx = 010000 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC3);
                           
        // Branch 4: GHR = 101010 -> PHT_idx = 011000 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC4);
                           
        // Branch 5: GHR = 010101 -> PHT_idx = 101010 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC5);

        
                           
        // Branch 1: GHR = 101010 -> PHT_idx = 101010 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC1);
                           
        // Branch 2: GHR = 010101 -> PHT_idx = 010100 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC2);
                           
        // Branch 3: GHR = 101010 -> PHT_idx = 101111 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC3);
                           
        // Branch 4: GHR = 010101 -> PHT_idx = 100111 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC4);
                           
        // Branch 5: GHR = 101010 -> PHT_idx = 010101 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC5);

        
        
        // Branch 1: GHR = 010101 -> PHT_idx = 010101 -> Predict NT on counter = 01 -> update with NT
        predict_and_update(n, n, thisPC1);
                           
        // Branch 2: GHR = 101010 -> PHT_idx = 101011 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC2);
                           
        // Branch 3: GHR = 010101 -> PHT_idx = 010000 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC3);
                           
        // Branch 4: GHR = 101010 -> PHT_idx = 011000 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC4);
                           
        // Branch 5: GHR = 010101 -> PHT_idx = 101010 -> Predict NT on counter = 01 -> update with NT
        predict_and_update(n, n, thisPC5);

        
                           
        // Branch 1: GHR = 101010 -> PHT_idx = 101010 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC1);
                           
        // Branch 2: GHR = 010101 -> PHT_idx = 010100 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC2);
                           
        // Branch 3: GHR = 101010 -> PHT_idx = 101111 -> Predict NT on counter = 01 -> update with T
        predict_and_update(n, y, thisPC3);
                           
        // Branch 4: GHR = 010101 -> PHT_idx = 100111 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC4);
                           
        // Branch 5: GHR = 101010 -> PHT_idx = 010101 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC5);

        
        
        // Branch 1: GHR = 010101 -> PHT_idx = 010101 -> Predict NT on counter = 01 -> update with NT
        predict_and_update(n, n, thisPC1);
                           
        // Branch 2: GHR = 101010 -> PHT_idx = 101011 -> Predict T on counter = 10 -> update with T
        predict_and_update(y, y, thisPC2);
                           
        // Branch 3: GHR = 010101 -> PHT_idx = 010000 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC3);
                           
        // Branch 4: GHR = 101010 -> PHT_idx = 011000 -> Predict T on counter = 10 -> update with T
        predict_and_update(y, y, thisPC4);
                           
        // Branch 5: GHR = 010101 -> PHT_idx = 101010 -> Predict NT on counter = 01 -> update with NT
        predict_and_update(n, n, thisPC5);

        
                           
        // Branch 1: GHR = 101010 -> PHT_idx = 101010 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC1);
                           
        // Branch 2: GHR = 010101 -> PHT_idx = 010100 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC2);
                           
        // Branch 3: GHR = 101010 -> PHT_idx = 101111 -> Predict T on counter = 10 -> update with T
        predict_and_update(y, y, thisPC3);
                           
        // Branch 4: GHR = 010101 -> PHT_idx = 100111 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC4);
                           
        // Branch 5: GHR = 101010 -> PHT_idx = 010101 -> Predict NT on counter = 00 -> update with T
        predict_and_update(n, y, thisPC5);

        
        
        // Branch 1: GHR = 010101 -> PHT_idx = 010101 -> Predict NT on counter = 01 -> update with NT
        predict_and_update(n, n, thisPC1);
                           
        // Branch 2: GHR = 101010 -> PHT_idx = 101011 -> Predict T on counter = 11 -> update with T
        predict_and_update(y, y, thisPC2);
                           
        // Branch 3: GHR = 010101 -> PHT_idx = 010000 -> Predict NT on counter = 00 -> update with NT
        predict_and_update(n, n, thisPC3);
                           
        // Branch 4: GHR = 101010 -> PHT_idx = 011000 -> Predict T on counter = 11 -> update with T
        predict_and_update(y, y, thisPC4);
                           
        // Branch 5: GHR = 010101 -> PHT_idx = 101010 -> Predict NT on counter = 01 -> update with NT
        predict_and_update(n, n, thisPC5);

        for (int i = 0; i < 20; i++) begin
                           
            // Branch 1: GHR = 101010 -> PHT_idx = 101010 -> Predict NT on counter = 00 -> update with T
            predict_and_update(n, y, thisPC1);
                            
            // Branch 2: GHR = 010101 -> PHT_idx = 010100 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC2);
                            
            // Branch 3: GHR = 101010 -> PHT_idx = 101111 -> Predict T on counter = 11 -> update with T
            predict_and_update(y, y, thisPC3);
                            
            // Branch 4: GHR = 010101 -> PHT_idx = 100111 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC4);
                            
            // Branch 5: GHR = 101010 -> PHT_idx = 010101 -> Predict NT on counter = 00 -> update with T
            predict_and_update(n, y, thisPC5);

            
            
            // Branch 1: GHR = 010101 -> PHT_idx = 010101 -> Predict NT on counter = 01 -> update with NT
            predict_and_update(n, n, thisPC1);
                            
            // Branch 2: GHR = 101010 -> PHT_idx = 101011 -> Predict T on counter = 11 -> update with T
            predict_and_update(y, y, thisPC2);
                            
            // Branch 3: GHR = 010101 -> PHT_idx = 010000 -> Predict NT on counter = 00 -> update with NT
            predict_and_update(n, n, thisPC3);
                            
            // Branch 4: GHR = 101010 -> PHT_idx = 011000 -> Predict T on counter = 11 -> update with T
            predict_and_update(y, y, thisPC4);
                            
            // Branch 5: GHR = 010101 -> PHT_idx = 101010 -> Predict NT on counter = 01 -> update with NT
            predict_and_update(n, n, thisPC5);

        end

        delay( $urandom_range(0, 127) );

        // //--------------------------------------------------------------------
        // // Unit Testing #14: Loop with 5 branches, pattern T -> T -> NT
        // //--------------------------------------------------------------------
        // // Initalize all the signal inital values.

        // $display("");
        // $display("---------------------------------------");
        // $display("Unit Test 14: Loop with 5 branches, pattern T -> T -> NT");
        // $display("---------------------------------------");

        // reset = 1;
        // @(negedge clk);
        // reset = 0;
        
        // // Unique PHT indices
        // thisPC1 = 0;
        // thisPC2 = 4;
        // thisPC3 = 20;
        // thisPC4 = 200;
        // thisPC5 = 252;

        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);



        // // Branch 1: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC5);



        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC5);



        // // Branch 1: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC5);



        // // Branch 1: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC1);

        // // Branch 2: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC4);

        // // Branch 5: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC5);



        // // Branch 1: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict T on counter = 11, update with NT
        // predict_and_update(y, n, thisPC2);

        // // Branch 3: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict T on counter = 11, update with NT
        // predict_and_update(y, n, thisPC5);

        // delay( $urandom_range(0, 127) );

        // //--------------------------------------------------------------------
        // // Unit Testing #15: Loop with 5 branches, pattern NT -> NT -> T
        // //--------------------------------------------------------------------
        // // Initalize all the signal inital values.

        // $display("");
        // $display("---------------------------------------");
        // $display("Unit Test 15: Loop with 5 branches, pattern NT -> NT -> T");
        // $display("---------------------------------------");

        // reset = 1;
        // @(negedge clk);
        // reset = 0;

        // // Unique PHT indices
        // thisPC1 = 0;
        // thisPC2 = 4;
        // thisPC3 = 20;
        // thisPC4 = 200;
        // thisPC5 = 252;

        // // Branch 1: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC5);



        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC5);



        // // Branch 1: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);



        // // Branch 1: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC5);



        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC5);



        // // Branch 1: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);

        // delay( $urandom_range(0, 127) );

        // //--------------------------------------------------------------------
        // // Unit Testing #16: Loop with 5 branches, pattern T -> T -> T -> NT
        // //--------------------------------------------------------------------
        // // Initalize all the signal inital values.

        // $display("");
        // $display("---------------------------------------");
        // $display("Unit Test 16: Loop with 5 branches, pattern T -> T -> T -> NT");
        // $display("---------------------------------------");

        // reset = 1;
        // @(negedge clk);
        // reset = 0;

        // // Unique PHT indices
        // thisPC1 = 0;
        // thisPC2 = 4;
        // thisPC3 = 20;
        // thisPC4 = 200;
        // thisPC5 = 252;

        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);



        // // Branch 1: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC5);



        // // Branch 1: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC1);

        // // Branch 2: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC5);



        // // Branch 1: Predict T on counter = 11, update with NT
        // predict_and_update(y, n, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC4);

        // // Branch 5: Predict T on counter = 11, update with NT
        // predict_and_update(y, n, thisPC5);



        // // Branch 1: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC1);

        // // Branch 2: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC2);

        // // Branch 3: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC3);

        // // Branch 4: Predict T on counter = 11, update with NT
        // predict_and_update(y, n, thisPC4);

        // // Branch 5: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC5);

        // delay( $urandom_range(0, 127) );

        // //--------------------------------------------------------------------
        // // Unit Testing #17: Loop with 5 branches, pattern NT -> NT -> NT -> T
        // //--------------------------------------------------------------------
        // // Initalize all the signal inital values.

        // $display("");
        // $display("---------------------------------------");
        // $display("Unit Test 17: Loop with 5 branches, pattern NT -> NT -> NT -> T");
        // $display("---------------------------------------");

        // reset = 1;
        // @(negedge clk);
        // reset = 0;

        // // Unique PHT indices
        // thisPC1 = 0;
        // thisPC2 = 4;
        // thisPC3 = 20;
        // thisPC4 = 200;
        // thisPC5 = 252;

        // // Branch 1: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC5);



        // // Branch 1: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC5);



        // // Branch 1: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC5);



        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);



        // // Branch 1: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC5);

        // delay( $urandom_range(0, 127) );

        // //--------------------------------------------------------------------
        // // Unit Testing #18: Loop with 5 branches, pattern T -> NT -> NT -> T
        // //--------------------------------------------------------------------
        // // Initalize all the signal inital values.

        // $display("");
        // $display("---------------------------------------");
        // $display("Unit Test 18: Loop with 5 branches, pattern T -> NT -> NT -> T");
        // $display("---------------------------------------");

        // reset = 1;
        // @(negedge clk);
        // reset = 0;

        // // Unique PHT indices
        // thisPC1 = 0;
        // thisPC2 = 4;
        // thisPC3 = 20;
        // thisPC4 = 200;
        // thisPC5 = 252;

        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);

        

        // // Branch 1: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC5);

        

        // // Branch 1: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC5);

        

        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);

        

        // // Branch 1: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC5);

        // delay( $urandom_range(0, 127) );

        // //--------------------------------------------------------------------
        // // Unit Testing #19: Loop with 5 branches, pattern T -> NT -> NT -> T
        // //--------------------------------------------------------------------
        // // Initalize all the signal inital values.

        // $display("");
        // $display("---------------------------------------");
        // $display("Unit Test 19: Loop with 5 branches, pattern T -> NT -> T -> NT");
        // $display("---------------------------------------");

        // reset = 1;
        // @(negedge clk);
        // reset = 0;

        // // Unique PHT indices
        // thisPC1 = 0;
        // thisPC2 = 4;
        // thisPC3 = 20;
        // thisPC4 = 200;
        // thisPC5 = 252;

        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);

        
        // for (int i = 0; i < 20; i++) begin

        //     // Branch 1: Predict NT on counter = 01, update with NT
        //     predict_and_update(n, n, thisPC1);

        //     // Branch 2: Predict NT on counter = 00, update with T
        //     predict_and_update(n, y, thisPC2);

        //     // Branch 3: Predict NT on counter = 01, update with NT
        //     predict_and_update(n, n, thisPC3);

        //     // Branch 4: Predict NT on counter = 00, update with T
        //     predict_and_update(n, y, thisPC4);

        //     // Branch 5: Predict NT on counter = 01, update with NT
        //     predict_and_update(n, n, thisPC5);



        //     // Branch 1: Predict NT on counter = 00, update with T
        //     predict_and_update(n, y, thisPC1);

        //     // Branch 2: Predict NT on counter = 01, update with NT
        //     predict_and_update(n, n, thisPC2);

        //     // Branch 3: Predict NT on counter = 00, update with T
        //     predict_and_update(n, y, thisPC3);

        //     // Branch 4: Predict NT on counter = 01, update with NT
        //     predict_and_update(n, n, thisPC4);

        //     // Branch 5: Predict NT on counter = 00, update with T
        //     predict_and_update(n, y, thisPC5);

        // end

        // delay( $urandom_range(0, 127) );

        // //--------------------------------------------------------------------
        // // Unit Testing #20: Branches with PHT conflicts, pattern T -> T -> NT
        // //--------------------------------------------------------------------
        // // Initalize all the signal inital values.

        // $display("");
        // $display("---------------------------------------");
        // $display("Unit Test 20: Branches with PHT conflicts, pattern T -> T -> NT");
        // $display("---------------------------------------");

        // reset = 1;
        // @(negedge clk);
        // reset = 0;

        // // Unique PHT indices
        // thisPC1 = 0;
        // thisPC2 = 2097152; // Conflicts with thisPC1
        // thisPC3 = 20;
        // thisPC4 = 200;
        // thisPC5 = 252;

        // // Branch 1: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with NT
        // predict_and_update(n, n, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC5);

        

        // // Branch 1: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC1);

        // // Branch 2: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC2);

        // // Branch 3: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with NT
        // predict_and_update(n, n, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC5);

        

        // // Branch 1: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC1);

        // // Branch 2: Predict T on counter = 11, update with NT
        // predict_and_update(y, n, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict NT on counter = 00, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC5);

        

        // // Branch 1: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC1);

        // // Branch 2: Predict T on counter = 11, update with T
        // predict_and_update(y, y, thisPC2);

        // // Branch 3: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC3);

        // // Branch 4: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC4);

        // // Branch 5: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC5);

        

        // // Branch 1: Predict T on counter = 11, update with NT
        // predict_and_update(y, n, thisPC1);

        // // Branch 2: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC2);

        // // Branch 3: Predict NT on counter = 01, update with T
        // predict_and_update(n, y, thisPC3);

        // // Branch 4: Predict T on counter = 10, update with NT
        // predict_and_update(y, n, thisPC4);

        // // Branch 5: Predict T on counter = 10, update with T
        // predict_and_update(y, y, thisPC5);

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
            $display("prediction is correct.  Expected: %h, Actual: %h", t_prediction,prediction);
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

        @(negedge clk);
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
