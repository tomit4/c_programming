CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99
FILE=../../../bin/chapter_17/exercises/08/main

main: main.o stack.o
	$(CC) -o $(FILE) main.o stack.o $(CFLAGS)

main.o: main.c stack.h
	$(CC) -c main.c $(CFLAGS)

stack.o: stack.c stack.h
	$(CC) -c stack.c $(CFLAGS)

execute:
	$(FILE)

clean:
	rm -f main.o stack.o $(FILE)
