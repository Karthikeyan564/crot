//`timescale 1ns / 1ps
module mask_generation_VGA_tb ();

    logic clk;    // Clock
    logic clk_en; // Clock Enable
    logic rst_n;  // Asynchronous reset active low

	
    // Pattern Input passed through the micro-processor

	logic  [4:0] pattern_w; // size of the pattern W 
	logic  pattern;	// Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 0 in row n, ..., 31: pixel 31 in row n )
    logic  [7:0] repeatedPattern; // pattern to be repeated
	// logic  right_sliding;	// Direction of sliding 1-- right / 0 -- left
	logic  load_pattern; // to load the pattern for repetition
	
	logic  [1:0] mask_type;	// Type of masks sliding right 00 - sliding left 01 - Random Mask 10 - repeated Pattern 11 
    
    logic [0:639] mg_mask;
    // logic [0:639] mg_mask_n;
    logic rp_valid; // Valid signal for the output

    mask_generation_VGA uut (.*);
    //logic [0:31] num;

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

		//Sliding Pattern
		$display("***************************** Sliding Pattern *******************************************");
        $display("***************************** SHIFTING RIGHT ********************************************");

		mask_type = 2'b00;
        load_pattern = 1'b1;
        pattern_w = 5'd4;
        
        // num = 32'd4026531840; //1111000....0
        
        // while (num != 0)
        // {
        //     pattern = num &'d1;
        //     num = num>>'d1;
        //     #(period) 
        // }

        for (int i = 0; i <28; i++)
        begin 
            pattern = 1'b0;
            #(period);
        end
        

        pattern = 1'b1;
        #period

        pattern = 1'b1;
        #period

        pattern = 1'b1;
        #period

        pattern = 1'b1;
        //#period

        //pattern = 32'd4026531840; //1111000....0


        # (period);
        load_pattern = 1'b0;

        #(61*period);
        mask_type = 2'b01;

        //#(1*period); // You have to leave 2 cycles before shifting
        $display("***************************** SHIFTING LEFT *********************************************");

        #(75*period);



       	$display("***************************** Random Pattern *******************************************");
    	mask_type = 2'b10;
        rst_n = 1'b0;

        #period;
        rst_n = 1'b1;

    	//pattern = 32'd2863311530;
    	load_pattern = 1'b1;
    	
        for (int i = 0; i <16; i++)
        begin 
            pattern = 1'b1;
            #(period);

            pattern = 1'b0;
            #(period);

        end

    	//#(period);
    	load_pattern = 1'b0;

    	#(75*period);

        $display("***************************** Repeated Pattern ******************************************");

        mask_type = 2'b11;
        pattern_w = 5'b00011;

        load_pattern = 1'b1;
        repeatedPattern = 8'b10101010;
        #(period);
        load_pattern = 1'b0;

        // for (int i = 0; i <4; i++)
        // begin 
        //     pattern = 1'b1;
        //     #(period);

        //     pattern = 1'b0;
        //     #(period);

        // end
        // load_pattern = 1'b0;


        #(120*period);
       
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