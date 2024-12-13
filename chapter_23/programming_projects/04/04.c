#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 255

int main(void)
{
	char str[MAX_LEN];
	char *words[MAX_LEN];
	int i = 0;

	printf("Enter a series of words separated by single spaces: ");
	fgets(str, MAX_LEN, stdin);
	str[strlen(str) - 1] = '\0';

	char *token = strtok(str, " ");
	while (token != NULL) {
		words[i++] = token;
		token = strtok(NULL, " ");
	}

	for (i--; i >= 0; i--) {
		printf("%s ", words[i]);
	}
	printf("\n");

	exit(EXIT_SUCCESS);
}
