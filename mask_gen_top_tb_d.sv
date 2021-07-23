module mask_gen_top_tb_d ();

    localparam max_image_sensor_w = 1920;
    localparam max_image_sensor_h = 1080;

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
	
	logic [0 : max_image_sensor_w - 1] mg_mask = 0; // ROW MASK FOR THE IAMGE SENSOR
	logic rp_valid; 						// Valid signal for the output

    mask_generation_top #(max_image_sensor_w,max_image_sensor_h) uut (.*);

    localparam h_period = 5; //duration for each bit = 5ns
    localparam period = 10;
	
	// Parameters for Verification --- Repeated ---
	logic [0: max_image_sensor_w - 1]row_repeated;			// the pattern to be generated and used for comparison in the verifier
	int patterns_c = 0;										// number of patterns completed and takes values (0, 1 ..., pattern_h
	int increment_r = 0;
	int increment_p = 0;
	
	// Parameters for Verification --- Sliding ---
	logic [0:max_image_sensor_w - 1]state = 'b0;			// the pattern to be manipulated by the software
	logic [0:max_image_sensor_w - 1]state_static = 'b0;		// the initial full pattern is stored here unchanged
	
	logic found_l = 1'b0;				// flag for the leftmost bit == 1 in full_pattern
	logic found_r = 1'b0;				// flag for the rightmost bit == 1 in full pattern
	logic direction_changed = 1'b0;		// check if the direction of sliding was changed without loading a new pattern
	logic slided = 1'b0;		        // flag used to check if the whole pattern was slided
	logic load = 1'b0;                  // flag used to load the pattern in the masks
	
	int valid_l;				// store the position of the leftmost bit
	int valid_r;				// store the position of the rightmost bit
	
	int i_cnt = 0;				// used to traverse the initial pattern
	int traverse = 0;			// used for the rotation after state is all 0s
	
	int leading_z = 0;			// count the zeroes before the leftmost one
	int trailing_z = 0;			// count the zeroes after the right most ones
	
	int temp_lead = 0;			// count leading zeroes when the shifting is changed from right to left
	int temp_trail = 0;			// count trailing zeroes when the shifting is changed from left to right
	int i = 0;
	int diff = 0;				// compute the difference for total zeroes before or after the pattern when sliding is changed midway
	
	// --- Random Pattern --- //
	
    // output files to write the data for the random pattern
    int file_id0;
                  
	int cnt_row = 0;
	
    // Clock Generation
    always
    begin
        clk = 1'b1;
        #h_period;
            
        clk = 1'b0;
        #h_period;
    end

	// STIMULUS //
    initial
    begin 

        clk_en = 1'b1;
        rst_n = 1'b0;

        #period;
        rst_n = 1'b1;

        image_sensor_w = 1920;
        image_sensor_h = 1080;

		
/*
		//	Repeated Pattern
		$display("***************************** Repeated Pattern ******************************************");

		mask_type = 2'b00;

        rst_n = 1'b0;

		#period;
        rst_n = 1'b1;

        pattern_w = 5'd4;
        pattern_h = 5'd4;

		full_pattern = 64'hF0ABC9820EAA17CD;
		start_pattern = 1'b1;

		#(period);
		start_pattern = 1'b0;

        #(2600*period);   
*/

		//	Random Pattern
       	$display("***************************** Random Pattern *******************************************");
       	
       	file_id0 = $fopen("masks.txt", "w");

    	mask_type = 2'b10;
    	full_pattern = 64'h0300A05200000000;
    	start_pattern = 1'b1;
    	
    	#(period);
    	start_pattern = 1'b0;

    	#(75*period);
/*    	
        //	Sliding Pattern
		$display("***************************** Sliding Pattern *******************************************");
        $display("***************************** SHIFTING LEFT ********************************************");

		mask_type = 2'b01;
		right_sliding = 1'b0;

		pattern_w = 5'd8;
		full_pattern = 64'hAB00000000000000;

		start_pattern = 1'b1;
						
        #(period);
		start_pattern = 1'b0;
		
	    // locate the bounds of the pattern only once per pattern
		// load the initial pattern to the verifying registers
		state[0:63] = full_pattern;
		state_static[0:63] = full_pattern;
		
		for (i_cnt = 0; i_cnt < max_image_sensor_w; i_cnt = i_cnt + 1)
		begin
			
            // check the left side
            if ((state_static[i_cnt]) & (!found_l))
            begin
                found_l = 1'b1;
                valid_l = i_cnt;
            end
            else if (!found_l)
            begin
		        leading_z = leading_z + 1;
            end
				
            // check the right side
            if ((state_static[max_image_sensor_w - 1 - i_cnt]) & (!found_r))
            begin
                found_r = 1'b1;
                valid_r = max_image_sensor_w - 1 - i_cnt;
            end
            else if (!valid_r)
            begin
                trailing_z = trailing_z + 1;
            end

            // stop if both end points are found
            if (found_l & found_r)
            begin
                // setup the traverse for the rotation
                // if right_sliding is 0 we start from valid_l else we start from valid_r
                traverse = (right_sliding)? valid_r : valid_l;
                break;
            end
        end

        #(5*period);
    
        right_sliding = 1'b1;
		direction_changed = 1'b1;

		#(2*period); // You have to leave 2 cycles before shifting
        $display("***************************** SHIFTING RIGHT *********************************************");

        #(75*period);
*/        
    end

	always @(negedge clk) 
	begin

		if (rp_valid)
		begin
	
			// check the output accordingly
			case (mask_type)
			
				// --- Repeated Pattern --- //
				2'b00:
				begin
			        if(!rst_n)
			        begin
						increment_p = 0;
						increment_r = 0;
						patterns_c = 0;
			        end
					// populate row repeated with every 'pattern_w' - bit wide segments 'pattern_h' times
					// populate the whole row first
					for (increment_r = 0; increment_r < max_image_sensor_w; increment_r = increment_r + 1)
					begin
						// reset the pointern of the pattern to the begining once it has been completely inserted
						if (increment_p == pattern_w)
						begin
							increment_p = 0;
						end
					
						// insert the next bit of the pattern in the row for verifying
						if (patterns_c * pattern_w + increment_p <= 63)
						begin
							row_repeated[increment_r] = full_pattern[patterns_c*pattern_w + increment_p]; 		
							// --> possible corner cases considered (^) //
						end
					
						// proceed to the next bit in the pattern of width pattern_w
						increment_p = increment_p + 1;
					
					end
					
					// increment patterns_c to transit; to the next and reset increment_p
					patterns_c = patterns_c + 1;
					increment_p = 0;
					
					// check if patterns_c = pattern_h and reset to 0 if that is the case
					if (patterns_c == pattern_h)
					begin
						patterns_c = 0;
					end
					
					// check if the output is consistent with hardware
			        $display("mg_mask value from hardware     : %b", mg_mask);
					$display("row_repeated value from software: %b", row_repeated);
					if (row_repeated != mg_mask)
					begin
						$display("Patterns not mached");
						$display("mg_mask value from hardware: %b", mg_mask);
						$display("row_repeated value from software: %b", row_repeated);
						$finish;
					end

				end
			
				// --- Sliding Pattern --- // --> THE SHIFTING IN THE DESIGN LEADS THE ONE IN THE VERIFIER --> FIX IT
				2'b01:
				begin
			
					if (!rst_n)
					begin
				
						traverse <= 0;
						leading_z <= 0;
						trailing_z <= 0;
						load <= 1'b0;
					
					end
					
					if(!load)
					begin
					   load = 1'b1;
					end
					else
					begin
                        if (right_sliding)
				        begin
						
						    // fix the traverse pointer and slided if the shifting changed midway
				            if (direction_changed)
				            begin
					           // count trailing zeroes
								for (i = max_image_sensor_w - 1; i >= 0; i = i - 1)
								begin
									if (state[i] == 1)
									begin
										break;
									end
									temp_trail = temp_trail + 1;
								end
								
								// compare with the previous number of zeroes outside the pattern
								if ((temp_trail > leading_z + trailing_z) & (temp_trail < max_image_sensor_w))
								begin
									diff = temp_trail - (leading_z + trailing_z);
									slided = 1'b1;
									traverse = valid_l + diff - 1;
								end
								else
								begin
									traverse = valid_r;
								end
								
								diff = 0;
								temp_lead = 0;
								direction_changed = 1'b0;
								
								#(2.5*period);	
							end
							
							// slide right
							if (slided)
							begin
								state = {state_static[traverse],state[0:max_image_sensor_w - 2]};
								// go to the left by one step
								traverse = traverse - 1;
							end
							else
							begin
								state = state >> 1; 
							end
						
							// check if the pattern has been fully reinserted 
							if (traverse == valid_l - 1)
							begin
								slided = 1'b0;
								traverse = valid_r;
							end
						
							// check if we have reached the all 0s state
							if (state == 0)
							begin
								slided = 1'b1;
							end
						
						end
						else	
						begin
						
							// fix the traverse pointer and slided if the shifting changed midway
							if (direction_changed)
							begin								
								// count leading zeroes
								for (i = 0; i < max_image_sensor_w; i = i + 1)
								begin	
									if (state[i] == 1)
									begin
										break;
									end		
									temp_lead = temp_lead + 1;	
								end
								
								// compare with the previous number of zeroes outside the pattern
								if ((temp_lead > leading_z + trailing_z) & (temp_lead < max_image_sensor_w))
								begin
									diff = temp_lead - (leading_z + trailing_z);
									slided = 1'b1;
									traverse = valid_r - diff + 1;
								end
								else 
								begin
									traverse = valid_l;
								end
								
								diff = 0;
								temp_trail = 0;
								direction_changed = 1'b0;
								
								#(2.5*period);
							end
													
							// slide left
							if (slided)
							begin
								state = {state[1:max_image_sensor_w - 1],state_static[traverse]};
								// go to the right by one step
								traverse = traverse + 1;
							end
							else
							begin
								state = state << 1;
							end
						
							// check if the pattern has been fully reinserted 
							if (traverse == valid_r + 1)
							begin
								slided = 1'b0;
								traverse = valid_l;
							end
						
							// check if we have reached the all 0s state
							if (state == 0)
							begin
								slided = 1'b1;
							end
						end
				        $display("mg_mask value from hardware: %h", mg_mask);
						$display("state value from software  : %h", state);
						// check if the results are consistent
						if (state != mg_mask)
						begin
							$display("Patterns not mached");
							$display("mg_mask value from hardware: %b", mg_mask);
							$display("state value from software: %b", state);
							$finish;
						end
			
					end
				end
			
				// --- Random Pattern --- //
				2'b10:
				begin
				
				/*
				    //display mg_mask in TCL Console
				    $display("%b", mg_mask);
				 */   
				 
				    // write the values for random rows and control how many whould be recorded              

				    cnt_row = cnt_row + 1;
				     
					if ((cnt_row != 0) & cnt_row % 1080 == 0)
					begin
						$fwrite(file_id0, "\n");
				        $fwrite(file_id0, "%b", mg_mask);       // record the row data
					end
					else
					begin
						$fwrite(file_id0, "%b", mg_mask);       // record the row data
					end
					
					if (cnt_row == 1080*500 - 1)
					begin
					    $fwrite(file_id0, "\n");
						$fclose(file_id0);
						$finish;
					end

				end
			
			endcase
		end


	end


endmodule


