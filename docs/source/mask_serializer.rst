mask_serializer
===================================


.. symbolator::
  :alt: mask_serializer
  :align: center
  :caption: mask_serializer
  :symbolator_cmd: /usr/local/bin/symbolator
  :name: mask_serializer



  module mask_serializer
        (
        input  [IP_CHANNEL_WIDTH-1:0] DIN,
        input  clk,
        input  rst_n,
        input  next,
        input  load,
        input [1:0] imageResolution,
        output logic done,
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


* **[IP_CHANNEL_WIDTH-1:0] DIN**
* **clk**
* **rst_n**
* **next**
* **load**
* **[1:0] imageResolution**


Outputs
-------------------------------


* **logic done**
* **logic [OP_CHANNEL_WIDTH-1:0] DOUT**
