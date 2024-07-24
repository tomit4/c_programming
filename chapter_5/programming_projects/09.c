#include <stdio.h>

int main(void)
{
	int first_year, first_day, first_month, second_year, second_day,
	    second_month;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &first_month, &first_day, &first_year);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &second_month, &second_day, &second_year);

	if (first_year != second_year) {
		if (second_year < first_year) {
			printf("%d/%d/%d is earlier than %d/%d/%d\n",
			       second_month, second_day, second_year,
			       first_month, first_day, first_year);
		} else {
			printf("%d/%d/%d is earlier than %d/%d/%d\n",
			       first_month, first_day, first_year, second_month,
			       second_day, second_year);
		}
	} else if (first_month != second_month) {
		if (second_month < first_month) {
			printf("%d/%d/%d is earlier than %d/%d/%d\n",
			       second_month, second_day, second_year,
			       first_month, first_day, first_year);
		} else {
			printf("%d/%d/%d is earlier than %d/%d/%d\n",
			       first_month, first_day, first_year, second_month,
			       second_day, second_year);
		}
	} else if (first_day != second_day) {
		if (second_day < first_day) {
			printf("%d/%d/%d is earlier than %d/%d/%d\n",
			       second_month, second_day, second_year,
			       first_month, first_day, first_year);
		} else {
			printf("%d/%d/%d is earlier than %d/%d/%d\n",
			       first_month, first_day, first_year, second_month,
			       second_day, second_year);
		}
	} else {
		printf("%d/%d/%d is the same day as %d/%d/%d\n", second_month,
		       second_day, second_year, first_month, first_day,
		       first_year);
	}

	return 0;
}
