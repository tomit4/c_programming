#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN 20
#define MAX_WORDS 100

int read_line(char str[], int n);
int compare_words(const void *a, const void *b);

int main(void)
{
	char *words[MAX_WORDS];
	char word_str[WORD_LEN + 2];
	int num_words = 0;

	while (1) {
		printf("Enter word: ");
		read_line(word_str, WORD_LEN + 1);

		if (word_str[0] == '\0') {
			break;
		}

		if (num_words >= MAX_WORDS) {
			fprintf(stderr,
				"Error: Maximum number of words exceeded.\n");
			exit(EXIT_FAILURE);
		}

		words[num_words] = malloc(strlen(word_str) + 1);
		if (words[num_words] == NULL) {
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		strcpy(words[num_words], word_str);
		num_words++;
	}

	qsort(words, num_words, sizeof(char *), compare_words);

	printf("\nIn sorted order: ");
	for (int i = 0; i < num_words; i++) {
		printf("%s ", words[i]);
		free(words[i]);
	}
	putchar('\n');

	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < n) {
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}

int compare_words(const void *a, const void *b)
{
	const char *word_a = *(const char **)a;
	const char *word_b = *(const char **)b;
	return strcmp(word_a, word_b);
}
