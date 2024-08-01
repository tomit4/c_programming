#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
	int i, j, low_rate, num_years, year;
	double value[5];
	double monthly_rate;

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");
	for (year = 1; year <= num_years; year++) {
		printf("%3d     ", year);

		for (i = 0; i < NUM_RATES; i++) {
			monthly_rate = (low_rate + i) / 1200.0;
			for (j = 0; j < 12; j++) {
				value[i] += value[i] * monthly_rate;
			}
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}

	return 0;
}
