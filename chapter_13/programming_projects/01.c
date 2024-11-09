#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

char smallest_word[MAX_LEN];
char largest_word[MAX_LEN];
char word[MAX_LEN];

void get_word(void);
void get_first_word(void);
void get_next_word(void);

int main(void)
{

	get_word();
	get_first_word();
	while (strlen(word) != 4) {
		get_word();
		get_next_word();
	}

	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);

	return 0;
}

void get_word(void)
{
	printf("Enter word: ");
	scanf("%s", word);
}

void get_first_word(void)
{
	strcpy(smallest_word, word);
	strcpy(largest_word, word);
}

void get_next_word(void)
{
	if (strcmp(word, smallest_word) < 0) {
		strcpy(smallest_word, word);
	} else if (strcmp(word, largest_word) > 0) {
		strcpy(largest_word, word);
	}
}
