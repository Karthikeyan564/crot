module mask_generation_top_tb ();

    localparam max_image_sensor_w = 50;
    localparam max_image_sensor_h = 50;

    logic clk;    // Clock
    logic clk_en; // Clock Enable
    logic rst_n;  // Asynchronous reset active low

    // Image Sensor Signals
	
	logic [10:0] image_sensor_w; 			// Width of the image sensor
	logic [10:0] image_sensor_h; 			// Height of the image sensor


    // Pattern Input passed through the micro-processor

	logic [4:0] pattern_w; 					// width of the pattern 
	logic [4:0] pattern_h; 					// height of the pattern

	logic [0:63] full_pattern;				// Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 0 in row n, ..., 31: pixel 31 in row n )
	logic start_pattern;					// to load the 2D pattern for repetition
	logic right_sliding;					// Direction of sliding 1-- right / 0 -- left

	logic [1:0] mask_type;					// Choose the type of mask between  Repeated pattern 00 - sliding pattern 01 - Random Mask 10 
	
	logic [0:max_image_sensor_w-1] mg_mask; // ROW MASK FOR THE IAMGE SENSOR
	logic rp_valid; 						// Valid signal for the output

    mask_generation_top #(max_image_sensor_w,max_image_sensor_h) uut (.*);

    localparam h_period = 5; //duration for each bit = 5ns
    localparam period = 10;

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

        image_sensor_w = 50;
        image_sensor_h = 50;

		// // // Sliding Pattern
		// $display("***************************** Sliding Pattern *******************************************");
  //       $display("***************************** SHIFTING RIGHT ********************************************");

		// mask_type = 2'b01;
		// right_sliding = 1'b1;

		// pattern_w = 5'd4;
	 //    full_pattern = 64'hF000000000000000;
		// start_pattern = 1'b1;

  //       # (period);
  //       start_pattern = 1'b0;

  //       #(60*period);
  //       right_sliding = 1'b0;

  //       #(2*period); // You have to leave 2 cycles before shifting
  //       $display("***************************** SHIFTING LEFT *********************************************");

  //       #(75*period);

  //       $display("***************************** Repeated Pattern ******************************************");

  //       mask_type = 2'b00;

  //       // rst_n = 1'b0;

  //       // #period;
  //       // rst_n = 1'b1;

  //       pattern_w = 5'd4;
  //       pattern_h = 5'd4;

	 //    full_pattern = 64'hF0ABC9820EAA17CD;
		// start_pattern = 1'b1;

		// #(period);
  //       start_pattern = 1'b0;

  //       #(2600*period);

       	$display("***************************** Random Pattern *******************************************");
    	mask_type = 2'b10;
    	full_pattern = 64'hAAAAAAAA00000000;
    	start_pattern = 1'b1;
    	
    	#(period);
    	start_pattern = 1'b0;

    	#(1000*period);


    end

always_ff @(negedge clk) 
begin

	if (rp_valid)
		$display("%b",mg_mask);
        //$display("ROW Mask is %b at %d ps",mg_mask,$time);
		//$display("Reg Current is %b %b %b at %t ps",pre_reg_curr,reg_curr,post_reg_curr,$time);
		//$display("Reg Current is %b %b %b at %t ps",pre_reg_curr,reg_curr[0:47],post_reg_curr,$time);
		//$display("Reg Current is %b at %t ps",reg_curr[0:47],$time);



end


endmodule