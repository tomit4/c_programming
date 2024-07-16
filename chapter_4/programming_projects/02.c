#include <stdio.h>

int main(void)
{

	int three_digit_num, hundreds_place, tens_place, ones_place;

	printf("Enter a three-digit number: ");
	scanf("%d", &three_digit_num);
	hundreds_place = three_digit_num / 100;
	tens_place = three_digit_num % 100 / 10;
	ones_place = three_digit_num % 100 % 10;

	printf("The reversal is: %d%d%d\n", ones_place, tens_place,
	       hundreds_place);

	return 0;
}
