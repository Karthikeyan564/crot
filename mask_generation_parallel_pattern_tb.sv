//`timescale 1ns / 1ps
module mask_generation_tb ();

    localparam maxImageSensorCols = 64;
    //localparam max_image_sensor_h = 50;

    logic clk;    // Clock
    logic clk_en; // Clock Enable
    logic rst_n;  // Asynchronous reset active low

    // Image Sensor Signals
	
	//logic [10:0] image_sensor_w; // Width of the image sensor
	//logic [10:0] image_sensor_h; // Height of the image sensor
    logic [1:0] imageSensorResolution; // Image Sensor Resolution


    // Pattern Input passed through the micro-processor

	logic  [4:0] pattern_w; // size of the pattern W 
	//logic  pattern;	// Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 0 in row n, ..., 31: pixel 31 in row n )
    logic  [0:31] pattern;  // Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 0 in row n, ..., 31: pixel 31 in row n )
	logic  right_sliding;	// Direction of sliding 1-- right / 0 -- left
	logic  load_pattern; // to load the pattern for repetition
	
	logic   mask_type;	// Choose the type of mask between  Repeated pattern 00 - sliding pattern 01 - Random Mask 10 
    
    //logic rp_ready; // Ready signal for the module to verify the input

    //logic rp_mask_bit; // output of the repeated mask bit by bit
    logic [0:maxImageSensorCols-1] mg_mask;
    logic rp_valid; // Valid signal for the output

    mask_generation #(maxImageSensorCols) uut (.*);

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

        //image_sensor_w = 50;
        //image_sensor_h = 50;
        imageSensorResolution = 2'b00;

		//Sliding Pattern
		$display("***************************** Sliding Pattern *******************************************");
        $display("***************************** SHIFTING RIGHT ********************************************");

		mask_type = 1'b0;

        pattern = 32'd4026531840; //1111000....0
        pattern_w = 5'd4;
        right_sliding = 1'b0;

        load_pattern = 1'b1;

        # (period);
        load_pattern = 1'b0;

        #(61*period);
        right_sliding = 1'b1;

        #(1*period); // You have to leave 2 cycles before shifting
        $display("***************************** SHIFTING LEFT *********************************************");

        #(75*period);



       	$display("***************************** Random Pattern *******************************************");
    	mask_type = 1'b1;
    	pattern = 32'd2863311530;
    	load_pattern = 1'b1;
    	
    	#(period);
    	load_pattern = 1'b0;

    	#(1000*period);


  //       $display("***************************** Repeated Pattern ******************************************");

  //       mask_type = 2'b00;

     //    pattern_w = 5'd24;
     //    pattern = 32'd4077850368;
        // load_pattern = 1'b1;

        // #(period);
  //       load_pattern = 1'b0;

  //       #(120*period);

       
    end

always_ff @(negedge clk) 
begin

	if (rp_valid)
		$display("Reg Current is %b at %d ps",mg_mask,$time);
		//$display("Reg Current is %b %b %b at %t ps",pre_reg_curr,reg_curr,post_reg_curr,$time);
		//$display("Reg Current is %b %b %b at %t ps",pre_reg_curr,reg_curr[0:47],post_reg_curr,$time);
		//$display("Reg Current is %b at %t ps",reg_curr[0:47],$time);



end



endmodule