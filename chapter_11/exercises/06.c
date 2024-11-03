#include <stdio.h>

#define LENGTH 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int largest_ptr = 0, second_largest_ptr = 0;
	int *largest = &largest_ptr, *second_largest = &second_largest_ptr;
	int array[LENGTH] = {300, 50, 1, 17, 59};
	int n = LENGTH;

	find_two_largest(array, n, largest, second_largest);

	printf("largest :=> %d\n", *largest);
	printf("second_largest:=> %d\n", *second_largest);
	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	int i;
	*largest = a[0];
	*second_largest = a[1];

	for (i = 1; i < n; i++) {
		if (a[i] > *largest) {
			*second_largest = *largest;
			*largest = a[i];
		}
		if (a[i] > *second_largest && a[i] != *largest) {
			*second_largest = a[i];
		}
	}
}
