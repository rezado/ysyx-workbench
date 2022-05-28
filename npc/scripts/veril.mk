TOPNAME = top

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert
VERILATOR_SIM_CFLAGS += -Wall --trace --cc --exe --build

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = obj_dir/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
# CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
# CFLAGS += $(shell llvm-config --cxxflags) -fPIE
LDFLAGS += -lreadline -g
LDFLAGS += $(shell llvm-config --libs)
NPCFLAGS := 
NPC_EXEC := $(BIN) $(ARGS) $(IMG)

run: $(NPC_EXEC)

clean:
	-rm -rf ./obj_dir

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	$(VERILATOR) $(VERILATOR_SIM_CFLAGS) --top-module $(TOPNAME) $(VSRCS) $(CSRCS) $(CXXSRC) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -CFLAGS , $(CXXFLAGS))

include ../Makefile
.PHONY: clean run
