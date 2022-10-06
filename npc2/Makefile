VFILES := $(wildcard vsrc/*.v)
VERILATOR = verilator
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe --build --top-module top
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
# VERILATOR_FLAGS += -Os -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
# VERILATOR_FLAGS += --assert
# Generate coverage analysis
# VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

# Input files for Verilator
VERILATOR_INPUT = $(VFILES) csrc/sim_main.cpp

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	obj_dir/Vtop
#	gtkwave ./obj_dir/vtop.vcd

clean:
	rm -rf logs
	rm -rf obj_dir

include ../Makefile