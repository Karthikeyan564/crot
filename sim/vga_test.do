vlib work
vlog ../rtl/mask_generation_VGA.sv
vlog ../tb/mask_gen_VGA_tb.sv
vsim work.mask_gen_VGA_tb
view wave
add wave -position insertpoint  \
sim:/mask_gen_VGA_tb/h_period \
sim:/mask_gen_VGA_tb/period \
sim:/mask_gen_VGA_tb/clk \
sim:/mask_gen_VGA_tb/clk_en \
sim:/mask_gen_VGA_tb/rst_n \
sim:/mask_gen_VGA_tb/pattern_w \
sim:/mask_gen_VGA_tb/pattern \
sim:/mask_gen_VGA_tb/repeatedPattern \
sim:/mask_gen_VGA_tb/load_pattern \
sim:/mask_gen_VGA_tb/mask_type \
sim:/mask_gen_VGA_tb/mg_mask \
sim:/mask_gen_VGA_tb/rp_valid
add wave -position insertpoint  \
sim:/mask_gen_VGA_tb/uut/w5 \
sim:/mask_gen_VGA_tb/uut/w6 \
sim:/mask_gen_VGA_tb/uut/w7 \
sim:/mask_gen_VGA_tb/uut/w8
add wave -position insertpoint  \
sim:/mask_gen_VGA_tb/uut/rp_valid \
sim:/mask_gen_VGA_tb/uut/valid_next \
sim:/mask_gen_VGA_tb/uut/reg_curr \
sim:/mask_gen_VGA_tb/uut/reg_next \
sim:/mask_gen_VGA_tb/uut/pre_reg_curr \
sim:/mask_gen_VGA_tb/uut/pre_reg_next \
sim:/mask_gen_VGA_tb/uut/post_reg_curr \
sim:/mask_gen_VGA_tb/uut/post_reg_next \
sim:/mask_gen_VGA_tb/uut/slide_bit \
sim:/mask_gen_VGA_tb/uut/feedback_bit \
sim:/mask_gen_VGA_tb/uut/seedCounter \
sim:/mask_gen_VGA_tb/uut/seedLoaded \
sim:/mask_gen_VGA_tb/uut/feedback_bit_random \
sim:/mask_gen_VGA_tb/uut/reg_next_random \
sim:/mask_gen_VGA_tb/uut/c \
sim:/mask_gen_VGA_tb/uut/p
add wave -position insertpoint  \
sim:/mask_gen_VGA_tb/num_rows_done \
sim:/mask_gen_VGA_tb/done
add wave -position insertpoint  \
sim:/mask_gen_VGA_tb/full_pattern
add wave -position insertpoint  \
sim:/mask_gen_VGA_tb/mg_mask_sliding_init_state
run -all