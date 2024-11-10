#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN 100

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
	char word1[MAX_LEN];
	char word2[MAX_LEN];
	bool is_anagram;

	printf("Enter first word: ");
	char c1, *p1 = word1;
	while ((c1 = getchar()) != '\n')
		*p1++ = c1;
	*p1 = '\0';

	printf("Enter second word: ");
	char c2, *p2 = word2;
	while ((c2 = getchar()) != '\n')
		*p2++ = c2;
	*p2 = '\0';

	is_anagram = are_anagrams(word1, word2);

	if (is_anagram) {
		printf("The words are anagrams.");
	} else {
		printf("The words are not anagrams.");
	}

	printf("\n");

	return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
	int char_count[26] = {0};
	char ch;
	bool is_anagram;

	while (*word1) {
		if (isalpha(*word1)) {
			ch = tolower(*word1);
			char_count[ch - 'a']++;
		}
		word1++;
	}

	while (*word2) {
		if (isalpha(*word2)) {
			ch = tolower(*word2);
			char_count[ch - 'a']--;
		}
		word2++;
	}

	for (int i = 0; i < 26; i++) {
		if (char_count[i] != 0) {
			is_anagram = 0;
			break;
		}
	}

	return is_anagram;
}
