#include <stdio.h>

#define N 5

int array[N] = {1, 2, 3, 4, 5};

void store_zeros(int a[], int n);

int main(void)
{
	int i;

	store_zeros(array, N);

	for (i = 0; i < N; i++) {
		printf("array[i] :=> %d\n", array[i]);
	}

	return 0;
}

void store_zeros(int a[], int n)
{
	int *i;

	for (i = &a[0]; i < &a[n]; i++) {
		*i = 0;
	}
}
