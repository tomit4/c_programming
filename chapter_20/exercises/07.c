#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void)
{
	unsigned int i;
	int n = 4;
	printf("Enter a hexadecimal number (up to four digits): ");
	scanf("%x", &i);

	/* printf("Number with bytes swapped: %.4hx\n", swap_bytes(i)); */
	printf("rotate_left(i, n) :=> 0x%08x\n", rotate_left(i, n));
	printf("rotate_right(i, n) :=> 0x%08x\n", rotate_right(i, n));

	return 0;
}

unsigned int rotate_left(unsigned int i, int n)
{
	int bits = sizeof(unsigned int) * 8;
	n %= bits;
	return (i << n) | (i >> (bits - n));
}

unsigned int rotate_right(unsigned int i, int n)
{
	int bits = sizeof(unsigned int) * 8;
	n %= bits;
	return (i << (bits - n)) | (i >> n);
}
