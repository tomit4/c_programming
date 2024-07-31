#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char arithmetic_sign;

	printf("Enter two fractions separated by an arithmetic sign (i.e. +, "
	       "-, *, or /): ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &arithmetic_sign, &num2,
	      &denom2);

	if (denom1 == 0 || denom2 == 0) {
		printf("Error: Denominator cannot be zero.\n");
		return 1;
	}

	if (arithmetic_sign == '+') {
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
	} else if (arithmetic_sign == '-') {
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
	} else if (arithmetic_sign == '*') {
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
	} else if (arithmetic_sign == '/') {
		if (num2 == 0) {
			printf("Error: Division by zero.\n");
			return 1;
		}
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
	} else {
		printf("Error: Unsupported operation\n");
		return 1;
	}

	printf("The result is %d/%d\n", result_num, result_denom);

	return 0;
}
