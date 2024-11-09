#include <stdio.h>

int f(char *s, char *t);

int main(void)
{
	int F = 0;

	F = f("abcd", "babc");
	printf("f :=> %d\n", F);

	F = f("abcd", "bcd");
	printf("f :=> %d\n", F);

	return 0;
}

int f(char *s, char *t)
{
	char *p1, *p2;

	for (p1 = s; *p1; p1++) {
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2)
				break;
		if (*p2 == '\0')
			break;
	}
	return p1 - s;
}
