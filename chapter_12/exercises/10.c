#include <stdio.h>

#define N 5

int array[N] = {7, 9, 4, 3, 2};

int *find_middle(int a[], int n);

int main(void)
{
	int *mid = find_middle(array, N);

	printf("*mid :=> %d\n", *mid);

	return 0;
}

/* NOTE: This works becase variable `a` is a pointer (to the first element of
 * the array). Since array elements are stored in contiguous memory, by
 * incrementing the memory address by the amount `n`, we would find the last
 * element of the array: (a + n) == a[n]. Then, by simply dividing by two, we
 * actually divide the memory address in half and actually find the middle
 * memory address of the array `a`.
 * */
int *find_middle(int a[], int n) { return a + n / 2; }
