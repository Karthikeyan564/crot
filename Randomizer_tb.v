//`timescale 1 ps / 1 ps

module Randomizer_tb();

    reg clk, reset, load, rand_ready, Data_in;
    reg [0:14] seed_load;
    wire Data_out, Rand_valid;
    
    Randomizer uut(
        .clk(clk),
        .reset(reset),
        .load(load),
        .rand_ready(rand_ready),
        .Data_in(Data_in),
        .seed_load(seed_load),
        .Data_out(Data_out),
        .Rand_valid(Rand_valid)
    );
    
    integer i ;
    integer j ;
    
    reg [0:95]Input = 96'hACBCD2114DAE1577C6DBF4C9;
    reg [0:95]Output = 96'h558AC4A53A1724E163AC2BF9;
    
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
    
    // Stimulus
    initial
    begin
            //Input <= 96'hACBCD2114DAE1577C6DBF4C9;
            //Output <= 96'h558AC4A53A1724E163AC2BF9;
            //#(2*h_period);
            
            reset = 1'b1;
            Data_in = 1'b0;
            load = 1'b0;
            seed_load = 15'd0;
            rand_ready <= 1'b0;
            i = 0;
            j=0;
            #(period);
            
            reset = 1'b0;
            //#(2*h_period);
            
            load = 1'b1;
            seed_load = 15'b011011100010101;
            #(period);
            
            load = 1'b0;

            
            #(h_period);

            //for (j = 0; j < 4; j = j + 1)
            //begin
                for (i = 0; i < 4*96; i = i + 1)
                begin  
                    //@(posedge clk);  
                    rand_ready <= 1'b1;
                    Data_in <= Input[i%96];
                    #(period);

                end
            //end
            rand_ready = 1'b0;


    end


    // always @(negedge clk)
    // begin
    //     if (reset)
    //     begin
    //         if (Data_out)
    //         begin
    //            $display("Reset Failed");
    //            //$finish; 
    //         end
    //     end
    // end
    
    // Verifier

    always @(negedge clk)
    begin
        if (Rand_valid)
        begin

            //#(h_period);
            for (j = 0; j < 4*96; j = j + 1)
            begin
                if (Data_out != Output[j%96])
                begin
                    $display("Input Failed %d",j);
                    $display("Index %d", j%96);
                    $display("Golden Output %b", Output[j%96]);
                    $display("Actual Output %b", Data_out);

                    
                    //$finish;
                end
                    
                #(2*h_period);
            end
        
        end
    end
    
endmodule