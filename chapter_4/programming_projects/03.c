#include <stdio.h>

int main(void)
{

	int hundreds_place, tens_place, ones_place;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &hundreds_place);
	printf("Enter the second (single) digit: ");
	scanf("%1d", &tens_place);
	printf("Enter the third (single) digit: ");
	scanf("%1d", &ones_place);

	printf("The reversal is: %d%d%d\n", ones_place, tens_place,
	       hundreds_place);

	return 0;
}
