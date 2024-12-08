/* Formats a file of text */
#include "line.h"
#include "word.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
	FILE *fp_in, *fp_out;
	if (argc != 3) {
		fprintf(stderr, "Usage: %s input_file output_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp_in = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be read from\n",
			argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fp_out = fopen(argv[2], "w")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be written to\n",
			argv[2]);
		exit(EXIT_FAILURE);
	}

	char word[MAX_WORD_LEN + 2];
	int word_len;

	clear_line();
	for (;;) {
		word_len = read_word(word, MAX_WORD_LEN + 1, fp_in);
		if (word_len == 0) {
			flush_line(fp_out);
			exit(EXIT_SUCCESS);
		}
		if (word_len > MAX_WORD_LEN) {
			word[MAX_WORD_LEN] = '*';
		}
		if (word_len + 1 > space_remaining()) {
			write_line(fp_out);
			clear_line();
		}
		add_word(word);
	}

	fclose(fp_in);
	fclose(fp_out);
	exit(EXIT_SUCCESS);
}
