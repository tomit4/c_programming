#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char ch;
	char first_initial = '\0';
	int state = 0;

	printf("Enter a first and last name: ");

	while ((ch = getchar()) != '\n') {
		if (ch != ' ') {
			if (state == 0 && ch == toupper(ch)) {
				first_initial = ch;
			}
			if (state == 1) {
				printf("%c", ch);
			}
		} else if (first_initial != '\0') {
			state = 1;
		}
	}

	printf(", %c.\n", first_initial);

	return 0;
}
