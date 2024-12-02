#include <stdio.h>

int main(void)
{
	unsigned short i = 0x0050;
	printf("i before :=> 0x%04X\n", i);
	i ^= 1 << 4;
	printf("i after XOR :=> 0x%04X\n", i);
	i ^= 1 << 4;
	printf("i after XOR again :=> 0x%04X\n", i);

	return 0;
}
