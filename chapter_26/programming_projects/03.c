#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int compare(const void *p, const void *q);

int main(void)
{
	int a[N], i;
	clock_t start_clock;
	start_clock = clock();

	for (i = N - 1; i >= 0; i--) {
		a[i] = N - 1;
	}
	qsort(a, N, sizeof(int), compare);

	printf("Time to sort %d ints: %g sec.\n", N,
	       (clock() - start_clock) / (double)CLOCKS_PER_SEC);

	return 0;
}

int compare(const void *p, const void *q) { return *(int *)p - *(int *)q; }
