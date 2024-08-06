/* Computes pairwise averages of there numbers */

#include <stdio.h>

double average(double a, double b)
{
	double average = a + b;
	return average / 2;
}

int main(void)
{
	double x, y, z;

	printf("Enter three numbers: ");
	scanf("%lf%lf%lf", &x, &y, &z);

	printf("Average of %g and %g: %g\n", x, y, average(x, y));
	printf("Average of %g and %g: %g\n", y, z, average(y, z));
	printf("Average of %g and %g: %g\n", x, z, average(x, z));

	return 0;
}
