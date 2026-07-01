CC       ?= gcc
CFLAGS   ?= -O2 -Wall -Wextra
CPPFLAGS ?=
LDFLAGS  ?=

BUILD_DIR := build

TARGETS := emiral-asm emiral-vm

.PHONY: all clean

all: $(TARGETS)

emiral-asm: $(BUILD_DIR)/assembly/main.o
	$(CC) $(LDFLAGS) $< -o $@

emiral-vm: $(BUILD_DIR)/virtual-machine/main.o
	$(CC) $(LDFLAGS) $< -o $@

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -Iinclude -Iinclude/$(dir $<) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGETS)

