#include <stdio.h>

#define N 5

double array_a[N] = {2, 3, 4, 5, 6};
double array_b[N] = {7, 8, 9, 10, 11};

double inner_product(const double *a, const double *b, int n);

int main(void)
{
	double sum_of_products = inner_product(array_a, array_b, N);

	printf("sum_of_products :=> %lf\n", sum_of_products);

	return 0;
}

double inner_product(const double *a, const double *b, int n)
{
	double sum_of_products = 0;

	const double *p, *pb;

	for (p = &a[0], pb = &b[0]; p < &a[n] && pb < &b[n]; p++, pb++) {
		sum_of_products += (*p * *pb);
	}

	return sum_of_products;
}
