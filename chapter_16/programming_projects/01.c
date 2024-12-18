#include <stdio.h>
#include <stdlib.h>

typedef struct {
	const char *name;
	int code;
} dialing_code;

const dialing_code country_codes[] = {
    {"Argentina", 54},
    {"Bangladesh", 880},
    {"Brazil", 55},
    {"Bruma (Myanmar)", 95},
    {"China", 86},
    {"Colombia", 57},
    {"Congo, Dem. Re. of", 243},
    {"Egypt", 20},
    {"Ethiopia", 251},
    {"France", 33},
    {"Germany", 49},
    {"India", 91},
    {"Indonesia", 62},
    {"Iran", 98},
    {"Italy", 39},
    {"Japan", 81},
    {"Mexico", 52},
    {"Nigeria", 234},
    {"Pakistan", 92},
    {"Philippines", 63},
    {"Poland", 48},
    {"Russia", 7},
    {"South Africa", 27},
    {"South Korea", 82},
    {"Spain", 34},
    {"Sudan", 249},
    {"Thailand", 66},
    {"Turkey", 90},
    {"Ukraine", 380},
    {"United Kingdom", 44},
    {"United States", 1},
    {"Vietnam", 84},
};

int main(void)
{
	int country_code;
	const dialing_code *p = country_codes;
	int len = sizeof country_codes / sizeof *country_codes; // 32

	printf("Enter a country code: ");
	scanf("%d", &country_code);

	for (p = country_codes; p < country_codes + len; p++) {
		if (country_code == p->code) {
			printf("Name of Country: %s\n", p->name);
			exit(EXIT_SUCCESS);
		}
	}

	fprintf(stderr, "No Country by that code found.\n");
	exit(EXIT_FAILURE);
}
