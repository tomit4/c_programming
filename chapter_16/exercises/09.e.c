#include <stdio.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color darker(struct color c);
struct color make_color(int red, int green, int blue);

int main(void)
{
	int r, g, b;
	struct color made_color, darker_color;

	printf("Enter 3 integer values seperated by spaces (0-255): ");
	scanf("%3d %3d %3d", &r, &g, &b);

	made_color = make_color(r, g, b);
	darker_color = darker(made_color);

	printf("darker_color :=>\n{\n    red: %3d;\n    green: %3d;\n    "
	       "blue: %3d;\n};\n",
	       darker_color.red, darker_color.green, darker_color.blue);

	return 0;
}

struct color darker(struct color c)
{
	c.red = (int)c.red * 0.7;
	c.green = (int)c.green * 0.7;
	c.blue = (int)c.blue * 0.7;

	return c;
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
