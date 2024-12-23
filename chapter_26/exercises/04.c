#include <stdarg.h>
#include <stdio.h>

void display(int n, ...);

int main(void)
{
	display(4, "Special", "Agent", "Dale", "Cooper");
	return 0;
}

void display(int n, ...)
{
	va_list ap;
	int i;
	char *p;

	va_start(ap, n);

	for (i = 0; i < n; i++) {
		p = va_arg(ap, char *);
		while (*p) {
			putchar(*p);
			p++;
		}
		if (i < n - 1) {
			putchar(' ');
		}
	}
	putchar('\n');
	va_end(ap);
}

/* my incorrect version
void display(int n, ...)
{
	va_list ap;
	int i;
	char *current;

	va_start(ap, n);

	for (i = 0; i < n; i++) {
		current = va_arg(ap, char *);
		vprintf(current, ap);
		putchar(' ');
	}

	va_end(ap);
}
*/
