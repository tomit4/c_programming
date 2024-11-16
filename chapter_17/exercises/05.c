#include <stdio.h>

int main(void)
{
	struct {
		union {
			char a, b;
			int c;
		} d;
		int e[5];
	} f, *p = &f;

	/* p-> = ' '; */
	/* p->e[3] = 10; */
	/* (*p).d.a = '*'; */
	/* p->d->c = 20; */
	printf("hello world\n");
	return 0;
}
