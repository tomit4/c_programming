#include <math.h>
#include <stdio.h>

int main(void)
{
	double deposit, savings;
	int number_of_years;
	double interest_rate;

	printf("Enter your original deposit: ");
	scanf("%lf", &deposit);
	printf("Enter your interest rate: ");
	scanf("%lf", &interest_rate);
	printf("Enter number of years vested: ");
	scanf("%d", &number_of_years);

	interest_rate /= 100.0;
	savings = deposit * exp(interest_rate * number_of_years);

	printf("Total compounded: $%.2lf\n", savings);

	return 0;
}
