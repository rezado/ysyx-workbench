#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include <utils.h>
#include <sys/time.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

#define RTC_ADDR        0xa000048
#define SERIAL_PORT     0xa0003f8


uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR ") at pc = " FMT_WORD,
      addr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE, CPU.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  // printf("read %llx from %llx\n", *rdata, raddr);
  if (raddr == RTC_ADDR) {
    timeval s;
    gettimeofday(&s, NULL);
    *rdata = s.tv_sec * 1000 + s.tv_usec / 1000;
    return;
  }
  if (likely(in_pmem((paddr_t)raddr))) {
    *rdata = host_read(guest_to_host(raddr & ~0x7ull), 8);
    #ifdef CONFIG_MTRACE
      if (raddr != RESET_VECTOR) printf("Read Memory at 0x%016llx   data: 0x%016llx\n", raddr, *rdata);
    #endif
    return;
  }
  out_of_bound((paddr_t)raddr);
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  // printf("write:waddr:%llx, wdata:%llx, wmask:%x\n", waddr, wdata, wmask);
  if (waddr == SERIAL_PORT) {
    printf("write to serial port\n");
    putc((char)wdata, stderr);
    return;
  }
  if (likely(in_pmem((paddr_t)waddr))) {
    waddr = waddr & ~0x7ull;
    for (int i = 0; i < 8; i++) {
      if (wmask & 1 == 1) {
        host_write(guest_to_host(waddr), 1, wdata);
        wdata >>= 8;
      }
      wmask >>= 1;
      waddr += 1;
    }
    #ifdef CONFIG_MTRACE
      if (wmask) printf("Write Memory at 0x%016llx  data:  0x%016llx\n", waddr, wdata);
    #endif
    return;
  }
  out_of_bound((paddr_t)waddr);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) {
    return host_read(guest_to_host(addr), len);
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { host_write(guest_to_host(addr), len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}