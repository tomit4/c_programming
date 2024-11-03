#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
	    int *reduced_denominator);

int main(void)
{
	int numerator, denominator, reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator,
	       &reduced_denominator);

	printf("In lowest terms: %d/%d\n", reduced_numerator,
	       reduced_denominator);

	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator,
	    int *reduced_denominator)
{
	int original_numerator, original_denominator, remainder, gcd;

	original_numerator = numerator;
	original_denominator = denominator;

	while (numerator != 0) {
		remainder = denominator % numerator;
		denominator = numerator;
		numerator = remainder;
	}

	gcd = denominator;
	*reduced_numerator = original_numerator / gcd;
	*reduced_denominator = original_denominator / gcd;
}
