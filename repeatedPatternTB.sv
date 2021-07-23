//`timescale 1ns / 1ps
module repeatedPatternTB ();
    logic clk;          // Clock
    logic clk_en;       // Clock Enable
    logic rst_n;        // Asynchronous reset active low

    logic [1:0]   pattern_w;    // width: 5 (00) to 8 (11)
    logic [7:0]   p;    // pattern, to be repeated
    logic [639:0] maskOut;    // sensor columns
  

    repeatedPattern_MAS uut (.*);

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

		$display("***************************** Repeated Pattern *******************************************");

		pattern_w = 2'b11;
        p = 8'b10101010;

        #(period);
        $display("The mask generated is %b",maskOut);        
        
        pattern_w = 2'b01;
        p = 8'b00010101;

        #(period);
        $display("The mask generated is %b",maskOut);        
        
        // num = 32'd4026531840; //1111000....0
        
    	//pattern = 32'd2863311530; // 101010...10

    end


endmodule