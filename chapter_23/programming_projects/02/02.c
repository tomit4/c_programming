#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool ready_to_copy = false;
	char c;

	while ((c = getchar()) != EOF) {
		if (ready_to_copy) {
			putchar(c);
		} else if (!isspace(c)) {
			ready_to_copy = true;
			putchar(c);
		}
		if (c == '\n') {
			ready_to_copy = false;
		}
	}

	return 0;
}
