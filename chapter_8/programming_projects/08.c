#include <stdio.h>

int main(void)
{
	int int_matrix[5][5];
	int int1, int2, int3, int4, int5, sum = 0, high_score = 0,
					  low_score = 0;
	float average = 0;

	for (int i = 0; i < 5; i++) {
		printf("Enter quiz grades for student %d: ", i + 1);
		scanf("%d %d %d %d %d", &int1, &int2, &int3, &int4, &int5);

		int temp_arr[5] = {int1, int2, int3, int4, int5};

		for (int j = 0; j < 5; j++) {
			int_matrix[i][j] = temp_arr[j];
		}
	}
	printf("\n");

	printf("Student  Total Score  Average Score\n");
	for (int k = 0; k < 5; k++) {
		printf("%d         ", k + 1);
		sum = 0;
		for (int l = 0; l < 5; l++) {
			sum += int_matrix[k][l];
		}
		printf("%d         ", sum);
		average = (float)sum / 5;
		printf("%.1f\n", average);
	}
	printf("\n");
	printf("Quiz    Average Score  High Score  Low Score\n");
	for (int m = 0; m < 5; m++) {
		printf("%d        ", m + 1);
		sum = 0;
		high_score = 0;
		low_score = int_matrix[m][0];
		for (int n = 0; n < 5; n++) {
			sum += int_matrix[n][m];
			if (high_score < int_matrix[n][m]) {
				high_score = int_matrix[n][m];
			}
			if (low_score > int_matrix[n][m]) {
				low_score = int_matrix[n][m];
			}
		}
		average = (float)sum / 5;
		printf("%.1f          ", average);
		printf("%d           ", high_score);
		printf("%d\n", low_score);
	}

	printf("\n");
	return 0;
}
