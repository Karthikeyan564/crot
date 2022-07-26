all : rtl/mask_gen.hjson gen_sv
	python3 ../register_interface/vendor/lowrisc_opentitan/util/regtool.py -r rtl/mask_gen.hjson --outdir gen_sv/
