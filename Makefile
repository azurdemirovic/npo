CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic
LDFLAGS = $(ARCH)
ARCH ?= -m32
TARGET = stopnje_prevajanja

build_i: main.c
	$(CC) $(CFLAGS) $(ARCH) -E main.c -o main.i

build_s: build_i
	$(CC) $(CFLAGS) $(ARCH) -S main.i -o main.s

build_o: build_s
	$(CC) $(CFLAGS) $(ARCH) -c main.s -o main.o

build: build_o
	$(CC) $(LDFLAGS) main.o -o $(TARGET)

run: build
	./$(TARGET)

clean:
	rm -f main.i main.s main.o $(TARGET)

all: build run

.PHONY: build_i build_s build_o build run clean all
