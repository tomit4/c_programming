#include <stdio.h>

unsigned int f(unsigned int i, int m, int n);

int main(void)
{
	unsigned int i = 9;
	int m = 6;
	int n = 7;

	printf("result :=> %u\n", f(i, m, n)); // 5
	return 0;
}

unsigned int f(unsigned int i, int m, int n)
{
	return (i >> (m + 1 - n)) & ~(~0 << n);
}
