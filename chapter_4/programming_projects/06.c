#include <stdio.h>

int main(void)
{
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, first_addition,
	    second_addition, first_multiply, first_subraction, first_remainder,
	    check_digit;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5,
	      &d6, &d7, &d8, &d9, &d10, &d11, &d12);

	first_addition = d2 + d4 + d6 + d8 + d10 + d12;
	second_addition = d1 + d3 + d5 + d7 + d9 + d11;
	first_multiply = (first_addition * 3) + second_addition;
	first_subraction = first_multiply - 1;
	first_remainder = first_subraction % 10;
	check_digit = 9 - first_remainder;

	printf("Check digit: %d\n", check_digit);

	return 0;
}
