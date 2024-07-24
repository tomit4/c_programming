#include <stdio.h>

int main(void)
{
	int taxable_income;
	float tax_due;

	printf("Enter your taxable income (i.e. 2500): $");
	scanf("%d", &taxable_income);

	if (taxable_income < 750) {
		tax_due = .01f * taxable_income;
	} else if (taxable_income <= 2250) {
		tax_due = 7.50f + (.02f * (taxable_income - 750));
	} else if (taxable_income <= 3750) {
		tax_due = 37.50f + (.03f * (taxable_income - 2250));
	} else if (taxable_income <= 5250) {
		tax_due = 82.50f + (.04f * (taxable_income - 3750));
	} else if (taxable_income <= 7000) {
		tax_due = 142.50f + (.05f * (taxable_income - 5250));
	} else if (taxable_income > 7000) {
		tax_due = 230.00f + (0.6f * (taxable_income - 7000));
	}

	printf("Your tax due is: $%.2f\n", tax_due);
	return 0;
}
