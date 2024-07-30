#include <stdio.h>

int main(void)
{

	int input_num, output_num;

	printf("Enter a number: ");
	scanf("%d", &input_num);

	printf("The reversal is: ");

	do {
		output_num = input_num % 10;
		input_num = input_num / 10;
		printf("%d", output_num);
	} while (input_num != 0);

	printf("\n");

	return 0;
}
