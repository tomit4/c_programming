/* Checks whether a file can be opened for reading */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	bool open_failed = false;

	if (argc != 2) {
		printf("usage: 01 filename filename2\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 1; i < argc; i++) {
		if ((fp = fopen(argv[i], "r")) == NULL) {
			printf("%s can't be opened\n", argv[i]);
			open_failed = true;
		}
		printf("%s can be opened\n", argv[i]);
		fclose(fp);
	}

	if (open_failed) {
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
