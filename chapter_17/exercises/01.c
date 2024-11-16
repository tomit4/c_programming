#include <stdio.h>
#include <stdlib.h>

#define N 8

void *my_malloc(int n);

int main(void)
{
	void *p = my_malloc(N);

	printf("p allocated with my_malloc, lives at address: %p\n", p);

	return 0;
}

void *my_malloc(int n)
{
	void *p = malloc(sizeof(n));

	if (p == NULL) {
		printf("Not enough memory to allocate p\n");
		exit(EXIT_FAILURE);
	}

	return p;
}
