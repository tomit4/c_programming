#include <stdio.h>

int count_ones(unsigned char ch);

int main(void)
{
	unsigned char ch = 0xAF;			   // 0b10101111
	printf("count_ones(ch) :=> %d\n", count_ones(ch)); // 6
	return 0;
}

int count_ones(unsigned char ch)
{
	ch = (ch & 0x55) + ((ch >> 1) & 0x55);
	ch = (ch & 0x33) + ((ch >> 2) & 0x33);
	ch = (ch & 0x0F) + ((ch >> 4) & 0x0F);
	return ch;
}
