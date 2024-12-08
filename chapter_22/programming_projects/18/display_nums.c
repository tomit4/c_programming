#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 10000

int comp(const void *a, const void *b);

int main(int argc, char *argv[])
{
	FILE *fp;
	int buffer[BUFSIZE], i = 0, largest, smallest, median;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fscanf(fp, " %d", &buffer[i]) == 1) {
		i++;
	}
	i--;

	qsort(buffer, i, sizeof(buffer[0]), comp);

	largest = buffer[i - 1];
	smallest = buffer[0];

	if (i % 2 == 0) {
		median = (buffer[(i - 1) / 2] + buffer[(i - 1) / 2 + 1]) / 2;
	} else {
		median = buffer[(i - 1) / 2];
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	printf("Median: %d\n", median);
	fclose(fp);
	exit(EXIT_SUCCESS);
}

int comp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
