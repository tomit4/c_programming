CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../bin/chapter_17/inventory2/inventory2

inventory: inventory.o readline.o
	$(CC) -o  $(FILE) inventory.o readline.o $(CFLAGS)

inventory.o: inventory.c readline.h
	$(CC) -c inventory.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)

clean:
	rm -f readline.o inventory.o
