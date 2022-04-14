#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
static int wp_num = 0;  // 监视点的数目

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp() {
  // 没有空闲监视点了
  if (!free_)
    assert(0);
  
  WP *p = free_;
  free_ = free_->next;
  p->next = head;
  head = p;
  wp_num++;
  return p;
}

void free_wp(WP *wp) {
  WP *p = head, *pre = NULL;
  while (p) {
    if (p == wp) break;
    pre = p;
    p = p->next;
  }
  if (!p) {
    printf("不存在监视点\n");
    return;
  }

  // 头插法
  pre->next = p->next;
  p->next = free_;
  free_ = p;
  wp_num--;
}