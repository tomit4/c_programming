CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99

main: main.o stack.o
	$(CC) -o ../../../bin/chapter_15/programming_projects/05/main main.o stack.o $(CFLAGS)

main.o: main.c stack.h
	$(CC) -c main.c $(CFLAGS)

stack.o: stack.c stack.h
	$(CC) -c stack.c $(CFLAGS)
