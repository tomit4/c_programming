#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN 20
#define MAX_WORDS 100

int read_line(char str[], int n);
int compare_words(const void *a, const void *b);
void *my_malloc(size_t bytes);

int main(void)
{
	char **words = NULL, *word_str = NULL;
	int i, num_words = 0, size = 1;

	words = (char **)my_malloc((size_t)sizeof(char *));

	while (1) {
		word_str = (char *)my_malloc((size_t)WORD_LEN + 1);
		printf("Enter word: ");
		read_line(word_str, WORD_LEN + 1);
		if (word_str[strlen(word_str) - 1] == '\n') {
			word_str[strlen(word_str) - 1] = '\0';
		}

		if (word_str[0] == '\0') {
			break;
		}

		*(words + i) = word_str;
		num_words++;

		if (size == num_words) {
			if ((words = (char **)realloc(
				 words, (size_t)sizeof(char *) *
					    (size *= 2))) == NULL) {
				fprintf(stderr, "Error: realloc failed\n");
				exit(EXIT_FAILURE);
			}
		}
		i++;
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

void *my_malloc(size_t bytes)
{
	void *p;
	if ((p = malloc(bytes)) == NULL) {
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

int compare_words(const void *a, const void *b)
{
	const char *word_a = *(const char **)a;
	const char *word_b = *(const char **)b;
	return strcmp(word_a, word_b);
}
