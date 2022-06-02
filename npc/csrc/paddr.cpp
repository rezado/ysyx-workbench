#include <memory/host.h>
#include <memory/paddr.h>

static uint8_t pmem[10010] = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

/* 访存相关 */
uint64_t paddr_read(uint64_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
} 

extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  // printf("read from %llx\n", raddr);
  *rdata = host_read(guest_to_host(raddr & ~0x7ull), 8);
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  // printf("write:waddr:%llx, wdata:%llx, wmask:%x\n", waddr, wdata, wmask);
  for (int i = 0; i < 8; i++) {
    if (wmask & 1 == 1) {
      host_write(guest_to_host(waddr & ~0x7ull), 1, wdata);
    }
    wmask >>= 1;
    waddr += 8;
    wdata >>= 4;
  }
  
}