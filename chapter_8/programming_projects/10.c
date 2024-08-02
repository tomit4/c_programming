// ChatGPT
// Handles 00:00 to 03:00 by handling closest_departure_index
#include <stdio.h>

int main(void)
{
	int departure_times[8] = {8 * 60,	  (9 * 60) + 43, (11 * 60) + 19,
				  (12 * 60) + 47, 14 * 60,	 (15 * 60) + 45,
				  19 * 60,	  (21 * 60) + 45};
	int arrival_times[8] = {(10 * 60) + 16, (11 * 60) + 52, (13 * 60) + 31,
				(15 * 60),	(16 * 60) + 8,	(17 * 60) + 55,
				(21 * 60) + 20, (23 * 60) + 58};
	int input_hours, input_minutes, input_time, minutes_from_prev_flight,
	    minutes_to_next_flight;
	int closest_departure_index = -1;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &input_hours, &input_minutes);
	input_time = (input_hours * 60) + input_minutes;

	int min_difference =
	    24 * 60; // Initialize to a large value (one day in minutes)

	// Find the closest departure time
	for (int i = 0; i < 8; i++) {
		int difference = departure_times[i] - input_time;
		if (difference >= 0 && difference < min_difference) {
			min_difference = difference;
			closest_departure_index = i;
		}
	}

	if (closest_departure_index == -1) {
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 "
		       "p.m.\n");
	} else {
		int prev_index = closest_departure_index - 1;
		if (prev_index < 0) {
			prev_index =
			    7; // Wrap around to the last departure time
		}

		minutes_from_prev_flight =
		    input_time - departure_times[prev_index];
		minutes_to_next_flight =
		    departure_times[closest_departure_index] - input_time;

		char departure_am_pm =
		    (departure_times[closest_departure_index] / 60) >= 12 ? 'p'
									  : 'a';
		char arrival_am_pm =
		    (arrival_times[closest_departure_index] / 60) >= 12 ? 'p'
									: 'a';

		// Convert to 12-hour format
		int departure_hour =
		    (departure_times[closest_departure_index] / 60) % 12;
		if (departure_hour == 0)
			departure_hour = 12; // Handle midnight

		int arrival_hour =
		    (arrival_times[closest_departure_index] / 60) % 12;
		if (arrival_hour == 0)
			arrival_hour = 12; // Handle midnight

		printf("Closest departure time is %02d:%02d %c.m., arriving at "
		       "%02d:%02d %c.m.\n",
		       departure_hour,
		       departure_times[closest_departure_index] % 60,
		       departure_am_pm, arrival_hour,
		       arrival_times[closest_departure_index] % 60,
		       arrival_am_pm);
	}

	return 0;
}
