//`timescale 1ns / 1ps
module pattern_test_TB ();

	logic [3:0] pattern; //4
	logic [6:0] timesRepeat; //75
	logic [2:0] pattern_size; //4

	logic [299:0] repeatedPattern; //300

	repeated_test uut (.*);

	localparam h_period = 5; //duration for each bit = 5ns
    localparam period = 10;
    //clock period = 10ns
    
    // // Clock Generation
    // always
    // begin
    //     clk = 1'b1;
    //     #h_period;
            
    //     clk = 1'b0;
    //     #h_period;
    // end


    initial
    begin 

    	pattern = 'b1100;
    	timesRepeat = 'd75;
    	pattern_size = 'd4;
    	

    end

endmodule