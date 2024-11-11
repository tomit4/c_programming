#include <stdio.h>

#define NLEMS(a) (int)(sizeof(a) / sizeof(a[0]))

int main(void)
{
	int arr[5] = {0, 1, 2, 3, 4};

	printf("NLEMS(arr) :=> %d\n", NLEMS(arr));
	return 0;
}
