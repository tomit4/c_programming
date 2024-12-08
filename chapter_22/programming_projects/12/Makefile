CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_22/programming_projects/12/items

items: items.o readline.o
	$(CC) -o  $(FILE) items.o readline.o $(CFLAGS)

items.o: items.c readline.h
	$(CC) -c items.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)

clean:
	rm -f readline.o items.o
