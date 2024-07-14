/* Write a program that declares several `int` and `float` variables--without
 * initializing them--and then prints their values. Is there any pattern to the
 * values (Usually there isn't) */

#include <stdio.h>

int main(void)
{
	int integer_1, integer_2, integer_3;
	float float_1, float_2, float_3;

	printf("integer_1: %d\n", integer_1);
	printf("integer_2: %d\n", integer_2);
	printf("integer_3: %d\n", integer_3);
	printf("float_1: %f\n", float_1);
	printf("float_2: %f\n", float_2);
	printf("float_3: %f\n", float_3);

	return 0;
}

/*A: No, because these values are uninitialized, they are assigned seemingly at
 * random*/
