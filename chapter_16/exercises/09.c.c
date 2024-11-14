#include <stdbool.h>
#include <stdio.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color make_color(int red, int green, int blue);
bool equal_color(struct color color1, struct color color2);

int main(void)
{
	int r1, g1, b1, r2, g2, b2;
	struct color made_color1, made_color2;
	bool colors_match;

	printf(
	    "Enter 1st set of 3 integer values seperated by spaces (0-255): ");
	scanf("%3d %3d %3d", &r1, &g1, &b1);

	printf(
	    "Enter 2nd set of 3 integer values seperated by spaces (0-255): ");
	scanf("%3d %3d %3d", &r2, &g2, &b2);

	made_color1 = make_color(r1, g1, b1);
	made_color2 = make_color(r2, g2, b2);
	colors_match = equal_color(made_color1, made_color2);

	if (colors_match) {
		printf("colors_match :=> true\n");
	} else {
		printf("colors_match :=> false\n");
	}

	return 0;
}

struct color make_color(int red, int green, int blue)
{
	struct color made_color = {red, green, blue};

	made_color.red = made_color.red < 0 ? 0 : made_color.red;
	made_color.red = made_color.red > 255 ? 255 : made_color.red;
	made_color.green = made_color.green < 0 ? 0 : made_color.green;
	made_color.green = made_color.green > 255 ? 255 : made_color.green;
	made_color.blue = made_color.blue < 0 ? 0 : made_color.blue;
	made_color.blue = made_color.blue > 255 ? 255 : made_color.blue;

	return made_color;
}

bool equal_color(struct color color1, struct color color2)
{
	return color1.red == color2.red && color1.green == color2.green &&
	       color1.blue == color2.blue;
}
