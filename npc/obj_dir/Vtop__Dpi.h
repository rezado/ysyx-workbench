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
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:254:30
    extern void finish_sim();
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:272:30
    extern void get_inst(int inst);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/top.v:265:30
    extern void get_inv(int inv);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/ysyx_22040088_IFU.v:36:30
    extern void npc_read(long long raddr, long long* rdata);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/mem.v:14:30
    extern void npc_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/bill/ysyx-workbench/npc/vsrc/ysyx_22040088_regfile.v:21:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
