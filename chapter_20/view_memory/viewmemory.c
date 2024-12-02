/* Allows the user to view regions of computer memory */

/*
 * Usage: Always enter a memory address a little less than the last few
 * digits of the hex addresses printed.
 */

#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

typedef unsigned char BYTE;

int main(void)
{
	uintptr_t addr;
	int i, n;
	BYTE *ptr;

	printf("Address of main function: 0x%llx\n",
	       (unsigned long long)(uintptr_t)main);
	printf("Address of addr variable: 0x%llx\n",
	       (unsigned long long)(uintptr_t)&addr);

	printf("\nEnter a (hex) address: ");
	scanf("%lx", &addr);

	printf("Enter number of bytes to view: ");
	scanf("%d", &n);

	printf("\n");
	printf(
	    "     Address                   Bytes              Characters\n");
	printf(
	    "  -------------   ----------------------------    ----------\n");

	ptr = (BYTE *)addr;
	for (; n > 0; n -= 10) {
		printf("%16p   ", (void *)ptr);
		for (i = 0; i < 10 && i < n; i++) {
			printf("%.2X ", *(ptr + i));
		}
		for (; i < 10; i++) {
			printf("   ");
		}
		printf(" ");
		for (i = 0; i < 10 && i < n; i++) {
			BYTE ch = *(ptr + i);
			if (!isprint(ch)) {
				ch = '.';
			}
			printf("%c", ch);
		}
		printf("\n");
		ptr += 10;
	}

	return 0;
}
