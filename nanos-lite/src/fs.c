#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;     // 文件名
  size_t size;    // 文件大小
  size_t disk_offset;   // 文件在ramdisk中偏移
  ReadFn read;
  WriteFn write;
  size_t open_offset;   // 打开文件的偏移量
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB, FD_EVENT};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENT]  = {"/dev/events", 0, 0, events_read, invalid_write},
#include "files.h"
};

extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode) {
  int file_num = sizeof(file_table) / sizeof(Finfo);
  printf("pathname:%s\n", pathname);
  for (int i = 0; i < file_num; i++) {
    if (strcmp(pathname, file_table[i].name) == 0) {
      file_table[i].open_offset = 0;
      printf("%d\n", i);
      return i;
    }
  }
  assert(0);  // sfs没有找到文件属于异常情况
  return -1;
}

size_t fs_read(int fd, void *buf, size_t len) {
  Finfo *pf = &file_table[fd];
  if (pf->size == 0) {
    // 表示是个字符流设备 没有offset的概念
    printf("read:%s\n", pf->name);
    return pf->read(buf, 0, len);
  }

  if (pf->open_offset >= pf->size) {
    return 0; // 到结尾了 不读取
  }
  size_t read_end = pf->open_offset + len;
  int length = 0;
  if (pf->size != 0 && read_end > pf->size) {
    // 越界
    length = pf->size - pf->open_offset;
    if (pf->read) pf->read(buf, pf->disk_offset + pf->open_offset, length);
    else ramdisk_read(buf, pf->disk_offset + pf->open_offset, length);
    pf->open_offset = pf->size;
    return length;
  }
  else {
    if (pf->read) return pf->read(buf, pf->disk_offset + pf->open_offset, len);
    else ramdisk_read(buf, pf->disk_offset + pf->open_offset, len);
    pf->open_offset += len;
    return len;
  }
}

int fs_close(int fd) {
  return 0; 
}

size_t fs_write(int fd, const void *buf, size_t len) {
  Finfo *pf = &file_table[fd];
  if (pf->size == 0) {
    return pf->write(buf, 0, len);
  }

  if (pf->open_offset >= pf->size) {
    return 0;
  }
  size_t write_end = pf->open_offset + len;
  int length = 0;
  if (write_end > pf->size) {
    length = pf->size - pf->open_offset;
    if (pf->write) pf->write(buf, pf->disk_offset + pf->open_offset, length);
    else ramdisk_write(buf, pf->disk_offset + pf->open_offset, length);
    pf->open_offset = pf->size;
    return length;
  }
  else {
    if (pf->write) pf->write(buf, pf->disk_offset + pf->open_offset, len);
    else ramdisk_write(buf, pf->disk_offset + pf->open_offset, len);
    pf->open_offset += len;
    return len;
  }
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  Finfo *pf = &file_table[fd];
  if (fd == FD_STDIN || fd == FD_STDOUT || fd == FD_STDERR) {
    return 0; //忽略stdin stdout stderr
  }
  switch (whence) {
    case SEEK_SET:
      pf->open_offset = offset;
      break;
    case SEEK_CUR:
      pf->open_offset += offset;
      break;
    case SEEK_END:
      pf->open_offset = pf->size + offset;
      break;
    default:
      return -1;
  }
  return pf->open_offset;
}

char *getfilename(int fd) {
  if (fd == FD_STDIN) {
    return "STDIN";
  }
  else if (fd == FD_STDOUT) {
    return "STDOUT";
  }
  else if (fd == FD_STDERR) {
    return "STDERR";
  }
  else {
    return file_table[fd].name;
  }
}