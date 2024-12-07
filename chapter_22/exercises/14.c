#include <stdio.h>

char *my_fgets(char *restrict s, int n, FILE *restrict stream);
int my_fputs(const char *restrict s, FILE *restrict stream);

// (a)
int main(void)
{
	printf("hello world!\n");
	return 0;
}
char *my_fgets(char *restrict s, int n, FILE *restrict stream)
{
	int c, len = 0;
	while (len < n - 1) {
		if ((c = getc(stream)) == EOF) {
			if (len == 0 || ferror(stream)) {
				return NULL;
			}
			break;
		}
		s[len++] = c;
		if (c == '\n') {
			break;
		}
	}
	s[len] = '\0';
	return s;
}

// (b)
int my_fputs(const char *restrict s, FILE *restrict stream)
{
	while (*s != '\0') {
		if (putc(*s, stream) == EOF) {
			return EOF;
		}
		s++;
	}
	return 0;
}
