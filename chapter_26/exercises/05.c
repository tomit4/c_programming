#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

char *vstrcat(const char *first, ...)
{
	char *res, *p;
	int len = 0;
	va_list ap;

	va_start(ap, first);

	while ((p = va_arg(ap, char *)) != ((char *)NULL)) {
		len += strlen(p);
	}
	len++;

	if ((res = malloc(len)) == NULL) {
		va_end(ap);
		return NULL;
	}

	va_end(ap);

	va_start(ap, first);

	strcpy(res, va_arg(ap, char *));

	while ((p = va_arg(ap, char *)) != ((char *)NULL)) {
		strcat(res, p);
	}

	va_end(ap);

	return res;
}
