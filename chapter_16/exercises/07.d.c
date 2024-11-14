#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};

struct fraction reduce_fraction(struct fraction f);
struct fraction mult_fractions(struct fraction f1, struct fraction f2);

int main(void)
{
	struct fraction f1, f2, mult_frac;

	printf("Enter a fraction (i.e. 100/200): ");
	scanf("%3d/%3d", &f1.numerator, &f1.denominator);
	printf("Enter a second fraction (i.e. 100/200): ");
	scanf("%3d/%3d", &f2.numerator, &f2.denominator);

	mult_frac = mult_fractions(f1, f2);

	printf("mult_frac :=> %d/%d\n", mult_frac.numerator,
	       mult_frac.denominator);

	return 0;
}

struct fraction mult_fractions(struct fraction f1, struct fraction f2)
{
	return reduce_fraction((struct fraction){
	    f1.numerator * f2.numerator, f1.denominator * f2.denominator});
}

struct fraction reduce_fraction(struct fraction f)
{
	int temp;
	int n = f.numerator, d = f.denominator;

	while (n % d != 0) {
		temp = d;
		d = n % d;
		n = temp;
	}
	f.numerator /= d;
	f.denominator /= d;
	return f;
}
