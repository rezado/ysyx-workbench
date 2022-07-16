#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
assert(0);
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);


static uintptr_t loader(PCB *pcb, const char *filename) {
  // 读取指定文件
  int fd = fs_open(filename, 0, 0);
  assert(fd != -1);

  // 读取ELF文件头
  Elf_Ehdr *Ehdr = NULL;
  size_t ret;
  Ehdr = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  // ret = ramdisk_read(Ehdr, 0, sizeof(Elf_Ehdr));
  ret = fs_read(fd, Ehdr, sizeof(Elf_Ehdr));
  assert(ret);
  // 检查魔数
  assert(*(uint32_t*)Ehdr->e_ident == 0x464c457f);
  // 检查架构
  assert(Ehdr->e_machine == EXPECT_TYPE);
  // 设定返回值
  uintptr_t proc = Ehdr->e_entry;

  // // 读取program header table
  // Elf_Phdr *Phdrs = NULL;
  // Phdrs = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * Ehdr->e_phnum);
  // ret = ramdisk_read(Phdrs, Ehdr->e_phoff, sizeof(Elf_Phdr) * Ehdr->e_phnum);
  // assert(ret);

  // // 遍历program headers
  // for (uint32_t i = 0; i < Ehdr->e_phnum; i++) {
  //   if (Phdrs[i].p_type == PT_LOAD) {
  //     ret = ramdisk_read((void*)Phdrs[i].p_vaddr, Phdrs[i].p_offset, Phdrs[i].p_filesz);
  //     assert(ret);
  //     memset((void*)(Phdrs[i].p_vaddr + Phdrs[i].p_filesz), 0, Phdrs[i].p_memsz - Phdrs[i].p_filesz);
  //   }
  // }

  free(Ehdr);
  // free(Phdrs);

  return proc;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

