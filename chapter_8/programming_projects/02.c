#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	int occurrences[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		occurrences[digit] += 1;
		n /= 10;
	}

	printf("Digit:        ");
	for (int i = 0; i < 10; i++) {
		printf("%2d ", i);
	}
	printf("\n");
	printf("Occurrences:  ");
	for (int i = 0; i < 10; i++) {
		printf("%2d ", occurrences[i]);
	}
	printf("\n");

	return 0;
}
