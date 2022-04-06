module mask_serializer
#(
    parameter IP_CHANNEL_WIDTH = 1080,
    parameter OP_CHANNEL_WIDTH = 20,
    parameter stepSel0 = 16,   //=320/OP_CHANNEL_WIDTH 
    parameter stepSel1 = 32,   //=640/OP_CHANNEL_WIDTH
    parameter stepSel2 = 54   //=1080/OP_CHANNEL_WIDTH
)
(
    input  [IP_CHANNEL_WIDTH-1:0] DIN,
    input  clk,
    input  next,
    input  load,
    input [1:0] imageResolution,
    output logic [OP_CHANNEL_WIDTH-1:0] DOUT
    );

    logic [IP_CHANNEL_WIDTH-1:0] dint;
    // Load the data into internal register file and shift the data
    always @(posedge load or posedge clk) begin
        if(load==1) begin 
            dint <= DIN;
        end else if (next==1) begin
            dint[IP_CHANNEL_WIDTH-1:0] <= {1'b0,dint[IP_CHANNEL_WIDTH-1:1]};
        end
    end    


    // decode imageResolution
    logic [2:0] sel;
    assign sel[0] = ~imageResolution[0] & ~imageResolution[1];  //320
    assign sel[1] =  imageResolution[0] & ~imageResolution[1];  //640
    assign sel[2] = ~imageResolution[0] &  imageResolution[1];  //1080    


    genvar i;
    for(i=0;i<OP_CHANNEL_WIDTH;i=i+1) begin
        assign DOUT[i] = dint[i*stepSel0]&sel[0] | dint[i*stepSel1]&sel[1] | dint[i*stepSel2]&sel[2];
    end

endmodule

