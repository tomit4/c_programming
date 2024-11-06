#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
	char message[MAX_LEN];
	char ch, *p = message;

	printf("Enter a message: ");

	while ((ch = getchar()) != '\n' && p < message + MAX_LEN) {
		*p++ = ch;
	}
	p--;
	printf("Reversal is: ");

	while (p >= message) {
		putchar(*p--);
	}
	printf("\n");

	return 0;
}
