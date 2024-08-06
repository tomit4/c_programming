#include <stdio.h>

int power(int x, int n);

int main(void)
{
	int x, n;

	printf("Enter values for x and n: (x n)");
	scanf("%d %d", &x, &n);

	power(x, n);

	printf("The power of %d and %d is: %d", x, n, power(x, n));

	return 0;
}

int power(int x, int n)
{
	if (n == 0) {
		return 1;
	} else if (n % 2 == 0) {
		// Note that we only want to call power once, so we can't
		// simply: return power(x, n / 2) * power(x, n / 2) as each call
		// changes n
		int half_power = power(x, n / 2);
		return half_power * half_power;
	} else {
		return x * power(x, n - 1);
	}
}
