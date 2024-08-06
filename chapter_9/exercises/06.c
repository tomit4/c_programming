#include <stdio.h>

int digit(int n, int k)
{
	int num_of_digits = 0, remainder;

	do {
		num_of_digits++;
		remainder = n % 10;
		n = n / 10;
		k--;

	} while (k != 0);

	if (k > num_of_digits) {
		return 0;
	}

	return remainder;
}

int main(void)
{
	int input_num, input_place;

	printf("Enter two numbers (number and place): ");
	scanf("%d %d", &input_num, &input_place);

	printf("Number at place is: %d\n", digit(input_num, input_place));

	return 0;
}
