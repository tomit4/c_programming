#include <stdio.h>
#include <stdlib.h>

void print_thats_all(void);
void print_folks(void);

int main(void)
{
	int i, j;

	j = atexit(print_folks);
	i = atexit(print_thats_all);
	if (i != 0 || j != 0) {
		fprintf(stderr, "cannot set exit function\n");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}

void print_thats_all(void) { printf("That's all, "); }
void print_folks(void) { printf("folks!\n"); }
