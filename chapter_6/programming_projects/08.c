#include <stdio.h>

int main(void)
{
	int num_days_in_month, starting_day, last_day_of_week;

	printf("Enter number of days in month: ");
	scanf("%d", &num_days_in_month);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_day);

	last_day_of_week = 8 - starting_day;

	for (int i = 1; i < starting_day; i++) {
		if (i != starting_day) {
			printf("    ");
		}
	}

	for (int i = 1; i <= num_days_in_month; i++) {
		printf("%3d ", i);
		if (i == last_day_of_week) {
			printf("\n");
			last_day_of_week += 7;
		}
	}
	printf("\n");

	return 0;
}
