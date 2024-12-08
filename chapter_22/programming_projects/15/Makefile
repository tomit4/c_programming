CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_22/programming_projects/15/justify

justify: justify.o word.o line.o
	$(CC) -o $(FILE) justify.o line.o word.o $(CFLAGS)

justify.o: justify.c word.h line.h
	$(CC) -c justify.c $(CFLAGS)

word.o: word.c word.h
	$(CC) -c word.c $(CFLAGS)

line.o: line.c line.h
	$(CC) -c line.c $(CFLAGS)

clean:
	rm -f justify.o word.o line.o
