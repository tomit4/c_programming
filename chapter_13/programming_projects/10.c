#include <stdio.h>

#define MAX_LEN 1000

void reverse_name(char *name);

int main(void)
{
	char name_string[MAX_LEN];

	printf("Enter a first and last name: ");
	char c, *p = name_string;
	while ((c = getchar()) != '\n' && p < name_string + 80)
		*p++ = c;
	*p = '\0';

	reverse_name(name_string);
	return 0;
}

void reverse_name(char *name)
{
	char initial = name[0];
	while (*name) {
		if (*name == ' ') {
			name++;
			printf("%s, %c.\n", name, initial);
			break;
		}
		name++;
	}
}
