#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	unsigned char b[10];
	int offset = 0, bytes_read;

	if (argc != 2) {
		fprintf(stderr, "Usage: hexdump pun.c\n");
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("Offset              Bytes              Characters\n");
	printf("------  -----------------------------  ----------\n");

	while ((bytes_read = fread(b, sizeof(unsigned char), 10, fp)) > 0) {
		printf("%6d ", offset);

		for (int i = 0; i < 10; i++) {
			if (i >= bytes_read) {
				printf("   ");
			} else {
				printf("%-3.2X", b[i]);
			}
		}
		printf(" ");

		for (int i = 0; i < bytes_read; i++) {
			printf("%c", isprint(b[i]) ? b[i] : '.');
		}
		printf("\n");
		offset += 10;
	}

	fclose(fp);
	exit(EXIT_SUCCESS);
}
