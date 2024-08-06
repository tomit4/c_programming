#include <stdio.h>

int compute_polynomial(int x);

int main(void)
{
	int x, polynomial;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	polynomial = compute_polynomial(x);

	printf("The Computed Polynomial for %d is: %d\n", x, polynomial);

	return 0;
}

int compute_polynomial(int x)
{
	return 3 * (x * x * x * x * x) + 2 * (x * x * x * x) + 5 * (x * x * x) -
	       (x * x) + 7 * x - 6;
}
