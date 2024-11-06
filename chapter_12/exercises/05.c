#include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p;
	p = a;

	/* if (p == a[0]) { */
	/* printf("p == a[0] is true"); */
	/* } */
	if (p == &a[0]) {
		printf("p == &a[0] is true\n");
	}
	if (*p == a[0]) {
		printf("*p == a[0] is true\n");
	}
	if (p[0] == a[0]) {
		printf("p[0] == a[0] is true\n");
	}

	return 0;
}
