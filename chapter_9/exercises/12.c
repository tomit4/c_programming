double inner_product(double a[], double b[], int n)
{
	int i;
	double product = 0;

	for (i = 0; i < n; i++) {
		product += (a[i] * b[i]);
	}

	return product;
}
