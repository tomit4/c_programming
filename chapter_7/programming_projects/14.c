#include <math.h>
#include <stdio.h>

int main(void)
{
	double x, y = 1, old_y;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	do {
		old_y = y;
		y = (y + (x / y)) / 2;
	} while (fabs(y - old_y) >= 0.00001 * y);

	printf("Square root: %lf\n", fabs(y));

	return 0;
}
