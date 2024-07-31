#include <stdio.h>

int main(void)
{
	int n, b, factorial = 1;
	short a;
	long c;
	long long d;
	float e;
	double f;
	long double g;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}
	a = (short)factorial;
	b = (int)factorial;
	c = (long)factorial;
	d = (long long)factorial;
	e = (float)factorial;
	f = (double)factorial;
	g = (long double)factorial;

	printf("The Factorial for a is :=> %hd\n", a);
	printf("The Factorial for b is :=> %d\n", b);
	printf("The Factorial for c is :=> %ld\n", c);
	printf("The Factorial for d is :=> %lld\n", d);
	printf("The Factorial for e is :=> %f\n", e);
	printf("The Factorial for f is :=> %lf\n", f);
	printf("The Factorial for g is :=> %Lf\n", g);

	return 0;
}
