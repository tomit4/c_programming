#include <stdio.h>
#include <stdlib.h>

struct point {
	int x, y;
};
struct rectangle {
	struct point upper_left, lower_right;
};
struct rectangle *p;

int main(void)
{
	p = (struct rectangle *)malloc(sizeof(struct rectangle));
	p->upper_left = (struct point){10, 25};
	p->lower_right = (struct point){20, 15};

	printf("rec.upper_left.x :=> %d\n", p->upper_left.x);
	printf("rec.upper_left.y :=> %d\n", p->upper_left.y);
	printf("rec.lower_right.x :=> %d\n", p->lower_right.x);
	printf("rec.lower_right.y :=> %d\n", p->lower_right.y);

	return 0;
}

/* Original solution:
int main(void)
{
	struct rectangle rec;
	struct point point_upper_left = {.x = 10, .y = 5};
	struct point point_lower_right = {.x = 20, .y = 15};
	rec.upper_left = point_upper_left;
	rec.lower_right = point_lower_right;

	p = calloc(1, sizeof(struct rectangle));
	*p = rec;

	printf("rec.upper_left.x :=> %d\n", p->upper_left.x);
	printf("rec.upper_left.y :=> %d\n", p->upper_left.y);
	printf("rec.lower_right.x :=> %d\n", p->lower_right.x);
	printf("rec.lower_right.y :=> %d\n", p->lower_right.y);

	free(p);

	return 0;
}
*/
