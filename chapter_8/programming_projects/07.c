#include <stdio.h>

int main(void)
{
	int int_matrix[5][5];
	int int1, int2, int3, int4, int5, sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("Enter row %d: ", i + 1);
		scanf("%d %d %d %d %d", &int1, &int2, &int3, &int4, &int5);

		int temp_arr[5] = {int1, int2, int3, int4, int5};

		for (int j = 0; j < 5; j++) {
			int_matrix[i][j] = temp_arr[j];
		}
	}
	printf("\n");

	printf("Row totals: ");
	for (int k = 0; k < 5; k++) {
		sum = 0;
		for (int l = 0; l < 5; l++) {
			sum += int_matrix[k][l];
		}
		printf("%d ", sum);
	}
	printf("\n");

	printf("Column totals: ");
	for (int m = 0; m < 5; m++) {
		sum = 0;
		for (int n = 0; n < 5; n++) {
			sum += int_matrix[n][m];
		}
		printf("%d ", sum);
	}

	printf("\n");
	return 0;
}
