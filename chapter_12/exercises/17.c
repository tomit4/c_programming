#include <stdio.h>

#define N 5
#define LEN 3

int matrix[N][LEN] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
};

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void)
{
	int final_sum = sum_two_dimensional_array(matrix, N * LEN);

	printf("final_sum :=> %d\n", final_sum);

	return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
	int sum = 0;
	const int *p = *a;

	for (; p < *a + n * LEN;) {
		sum += *p++;
	}

	return sum;
}
