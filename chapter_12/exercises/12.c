#include <stdio.h>

#define N 5

int array[N] = {300, 50, 1, 17, 59};

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
	int largest = 0, second_largest = 0;

	find_two_largest(array, N, &largest, &second_largest);

	printf("largest :=> %d\n", largest);
	printf("second_largest:=> %d\n", second_largest);

	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	const int *p = a;
	*largest = *p++;
	*second_largest = *p;

	for (; p++ < a + n; p++) {
		if (*p > *largest) {
			*second_largest = *largest;
			*largest = *p;
		}
		if (*p > *second_largest && *p != *largest) {
			*second_largest = *p;
		}
	}
}
