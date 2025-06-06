CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -Iinclude

all: main

main: src/main.c src/logic_gates.c src/adders.c src/test_logic.c
	$(CC) $(CFLAGS) -o main src/main.c src/logic_gates.c src/adders.c src/test_logic.c

clean:
	rm -f main