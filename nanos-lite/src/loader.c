#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);


static uintptr_t loader(PCB *pcb, const char *filename) {
  // 读取ELF文件头
  Elf_Ehdr *Ehdr = NULL;
  size_t ret;
  Ehdr = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  ret = ramdisk_read(Ehdr, 0, sizeof(Elf_Ehdr));
  assert(ret);

  // 读取program header table
  Elf_Phdr *Phdrs = NULL;
  Phdrs = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * Ehdr->e_phnum);
  ret = ramdisk_read(Phdrs, Ehdr->e_phoff, sizeof(Elf_Phdr) * Ehdr->e_phnum);
  assert(ret);

  // 遍历program headers
  char ch = '\0';
  for (uint32_t i = 0; i < Ehdr->e_phnum; i++) {
    if (Phdrs[i].p_type == PT_LOAD) {
      ret = ramdisk_write(&ramdisk_start + Phdrs[i].p_offset, Phdrs[i].p_vaddr, Phdrs[i].p_filesz);
      // memcpy(&ramdisk_start + vaddr, &ramdisk_start + p_offset, filesiz)
      assert(ret);
      for (uint32_t p = Phdrs[i].p_filesz; p < Phdrs[i].p_memsz; p++) {
        ret = ramdisk_write(&ch, Phdrs[i].p_vaddr + p, 1);
        assert(ret);
      }
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

