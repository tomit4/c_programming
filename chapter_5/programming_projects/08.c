#include <stdio.h>

int main(void)
{
	int departure_time1, departure_time2, departure_time3, departure_time4,
	    departure_time5, departure_time6, departure_time7, departure_time8,
	    input_hours, input_minutes, input_time, minutes_from_prev_flight,
	    minutes_to_next_flight;

	departure_time1 = 8 * 60;
	departure_time2 = (9 * 60) + 43;
	departure_time3 = (11 * 60) + 19;
	departure_time4 = (12 * 60) + 47;
	departure_time5 = 14 * 60;
	departure_time6 = (15 * 60) + 45;
	departure_time7 = 19 * 60;
	departure_time8 = (21 * 60) + 45;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &input_hours, &input_minutes);

	input_time = (input_hours * 60) + input_minutes;
	if (input_time <= departure_time1) {
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 "
		       "a.m.\n");
	} else if (input_time <= departure_time2) {
		minutes_from_prev_flight = input_time - departure_time1;
		minutes_to_next_flight = departure_time2 - input_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			printf("Closest departure time is 8:00 a.m., arriving "
			       "at 10:16 a.m.\n");
		} else {
			printf("Closest departure time is 9:43 a.m., arriving "
			       "at 11:52 a.m.\n");
		}
	} else if (input_time <= departure_time3) {
		minutes_from_prev_flight = input_time - departure_time2;
		minutes_to_next_flight = departure_time3 - input_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			printf("Closest departure time is 9:43 a.m., arriving "
			       "at 11:52 a.m.\n");
		} else {
			printf("Closest departure time is 11:19 a.m., arriving "
			       "at 1:31 p.m.\n");
		}
	} else if (input_time <= departure_time4) {
		minutes_from_prev_flight = input_time - departure_time3;
		minutes_to_next_flight = departure_time4 - input_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			printf("Closest departure time is 11:19 a.m., arriving "
			       "at 1:31 p.m.\n");
		} else {
			printf("Closest departure time is 12:47 p.m., arriving "
			       "at 3:00 p.m.\n");
		}
	} else if (input_time <= departure_time5) {
		minutes_from_prev_flight = input_time - departure_time4;
		minutes_to_next_flight = departure_time5 - input_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			printf("Closest departure time is 12:47 p.m., arriving "
			       "at 3:00 p.m.\n");
		} else {
			printf("Closest departure time is 2:00 p.m., arriving "
			       "at 4:08 p.m.\n");
		}
	} else if (input_time <= departure_time6) {
		minutes_from_prev_flight = input_time - departure_time5;
		minutes_to_next_flight = departure_time6 - input_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			printf("Closest departure time is 2:00 p.m., arriving "
			       "at 4:08 p.m.\n");
		} else {
			printf("Closest departure time is 3:45 p.m., arriving "
			       "at 5:55 p.m.\n");
		}
	} else if (input_time <= departure_time7) {
		minutes_from_prev_flight = input_time - departure_time6;
		minutes_to_next_flight = departure_time7 - input_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			printf("Closest departure time is 3:45 p.m., arriving "
			       "at 5:55 p.m.\n");
		} else {
			printf("Closest departure time is 7:00 p.m., arriving "
			       "at 9:20 p.m.\n");
		}
	} else if (input_time <= departure_time8) {
		minutes_from_prev_flight = input_time - departure_time7;
		minutes_to_next_flight = departure_time8 - input_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			printf("Closest departure time is 7:00 p.m., arriving "
			       "at 9:20 p.m.\n");
		} else {
			printf("Closest departure time is 9:45 p.m., arriving "
			       "at 11:58 p.m.\n");
		}
	} else {
		printf("Closest departure time is 9:45 p.m., arriving "
		       "at 11:58 p.m.\n");
	}

	return 0;
}
