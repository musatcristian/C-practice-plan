
CC := gcc

CFLAGS := -g -O1 -std=c17 \
          -Wall -Wextra -Wpedantic

LDFLAGS := -fsanitize=address,undefined

SOURCE := projects/exercises/debug_me.c
UTILS := projects/exercises/utils.c
TARGET := buffer_exe

.PHONY: all test clean

all: $(TARGET)

$(TARGET): $(UTILS) $(SOURCE)  
	$(CC) $(CFLAGS) $(LDFLAGS) \
	$(UTILS) $(SOURCE) \
	-o $(TARGET)

clean:
	rm -rf $(TARGET)