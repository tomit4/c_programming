#include <stdio.h>

void censor(char string[]);

int main(void)
{
	char sample_string[] = "food fool\0";

	censor(sample_string);
	printf("sample_string :=> %s\n", sample_string);

	return 0;
}

void censor(char string[])
{
	int i;

	for (i = 0; string[i + 2] != '\0'; i++) {
		if (string[i] == 'f' && string[i + 1] == 'o' &&
		    string[i + 2] == 'o') {
			string[i] = string[i + 1] = string[i + 2] = 'x';
		}
	}
}
