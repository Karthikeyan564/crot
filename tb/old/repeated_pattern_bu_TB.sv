//`timescale 1ns / 1ps
module repeated_pattern_tb ();

	localparam image_sensor_w = 300;
    
	logic clk;    // Clock
	logic clk_en; // Clock Enable
	logic rst_n;  // Asynchronous reset active low

	// Pattern Input passed through the micro-processor

	logic [4:0] pattern_w; // Width of the pattern max is 32 
	logic [4:0] pattern_h; // Height of the pattern max is 32
	
	logic [24:0] pattern;	// Bits for the repeated pattern

	logic [10:0] repeat_row_pattern; // How many times should the row pattern repeated // up to 2048 (More than HD 1920)
	
	logic rp_ready; // Ready signal for the module to verify the input

	logic [image_sensor_w-1:0] rp_mask_bit; // output of the repeated mask row by row of the image sensor
	logic rp_valid; // Valid signal for the output


	repeated_pattern uut (.*);

	localparam h_period = 5; //duration for each bit = 5ns
    localparam period = 10;
    //clock period = 10ns
    
    // Clock Generation
    always
    begin
        clk = 1'b1;
        #h_period;
            
        clk = 1'b0;
        #h_period;
    end


    initial
    begin 

    	clk_en = 1'b1;
    	rst_n = 1'b0;

    	#period;
    	rst_n = 1'b1;

    	pattern_w = 5'b00011;
    	pattern_h = 5'b00011;

    	pattern = 25'd335;

    	repeat_row_pattern = 11'd100;
    	rp_ready = 1'b1;

    	# (period);
    	rp_ready = 1'b0;

    end

endmodule