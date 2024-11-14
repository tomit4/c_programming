#include <stdbool.h>
#include <stdio.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color brighter(struct color c);
struct color make_color(int red, int green, int blue);

int main(void)
{
	int r, g, b;
	struct color made_color, brighter_color;

	printf("Enter 3 integer values seperated by spaces (0-255): ");
	scanf("%3d %3d %3d", &r, &g, &b);

	made_color = make_color(r, g, b);
	brighter_color = brighter(made_color);

	printf("brighter_color :=>\n{\n    red: %3d;\n    green: %3d;\n    "
	       "blue: %3d;\n};\n",
	       brighter_color.red, brighter_color.green, brighter_color.blue);

	return 0;
}

struct color brighter(struct color c)
{
	bool all_zero = c.red == 0 && c.green == 0 && c.blue == 0;
	bool greater_than_zero_less_than_three = (c.red > 0 && c.red < 3) ||
						 (c.green > 0 && c.green < 3) ||
						 (c.blue > 0 && c.blue < 3);
	bool exceeds_255 = (int)(c.red / 0.7) > 255 ||
			   (int)(c.green / 0.7) > 255 ||
			   (int)(c.blue / 0.7) > 255;

	if (all_zero) {
		c.red = 3;
		c.green = 3;
		c.blue = 3;
		return c;
	} else if (greater_than_zero_less_than_three) {
		c.red = c.red > 0 && c.red < 3 ? 3 : c.red;
		c.red = (int)(c.red / 0.7);
		c.green = c.green > 0 && c.green < 3 ? 3 : c.green;
		c.green = (int)(c.green / 0.7);
		c.blue = c.blue > 0 && c.blue < 3 ? 3 : c.blue;
		c.blue = (int)(c.blue / 0.7);
		return c;
	} else if (exceeds_255) {
		c.red = (int)(c.red / 0.7) > 255 ? 255 : c.red;
		c.green = (int)(c.green / 0.7) > 255 ? 255 : c.green;
		c.blue = (int)(c.blue / 0.7) > 255 ? 255 : c.blue;
		return c;
	} else {
		c.red = (int)(c.red / 0.7);
		c.green = (int)(c.green / 0.7);
		c.blue = (int)(c.blue / 0.7);
		return c;
	}
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
