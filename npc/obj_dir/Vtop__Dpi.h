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
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:134:30
    extern void finish_sim();
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:153:30
    extern void get_inst(int inst);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:147:30
    extern void get_inv(int inv);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:16:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/mem.v:13:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/ysyx_22040088_regfile.v:21:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
