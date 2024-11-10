#include <stdio.h>

#define MAX_LEN 1000

double compute_average_word_length(const char *sentence);

int main(void)
{

	char sentence[MAX_LEN];
	double average;

	printf("Enter a sentence: ");
	char c, *p = sentence;
	while ((c = getchar()) != '\n')
		*p++ = c;
	*p = '\0';

	average = compute_average_word_length(sentence);

	printf("average :=> %.1f\n", average);

	return 0;
}

double compute_average_word_length(const char *sentence)
{
	double length = 0.0;
	int words = 1;

	while (*sentence) {
		if (*sentence == ' ') {
			words++;
		} else {
			length++;
		}
		sentence++;
	}

	return length / words;
}
