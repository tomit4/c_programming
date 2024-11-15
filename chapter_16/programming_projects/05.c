#include <stdio.h>
#include <stdlib.h>

struct times {
	int departure_time;
	int arrival_time;
};

int main(void)
{

	int i, input_time, input_hours, input_minutes, times_arr_len,
	    arrival_time, arrival_hours, arrival_minutes, departure_time,
	    departure_hours, departure_minutes;
	char *arrival_meridiem;
	char *departure_meridiem;

	struct times times_arr[] = {
	    {.departure_time = 480, .arrival_time = 616},
	    {.departure_time = 583, .arrival_time = 712},
	    {.departure_time = 679, .arrival_time = 811},
	    {.departure_time = 767, .arrival_time = 900},
	    {.departure_time = 840, .arrival_time = 968},
	    {.departure_time = 945, .arrival_time = 1075},
	    {.departure_time = 1140, .arrival_time = 1280},
	    {.departure_time = 1305, .arrival_time = 1438},
	};

	times_arr_len = sizeof times_arr / sizeof times_arr[0];

	printf("Enter a 24-hour time (hh:mm): ");
	scanf("%d:%d", &input_hours, &input_minutes);

	if (input_hours > 24) {
		fprintf(stderr, "hours cannot exceed 24");
		exit(EXIT_FAILURE);
	}
	if (input_minutes > 59) {
		fprintf(stderr, "minutes cannot exceed 59");
		exit(EXIT_FAILURE);
	}

	input_time = (input_hours * 60) + input_minutes;

	for (i = 0; i < times_arr_len; i++) {
		if (input_time < times_arr[0].departure_time) {
			arrival_time = times_arr[0].arrival_time;
			departure_time = times_arr[0].departure_time;
		}
		if (input_time <= times_arr[i].arrival_time &&
		    input_time >= times_arr[i].departure_time) {
			arrival_time = times_arr[i + 1].arrival_time;
			departure_time = times_arr[i + 1].departure_time;
			break;
		}
		if (input_time > times_arr[times_arr_len - 1].departure_time) {
			arrival_time = times_arr[0].arrival_time;
			departure_time = times_arr[0].departure_time;
			break;
		}
	}

	departure_hours = departure_time / 60;
	arrival_hours = arrival_time / 60;
	departure_minutes = departure_time % 60;
	arrival_minutes = arrival_time % 60;

	arrival_meridiem = arrival_hours <= 12 ? "p.m" : "a.m";
	departure_meridiem = departure_hours >= 12 ? "p.m" : "a.m";

	departure_hours =
	    departure_hours > 12 ? departure_hours - 12 : departure_hours;
	arrival_hours = arrival_hours > 12 ? arrival_hours - 12 : arrival_hours;

	if (arrival_hours == 0) {
		arrival_hours = 12;
	}
	if (departure_hours == 0) {
		departure_hours = 12;
	}

	printf("Closest departure time is %02d:%02d %s, arriving at %02d:%02d "
	       "%s\n",
	       departure_hours, departure_minutes, departure_meridiem,
	       arrival_hours, arrival_minutes, arrival_meridiem);

	exit(EXIT_SUCCESS);
}
