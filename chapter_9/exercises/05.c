#include <stdio.h>

int num_digits(int n)
{
	int num_of_digits = 0;

	do {
		num_of_digits++;
		n = n / 10;

	} while (n % 10 != 0);

	return num_of_digits;
}

int main(void)
{
	int input_num;

	printf("Enter a number: ");
	scanf("%d", &input_num);

	printf("Number of Digits: %d\n", num_digits(input_num));

	return 0;
}
