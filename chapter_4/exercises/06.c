#include <stdio.h>

/*
 * Meant to be compiled using C99:
 * ```sh
 * gcc -std=c99 -o ../../bin/chapter_4/exercises/06 06.c
 * ```
 */
int main(void)
{
	int a, b, c, d;

	a = 8 % 5;
	b = -8 % 5;
	c = 8 % -5;
	d = -8 % -5;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	printf("d: %d\n", d);

	return 0;
}
