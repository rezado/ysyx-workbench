// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:82:30
    extern void finish_sim();
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:93:30
    extern void get_inst(int inst);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/mem.v:10:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/mem.v:12:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);

#ifdef __cplusplus
}
#endif
