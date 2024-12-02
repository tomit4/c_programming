CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
INPUT_FILE=./xor.c
OUTPUT_FILE=../../bin/chapter_20/xor/xor

xor:
	$(CC) $(CFLAGS) -o  $(OUTPUT_FILE) $(INPUT_FILE)

encrypt:
	$(OUTPUT_FILE) < msg.txt > newmsg.txt

decrypt:
	$(OUTPUT_FILE) < newmsg.txt

clean:
	rm ./newmsg.txt
