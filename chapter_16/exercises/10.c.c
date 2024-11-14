#include <stdio.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

struct rectangle move_rectangle(struct rectangle rec, int move_x, int move_y);

int main(void)
{
	int move_x, move_y;
	struct point upper_left, lower_right;
	struct rectangle rec, moved_rec;

	printf("Enter x;y coordinate for upper_left: ");
	scanf("%d;%d", &upper_left.x, &upper_left.y);

	printf("Enter x;y coordinate for lower_right: ");
	scanf("%d;%d", &lower_right.x, &lower_right.y);

	printf("Enter x;y amount to move rectangle: ");
	scanf("%d;%d", &move_x, &move_y);

	rec = (struct rectangle){upper_left, lower_right};
	moved_rec = move_rectangle(rec, move_x, move_y);

	printf(
	    "rec :=>\n{\n    upper_left: {\n        x: %d\n        y: %d\n    "
	    "};\n    lower_right: {\n        x: %d\n        y: %d\n    "
	    "};\n};\n",
	    rec.upper_left.x, rec.upper_left.y, rec.lower_right.x,
	    rec.lower_right.y);

	printf("moved_rec :=>\n{\n    upper_left: {\n        x: %d\n        y: "
	       "%d\n    "
	       "};\n    lower_right: {\n        x: %d\n        y: %d\n    "
	       "};\n};\n",
	       moved_rec.upper_left.x, moved_rec.upper_left.y,
	       moved_rec.lower_right.x, moved_rec.lower_right.y);

	return 0;
}

struct rectangle move_rectangle(struct rectangle rec, int move_x, int move_y)
{
	rec.upper_left.x += move_x;
	rec.upper_left.y += move_y;
	rec.lower_right.x += move_x;
	rec.lower_right.y += move_y;

	return rec;
}
