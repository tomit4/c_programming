#include <stdio.h>

/*
enum weekdays {
	MONDAY,	   // 0
	TUESDAY,   // 1
	WEDNESDAY, // 2
	THURSDAY,  // 3
	FRIDAY,	   // 4
	SATURDAY,  // 5
	SUNDAY	   // 6
};
*/

typedef enum {
	MONDAY,	   // 0
	TUESDAY,   // 1
	WEDNESDAY, // 2
	THURSDAY,  // 3
	FRIDAY,	   // 4
	SATURDAY,  // 5
	SUNDAY	   // 6
} Day;

int main()
{
	/* enum weekdays today = MONDAY; */
	Day today = FRIDAY;
	printf("today as enumerated number :=> %d\n", today);
	printf("Today is %s\n", (today == SUNDAY)      ? "Sunday"
				: (today == MONDAY)    ? "Monday"
				: (today == TUESDAY)   ? "Tuesday"
				: (today == WEDNESDAY) ? "Wednesday"
				: (today == THURSDAY)  ? "Thursday"
				: (today == FRIDAY)    ? "Friday"
				: (today == SATURDAY)  ? "Saturday"
						       : "Unknown day");
	return 0;
}
