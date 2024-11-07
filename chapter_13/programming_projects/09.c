#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int sum_of_vowels = 0;
	char ch;
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n') {
		ch = tolower(ch);
		switch (ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			sum_of_vowels += 1;
			break;
		default:
			break;
		}
	}

	printf("Your sentence contains %d vowels.\n", sum_of_vowels);

	return 0;
}
