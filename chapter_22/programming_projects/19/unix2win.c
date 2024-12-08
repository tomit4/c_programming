#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp_in, *fp_out;
	char ch;

	if (argc != 3) {
		fprintf(stderr, "Usage: %s input-file output-file\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp_in = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be read\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fp_out = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be written\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp_in)) != EOF) {
		if (ch == '\x0a') {
			fputc('\x0d', fp_out);
		}
		fputc(ch, fp_out);
	}

	fclose(fp_in);
	fclose(fp_out);

	exit(EXIT_SUCCESS);
}
