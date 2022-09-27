all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build --trace csrc/main.cpp vsrc/test.v
	/obj_dir/Vtest
	gtkwave ./obj_dir/test.vcd

include ../Makefile
