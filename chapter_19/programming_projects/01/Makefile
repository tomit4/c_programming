CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_19/programming_projects/01/stackclient

stackclient: stackclient.o stackADT.o
	$(CC) -o  $(FILE) stackclient.o stackADT.o $(CFLAGS)

stackclient.o: stackclient.c stackADT.h
	$(CC) -c stackclient.c $(CFLAGS)

stackADT.o: stackADT.c stackADT.h
	$(CC) -c stackADT.c $(CFLAGS)

clean:
	rm -f stackclient.o stackADT.o $(FILE)
