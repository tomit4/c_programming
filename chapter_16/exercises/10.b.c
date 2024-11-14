#include <stdio.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

struct point compute_center(struct rectangle rec);

int main(void)
{
	struct point upper_left, lower_right, center;
	struct rectangle rec;

	printf("Enter x;y coordinate for upper_left: ");
	scanf("%d;%d", &upper_left.x, &upper_left.y);

	printf("Enter x;y coordinate for lower_right: ");
	scanf("%d;%d", &lower_right.x, &lower_right.y);

	rec = (struct rectangle){upper_left, lower_right};

	center = compute_center(rec);

	printf("center :=> {\n    x: %d;\n    y: %d\n};\n", center.x, center.y);

	return 0;
}

struct point compute_center(struct rectangle rec)
{
	int leg1 = rec.lower_right.x - rec.upper_left.x;
	int leg2 = rec.lower_right.y - rec.upper_left.y;
	return (struct point){leg1 / 2, leg2 / 2};
}
