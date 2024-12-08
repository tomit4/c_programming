/* Performs XOR encryption */

#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
	FILE *input_fp;
	FILE *output_fp;

	if (argc != 3) {
		fprintf(stderr, "Usage: xor input_file.dat output_file.dat\n");
		exit(EXIT_FAILURE);
	}
	if ((input_fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((output_fp = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		fclose(input_fp);
		exit(EXIT_FAILURE);
	}

	int orig_char, new_char;

	while ((orig_char = getc(input_fp)) != EOF) {
		// XOR the orig_char and assign it to new_char
		new_char = orig_char ^ KEY;
		putc(new_char, output_fp);
	}

	fclose(input_fp);
	fclose(output_fp);
	exit(EXIT_SUCCESS);
}
