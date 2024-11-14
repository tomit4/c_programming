#include <stdio.h>

struct color {
	int red;
	int green;
	int blue;
};

int get_red(struct color c);
struct color make_color(int red, int green, int blue);

int main(void)
{
	int r, g, b, red;
	struct color made_color;

	printf("Enter 3 integer values seperated by spaces (0-255): ");
	scanf("%3d %3d %3d", &r, &g, &b);

	made_color = make_color(r, g, b);
	red = get_red(made_color);

	printf("red :=> %d\n", red);

	return 0;
}

int get_red(struct color c) { return c.red; }

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
