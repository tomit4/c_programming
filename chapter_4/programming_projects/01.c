#include <stdio.h>

int main(void)
{

	int two_digit_num, tens_place, ones_place;

	printf("Enter a two-digit number: ");
	scanf("%d", &two_digit_num);
	tens_place = two_digit_num / 10;
	ones_place = two_digit_num % 10;

	printf("The reversal is: %d%d\n", ones_place, tens_place);

	return 0;
}
