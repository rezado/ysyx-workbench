DIRS-y += csrc/device/io
SRCS-$(CONFIG_DEVICE) += csrc/device/device.c csrc/device/alarm.c csrc/device/intr.c
SRCS-$(CONFIG_HAS_SERIAL) += csrc/device/serial.c
SRCS-$(CONFIG_HAS_TIMER) += csrc/device/timer.c
SRCS-$(CONFIG_HAS_KEYBOARD) += csrc/device/keyboard.c
SRCS-$(CONFIG_HAS_VGA) += csrc/device/vga.c
SRCS-$(CONFIG_HAS_AUDIO) += csrc/device/audio.c
SRCS-$(CONFIG_HAS_DISK) += csrc/device/disk.c
SRCS-$(CONFIG_HAS_SDCARD) += csrc/device/sdcard.c

SRCS-BLACKLIST-$(CONFIG_TARGET_AM) += csrc/device/alarm.c

ifdef CONFIG_DEVICE
ifndef CONFIG_TARGET_AM
LIBS += -lSDL2
endif
endif
