#include <stdarg.h>
#include <stdio.h>

char *max_pair(int num_pairs, ...);

int main(void)
{
	char *res;

	res = max_pair(5, 180, "Seinfeld", 180, "I Love Lucy", 39,
		       "The Honeymooners", 210, "All in the Family", 86,
		       "The Sopranos");

	printf("res :=> %s\n", res);

	return 0;
}

char *max_pair(int num_pairs, ...)
{
	va_list ap;
	int i, current, largest, largest_i;
	char *s;

	va_start(ap, num_pairs);
	largest = va_arg(ap, int);
	largest_i = 0;
	va_arg(ap, char *);

	for (i = 1; i < num_pairs; i++) {
		current = va_arg(ap, int);
		if (current > largest) {
			largest = current;
			largest_i = i;
		}
		va_arg(ap, char *);
	}
	va_end(ap);

	va_start(ap, num_pairs);
	for (i = 0; i < largest_i; i++) {
		va_arg(ap, int);
		va_arg(ap, char *);
	}
	va_arg(ap, int);
	s = va_arg(ap, char *);
	va_end(ap);
	return s;
}
