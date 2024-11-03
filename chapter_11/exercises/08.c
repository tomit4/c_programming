#include <stdio.h>

#define LENGTH 5

int *find_largest(int a[], int n);

int main(void)
{
	int a[LENGTH] = {5, 4, 3, 2, 1};
	int n = LENGTH;
	int *largest_element = find_largest(a, n);

	printf("largest_element :=> %d\n", *largest_element);

	return 0;
}

int *find_largest(int a[], int n)
{
	int i, *largest_elem = &a[0];

	for (i = 1; i < n; i++) {
		if (a[i] > *largest_elem) {
			*largest_elem = a[i];
		}
	}

	return largest_elem;
}
