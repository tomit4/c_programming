#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	printf("Enter 10.3 5 6: ");
	scanf("%d%f%d", &i, &x, &j);

	printf("i is: %d\n", i);
	printf("x is: %f\n", x);
	printf("j is: %d\n", j);

	return 0;
}
