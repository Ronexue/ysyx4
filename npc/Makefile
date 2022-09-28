all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build --trace csrc/sim_main.cpp vsrc/top.v vsrc/mytest.v vsrc/ysyx_22040038_IF.v vsrc/ysyx_22040038_Reg.v vsrc/ysyx_22040038_Regfile_ex.v vsrc/ysyx_22040038_ID.v vsrc/ysyx_22040038_EX.v
	./obj_dir/Vtop
	gtkwave ./obj_dir/vtop.vcd
clean:
	rm -rf logs
	rm -rf obj_dir
include ../Makefile
