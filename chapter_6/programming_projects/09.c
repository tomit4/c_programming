#include <stdio.h>

int main(void)
{
	int num_of_payments;
	float total_loan_amount, interest_rate, monthly_payment,
	    monthly_interest_rate, interest_for_month, balance_after_payment;

	printf("Enter number of payments: ");
	scanf("%d", &num_of_payments);
	printf("Enter the amount of loan: ");
	scanf("%f", &total_loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	for (int i = 1; i <= num_of_payments; i++) {
		monthly_interest_rate = (interest_rate / 100) / 12;
		interest_for_month = total_loan_amount * monthly_interest_rate;
		balance_after_payment =
		    (total_loan_amount + interest_for_month) - monthly_payment;
		if (balance_after_payment <= 0) {
			printf("Balance remaining after payment number %d: "
			       "$0.00\n",
			       i);
			break;
		}
		printf("Balance remaining after payment number %d: $%.2f\n", i,
		       balance_after_payment);
		total_loan_amount = balance_after_payment;
	}

	return 0;
}
