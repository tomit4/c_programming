CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_22/programming_projects/17/format_numbers

format_numbers: format_numbers.o readline.o
	$(CC) -o  $(FILE) format_numbers.o readline.o $(CFLAGS)

format_numbers.o: format_numbers.c readline.h
	$(CC) -c format_numbers.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)

clean:
	rm -f readline.o format_numbers.o
