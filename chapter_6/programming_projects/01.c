#include <stdio.h>

int main(void)
{
	float input, largest_input;
	printf("Enter a number: ");
	scanf("%f", &input);

	while (input > 0) {
		printf("Enter a number: ");
		scanf("%f", &input);
		if (largest_input < input) {
			largest_input = input;
		}
	}

	printf("The largest number entered was %f\n", largest_input);

	return 0;
}
