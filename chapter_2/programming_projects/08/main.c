#include <stdio.h>

int main(void)
{
	float total_loan_amount;
	printf("Enter the amount of loan: ");
	scanf("%f", &total_loan_amount);

	float interest_rate;
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);

	float monthly_payment;
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	float monthly_interest_rate = (interest_rate / 100) / 12;

	float interest_for_first_month =
	    total_loan_amount * monthly_interest_rate;
	float balance_after_first_payment =
	    (total_loan_amount + interest_for_first_month) - monthly_payment;

	float interest_for_second_month =
	    balance_after_first_payment * monthly_interest_rate;
	float balance_after_second_payment =
	    (balance_after_first_payment + interest_for_second_month) -
	    monthly_payment;

	float interest_for_third_month =
	    balance_after_second_payment * monthly_interest_rate;
	float balance_after_third_payment =
	    (balance_after_second_payment + interest_for_third_month) -
	    monthly_payment;

	printf("Balance remaining after first payment: $%.2f\n",
	       balance_after_first_payment);
	printf("Balance remaining after second payment: $%.2f\n",
	       balance_after_second_payment);
	printf("Balance remaining after third payment: $%.2f\n",
	       balance_after_third_payment);

	return 0;
}
