all : rtl/mask_gen.hjson sv
	python3 rtl/regtool.py -r -t sv rtl/mask_gen.hjson
