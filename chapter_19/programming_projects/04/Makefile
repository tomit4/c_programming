CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_19/programming_projects/04/stackclient

stackclient: stackclient.o stackADT3.o
	$(CC) -o  $(FILE) stackclient.o stackADT3.o $(CFLAGS)

stackclient.o: stackclient.c stackADT.h
	$(CC) -c stackclient.c $(CFLAGS)

stackADT3.o: stackADT3.c stackADT.h
	$(CC) -c stackADT3.c $(CFLAGS)

clean:
	rm -f *.o $(FILE)
