#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, seed;
	int n;
	int r;

	r = rand() % 4;

	if (r == 0) {
		n = 7;
	} else if (r == 1) {
		n = 11;
	} else if (r == 2) {
		n = 15;
	} else {
		n = 19;
	}

	printf("n is :=> %d\n", n);

	return 0;
}
