#include <stdio.h>

int main(void)
{
	printf("%-8.1e\n", 1234.15);

	printf("%10.6e\n", 1234.15);

	printf("%-8.3d\n", 1234);

	printf("%6d\n", 1234);

	return 0;
}
