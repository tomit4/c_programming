#include <stdio.h>

#define GET_RED(color) ((color) & 0XFF)
#define GET_GREEN(color) (((color) >> 8) & 0xFF)
#define GET_BLUE(color) (((color) >> 16) & 0xFF)

int main()
{
	int color = 0x4060FF;
	int red = GET_RED(color);
	int green = GET_GREEN(color);
	int blue = GET_BLUE(color);
	printf("red :=> %d\n", red);
	printf("green :=> %d\n", green);
	printf("blue :=> %d\n", blue);
	return 0;
}
