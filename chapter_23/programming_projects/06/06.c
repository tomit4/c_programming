#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	char c;

	while ((c = getchar()) != EOF) {
		if (iscntrl(c) && c != '\n') {
			putchar('?');
		} else {
			putchar(c);
		}
	}

	return 0;
}
