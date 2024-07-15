#include <stdio.h>

int main(void)
{
	int i;
	float x, y;

	printf("Enter 12.3 45.6 789: ");
	scanf("%f%d%f", &x, &i, &y);

	printf("x is: %f\n", x);
	printf("i is: %d\n", i);
	printf("y is: %f\n", y);

	return 0;
}
