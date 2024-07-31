/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
	long int i;
	long int n;

	printf("This program prints a table of squares.\n");
	printf("Enter a number of entries in table: ");
	scanf("%ld", &n);

	for (i = 1; i <= n; i++) {
		printf("%10ld%10ld\n", i, i * i);
	}

	return 0;
}
