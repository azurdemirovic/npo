CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic
ARCH = -m32
TARGET = stopnje_prevajanja

build_i: main.c
	$(CC) $(CFLAGS) $(ARCH) -E main.c -o main.i

all:
