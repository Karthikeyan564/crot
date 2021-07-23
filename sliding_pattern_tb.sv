//`timescale 1ns / 1ps
module sliding_pattern_tb ();

    localparam image_sensor_w = 35;
    localparam image_sensor_h = 35;

    logic clk;    // Clock
    logic clk_en; // Clock Enable
    logic rst_n;  // Asynchronous reset active low

    // Pattern Input passed through the micro-processor

    //logic [4:0] pattern_w; // size of the pattern W x H
    logic [0:31] pattern;   // Bits for the repeated pattern
    logic right_sliding;    // Direction of sliding 1-- right / 0 -- left
    //logic [20:0] repetitionTimes; // How many times should the pattern be repeated // up to 1920x1080 (HD)
    logic load_pattern; // to load the pattern for repetition

    
    //logic rp_ready; // Ready signal for the module to verify the input

    logic rp_mask_bit; // output of the repeated mask bit by bit
    logic rp_valid; // Valid signal for the output

    sliding_pattern #(image_sensor_w,image_sensor_h) uut (.*);

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
        //rp_ready = 1'b0;

        #period;
        rst_n = 1'b1;

        //pattern_w = 5'd24;
        //repetitionTimes = 21'd13;

        pattern = 32'd7;
        right_sliding = 1'b0;

        load_pattern = 1'b1;

        # (period);
        load_pattern = 1'b0;

        #(50*period);
        right_sliding = 1'b1;


        //rp_ready = 1'b1;

    end

endmodule