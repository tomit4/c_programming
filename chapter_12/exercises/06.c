#include <stdio.h>

#define N 5

int sum_array(const int *a, int n);

int array[N] = {1, 2, 3, 4, 5};

int main(void)
{
	int sum = sum_array(array, N);

	printf("the sum is :=> %d\n", sum);

	return 0;
}

int sum_array(const int *a, int n)
{
	const int *i;
	int sum;

	sum = 0;
	for (i = a; i < a + n; i++) {
		sum += *i;
	}
	return sum;
}
