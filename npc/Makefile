all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build --trace /home/srx/verilator-test/ON_OFF/sim_main.cpp /home/srx/verilator-test/ON_OFF/onoff.v
	/home/srx/verilator-test/ON_OFF/obj_dir/Vonoff
	gtkwave /home/srx/verilator-test/ON_OFF/obj_dir/onoff.vcd

include ../Makefile
