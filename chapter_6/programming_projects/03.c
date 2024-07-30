#include <stdio.h>

int main(void)
{
	int numerator, denominator, original_numerator, original_denominator,
	    remainder, gcd, numerator_in_lowest, denominator_in_lowest;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	original_numerator = numerator;
	original_denominator = denominator;

	while (numerator != 0) {
		remainder = denominator % numerator;
		denominator = numerator;
		numerator = remainder;
	}

	gcd = denominator;
	numerator_in_lowest = original_numerator / gcd;
	denominator_in_lowest = original_denominator / gcd;

	printf("In lowest terms: %d/%d\n", numerator_in_lowest,
	       denominator_in_lowest);

	return 0;
}
