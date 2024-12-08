#include <stdio.h>
#include <stdlib.h>

void print_date(int month, int day, int year);

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Please enter a date (9-13-2010 or 9/13/2010)\n");
		fprintf(stderr, "Usage: %s 9-13-2010\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	char *input_str = argv[1];
	int month, day, year;

	if (sscanf(input_str, "%d/%d/%d", &month, &day, &year) == 3 ||
	    sscanf(input_str, "%d-%d-%d", &month, &day, &year) == 3) {
		print_date(month, day, year);
	}

	exit(EXIT_SUCCESS);
}

void print_date(int month, int day, int year)
{
	char *month_str;
	switch (month) {
	case 1:
		month_str = "January";
		break;
	case 2:
		month_str = "February";
		break;
	case 3:
		month_str = "March";
		break;
	case 4:
		month_str = "April";
		break;
	case 5:
		month_str = "May";
		break;
	case 6:
		month_str = "June";
		break;
	case 7:
		month_str = "July";
		break;
	case 8:
		month_str = "August";
		break;
	case 9:
		month_str = "September";
		break;
	case 10:
		month_str = "October";
		break;
	case 11:
		month_str = "November";
		break;
	case 12:
		month_str = "December";
		break;
	default:
		fprintf(stderr, "%d is not a valid month number\n", month);
		exit(EXIT_FAILURE);
		break;
	}
	printf("%s %.2d, %.4d\n", month_str, day, year);
	return;
}
