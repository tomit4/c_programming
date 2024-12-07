#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char *filename = argv[1];
	long n;

	if (argc != 2) {
		fprintf(stderr, "usage: 15 filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(filename, "r")) == NULL) {
		return 0;
	}

	fseek(fp, 64L * n, SEEK_SET);
	fseek(fp, -64L, SEEK_END);
	fseek(fp, 64L, SEEK_CUR);
	fseek(fp, -128L, SEEK_CUR);

	fclose(fp);
	printf("hello world\n");
	return 0;
}
