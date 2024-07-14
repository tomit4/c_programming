#include <stdio.h>

int main(void)
{
	int x;
	printf("Please enter a value for x: ");
	scanf("%d", &x);

	int z = (3 * x) + 2;
	int y = (z * x) - 5;
	int w = (y * x) - 1;
	int u = (w * x) + 7;
	int answer = (u * x) - 6;
	printf("The polynomial answer for x is: %d\n", answer);

	return 0;
}
