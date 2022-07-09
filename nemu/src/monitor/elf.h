#ifndef __ELF_H__
#define __ELF_H__

// ELF相关数据类型
#define Elf64_Addr uint64_t
#define Elf64_Off uint64_t
#define Elf64_Section uint16_t
#define Elf64_Versym uint16_t
#define Elf_Byte unsigned char
#define Elf64_Half uint16_t
#define Elf64_Sword int32_t
#define Elf64_Word uint32_t
#define Elf64_Sxword int64_t
#define Elf64_Xword uint64_t

// ELF头
#define EI_NIDENT 16
typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t      e_type;
    uint16_t      e_machine;
    uint32_t      e_version;
    Elf64_Addr     e_entry;
    Elf64_Off      e_phoff;
    Elf64_Off      e_shoff;
    uint32_t      e_flags;
    uint16_t      e_ehsize;
    uint16_t      e_phentsize;
    uint16_t      e_phnum;
    uint16_t      e_shentsize;
    uint16_t      e_shnum;
    uint16_t      e_shstrndx;
} Elf64_Ehdr;

// Section header
typedef struct {
    uint32_t   sh_name;
    uint32_t   sh_type;
    uint64_t   sh_flags;
    Elf64_Addr sh_addr;
    Elf64_Off  sh_offset;
    uint64_t   sh_size;
    uint32_t   sh_link;
    uint32_t   sh_info;
    uint64_t   sh_addralign;
    uint64_t   sh_entsize;
} Elf64_Shdr;

// Sysbol table
typedef struct {
    uint32_t      st_name;
    unsigned char st_info;
    unsigned char st_other;
    uint16_t      st_shndx;
    Elf64_Addr    st_value;
    uint64_t      st_size;
} Elf64_Sym;

void parse_elf(char *elf_file);

extern char symtab[1000];
extern char strtab[1000];

#endif