#include <stdio.h>

int main(void)
{
	float amount;

	printf("Enter a dollar/cents amount (i.e. 100.00): ");
	scanf("%f", &amount);

	float with_tax_added = amount * 1.05;

	printf("With a 5%% tax added: %.2f\n", with_tax_added);

	return 0;
}
