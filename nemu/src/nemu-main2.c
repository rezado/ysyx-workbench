#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

static char buf[65536] = {};

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Test expr */
  uint32_t result;
  FILE *fp = fopen("input", "r");
  assert(fp != NULL);
  while (fscanf(fp, "%u %s\n", &result, buf) != EOF) {
    uint32_t tmp = cmd_p(buf);
    if (tmp != result) {
        printf("Wrong:%s\nexpected:%u but get %u\n", buf, result, tmp);
    }
  }

  return is_exit_status_bad();
}
