/* Stolen from
 * https://github.com/williamgherman/c-solutions/tree/master/11/exercises/07
 */

#include <stdbool.h>
#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{

	int day_of_year = 256, year = 2000;
	int month_ptr = 6, day_ptr = 24;
	int *month = &month_ptr, *day = &day_ptr;

	split_date(day_of_year, year, month, day);

	printf("day_of_year :=> %d\n", day_of_year);
	printf("year :=> %d\n", year);
	printf("month :=> %d\n", *month);
	printf("day :=> %d\n", *day);
	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
	int i;
	bool found = false;

	for (i = 1; i < 12 && !found; i++) {
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			// Even numbered months have 31 days
			if (day_of_year <= 31) {
				found = true;
			} else {
				day_of_year -= 31;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			// Odd numbered months have 30 days
			if (day_of_year <= 30) {
				found = true;
			} else {
				day_of_year -= 30;
			}
			break;
		case 2:
			// February Leap Year
			if ((year % 4 == 0 && year % 100 != 0) ||
			    (year % 400 == 0)) {
				if (day_of_year <= 29) {
					found = true;
				} else {
					day_of_year -= 29;
				}
			} else {
				if (day_of_year <= 28) {
					found = true;
				} else {
					day_of_year -= 28;
				}
			}
			break;
		}
	}
	*month = i - 1;
	*day = day_of_year;
}
