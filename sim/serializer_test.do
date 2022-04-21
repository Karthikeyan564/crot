vlib work
vlog ../rtl/mask_serializer.sv
vlog ../tb/mask_serializer_tb.sv
vsim work.mask_serializer_tb
view wave
add wave -position insertpoint  \
sim:/mask_serializer_tb/uut/IP_CHANNEL_WIDTH \
sim:/mask_serializer_tb/uut/OP_CHANNEL_WIDTH \
sim:/mask_serializer_tb/uut/stepSel0 \
sim:/mask_serializer_tb/uut/stepSel1 \
sim:/mask_serializer_tb/uut/stepSel2 \
sim:/mask_serializer_tb/uut/DIN \
sim:/mask_serializer_tb/uut/clk \
sim:/mask_serializer_tb/uut/next \
sim:/mask_serializer_tb/uut/load \
sim:/mask_serializer_tb/uut/imageResolution \
sim:/mask_serializer_tb/uut/DOUT \
sim:/mask_serializer_tb/uut/dint \
sim:/mask_serializer_tb/uut/sel
add wave -position insertpoint  \
sim:/mask_serializer_tb/DIN_original \
sim:/mask_serializer_tb/DOUT_row \
sim:/mask_serializer_tb/per_row_cycle_count \
sim:/mask_serializer_tb/cycles_per_row \
sim:/mask_serializer_tb/done
add wave -position insertpoint  \
sim:/mask_serializer_tb/uut/rst_n
add wave -position insertpoint  \
sim:/mask_serializer_tb/uut/counter
run -all