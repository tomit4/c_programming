#include <stdio.h>

int main(void)
{
	int i, j;

	i = 5;
	j = ++i * 3 - 2;
	printf("a: %d %d\n", i, j);

	i = 5;
	j = 3 - 2 * i++;
	printf("b: %d %d\n", i, j);

	i = 7;
	j = 3 * i-- + 2;
	printf("c: %d %d\n", i, j);

	i = 7;
	j = 3 + --i * 2;
	printf("d: %d %d\n", i, j);

	return 0;
}
