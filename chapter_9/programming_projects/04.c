#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);

int main(void)
{
	char ch;
	int counts1[26] = {0};
	int counts2[26] = {0};
	bool is_anagram = true;

	printf("Enter first word: ");
	read_word(counts1);

	printf("Enter second word: ");
	read_word(counts2);

	is_anagram = equal_array(counts1, counts2);

	if (is_anagram) {
		printf("The words are anagrams.");
	} else {
		printf("The words are not anagrams.");
	}

	printf("\n");

	return 0;
}
void read_word(int counts[26])
{
	char ch;
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			counts[ch - 'a'] += 1;
		}
	}
}

bool equal_array(int counts[26], int counts2[26])
{
	char ch;
	for (int i = 0; i < 26; i++) {
		if (counts[i] != counts2[i]) {
			return false;
		}
	}
	return true;
}
