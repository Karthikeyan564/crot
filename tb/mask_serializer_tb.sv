module mask_serializer_tb ();
	
    localparam IP_CHANNEL_WIDTH = 640;
    localparam OP_CHANNEL_WIDTH = 20;
    localparam stepSel0 = 16;
    localparam stepSel1 = 32;
    localparam stepSel2 = 54;
	
    logic [IP_CHANNEL_WIDTH-1:0] DIN;
    logic clk;
    logic rst_n;
    logic next;
    logic load;
    logic [1:0] imageResolution;
    logic done;
    logic [OP_CHANNEL_WIDTH-1:0] DOUT;
	
    mask_serializer #(IP_CHANNEL_WIDTH, OP_CHANNEL_WIDTH, stepSel0, stepSel1, stepSel2) uut (.*);

    // Clock Generation
    localparam h_period = 5;
    localparam period = 10;
    always
    begin
        clk = 1'b1;
        #h_period;
            
        clk = 1'b0;
        #h_period;
    end
	
	// Testcase read/related
	int fd_tests = $fopen("../testcase_raws/serializer_testcases.txt", "r");
	int read_test = 0;
	string line;
	
	int fd_tests_summary = $fopen("../testcase_raws/serializer_testcases_summary.txt", "w");
	int fd_tests_hw_output = $fopen("../testcase_raws/serializer_testcases_hw_output.txt", "w");
	
    logic [IP_CHANNEL_WIDTH-1:0] DIN_original;
    logic [IP_CHANNEL_WIDTH-1:0] DOUT_row;
	int valid_output;
	
	// Done logic
	int per_row_cycle_count = 0;
	int cycles_per_row = stepSel1; //640 / OP_CHANNEL_WIDTH;
	
    initial
    begin 
		DIN = 'b0;
		DIN_original = 'b0;
		DOUT_row = 'b0;
		load = 1'b0;
		next = 1'b0;
		valid_output = 0;
		
		imageResolution = 2'b01;
		rst_n = 1'b0;
		#(period);
		rst_n = 1'b1;
		
		while($fgets(line, fd_tests))
		begin
			if(line.match("(\/\/.*)?$")) 
				line = line.prematch();
			if (!line.match("[0-f]")) 
				continue;
				
			read_test = $sscanf(line, "%h\n", DIN_original);
			DIN = DIN_original;
			DOUT_row = 'b0;
			
			if (read_test != 1)
			begin
				$display("Malformed testcase: %s\n", line);
				$display("Please provide data to serialize (1080 bits)\n");
				$display("Skipping testcase ... \n");
				continue;
			end
			
			$fwrite(fd_tests_summary, line);
			$fwrite(fd_tests_hw_output, line);
			
			load = 1'b1;
			#(period);
			load = 1'b0;
			
			valid_output = 1;
			#(period);
			
			next = 1'b1;
			while (!done) 
			begin
				#(period);   
			end
			next = 1'b0;
			valid_output = 0;
		end
		
		#(period);
		
		$fwrite(fd_tests_summary, "End\n");
		$fwrite(fd_tests_hw_output, "End\n");
		
		$stop(0);
    end	
	
	always @(negedge clk) 
	begin
		if (valid_output)
		begin
			if (per_row_cycle_count == cycles_per_row)
			begin
				per_row_cycle_count = 0;
				
				$fwrite(fd_tests_hw_output, "\n%h\n===\n", DOUT_row);
				if (DOUT_row == DIN_original)
				begin
					$fwrite(fd_tests_summary, "\t Passed\n");
				end
				else 
				begin
					$fwrite(fd_tests_summary, "\t Test failed and produced the following output:\n", DOUT_row);
					$fwrite(fd_tests_summary, "%h\n", DOUT_row);
				end
			end
			else
			begin
				for(int i = 0; i < OP_CHANNEL_WIDTH; i = i + 1) begin
					DOUT_row[i*stepSel1+per_row_cycle_count] = DOUT[i];
				end
				per_row_cycle_count = per_row_cycle_count + 1;
			end
			
			$fflush(fd_tests_summary);
			$fflush(fd_tests_hw_output);
		end
	end
endmodule