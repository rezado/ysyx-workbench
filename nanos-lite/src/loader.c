#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);


static uintptr_t loader(PCB *pcb, const char *filename) {
  // 读取ELF文件头
  Elf_Ehdr *Ehdr = NULL;
  size_t ret;
  Ehdr = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  ret = ramdisk_read(Ehdr, 0, sizeof(Elf_Ehdr));
  assert(ret);

  // 检查魔数
  assert(*(uint32_t*)Ehdr->e_ident == 0x7f454c46);

  // 读取program header table
  Elf_Phdr *Phdrs = NULL;
  Phdrs = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * Ehdr->e_phnum);
  ret = ramdisk_read(Phdrs, Ehdr->e_phoff, sizeof(Elf_Phdr) * Ehdr->e_phnum);
  assert(ret);

  // 遍历program headers
  for (uint32_t i = 0; i < Ehdr->e_phnum; i++) {
    if (Phdrs[i].p_type == PT_LOAD) {
      ret = ramdisk_read((void*)Phdrs[i].p_vaddr, Phdrs[i].p_offset, Phdrs[i].p_filesz);
      assert(ret);
      memset((void*)(Phdrs[i].p_vaddr + Phdrs[i].p_filesz), 0, Phdrs[i].p_memsz - Phdrs[i].p_filesz);
    }
  }

  uintptr_t proc = Ehdr->e_entry;
  free(Ehdr);
  free(Phdrs);

  return proc;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

