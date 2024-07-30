#include <stdio.h>

int main(void)
{
	int n, odd = 3;

	printf("This program prints a table of squares.\n");
	printf("Enter a number of entries in table: ");
	scanf("%d", &n);

	for (int i = 1, square = 1; i <= n; ++i, odd += 2) {
		printf("%10d%10d\n", i, square);
		square += odd;
	}

	return 0;
}
