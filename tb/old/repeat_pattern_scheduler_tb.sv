module repeat_pattern_scheduler_tb ();

    localparam max_image_sensor_w = 50;
    localparam max_image_sensor_h = 50;

    logic clk;    // Clock
    logic clk_en; // Clock Enable
    logic rst_n;  // Asynchronous reset active low

    // Image Sensor Signals
	
	logic [10:0] image_sensor_w; // Width of the image sensor
	logic [10:0] image_sensor_h; // Height of the image sensor
//	logic [9:0]  num_subframes;  // Number of subframes


    // Pattern Input passed through the micro-processor

	logic [4:0] pattern_w; 		// width of the pattern 
	logic [4:0] pattern_h; 		// height of the pattern

	logic [0:63] full_pattern;		// Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 0 in row n, ..., 31: pixel 31 in row n )
	logic start_pattern_2D;		// to load the 2D pattern for repetition
	logic [1:0] mask_type;	// Choose the type of mask between  Repeated pattern 00 - sliding pattern 01 - Random Mask 10 


	logic rp_valid;				// Valid signal outputed from MG block to see if the block is ready or not

	logic load_pattern; 		// to load 1D the pattern for repetition
	logic [0:31] pattern; 	// ROW Pattern to repeat that will be sent to MG block

    repeat_pattern_scheduler #(max_image_sensor_w,max_image_sensor_h) uut (.*);

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

        image_sensor_w = 50;
        image_sensor_h = 50;

        mask_type =2'b00;

        pattern_w = 5'd4;
        pattern_h = 5'd4;

        full_pattern = 64'hF0ABC9820EAA17CD;

        start_pattern_2D = 1'b1;

        #(period);

        start_pattern_2D = 1'b0;

        #(5*period);

        rp_valid = 1'd1;

        #(period);

        rp_valid = 1'd0;

        #(5*period);

        $display("Repeated Mask is %b", pattern);
        $display("Load signal 1D is %b", load_pattern);

        #(20*period);

        rp_valid = 1'd1;

        #(period);

        rp_valid = 1'd0;

        #(5*period);

        $display("Repeated Mask is %b", pattern);
        $display("Load signal 1D is %b", load_pattern);
       
    end

endmodule