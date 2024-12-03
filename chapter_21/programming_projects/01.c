#include <stddef.h>
#include <stdio.h>

struct s {
	char a;
	int b[2];
	float c;
};

int main(void)
{

	struct s structure_s;

	printf("offsetof(struct s, a) :=> %zu\n", offsetof(struct s, a));
	printf("offsetof(struct s, b) :=> %zu\n", offsetof(struct s, b));
	printf("offsetof(struct s, c) :=> %zu\n", offsetof(struct s, c));
	printf("sizeof(structure_s) :=> %zu\n", sizeof(structure_s));

	return 0;
}

/*
offsetof(struct s, a) :=> 0
offsetof(struct s, b) :=> 4
offsetof(struct s, c) :=> 12
sizeof(structure_s) :=> 16
*/
