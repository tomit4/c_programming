#include <stdio.h>

#define MK_COLOR(red, green, blue)                                             \
	((long)((red) & 0xFF) | ((long)((green) & 0xFF) << 8) |                \
	 ((long)((blue) & 0xFF) << 16))

int main()
{
	long color = MK_COLOR(255, 128, 64); // Red: 255, Green: 128, Blue: 64
	printf("Color: 0x%06lX\n", color);   // Expected output: Color: 0x4060FF
	return 0;
}
