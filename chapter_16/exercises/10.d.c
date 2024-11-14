#include <stdbool.h>
#include <stdio.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

bool point_is_in_rec(struct rectangle rec, struct point p);

int main(void)
{
	struct point upper_left, lower_right, point_to_find;
	struct rectangle rec;
	bool p_in_rec;

	printf("Enter x;y coordinate for upper_left: ");
	scanf("%d;%d", &upper_left.x, &upper_left.y);

	printf("Enter x;y coordinate for lower_right: ");
	scanf("%d;%d", &lower_right.x, &lower_right.y);

	printf("Enter x;y point to find: ");
	scanf("%d;%d", &point_to_find.x, &point_to_find.y);

	rec = (struct rectangle){upper_left, lower_right};

	p_in_rec = point_is_in_rec(rec, point_to_find);

	printf("p_in_rec :=> %d\n", p_in_rec);

	return 0;
}

bool point_is_in_rec(struct rectangle rec, struct point p)
{
	return p.x >= rec.upper_left.x && p.x <= rec.lower_right.x &&
	       p.y >= rec.upper_left.y && p.y <= rec.lower_right.y;
}
