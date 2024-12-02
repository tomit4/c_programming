#include <stdio.h>

int main()
{
	// Print binary numbers from 0 to 100
	printf("Binary numbers from 0 to 100 (decimal):\n");
	for (int i = 0; i <= 100; i++) {
		printf("%3d -> ", i);
		for (int j = 7; j >= 0; j--) {
			printf("%d", (i >> j) & 1);
		}
		printf("\n");
	}

	printf("\n");

	// Print hexadecimal numbers from 0 to 100
	printf("Hexadecimal numbers from 0 to 100 (decimal):\n");
	for (int i = 0; i <= 100; i++) {
		printf("%3d -> %02X\n", i, i);
	}

	return 0;
}
