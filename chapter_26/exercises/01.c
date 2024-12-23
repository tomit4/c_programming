#include <stdarg.h>
#include <stdio.h>

int max_int(int n, ...);

int main(void)
{
	printf("hello world!\n");
	return 0;
}

int max_int(int n, ...)
{
	va_list ap;
	int i, current, largest;

	va_start(ap, n);
	largest = n;

	while ((current = va_arg(ap, int)) != 0) {
		if (current > largest) {
			largest = current;
		}
	}

	va_end(ap);

	return largest;
}
