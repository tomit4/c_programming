#include <stdio.h>

struct x {
	int a;
};

int main(void)
{
	struct x x_instance;
	struct x *p;
	p = &x_instance;
	p->a = 3;
	printf("x_instance.a :=> %d\n", x_instance.a);
	/* x_instance.a = 1; */
	/* (&x_instance)->a = 2; */
	/* printf("x_instance.a :=> %d\n", x_instance.a); */
	return 0;
}
