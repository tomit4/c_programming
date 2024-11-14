#include <stdio.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

int rec_area(struct rectangle rec);

int main(void)
{
	int area_of_rec;
	struct point upper_left, lower_right;
	struct rectangle rec;

	printf("Enter x;y coordinate for upper_left: ");
	scanf("%d;%d", &upper_left.x, &upper_left.y);

	printf("Enter x;y coordinate for lower_right: ");
	scanf("%d;%d", &lower_right.x, &lower_right.y);

	rec = (struct rectangle){upper_left, lower_right};

	area_of_rec = rec_area(rec);

	printf("area_of_rec :=> %d\n", area_of_rec);

	return 0;
}

int rec_area(struct rectangle rec)
{
	int leg1 = rec.lower_right.x - rec.upper_left.x;
	int leg2 = rec.lower_right.y - rec.upper_left.y;
	return leg1 * leg2;
}
