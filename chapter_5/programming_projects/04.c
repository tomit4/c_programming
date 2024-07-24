#include <stdio.h>

int main(void)
{
	int speed;

	printf("Enter a wind speed in knots: ");
	scanf("%d", &speed);

	if (speed < 1) {
		printf("The wind force, according to the Beaufort scale is: "
		       "Calm\n");
	} else if (speed < 4) {
		printf("The wind force, according to the Beaufort scale is: "
		       "Light air\n");
	} else if (speed < 27) {
		printf("The wind force, according to the Beaufort scale is: "
		       "Breeze\n");
	} else if (speed < 47) {
		printf("The wind force, according to the Beaufort scale is: "
		       "Gale\n");
	} else if (speed < 63) {
		printf("The wind force, according to the Beaufort scale is: "
		       "Storm\n");
	} else if (speed > 63) {
		printf("The wind force, according to the Beaufort scale is: "
		       "Hurricane\n");
	}

	return 0;
}
