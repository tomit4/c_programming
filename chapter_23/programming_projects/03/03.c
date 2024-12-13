#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool in_word = false;
	char c;

	while ((c = getchar()) != EOF) {
		if (isalpha(c) && !in_word) {
			putchar(toupper(c));
			in_word = true;
		} else if (isspace(c)) {
			in_word = false;
			putchar(c);
		} else {
			putchar(c);
		}
	}

	return 0;
}
