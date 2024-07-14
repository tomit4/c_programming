#include <stdio.h>

int main(void)
{
	int total;
	printf("Please enter a amount to be divided into U.S. dollar bills: ");
	scanf("%d", &total);

	int twenty_bills = total / 20;
	int remainder_after_twenty = total - (twenty_bills * 20);
	int ten_bills = remainder_after_twenty / 10;
	int remainder_after_ten =
	    total - (twenty_bills * 20) - (ten_bills * 10);
	int five_bills = remainder_after_ten / 5;
	int one_bills =
	    total - (twenty_bills * 20) - (ten_bills * 10) - (five_bills * 5);

	printf("$20 bills: %d\n", twenty_bills);
	printf("$10 bills: %d\n", ten_bills);
	printf("$5 bills: %d\n", five_bills);
	printf("$1 bills: %d\n", one_bills);

	return 0;
}
