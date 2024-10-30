#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char ch;
	char first_initial = '\0';
	char last_name[20] = {0};
	int state = 0, i = 0;

	printf("Enter a first and last name: ");

	while ((ch = getchar()) != '\n') {
		if (ch != ' ') {
			if (state == 0 && ch == toupper(ch)) {
				first_initial = ch;
			}
			if (state == 1) {
				if (i < 20) {
					last_name[i++] = ch;
				}
			}
		} else if (first_initial != '\0') {
			state = 1;
		}
	}

	for (int j = 0; last_name[j] != '\0'; j++) {
		putchar(last_name[j]);
	}

	printf(", %c.\n", first_initial);

	return 0;
}
