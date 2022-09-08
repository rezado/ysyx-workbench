ifdef CONFIG_ITRACE
CXXSRC = csrc/utils/disasm.cc
CXXFLAGS += $(shell llvm-config-12 --cxxflags) -fPIE
LIBS += $(shell llvm-config-12 --libs)
endif
