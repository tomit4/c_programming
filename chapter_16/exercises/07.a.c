#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
};

/* int get_gcd(int num1, int num2); */
struct fraction reduce_fraction(struct fraction f);

int main(void)
{
	struct fraction initial_f, reduced_f;
	printf("Enter a fraction (i.e. 100/200): ");
	scanf("%3d/%3d", &initial_f.numerator, &initial_f.denominator);

	reduced_f = reduce_fraction(initial_f);

	printf("reduced_f :=> %d/%d\n", reduced_f.numerator,
	       reduced_f.denominator);

	return 0;
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

/*
 *
int get_gcd(int num1, int num2)
{
	int i, gcd;

	for (i = 1; i <= num1 && i <= num2; ++i) {
		// Checks if i is factor of both integers
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}

	return gcd;
}

struct fraction reduce_to_lowest_terms(struct fraction f)
{
	struct fraction reduced_frac;

	int gcd = get_gcd(f.numerator, f.denominator);

	reduced_frac.numerator = f.numerator / gcd;
	reduced_frac.denominator = f.denominator / gcd;

	return reduced_frac;
}
*/
