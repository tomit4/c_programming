CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99

all: inventory merge

merge: merge_inventory.c
	$(CC) -o ../../../bin/chapter_22/programming_projects/09/merge_inventory ./merge_inventory.c $(CFLAGS)

inventory: inventory.o readline.o
	$(CC) -o ../../../bin/chapter_22/programming_projects/09/inventory inventory.o readline.o $(CFLAGS)

inventory.o: inventory.c readline.h
	$(CC) -c inventory.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
