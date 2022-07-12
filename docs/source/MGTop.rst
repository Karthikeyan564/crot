MGTop
===================================


.. symbolator::
  :alt: MGTop
  :align: center
  :caption: MGTop
  :symbolator_cmd: /usr/local/bin/symbolator
  :name: MGTop



  module MGTop
        (
        input clk,                          // Clock
        input clk_en,                       // Clock Enable
        input rst_n,                        // Asynchronous reset active low
    
        // Pattern Input passed through the micro-processor
        input [4:0] pattern_w,              // size of the pattern W / "Repeated Pattern" width: 5 (XXX00) to 8 (XXX11)
        input pattern,                      // Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 0 in row n, ..., 31: pixel 31 in row n )
        input [7:0] repeatedPattern,        // pattern, to be repeated
        input load_pattern,                 // to load the pattern for repetition
    
        input [1:0] mask_type,              // Type of masks sliding right 00 - sliding left 01 - Random Mask 10 - repeated Pattern 11
        input next,
    	
        input [1:0] imageResolution,
    
        output logic [OP_CHANNEL_WIDTH-1:0] DOUT
    )
  endmodule

Parameters
-------------------------------



* **IP_CHANNEL_WIDTH**
* **OP_CHANNEL_WIDTH**
* **stepSel0**
   320/OP_CHANNEL_WIDTH  
* **stepSel1**
   640/OP_CHANNEL_WIDTH 
* **stepSel2**
   1080/OP_CHANNEL_WIDTH 



Inputs
-------------------------------


* **clk**
   Clock 
* **clk_en**
   Clock Enable 
* **rst_n**
   Asynchronous reset active low 
* **[4:0] pattern_w**
   size of the pattern W / "Repeated Pattern" width: 5 (XXX00) to 8 (XXX11) 
* **pattern**
   Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 0 in row n, ..., 31: pixel 31 in row n ) 
* **[7:0] repeatedPattern**
   pattern, to be repeated 
* **load_pattern**
   to load the pattern for repetition 
* **[1:0] mask_type**
   Type of masks sliding right 00 - sliding left 01 - Random Mask 10 - repeated Pattern 11 
* **next**
* **[1:0] imageResolution**


Outputs
-------------------------------


* **logic [OP_CHANNEL_WIDTH-1:0] DOUT**
