#include <stdbool.h>
#include <stdio.h>

#define N 10

int array[N] = {10, 15, 17, 18, 14, 12, 5, 7, 9, 4};

bool search(const int a[], int n, int key);

int main(void)
{
	bool found = search(array, N, 18);

	printf("found :=> %d\n", found);

	return 0;
}

bool search(const int a[], int n, int key)
{
	const int *i;

	for (i = &a[0]; i < &a[n]; i++) {
		if (*i == key) {
			return true;
		}
	}

	return false;
}
