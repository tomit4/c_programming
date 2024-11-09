#include <ctype.h>
#include <stdio.h>

#define MAXLEN 100

void capitalize(char word[]);

int main(void)
{
	char word[MAXLEN];

	int ch, i = 0;
	printf("Enter a single world: ");

	while ((ch = getchar()) != '\n') {
		if (i < MAXLEN) {
			word[i++] = ch;
		}
	}
	word[i] = '\0';
	capitalize(word);

	printf("word :=> %s\n", word);
	return 0;
}

void capitalize(char word[])
{
	char *p;

	for (p = word; *p != '\0'; p++) {
		if (isalpha(*p)) {
			*p = toupper(*p);
		}
	}
}
