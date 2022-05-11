#include <memory/host.h>
#include <memory/paddr.h>

static uint8_t pmem[10010] PG_ALIGN = {};
#define CONFIG_MBASE 0x80000000

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

/* 访存相关 */
uint64_t paddr_read(uint64_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
} 