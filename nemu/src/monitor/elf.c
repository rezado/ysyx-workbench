#include <common.h>
#include <elf.h>

Elf64_Sym symtab[10000];
char strtab[10000];
char shstrtab[1000];
typedef struct Func{
    char name[100];
    uint64_t start, end;
}Func;

Func *functab = NULL;
int nr_func = 0;

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
        printf("%x ", Ehdr->e_ident[i]);
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

    // 读取section header string table
    fseek(fp, Shdr[Ehdr->e_shstrndx].sh_offset, SEEK_SET);
    ret = fread(shstrtab, Shdr[Ehdr->e_shstrndx].sh_size, 1, fp);
    assert(ret == 1);

    // 读取symtab和strtab的表项
    Elf64_Shdr *strptr = NULL, *symptr = NULL;
    for (int i = 0; i < shnum; i++) {
        printf("%s\n", &shstrtab[Shdr[i].sh_name]);
        if (strcmp(&shstrtab[Shdr[i].sh_name], ".strtab") == 0) {
            strptr = &Shdr[i];
        }
        if (strcmp(&shstrtab[Shdr[i].sh_name], ".symtab") == 0) {
            symptr = &Shdr[i];
        }
    }

    // 复制到相应数组里
    fseek(fp, strptr->sh_offset, SEEK_SET);
    ret = fread(strtab, strptr->sh_size, 1, fp);
    assert(ret == 1);
    fseek(fp, symptr->sh_offset, SEEK_SET);
    int symnum = symptr->sh_size / sizeof(Elf64_Sym);
    ret = fread(symtab, sizeof(Elf64_Sym), symnum, fp);
    assert(ret == symnum);

    fclose(fp);

    // 抽取函数信息
    functab = (Func*)malloc(sizeof(Func) * symnum);
    int n = 0;
    for (int i = 0; i < symnum; i++) {
        if (symtab[i].st_info == STT_FUNC) {
            strcpy(functab[n].name, &strtab[symtab[i].st_name]);
            functab[n].start = symtab[i].st_value;
            functab[n].end = symtab[i].st_value + symtab[i].st_size;
        }
    }
    functab[n].start = 0;  // 标记最后一个函数
    nr_func = n;
    for (int i = 0; i < n; i++) {
        printf("func:%s start:0x%08lx end:0x%08lx\n", functab[i].name, functab[i].start, functab[i].end);
    }
    
    // 释放空间
    free(Ehdr);
    free(Shdr);
}

void get_funcname(char *name, uint64_t addr) {
    for (int i = 0; i < nr_func; i++) {
        if (addr >= functab[i].start && addr < functab[i].end) {
            strcpy(name, functab[i].name);
            return;
        }
    }
    name[0] = '\0';
}