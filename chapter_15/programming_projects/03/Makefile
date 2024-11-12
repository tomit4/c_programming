CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c99

qsort: qsort.o quicksort.o
	$(CC) -o ../../../bin/chapter_15/programming_projects/03/qsort qsort.o quicksort.o $(CFLAGS)

qsort.o: qsort.c quicksort.h
	$(CC) -c qsort.c $(CFLAGS)

quicksort.o: quicksort.c quicksort.h
	$(CC) -c quicksort.c $(CFLAGS)
