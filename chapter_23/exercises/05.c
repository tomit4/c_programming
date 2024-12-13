#include <ctype.h>
#include <stdlib.h>

long int hex_as_long(char *str)
{
	while (*str) {
		if (!isxdigit(*str)) {
			return -1;
		}
		str++;
	}
	return strtol(str, NULL, 16);
}
