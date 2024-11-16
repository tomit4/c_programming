#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char *duplicate(char *str);

int main(void)
{
	char str[100];
	printf("Enter a string to duplicate: ");
	scanf("%s", str);

	char *p = duplicate(str);

	printf("Duplicated string: %s\n", p);

	return 0;
}

char *duplicate(char *str)
{
	char *p = malloc(strlen(str) + 1);

	if (p == NULL) {
		fprintf(stderr,
			"Unable to allocate enough memory for string\n");
		exit(EXIT_FAILURE);
	}

	strcpy(p, str);
	return p;
}
