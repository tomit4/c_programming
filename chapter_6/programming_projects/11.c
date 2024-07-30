#include <stdio.h>

int main(void)
{
	int n, i;
	float factorial = 1.0f, e = 1.0f;

	printf("Enter an integer: ");
	scanf("%d", &n);

	for (i = 1; i <= n; ++i) {
		factorial *= i;
		e += 1.0f / factorial;
	}

	printf("constant e for %d is: %f\n", n, e);

	return 0;
}
