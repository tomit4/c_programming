#include <stdio.h>

int main(void)
{
	int input_hour, input_min, output_hour;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &input_hour, &input_min);

	if (input_hour == 0) {
		output_hour = 12;
	} else if (input_hour > 12) {
		output_hour = input_hour - 12;
	} else {
		output_hour = input_hour;
	}

	if (input_hour < 12) {
		printf("Equivalent 12-hour time: %d:%d AM\n", output_hour,
		       input_min);
	} else {
		printf("Equivalent 12-hour time: %d:%d PM\n", output_hour,
		       input_min);
	}

	return 0;
}
