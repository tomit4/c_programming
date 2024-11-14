#include <math.h>
#include <stdio.h>

#define RECTANGLE 1
#define CIRCLE 2

struct point {
	int x, y;
};

struct shape {
	int shape_kind;	     /* RECTANGLE or CIRCLE */
	struct point center; /* coordinates of center */
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
} s;

struct shape move_shape(struct shape s, int moved_x, int moved_y);

int main(void)
{
	struct shape s, moved_s;
	s.shape_kind = RECTANGLE;
	s.center = (struct point){.x = 5, .y = 7};
	s.u.rectangle.height = 10;
	s.u.rectangle.width = 7;

	moved_s = move_shape(s, 3, 4);

	printf(
	    "moved_s when rectangle :=> {\n    center: {\n        x: %d;\n   "
	    "     y: %d;\n    };\n};\n",
	    moved_s.center.x, moved_s.center.y);

	s.shape_kind = CIRCLE;
	s.center = (struct point){.x = 6, .y = 8};
	s.u.circle.radius = 6;

	moved_s = move_shape(s, -2, -3);

	printf(
	    "moved_s when rectangle :=> {\n    center: {\n        x: %d;\n   "
	    "     y: %d;\n    };\n};\n",
	    moved_s.center.x, moved_s.center.y);

	return 0;
}

struct shape move_shape(struct shape s, int moved_x, int moved_y)
{
	s.center.x += moved_x;
	s.center.y += moved_y;
	return s;
}
