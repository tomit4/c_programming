#include <stdio.h>

struct color {
	int red;
	int green;
	int blue;
};

int main(void)
{
	const struct color MAGENTA = {
	    .red = 255,
	    .blue = 255,
	};

	printf("hello world\n");
	return 0;
}
