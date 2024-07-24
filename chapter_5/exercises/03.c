#include <stdio.h>

int main(void)
{
	int i, j, k;
	i = 3;
	j = 4;
	k = 5;
	printf("a: %d \n", i < j || ++j < k); // guess 1
	printf("a: %d %d %d\n", i, j, k);     // guess: 3, 5, 5

	i = 7;
	j = 8;
	k = 9;
	printf("b: %d \n", i - 7 && j++ < k); // guess: 0
	printf("b: %d %d %d\n", i, j, k);     // guess: 7, 9, 9

	i = 7;
	j = 8;
	k = 9;
	printf("c: %d \n", (i = j) || (j = k)); // guess: 0
	printf("c: %d %d %d\n", i, j, k);	// guess: 8, 9, 9

	i = 1;
	j = 1;
	k = 1;
	printf("d: %d \n", ++i || ++j && ++k); // guess: 0
	printf("d: %d %d %d\n", i, j, k);      // guess: 2, 2, 2

	return 0;
}
