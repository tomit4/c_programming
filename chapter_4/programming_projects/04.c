#include <stdio.h>

int main(void)
{
	int decimal_input, first_division, first_remainder, second_division,
	    second_remainder, third_division, third_remainder, fourth_division,
	    fourth_remainder, fifth_remainder;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &decimal_input);

	first_division = decimal_input / 8;
	first_remainder = decimal_input % 8;
	second_division = first_division / 8;
	second_remainder = first_division % 8;
	third_division = second_division / 8;
	third_remainder = second_division % 8;
	fourth_division = third_division / 8;
	fourth_remainder = third_division % 8;
	fifth_remainder = fourth_division % 8;

	printf("In octal, your number is: %01d%01d%01d%01d%01d\n",
	       fifth_remainder, fourth_remainder, third_remainder,
	       second_remainder, first_remainder);

	return 0;
}
