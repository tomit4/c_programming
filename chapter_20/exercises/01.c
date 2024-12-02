#include <stdio.h>

int main(void)
{
	// a
	/*
		unsigned short i = 8;
		unsigned short j = 9;
		printf("%d", i >> (1 + j) >> 1); // 0
	    */

	// b
	/*
	    unsigned short i = 1;
	    printf("%d\n", i & ~i); // 0
	*/

	// c
	/*
	    unsigned short i = 2;
	    unsigned short j = 1;
	    unsigned short k = 0;
	    printf("%d\n", ~i & j ^ k);
	*/

	// d
	/*
	    unsigned short i = 7;
	    unsigned short j = 8;
	    unsigned short k = 9;
	    printf("%d\n", i ^ (j & k));
	*/

	return 0;
}
