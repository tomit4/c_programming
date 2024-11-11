#include <stdio.h>
#include <string.h>

#define MAX 100
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(void)
{
	char s[MAX];
	int i;

	strcpy(s, "abcd");
	i = 0;
	putchar(TOUPPER(s[++i]));
	/*
    putchar(('a' <= (s[++i]) && (s[++i]) <= 'z' ? (s[++i]) - 'a' + 'A':
    (s[++i])));
    putchar(('a' <= (s[1]) && (s[2]) <= 'z' ? (s[++i]) - 'a' + 'A'
    :(s[3])));
    putchar('D');
	*/

	strcpy(s, "0123");
	i = 0;
	putchar(TOUPPER(s[++i]));
	/*
	putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])));
	putchar(('a'<=(s[1])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[2])));
	putchar('3');
	*/

	return 0;
}
