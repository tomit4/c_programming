#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int num_chars = 0;

	if (argc != 2) {
		fprintf(stderr, "Usage: count_chars test_text.txt\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("%s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fp)) != EOF) {
		num_chars++;
	}
	fclose(fp);

	// Check against wc test_text.txt to confirm
	printf("Number of characters in %s is: %d\n", argv[1], num_chars);

	exit(EXIT_SUCCESS);
}
