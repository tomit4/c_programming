#include <stdio.h>
#include <stdlib.h>

struct date {
	int month;
	int day;
	int year;
};

int day_of_year(struct date d);

int main(void)
{
	int days_in_year;
	struct date d;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &d.month, &d.day, &d.year);

	days_in_year = day_of_year(d);

	printf("days_in_year :=> %d\n", days_in_year);

	return 0;
}

int day_of_year(struct date d)
{
	if (d.month > 12) {
		fprintf(stderr, "Error: month cannot be greater than 12\n");
		exit(EXIT_FAILURE);
	}
	if (d.day > 366) {
		fprintf(stderr, "Error: day cannot be greater than 366\n");
		exit(EXIT_FAILURE);
	}
	int days = d.day;

	for (int i = 1; i < d.month; i++) {
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days += 30;
			break;
		case 2:
			if (d.year % 4 == 0) {
				days += 29;
			} else {
				days += 28;
			}
			break;
		default:
			break;
		}
	}
	return days;
}
