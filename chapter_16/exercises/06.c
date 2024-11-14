#include <stdio.h>
#include <stdlib.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
	long total_seconds;
	struct time splitted_time;
	printf("Enter a number of seconds (less than 86400): ");
	scanf("%ld", &total_seconds);

	splitted_time = split_time(total_seconds);

	printf("splitted_time.hours :=> %d\n", splitted_time.hours);
	printf("splitted_time.minutes :=> %d\n", splitted_time.minutes);
	printf("splitted_time.seconds :=> %d\n", splitted_time.seconds);

	return 0;
}

struct time split_time(long total_seconds)
{
	long total_seconds_in_day = 86400;
	struct time return_time;

	if (total_seconds > total_seconds_in_day) {
		fprintf(stderr,
			"Total Seconds cannot exceed total seconds"
			"in day 86400 :=> %ld\n",
			total_seconds);
		exit(EXIT_FAILURE);
	}

	return_time.hours = total_seconds / (60 * 60);
	total_seconds %= (60 * 60);
	return_time.minutes = total_seconds / 60;
	total_seconds %= 60;
	return_time.seconds = total_seconds;

	return return_time;
}
