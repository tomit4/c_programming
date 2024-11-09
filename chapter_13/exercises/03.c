#include <stdio.h>

#define MAX 100

int main(void)
{

	int i, j;
	char s[MAX] = {};
	printf("Enter 12abc34 56def78: ");
	scanf("%d%s%d", &i, s, &j);

	printf("i :=> %d\n", i);
	printf("j :=> %d\n", j);
	printf("s :=> %s\n", s);

	return 0;
}
