#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

static char buf[65536] = {};

extern word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Test expr */
  uint32_t result;
  FILE *fp = fopen("/home/bill/ysyx-workbench/nemu/src/input", "r");
  FILE *output = fopen("/home/bill/ysyx-workbench/nemu/src/output", "w");
  assert(fp != NULL);
  while (fscanf(fp, "%u", &result) != EOF) {
    if (fgets(buf, sizeof buf, fp) == NULL) break;
    buf[strlen(buf) - 1] = 0;
    printf("%u %s\n", result, buf);
    bool flag = true;
    uint32_t tmp = expr(buf, &flag);
    if (tmp != result) {
        fprintf(output, "Wrong:%s\nexpected:%u but get %u\n", buf, result, tmp);
        // printf("Wrong:%s\nexpected:%u but get %u\n", buf, result, tmp);
    }
  }
  fclose(fp);
  fclose(output);

  return is_exit_status_bad();
}
