/* Stolen from:
 * https://github.com/williamgherman/c-solutions/blob/master/11/projects/01/1.c
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int dollars = 0, twenties, tens, fives, ones;
	printf("Please enter a amount to be divided into U.S. dollar bills: ");
	scanf("%d", &dollars);

	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d\n", ones);

	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;
	dollars -= *twenties * 20;
	*tens = dollars / 10;
	dollars -= *tens * 10;
	*fives = dollars / 5;
	dollars = *fives * 5;
	*ones = dollars;
}
