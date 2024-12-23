#include <time.h>

time_t get_midnight(int year)
{
	struct tm t = {0};

	if (year < 1900) {
		return 0; /* not valid input */
	}

	t.tm_year = year - 1900;
	t.tm_mon = 0;
	t.tm_mday = 1;
	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0;

	return mktime(&t);
}
