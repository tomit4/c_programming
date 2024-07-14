#include <math.h>
#include <stdio.h>

int main(void)
{
	float radius;

	printf("Enter The Radius Of Your Sphere: ");
	scanf("%f", &radius);

	float radius_cubed = (radius * radius * radius);

	float volume = (4.0f / 3.0f) * M_PI * radius_cubed;

	printf("The Volume Of Your Sphere Is: %.2f\n", volume);

	return 0;
}
