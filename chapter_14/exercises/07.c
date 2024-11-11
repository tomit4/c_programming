#include <stdio.h>

#define GENERIC_MAX(type)                                                      \
	type type##_max(type x, type y) { return x > y ? x : y; }

int main(void)
{
	printf("hello world\n");
	return 0;
}
