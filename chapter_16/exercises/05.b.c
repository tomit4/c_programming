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
	struct date d1, d2;
	int d1_is_later_than_d2;
	printf("Enter first date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &d1.month, &d1.day, &d1.year);

	printf("Enter second date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &d2.month, &d2.day, &d2.year);

	d1_is_later_than_d2 = compare_dates(d1, d2);

	printf("d1_is_later_than_d2 :=> %d\n", d1_is_later_than_d2);

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
		printf("d1.year is less than d2.year\n");
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
