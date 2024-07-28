#include <stdio.h>

int main(void)
{
	int i, j, n = 10;

	for (i = 0; i < n; i++) {
		if (i == 5) {
			continue;
		}
		printf("i is not 5: %d\n", i);
	}
	printf("out of first for loop scope\n");

	for (j = 0; j < n; j++) {
		if (j != 5) {
			printf("j is not 5: %d\n", j);
		} else {
			goto done;
		}
	done:;
	}
	printf("out of second for loop scope\n");

	return 0;
}
