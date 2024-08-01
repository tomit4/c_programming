#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	bool digit_repeated[10] = {false};
	bool found_repeated = false;
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			digit_repeated[digit] = true;
		}
		digit_seen[digit] = true;
		n /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (digit_repeated[i]) {
			found_repeated = true;
		}
	}

	if (found_repeated) {
		printf("Repeated digit(s): ");
		for (int i = 0; i < 10; i++) {
			if (digit_repeated[i]) {
				printf("%d ", i);
			}
		}
	} else {
		printf("No repeated digits");
	}

	printf("\n");
	return 0;
}
