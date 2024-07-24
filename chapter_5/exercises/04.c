#include <stdio.h>

int main(void)
{
	int i, j, answer;

	printf("Enter a whole number value for i: ");
	scanf("%d", &i);

	printf("Enter a whole number value for j: ");
	scanf("%d", &j);

	if (i < j) {
		answer = -1;
	} else if (i == j) {
		answer = 0;
	} else if (i > j) {
		answer = 1;
	}

	printf("Your answer is: %d\n", answer);

	return 0;
}
