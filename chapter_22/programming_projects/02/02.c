#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;

	if (argc != 2) {
		fprintf(stderr, "Usage: 02 filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open 02.txt file.\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fp)) != EOF) {
		if (isalpha(ch)) {
			putchar(toupper(ch));
		} else {
			putchar(ch);
		}
	}

	fclose(fp);
	exit(EXIT_SUCCESS);
}
