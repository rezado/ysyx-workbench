ifdef CONFIG_ITRACE
CXXSRC = csrc/utils/disasm.cc
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)
endif
