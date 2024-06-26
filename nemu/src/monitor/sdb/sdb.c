#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "memory/paddr.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  int n;
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given, exec 1 inst */ 
	cpu_exec(1);
  }
  else {
	n = atoi(arg);
	if (n == 0 ) {
		printf("Wrong number!\n");
	}
	else {
    cpu_exec(n);
	}
  }

  return 0;
}

static int cmd_info(char *args) {
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given ERROR */
    printf("There is no argument, Please append 'r' or 'w'\n");
  }
  else {
    if (strcmp(arg, "r") == 0) {
      isa_reg_display(); 
    }
    else if (strcmp(arg, "w") == 0) {
      //TODO: complete watchpoint	  

    }
    else {
      printf("Wrong argument!\n");
    }
  }
  return 0;
}

paddr_t htoi(char *str) {
  //TODO: write codes now
  int i, num = 0;
  paddr_t addr = 0;
  if (str[0] == '0' || (str[1] == 'x' && str[1] == 'X')) {
	for (i = 2; i < strlen(str); i++) {
	  if (str[i] >= 'a' && str[i] <= 'f') {
	    num = str[i] - 'a' + 10;
	  }
	  else if (str[i] >= '0' && str[i] <= '9') {
	    num = str[i] - '0';
	  }
	  addr = addr * 16 + num;
	}
	return addr;
  }
  else {
    printf("Please input 16 base number start with 0x\n");
    return 0; // error
  }
}
static int cmd_x(char *args) {
  char *arg = strtok(NULL, " ");
  int i;
  int num;
  paddr_t paddr;

  if (arg == NULL) {
	printf("Wrong!Please input lenght(10ind) and addr(16ind)\n");
  }
  else {
    puts(arg);
    num = atoi(arg);
    arg = strtok(NULL, " ");
    if (arg == NULL) {
      printf("Wrong!Please input addr");
    }
    else {
      paddr = htoi(arg);
      printf("addr:%x length:%x\n", paddr, num);
      if (paddr == 0) {
        return 0;
      }
      for (i = 0; i < num; i++) {
        paddr_t cur_addr = paddr + i * sizeof(paddr_t);
        printf("%8lx at %8x\n", paddr_read(cur_addr, sizeof(paddr_t)), cur_addr);
      }
    }
  }
  return 0;
}

static int cmd_p(char *args) {
  bool success = true;
  word_t val = expr(args, &success);
  if (!success) {
    printf("表达式求值不正确\n");
  }
  else {
    printf("%ld\n", val);
  }

  return 0;
}

static int cmd_w(char *args) {

  return 0;
}

static int cmd_d(char *args) {

  return 0;
}

static int cmd_help(char *args); 

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Step instruction in specified number(default 1)", cmd_si},
  { "info", "Print program's informations", cmd_info},
  { "x", "Scanning memory and print N bytes from EXPR", cmd_x},
  { "p", "Solving EXPR", cmd_p},
  { "w", "Set watchpoint", cmd_w},
  { "d", "Delete watchpoint", cmd_d}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
