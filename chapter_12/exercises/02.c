#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *middle;
	int *low = &arr[0];
	int *high = &arr[4];

	middle = (high - low) / 2 + low;

	printf("hello world!\n");
	return 0;
}
