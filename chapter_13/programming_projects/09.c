#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 1000

int compute_vowel_count(const char *sentence);

int main(void)
{
	char sentence[MAX_LEN];
	char c, *p = sentence;
	int vowel_count;

	printf("Enter a sentence: ");
	while ((c = getchar()) != '\n' && p < sentence + 80)
		*p++ = c;
	*p = '\0';

	vowel_count = compute_vowel_count(sentence);
	printf("Your sentence contains %d vowels\n", vowel_count);

	return 0;
}

int compute_vowel_count(const char *sentence)
{
	int sum = 0;

	while (*sentence) {
		switch (toupper(*sentence)) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			sum++;
			break;
		default:
			break;
		}
		sentence++;
	}

	return sum;
}
