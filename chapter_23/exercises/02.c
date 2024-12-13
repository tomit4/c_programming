#include <math.h>

double evaluate_polynomial(double a[], int n, double x)
{
	int i = n;
	double sum = fma(a[i], x, a[i - 1]);
	i--;

	while (i >= 0) {
		sum += fma(sum, x, a[i--]);
	}
	return sum;
}
