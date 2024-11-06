#include <stdio.h>

#define LENGTH 5

int find_largest(int a[], int n);

int main(void)
{
	int a[LENGTH] = {5, 4, 3, 2, 1};
	int n = LENGTH;
	int largest_element = find_largest(a, n);

	printf("largest_element :=> %d\n", largest_element);

	return 0;
}

int find_largest(int a[], int n)
{
	int *p = a;
	int largest_elem = *p++;

	for (; p++ < a + n; p++) {
		if (*p > largest_elem) {
			largest_elem = *p;
		}
	}

	return largest_elem;
}
