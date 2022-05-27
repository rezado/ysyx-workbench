#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <generated/autoconf.h>

#include <macro.h>

#include <assert.h>
#include <stdlib.h>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "verilated_dpi.h"

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016lx", "0x%08x")

typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016lx", "0x%08x")
typedef uint16_t ioaddr_t;

extern Vtop* top;

#include <debug.h>

#endif
