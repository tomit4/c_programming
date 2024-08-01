#include <stdio.h>

#define N 40

int main(void)
{
	int fib_numbers[N], i;
	fib_numbers[0] = 0;
	fib_numbers[1] = 1;
	for (i = 2; i < N; i++) {
		fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
	}
	printf("{");
	for (i = 0; i < N; i++) {
		printf("%d", fib_numbers[i]);
		if (i < N - 1) {
			printf(", ");
		}
	}
	printf("}");

	printf("\n");
	return 0;
}
