#include <stdio.h>

int main(void)
{
	int d, n;
	int is_prime = 1;

	printf("Enter a number to check if it is a prime number: ");
	scanf("%d", &n);

	for (d = 2; d * d <= n; d++) {
		if (n % d == 0) {
			is_prime = 0;
			break;
		}
	}

	if (is_prime && n > 1) {
		printf("%d is prime\n", n);
	} else {
		printf("%d is divisible by %d\n", n, d);
	}

	return 0;
}
