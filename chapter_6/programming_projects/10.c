#include <stdio.h>

int main(void)
{
	int input_month, input_day, input_year, earliest_month, earliest_day,
	    earliest_year;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &input_month, &input_day, &input_year);

	earliest_month = input_month;
	earliest_day = input_day;
	earliest_year = input_year;

	while (input_month != 0 && input_day != 0 && input_year != 0) {
		if (input_year < earliest_year) {
			earliest_month = input_month;
			earliest_day = input_day;
			earliest_year = input_year;
		} else if (input_year == earliest_year &&
			   input_month < earliest_month) {
			earliest_month = input_month;
			earliest_day = input_day;
			earliest_year = input_year;
		} else if (input_month == earliest_month &&
			   input_day < earliest_day) {
			earliest_month = input_month;
			earliest_day = input_day;
			earliest_year = input_year;
		}
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &input_month, &input_day, &input_year);
	}

	printf("%d/%.2d/%.2d is the earliest date\n", earliest_month,
	       earliest_day, earliest_year);

	return 0;
}
