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

int compute_area(struct shape s);

int main(void)
{
	int area_s;
	struct shape s;
	s.shape_kind = RECTANGLE;
	s.center = (struct point){.x = 5, .y = 7};
	s.u.rectangle.height = 10;
	s.u.rectangle.width = 7;

	area_s = compute_area(s);
	printf("area_s when rectangle :=> %d\n", area_s);

	s.shape_kind = CIRCLE;
	s.center = (struct point){.x = 5, .y = 7};
	s.u.circle.radius = 6;

	area_s = compute_area(s);
	printf("area_s when circle :=> %d\n", area_s);

	return 0;
}

int compute_area(struct shape s)
{
	int area;
	if (s.shape_kind == RECTANGLE) {
		area = s.u.rectangle.height * s.u.rectangle.width;
	}
	if (s.shape_kind == CIRCLE) {
		area = (int)(M_PI * s.u.circle.radius * s.u.circle.radius);
	}
	return area;
}
