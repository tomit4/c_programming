#include <stdbool.h>
#include <stdio.h>

#define ENGLISH true
/* #define FRENCH true */
/* #define SPANISH true */

int main(void)
{
#ifdef ENGLISH
#define INSERT_DISK "Insert Disk 1\n"
#elif FRENCH
#define INSERT_DISK "Insert le Disque 1\n"
#elif SPANISH
#define INSERT_DISK "Insert El Disco 1\n"
#endif
	printf("%s", INSERT_DISK);
	return 0;
}
