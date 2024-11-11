#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define GT100(x, y) (((x) * (y))) < 100 ? 1 : 0

int main(void)
{
	int x = 2;
	int n = 5;
	int x2 = 5;
	int y2 = 6;
	int x3 = 101;
	int y3 = 1;

	printf("CUBE(x) :=> %d\n", CUBE(x));
	printf("REMAINDER(n) :=> %d\n", REMAINDER(n));
	printf("GT100(x2, y2) :=> %d\n", GT100(x2, y2));
	printf("GT100(x3, y3) :=> %d\n", GT100(x3, y3));

	return 0;
}
