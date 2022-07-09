#include <common.h>
#include "elf.h"

char symtab[1000];
char strtab[1000];

void parse_elf(char *elf_file) {
    if (elf_file == NULL) {
        Log("No elf is given.");
        return;
    }
    FILE *fp = fopen(elf_file, "rb");
    Assert(fp, "Can not open '%s'", elf_file);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    Log("The elf is %s, size = %ld", elf_file, size);

    fseek(fp, 0, SEEK_SET);

    int ret = 0;
    // 读取ELF文件头
    Elf64_Ehdr *Ehdr;
    Ehdr = (Elf64_Ehdr*)malloc(sizeof(Elf64_Ehdr));
    ret = fread(Ehdr, sizeof(Elf64_Ehdr), 1, fp);
    assert(ret == 1);
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%d ", Ehdr->e_ident[i]);
    }
    puts("");
    
    // 读取Section header table
    Elf64_Shdr *Shdr;
    int shnum = (int)Ehdr->e_shnum;  // 节头表的数目
    printf("shnum:%d size:%ld\n", shnum, Ehdr->e_shoff);
    Shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * shnum);
    fseek(fp, Ehdr->e_shoff, SEEK_SET);  // 定位到表的位置
    ret = fread(Shdr, sizeof(Elf64_Shdr), shnum, fp);
    assert(ret == shnum);

    // 读取symtab
    for (int i = 0; i < shnum; i++) {
        printf("%d\n", Shdr[i].sh_name);
    }

    fclose(fp);
}