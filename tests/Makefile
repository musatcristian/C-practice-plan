
CC := gcc

CFLAGS := -g -O1 -std=c17 \
          -Wall -Wextra -Wpedantic
#           -fsanitize=address,undefined

LDFLAGS := -fsanitize=address,undefined

UNITY_DIR := ../external/unity
SOURCE := ../2_week/projects/exercises/utils.c
TEST_SOURCE := test_2nd_week.c
UNITY_SOURCE := $(UNITY_DIR)/unity.c

TARGET := test_buffer_exe

INCLUDES := -I$(UNITY_DIR)

.PHONY: all test clean

all: $(TARGET)

$(TARGET): $(SOURCE) $(TEST_SOURCE) $(UNITY_SOURCE)
	$(CC) $(CFLAGS) $(LDFLAGS) \
		$(INCLUDES) \
		$(SOURCE) $(TEST_SOURCE) $(UNITY_SOURCE) \
		-o $(TARGET)

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
