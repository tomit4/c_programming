#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i >= 1; i /= 2) {
		printf("%d ", i++);
	}
	printf("\n");

	return 0;
}
