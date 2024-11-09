/* Checks planet names */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
	char *planets[] = {"Mercury", "Venus",	"Earth",   "Mars", "Jupiter",
			   "Saturn",  "Uranus", "Neptune", "Pluto"};
	char capitalized_planets[NUM_PLANETS][20] = {0};

	int i, j;

	for (i = 0; i < NUM_PLANETS; i++) {
		for (j = 0; j < (int)strlen(planets[i]); j++) {
			capitalized_planets[i][j] = toupper(planets[i][j]);
		}
		capitalized_planets[i][j] = '\0';
	}

	for (i = 1; i < argc; i++) {
		char temp[20] = {0};

		for (j = 0; j < (int)strlen(argv[i]) && j < 19; j++) {
			temp[j] = toupper(argv[i][j]);
		}
		temp[j] = '\0';

		for (j = 0; j < NUM_PLANETS; j++) {
			printf("Comparing %s with %s\n", temp,
			       capitalized_planets[j]);
			if (strcmp(temp, capitalized_planets[j]) == 0) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		}
		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}

	return 0;
}
