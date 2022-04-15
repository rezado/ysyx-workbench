#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char *expr;
  word_t value;
  bool vis;
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
static int wp_num = 0;  // 监视点的数目

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].expr = NULL;
    wp_pool[i].value = 0;
    wp_pool[i].vis = false;
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char *args) {
  // 没有空闲监视点了
  if (!free_)
    assert(0);
  
  WP *p = free_;
  free_ = free_->next;
  p->NO = wp_num;
  printf("%s\n", args);
  p->expr = args;
  p->value = 0;
  p->vis = false;
  p->next = head;
  head = p;
  wp_num++;
}

void free_wp(int NO) {
  WP *p = head, *pre = NULL;
  while (p) {
    if (p->NO == NO) break;
    pre = p;
    p = p->next;
  }
  if (!p) {
    printf("不存在监视点\n");
  }
  else if (p == head) {
    // 头结点就是删除节点
    head = p->next;
    p->next = free_;
    free_ = p;
    wp_num--;
  }
  else {
    // 头插法
    pre->next = p->next;
    p->next = free_;
    free_ = p;
    wp_num--;
  }
}

// 扫描监视点
bool scan_wp() {
  bool flag = true;
  WP *p = head;
  while (p) {
    bool success = true;
    word_t val = expr(p->expr, &success);
    if (!success) assert(0);
    if (!p->vis) {
      p->value = val;
      p->vis = true;
    }
    else if (val != p->value) {
      printf("Hardware watchpoint %d: %s\n\n", p->NO, p->expr);
      printf("Old value = %lu\nNew value = %lu", p->value, val);
      p->value = val;
      flag = false;
    }
    p = p->next;
  }
  return flag;
}

void print_wp() {
  WP *p = head;
  while (p) {
    printf("%d\t%s\n", p->NO, p->expr);
    p = p->next;
  }
}