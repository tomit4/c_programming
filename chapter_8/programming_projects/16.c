#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char ch;
	int char_count[26] = {0};
	int is_anagram = 1;

	printf("Enter first word: ");
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			char_count[ch - 'a'] += 1;
		}
	}

	printf("Enter second word: ");
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			char_count[ch - 'a'] -= 1;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (char_count[i] != 0) {
			is_anagram = 0;
			break;
		}
	}

	if (is_anagram) {
		printf("The words are anagrams.");
	} else {
		printf("The words are not anagrams.");
	}

	printf("\n");

	return 0;
}
