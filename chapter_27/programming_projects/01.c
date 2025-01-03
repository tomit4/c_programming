/* Finds the roots of the equation 5x**2 + 2x + 1 = 0 */

/* NOTE: Requires -lm flag when compiling */

#include <complex.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
	double a, b, c;
	double complex discriminant_sqrt;
	double complex root1;
	double complex root2;

	printf("For ax^2 + bx +c, enter a: ");
	scanf("%lf", &a);
	printf("Enter b: ");
	scanf("%lf", &b);
	printf("Enter c: ");
	scanf("%lf", &c);

	discriminant_sqrt = csqrt(b * b - 4 * a * c);
	root1 = (-b + discriminant_sqrt) / (2 * a);
	root2 = (-b - discriminant_sqrt) / (2 * a);

	if (cimag(root1) == 0) {
		printf("root1 = %g\n", creal(root1));
	} else {
		printf("root1 = %g %c %gi\n", creal(root1),
		       cimag(root1) < 0 ? '-' : '+', fabs(cimag(root1)));
	}
	if (cimag(root2) == 0) {
		printf("root2 = %g\n", creal(root2));
	} else {
		printf("root2 = %g %c %gi\n", creal(root2),
		       cimag(root2) < 0 ? '-' : '+', fabs(cimag(root2)));
	}

	return 0;
}
