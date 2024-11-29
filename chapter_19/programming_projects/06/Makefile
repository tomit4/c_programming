CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
FILE=../../../bin/chapter_19/programming_projects/06/queueclient

queueclient: queueclient.o queueADT.o
	$(CC) -o  $(FILE) queueclient.o queueADT.o $(CFLAGS)

queueclient.o: queueclient.c queue.h
	$(CC) -c queueclient.c $(CFLAGS)

queueADT.o: queueADT.c queue.h
	$(CC) -c queueADT.c $(CFLAGS)

clean:
	rm -f *.o $(FILE)
