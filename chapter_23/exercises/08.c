#include <stdlib.h>
#include <string.h>

int numchar(const char *s, char ch);

int numchar(const char *s, char ch)
{
	int count = 0;
	s = strchr(s, ch);
	while (s != NULL) {
		count++;
		s = strchr(s + 1, ch);
	}
	return count;
}
