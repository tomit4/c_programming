CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../bin/chapter_19/stackclient3

stackclient: stackclient.o stackADT3.o
	$(CC) -o  $(FILE) stackclient.o stackADT.o $(CFLAGS)

stackclient.o: stackclient.c stackADT.h
	$(CC) -c stackclient.c $(CFLAGS)

stackADT.o: stackADT3.c stackADT.h
	$(CC) -c stackADT.c $(CFLAGS)

clean:
	rm -f stackclient.o stackADT2.o
