#include <stdio.h>

#define M(x, y) ((x) ^= (y), (y) ^= (x), (x) ^= (y))

int main(void)
{
	unsigned short i = 1;
	unsigned short j = 2;
	M(i, j);
	printf("i :=> %hu\n", i);
	printf("j :=> %hu\n", j);
	return 0;
}
