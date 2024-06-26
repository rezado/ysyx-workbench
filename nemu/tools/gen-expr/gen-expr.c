#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int buf_ptr;
int buf_overflow;

word_t choose(word_t n) {
  return rand() % n;
}

void gen_num() {
  // 生成随机数
  int n = choose(UINT32_MAX);

  // 将随机数转字符串
  char num[12];
  int cnt = 0, t = n;
  while (t) {
    num[cnt++] = t % 10 + '0';
    t = t / 10;
  }

  // 写入缓存区
  for (int i = cnt - 1; i >= 0; i--)
    buf[buf_ptr++] = num[i];
  buf[buf_ptr++] = 'u';
}

void gen(char c) {
  buf[buf_ptr++] = c;
}

void gen_rand_op() {
  switch (choose(4)) {
    case 0: buf[buf_ptr++] = '+'; break;
    case 1: buf[buf_ptr++] = '-'; break;
    case 2: buf[buf_ptr++] = '*'; break;
    default: buf[buf_ptr++] = '/'; break;
  }
}

static void gen_rand_expr() {
  if(buf_ptr > 65535) {
    buf_overflow = 1;
    return;
  }
  switch (choose(4)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    case 2: gen(' ');
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
  // puts(buf);
}


int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    // buf初始化 生成随机表达式 
    buf[0] = '\0';
    buf_ptr = 0;
    buf_overflow = 0;  // 缓冲区越界标志

    gen_rand_expr();
    if (buf_overflow) {
      // i--;
      continue;  // 丢弃过长的表达式
    }
    buf[buf_ptr++] = 0;  // 表达式结束

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr -Werror");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
