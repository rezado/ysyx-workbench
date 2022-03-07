all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	cd vsrc/new; verilator -Wall --trace --cc --exe --build top.v sim_main.cpp

include ../Makefile
