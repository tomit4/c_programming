#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	bool user_is_done = false;
	int digit;
	long n, temp;

	while (user_is_done != true) {
		printf("Enter a number: ");
		scanf("%ld", &n);

		if (n <= 0) {
			user_is_done = true;
		} else {
			temp = n;
			for (int i = 0; i < 10; i++) {
				digit_seen[i] = false;
			}
			while (temp > 0) {
				digit = temp % 10;
				if (digit_seen[digit]) {
					break;
				}
				digit_seen[digit] = true;
				temp /= 10;
			}

			if (temp > 0) {
				printf("Repeated digit\n");
			} else {
				printf("No repeated digit\n");
			}
		}
	}

	return 0;
}
