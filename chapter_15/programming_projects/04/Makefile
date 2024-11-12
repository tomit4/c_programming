CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99

remind: remind.o readline.o
	$(CC) -o ../../../bin/chapter_15/programming_projects/04/remind remind.o readline.o $(CFLAGS)

remind.o: remind.c readline.h
	$(CC) -c remind.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
