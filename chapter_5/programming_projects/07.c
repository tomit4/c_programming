#include <stdio.h>

int main(void)
{
	int num_1, num_2, num_3, num_4, largest, smallest;
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);

	smallest = num_1;
	largest = num_1;

	if (smallest > num_2) {
		smallest = num_2;
	} else if (smallest > num_3) {
		smallest = num_3;
	} else if (smallest > num_4) {
		smallest = num_4;
	}

	if (largest < num_2) {
		largest = num_2;
	} else if (largest < num_3) {
		largest = num_3;
	} else if (largest < num_4) {
		largest = num_4;
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	return 0;
}
