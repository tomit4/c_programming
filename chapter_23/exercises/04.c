#include <ctype.h>
#include <stdbool.h>

bool is_identifier(char *s)
{
	if (!isalpha(*s) && (*s != '_')) {
		return false;
	}
	s++;
	while (*s) {
		if (!isalnum(*s) && (*s != '_')) {
			return false;
		}
		s++;
	}
	return true;
}
