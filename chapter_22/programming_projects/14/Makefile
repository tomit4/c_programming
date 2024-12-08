CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_22/programming_projects/14/encrypt

encrypt: encrypt.o
	$(CC) -o  $(FILE) encrypt.o $(CFLAGS)

encrypt.o: encrypt.c
	$(CC) -c encrypt.c $(CFLAGS)

clean:
	rm -f encrypt.o
