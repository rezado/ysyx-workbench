SRCS-y += csrc/npc-main.c
DIRS-y += csrc/cpu csrc/monitor csrc/utils
DIRS-$(CONFIG_MODE_SYSTEM) += csrc/memory
DIRS-BLACKLIST-$(CONFIG_TARGET_AM) += csrc/monitor/sdb

SHARE = $(if $(CONFIG_TARGET_SHARE),1,0)
LIBS += $(if $(CONFIG_TARGET_NATIVE_ELF),-lreadline -ldl -pie,)

ifdef mainargs
ASFLAGS += -DBIN_PATH=\"$(mainargs)\"
endif
SRCS-$(CONFIG_TARGET_AM) += csrc/am-bin.S
.PHONY: csrc/am-bin.S
