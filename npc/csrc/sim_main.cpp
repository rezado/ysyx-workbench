	// 	printf("%c ", pmem[i]);
	// printf("\n");

  init_sdb();

  init_disasm("riscv64" "-pc-linux-gnu");
}

void sim_exit() {
    single_cycle();
    tfp->close();
    delete contextp;
    delete tfp;
}
extern void sdb_mainloop();

int main(int argc, char *argv[]) {
  assert(argv[1]);
  sim_init(argv[1]);

  reset(4);

  sdb_mainloop();

  sim_exit();
}
