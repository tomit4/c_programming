#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N = 2; // limiting range number of rand (0 to 1)

	for (int i = 0; i < 1000; i++) {
		// less accurate, part (a) answer
		printf("%d", rand() & 1);
		printf("%d\n", rand() / (RAND_MAX / N + 1));
	}
	return 0;
}
