#include <stdio.h>
#include <string.h>

char *duplicate(const char *p);

int main(void)
{
	char *p = "original_string\0";
	char *d = duplicate(p);
	printf("duplicated_string :=> %s\n", d);
}

char *duplicate(const char *p)
{
	char *q;

	strcpy(q, p);
	return q;
}
