#include <stdio.h>
#include <stdlib.h>

struct date {
	int month;
	int day;
	int year;
};

int compare_dates(struct date d1, struct date d2);

int main(void)
{
	int d1_is_later_than_d2;
	struct date d1, d2, earlier_date, later_date;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

	d1_is_later_than_d2 = compare_dates(d1, d2);

	earlier_date = d1_is_later_than_d2 ? d2 : d1;
	later_date = d1_is_later_than_d2 ? d1 : d2;

	printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
	       earlier_date.month, earlier_date.day, earlier_date.year,
	       later_date.month, later_date.day, later_date.year);

	return 0;
}

int compare_dates(struct date d1, struct date d2)
{
	int return_val;

	if (d1.month > 12 || d2.month > 12) {
		fprintf(stderr, "Error: month cannot be greater than 12\n");
		exit(EXIT_FAILURE);
	}
	if (d1.day > 366 || d2.day > 366) {
		fprintf(stderr, "Error: day cannot be greater than 366\n");
		exit(EXIT_FAILURE);
	}

	if (d1.year < d2.year) {
		return_val = -1;
	} else if (d2.year < d1.year) {
		return_val = 1;
	} else if (d1.month < d2.month) { // years are the same, check months...
		return_val = -1;
	} else if (d2.month < d1.month) {
		return_val = 1;
	} else if (d1.day < d2.day) { // months are the same, check days...
		return_val = -1;
	} else if (d2.day < d1.day) {
		return_val = 1;
	}
	return return_val;
}
