#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	bool open_failed = false;
	char ch;

	if (argc <= 1) {
		fprintf(stderr, "Usage: fcat f1.c f2.c f3.c\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 1; i < argc; i++) {
		if ((fp = fopen(argv[i], "r")) == NULL) {
			printf("%s can't be opened\n", argv[i]);
			open_failed = true;
		}
		while ((ch = fgetc(fp)) != EOF) {
			putchar(ch);
		}
		fclose(fp);
	}

	if (open_failed) {
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
