mask_generation_VGA
===================================


.. symbolator::
  :alt: mask_generation_VGA
  :align: center
  :caption: mask_generation_VGA
  :symbolator_cmd: /usr/local/bin/symbolator
  :name: mask_generation_VGA



  module mask_generation_VGA
    (
    	input clk,    						// Clock
    	input clk_en, 						// Clock Enable
    	input gen_en,                       // Generate enable
    	input rst_n,  						// Asynchronous reset active low
    
    	// Pattern Input passed through the micro-processor
    	input [4:0] pattern_w, 				// size of the pattern W / "Repeated Pattern" width: 5 (XXX00) to 8 (XXX11)
    	input pattern,						// Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 1 in row n, ..., 31: pixel 31 in row n )
    	input [7:0] repeatedPattern,		// pattern, to be repeated
    	input load_pattern, 				// to load the pattern for repetition
    
    	input [1:0] mask_type,				// Type of masks sliding right 00 - sliding left 01 - Random Mask 10 - repeated Pattern 11
    
    	output logic [0:639] mg_mask,		// Mask Generated
    
    	output logic rp_valid 				// Valid signal for the output
    )
  endmodule

Inputs
-------------------------------


* **clk**
   Clock 
* **clk_en**
   Clock Enable 
* **gen_en**
   Generate enable 
* **rst_n**
   Asynchronous reset active low 
* **[4:0] pattern_w**
   size of the pattern W / "Repeated Pattern" width: 5 (XXX00) to 8 (XXX11) 
* **pattern**
   Bits for the repeated pattern (0: pixel 0 in row n, 1: pixel 1 in row n, ..., 31: pixel 31 in row n ) 
* **[7:0] repeatedPattern**
   pattern, to be repeated 
* **load_pattern**
   to load the pattern for repetition 
* **[1:0] mask_type**
   Type of masks sliding right 00 - sliding left 01 - Random Mask 10 - repeated Pattern 11 


Outputs
-------------------------------


* **logic [0:639] mg_mask**
   Mask Generated 
* **logic rp_valid // Valid signal for the output**
   Valid signal for the output 


Description
-------------------------------


This implements mask_generation_VGA
