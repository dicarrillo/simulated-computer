CC = gcc
CFLAGS = -std=c17 -Wall -Wextra

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c

clean:
	rm -f main