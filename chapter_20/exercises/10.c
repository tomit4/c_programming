#include <stdio.h>

#define INT_BITS (sizeof(int) * 8 - 1)
unsigned int reverse_bits(unsigned int n);

int main(void)
{
	unsigned int n = 0x00000081;
	unsigned int reversed = reverse_bits(n);

	printf("Original: 0x%X\n", n);
	printf("Reversed: 0x%X\n", reversed);

	return 0;
}
unsigned int reverse_bits(unsigned int n)
{
	int i;
	for (i = 0; i < (int)(INT_BITS / 2); i++) {
		if ((((n >> INT_BITS) - i) & 1) != ((n >> i) & 1))
			n ^= ((1 << INT_BITS) - i) | (1 << i);
	}
	return n;
}

/*
unsigned int reverse_bits(unsigned int n)
{
	unsigned int result = 0;
	int num_bits = sizeof(n) * 8;

	for (int i = 0; i < num_bits; i++) {
		result <<= 1;
		result |= (n & 1);
		n >>= 1;
	}

	return result;
}
*/
