#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
			 int *arrival_time);

int main(void)
{
	int input_hours, input_minutes;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &input_hours, &input_minutes);

	int desired_time = (input_hours * 60) + input_minutes;
	int departure_time = 0;
	int arrival_time = 0;

	find_closest_flight(desired_time, &departure_time, &arrival_time);

	printf("Closest departure time is %d, arriving at %d\n", departure_time,
	       arrival_time);

	return 0;
}

void find_closest_flight(int desired_time, int *departure_time,
			 int *arrival_time)
{
	int departure_time1, departure_time2, departure_time3, departure_time4,
	    departure_time5, departure_time6, departure_time7, departure_time8,
	    minutes_from_prev_flight, minutes_to_next_flight;

	departure_time1 = 8 * 60;
	departure_time2 = (9 * 60) + 43;
	departure_time3 = (11 * 60) + 19;
	departure_time4 = (12 * 60) + 47;
	departure_time5 = 14 * 60;
	departure_time6 = (15 * 60) + 45;
	departure_time7 = 19 * 60;
	departure_time8 = (21 * 60) + 45;

	if (desired_time <= departure_time1) {
		*departure_time = 8 * 60;
		*arrival_time = (10 * 60) + 16;
	} else if (desired_time <= departure_time2) {
		minutes_from_prev_flight = desired_time - departure_time1;
		minutes_to_next_flight = departure_time2 - desired_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			*departure_time = 8 * 60;
			*arrival_time = (10 * 60) + 16;
		} else {
			*departure_time = (9 * 60) + 43;
			*arrival_time = (11 * 60) + 52;
		}
	} else if (desired_time <= departure_time3) {
		minutes_from_prev_flight = desired_time - departure_time2;
		minutes_to_next_flight = departure_time3 - desired_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			*departure_time = (9 * 60) + 43;
			*arrival_time = (11 * 60) + 52;
		} else {
			*departure_time = (11 * 60) + 19;
			*arrival_time = (13 * 60) + 31;
		}
	} else if (desired_time <= departure_time4) {
		minutes_from_prev_flight = desired_time - departure_time3;
		minutes_to_next_flight = departure_time4 - desired_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			*departure_time = (11 * 60) + 19;
			*arrival_time = (13 * 60) + 31;
		} else {
			*departure_time = (12 * 60) + 47;
			*arrival_time = (16 * 60);
		}
	} else if (desired_time <= departure_time5) {
		minutes_from_prev_flight = desired_time - departure_time4;
		minutes_to_next_flight = departure_time5 - desired_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			*departure_time = (12 * 60) + 47;
			*arrival_time = (16 * 60);
		} else {
			*departure_time = (14 * 60);
			*arrival_time = (16 * 60) + 8;
		}
	} else if (desired_time <= departure_time6) {
		minutes_from_prev_flight = desired_time - departure_time5;
		minutes_to_next_flight = departure_time6 - desired_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			*departure_time = (14 * 60);
			*arrival_time = (16 * 60) + 8;
		} else {
			*departure_time = (15 * 60) + 45;
			*arrival_time = (17 * 60) + 55;
		}
	} else if (desired_time <= departure_time7) {
		minutes_from_prev_flight = desired_time - departure_time6;
		minutes_to_next_flight = departure_time7 - desired_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			*departure_time = (15 * 60) + 45;
			*arrival_time = (17 * 60) + 55;
		} else {
			*departure_time = (19 * 60);
			*arrival_time = (21 * 60) + 20;
		}
	} else if (desired_time <= departure_time8) {
		minutes_from_prev_flight = desired_time - departure_time7;
		minutes_to_next_flight = departure_time8 - desired_time;
		if (minutes_from_prev_flight < minutes_to_next_flight) {
			*departure_time = (19 * 60);
			*arrival_time = (21 * 60) + 20;
		} else {
			*departure_time = (21 * 60) + 45;
			*arrival_time = (23 * 60) + 58;
		}
	} else {
		*departure_time = (21 * 60) + 45;
		*arrival_time = (23 * 60) + 58;
	}
}
