CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_16/programming_projects/02/inventory

inventory: inventory.o readline.o quicksort.o
	$(CC) -o $(FILE) inventory.o readline.o quicksort.o $(CFLAGS)

inventory.o: inventory.c readline.h
	$(CC) -c inventory.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)

quicksort.o: quicksort.c quicksort.h
	$(CC) -c quicksort.c $(CFLAGS)
