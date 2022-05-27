.DEFAULT_GOAL = app

# Add necessary options if the target is a shared library
ifeq ($(SHARE),1)
SO = -so
CFLAGS  += -fPIC
LDFLAGS += -rdynamic -shared -fPIC
endif

WORK_DIR  = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build

INC_PATH := $(WORK_DIR)/include $(INC_PATH)
OBJ_DIR  = $(BUILD_DIR)/obj-$(NAME)$(SO)
BINARY   = $(BUILD_DIR)/$(NAME)$(SO)

# Compilation flags
ifeq ($(CC),clang)
CXX := clang++
else
CXX := g++
endif
LD := $(CXX)
INCLUDES = $(addprefix -I, $(INC_PATH))
# CFLAGS  := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
CFLAGS  := -O2 -MMD -Wall $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)


# Some convenient rules

.PHONY: app clean


clean:
	-rm -rf $(BUILD_DIR)
