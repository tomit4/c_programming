#include <stdio.h>

int main(void)
{
	int x;
	printf("Please enter a value for x: ");
	scanf("%d", &x);

	int x_to_the_fifth = (x * x * x * x * x);
	int x_to_the_fourth = (x * x * x * x);
	int x_cubed = (x * x * x);
	int x_squared = (x * x);

	int answer = (3 * x_to_the_fifth) + (2 * x_to_the_fourth) -
		     (5 * x_cubed) - x_squared + (7 * x) - 6;

	printf("The polynomial answer for x is: %d\n", answer);

	return 0;
}
