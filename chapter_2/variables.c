#include <stdio.h>

int main(void)
{
	int height, length, width, volume;
	float profit, loss;

	height = 8;
	length = 12;
	width = 10;
	profit = 2150.48f;
	loss = 2.51f;
	volume = height * length * width;

	printf("Height: %d\n", height);
	printf("Length: %d\n", length);
	printf("Width: %d\n", width);
	printf("Profit: %.2f\n", profit);
	printf("Loss: %.2f\n", loss);
	printf("Volume: %d\n", volume);

	return 0;
}
