CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_22/programming_projects/13/flighttimes

flighttimes: flighttimes.o readline.o
	$(CC) -o  $(FILE) flighttimes.o readline.o $(CFLAGS)

flighttimes.o: flighttimes.c readline.h
	$(CC) -c flighttimes.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)

clean:
	rm -f readline.o flighttimes.o
