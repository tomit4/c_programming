#include <stdio.h>

int main(void)
{
	int input, digits;

	printf("Enter a number: ");
	scanf("%d", &input);

	if (input <= 0) {
		digits = 0;
	} else if (input < 10) {
		digits = 1;
	} else if (input < 100) {
		digits = 2;
	} else if (input < 1000) {
		digits = 3;
	} else if (input < 10000) {
		digits = 4;
	} else {
		digits = 0;
	}

	if (digits <= 0) {
		printf("The number %d is either negative or has more than 4 "
		       "digits\n",
		       input);
	} else {
		printf("The number %d has %d digits\n", input, digits);
	}

	return 0;
}
