all : rtl/mask_gen.hjson gen_sv
	python3 rtl/regtool.py -r -t gen_sv rtl/mask_gen.hjson
