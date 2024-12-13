CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99

inventory: inventory.o readline.o
	$(CC) -o ../../bin/chapter_16/inventory/inventory inventory.o readline.o $(CFLAGS)

inventory.o: inventory.c readline.h
	$(CC) -c inventory.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
