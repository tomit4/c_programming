#include <stdio.h>

#define ERROR(s, ...) (fprintf(stderr, (s), __VA_ARGS__))

int main(void)
{
	int index = 1;
	ERROR("Range error: index = %d\n", index);
	printf("hello world\n");
	return 0;
}
