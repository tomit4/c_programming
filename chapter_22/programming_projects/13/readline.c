#include "readline.h"
#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n, FILE *fp)
{
	int ch, i = 0;

	while (isspace(ch = getc(fp)))
		;

	while (ch != '\n' && ch != EOF) {
		if (i < n) {
			str[i++] = ch;
		}
		ch = getc(fp);
	}
	str[i] = '\0';
	return i;
}
