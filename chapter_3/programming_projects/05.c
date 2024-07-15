#include <stdio.h>

int main(void)
{
	int num_01, num_02, num_03, num_04, num_05, num_06, num_07, num_08,
	    num_09, num_10, num_11, num_12, num_13, num_14, num_15, num_16;
	int row_sum_1, row_sum_2, row_sum_3, row_sum_4;
	int column_sum_1, column_sum_2, column_sum_3, column_sum_4;
	int diagonal_sum_1, diagonal_sum_2;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num_01,
	      &num_02, &num_03, &num_04, &num_05, &num_06, &num_07, &num_08,
	      &num_09, &num_10, &num_11, &num_12, &num_13, &num_14, &num_15,
	      &num_16);

	row_sum_1 = num_01 + num_02 + num_03 + num_04;
	row_sum_2 = num_05 + num_06 + num_07 + num_08;
	row_sum_3 = num_09 + num_10 + num_11 + num_12;
	row_sum_4 = num_13 + num_14 + num_15 + num_16;

	column_sum_1 = num_01 + num_05 + num_09 + num_13;
	column_sum_2 = num_02 + num_06 + num_10 + num_14;
	column_sum_3 = num_03 + num_07 + num_11 + num_15;
	column_sum_4 = num_04 + num_08 + num_12 + num_16;

	diagonal_sum_1 = num_01 + num_06 + num_11 + num_16;
	diagonal_sum_2 = num_04 + num_07 + num_10 + num_13;

	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d "
	       "%2d\n",
	       num_01, num_02, num_03, num_04, num_05, num_06, num_07, num_08,
	       num_09, num_10, num_11, num_12, num_13, num_14, num_15, num_16);
	printf("Row sums: %d %d %d %d\n", row_sum_1, row_sum_2, row_sum_3,
	       row_sum_4);
	printf("Column sums: %d %d %d %d\n", column_sum_1, column_sum_2,
	       column_sum_3, column_sum_4);
	printf("Diagonal sums: %d %d\n", diagonal_sum_1, diagonal_sum_2);

	return 0;
}
