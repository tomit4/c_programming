#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	long total_sec = 86385;
	int hr_ptr = 0, min_ptr = 0, sec_ptr = 0;
	int *hr = &hr_ptr, *min = &min_ptr, *sec = &sec_ptr;

	split_time(total_sec, hr, min, sec);

	printf("hr :=> %d\n", *hr);
	printf("min :=> %d\n", *min);
	printf("sec :=> %d\n", *sec);
	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	long sec_remaining = total_sec;
	long sec_taken_up = 0;

	*hr = total_sec / 60 / 60;
	sec_taken_up = (*hr) * 60 * 60;
	sec_remaining = total_sec - sec_taken_up;
	*min = sec_remaining / 60;
	sec_taken_up = (*min) * 60;
	sec_remaining = sec_remaining - sec_taken_up;
	*sec = sec_remaining;
}
