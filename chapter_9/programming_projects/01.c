#include <stdio.h>

#define N 10

void selection_sort(int a[], int low, int high);

int main(void)
{
	int a[N], i;

	printf("Enter %d numbers to be sorted: ", N);

	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	selection_sort(a, 0, N - 1);

	printf("Sorted array: ");
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

void selection_sort(int a[], int low, int high)
{
	int i, largest_index, temp;

	if (low < high) {
		largest_index = low;
		for (i = low + 1; i <= high; i++) {
			if (a[i] > a[largest_index]) {
				largest_index = i;
			}
		}

		if (largest_index != high) {
			temp = a[high];
			a[high] = a[largest_index];
			a[largest_index] = temp;
		}

		selection_sort(a, low, high - 1);
	}
}
