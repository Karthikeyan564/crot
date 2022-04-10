quit -sim
file delete {*}[glob -nocomplain *.wlf]
file delete {*}[glob -nocomplain wlf*]
do vga_test.do