//========================================================================
// utb_BranchGlobalCtrl
//========================================================================
// A basic Verilog unit test bench for the Global Branch Control module

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN BranchGlobal
`endif

`include "BranchGlobalCtrl.v"
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

    // Status signals
    logic entry_upper_reached;
    logic entry_lower_reached;

    // Control signals
    logic update_ghr;
    logic increment_entry;
    logic decrement_entry;

    lab4_branch_BranchGlobalCtrl
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
        //           inc  dec  upd
        //           ent  ent  ghr
        //
        test_outputs(n,   n,   n);

        $display("");
        $display("update_en is high, update_val is low and lower limit not reached - decrement");
        @(negedge clk);
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(y,   n,   n,   n);

        @(posedge clk);
        //           inc  dec  upd
        //           ent  ent  ghr
        //
        test_outputs(n,   y,   y);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #2 Update decrement entry, at lower limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 2: Update decrement entry, at lower limit");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(n,   n,   n,   y);

        $display("");
        $display("Waiting for update_en");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           inc  dec  upd
        //           ent  ent  ghr
        //
        test_outputs(n,   n,   n);

        $display("");
        $display("update_en is high, update_val is low and lower limit is reached - do not decrement");
        @(negedge clk);
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(y,   n,   n,   y);

        @(posedge clk);
        //           inc  dec  upd
        //           ent  ent  ghr
        //
        test_outputs(n,   n,   y);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #3 Update increment entry, not at upper limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 3: Update increment entry, not at upper limit");
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
        //           inc  dec  upd
        //           ent  ent  ghr
        //
        test_outputs(n,   n,   n);

        $display("");
        $display("update_en is high, update_val is high and upper limit not reached - increment");
        @(negedge clk);
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(y,   y,   n,   n);

        @(posedge clk);
        //           inc  dec  upd
        //           ent  ent  ghr
        //
        test_outputs(y,   n,   y);

        delay( $urandom_range(0, 127) );

        //--------------------------------------------------------------------
        // Unit Testing #4 Update increment entry, at upper limit
        //--------------------------------------------------------------------
        // Initalize all the signal inital values.

        $display("");
        $display("---------------------------------------");
        $display("Unit Test 4: Update increment entry, at upper limit");
        $display("---------------------------------------");

        reset = 1;
        @(negedge clk);
        reset = 0;
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(n,   n,   y,   n);

        $display("");
        $display("Waiting for update_en");
        delay( $urandom_range(0, 127) );

        @(negedge clk);
        //           inc  dec  upd
        //           ent  ent  ghr
        //
        test_outputs(n,   n,   n);

        $display("");
        $display("update_en is high, update_val is high and upper limit reached - do not increment");
        @(negedge clk);
        //         upd  upd  ent  ent
        //         en   val  upp  low
        //                   rcd  rcd
        set_inputs(y,   y,   y,   n);

        @(posedge clk);
        //           inc  dec  upd
        //           ent  ent  ghr
        //
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
        input logic t_update_ghr
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
        
        assert(update_ghr == t_update_ghr) begin
            $display("update_ghr is correct.  Expected: %h, Actual: %h", t_update_ghr,update_ghr); pass();
        end else begin
            $display("update_ghr is incorrect.  Expected: %h, Actual: %h", t_update_ghr,update_ghr); fail(); $finish();
        end
        
    end
    endfunction

endmodule
