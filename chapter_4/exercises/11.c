#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 1;
	printf("a: %d \n", i++ - 1);
	printf("a: %d\n", i);

	i = 10;
	j = 5;
	printf("b: %d \n", i++ - ++j);
	printf("b: %d %d\n", i, j);

	i = 7;
	j = 8;
	printf("c: %d \n", i++ - --j);
	printf("c: %d %d\n", i, j);

	i = 3;
	j = 4;
	k = 5;
	printf("d: %d \n", i++ - j++ + --k);
	printf("d: %d %d %d\n", i, j, k);

	return 0;
}
