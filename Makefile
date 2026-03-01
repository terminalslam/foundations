CC = cc
CFLAGS = -std=c11 -Wall -Wextra -Werror -pedantic

SRC = src/main.c
OUT = build/app

.PHONY: all run clean

all:
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -rf build