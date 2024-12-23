#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

void intprintf(const char *format, ...);

int main(void)
{
	intprintf("The number is %d and %d\n", 42, -7);
	return 0;
}

void intprintf(const char *s, ...)
{
	va_list ap;
	bool found_percent_sign = false;
	int digit, i, power, temp;

	va_start(ap, s);

	while (*s) {
		if (found_percent_sign) {
			if (*s == 'd') {
				i = va_arg(ap, int);
				if (i < 0) {
					i = -i;
					putchar('-');
				}
				temp = i;
				power = 1;
				while (temp > 9) {
					temp /= 10;
					power *= 10;
				}

				do {
					digit = i / power;
					putchar(digit + '0');
					i -= digit * power;
					power /= 10;
				} while (i > 0);
			}
			found_percent_sign = false;
			s++;
			continue;
		}
		if (*s == '%') {
			found_percent_sign = true;
		} else {
			putchar(*s);
		}
		s++;
	}

	va_end(ap);
}
