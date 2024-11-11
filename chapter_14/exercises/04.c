#include <stdio.h>

#define AVG(x, y) (x + y) / 2
#define AREA(x, y) ((x) * (y))

int main(void)
{

	printf("AVG(2+2, 1+1) :=> %d\n", AVG(2 + 2, 1 + 1));
	/* printf("AVG(0, 14) :=> %d\n", AVG(0, 14)); */
	printf("25/AREA(5, 5) :=> %d\n", 25 / AREA(5, 5));
	return 0;
}
