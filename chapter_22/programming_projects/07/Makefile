CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c99
INPUT_FILE=./compress_file.c
OUTPUT_FILE=../../../bin/chapter_22/programming_projects/07/compress_file

INPUT_FILE_2=./uncompress.c
OUTPUT_FILE_2=../../../bin/chapter_22/programming_projects/07/uncompress

all: compress_file uncompress

compress_file:
	$(CC) $(CFLAGS) -o  $(OUTPUT_FILE) $(INPUT_FILE)

uncompress:
	$(CC) $(CFLAGS) -o  $(OUTPUT_FILE_2) $(INPUT_FILE_2)

