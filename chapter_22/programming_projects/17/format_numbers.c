#include "readline.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void parse_phone_number(const char *line, int *area_code, int *exchange_code,
			int *subscriber_number);

int main(int argc, char *argv[])
{
	FILE *fp;
	char line[255];
	int area_code, exchange_code, subscriber_number;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_line(line, 255, fp) != 0) {
		parse_phone_number(line, &area_code, &exchange_code,
				   &subscriber_number);
		printf("(%.3d) %.3d-%.3d\n", area_code, exchange_code,
		       subscriber_number);
	}

	exit(EXIT_SUCCESS);
}

void parse_phone_number(const char *line, int *area_code, int *exchange_code,
			int *subscriber_number)
{
	char digits[11] = {0};
	int i = 0, j = 0;

	while (line[i] != '\0' && j < 10) {
		if (isdigit(line[i])) {
			digits[j++] = line[i];
		}
		i++;
	}

	if (j != 10) {
		fprintf(stderr, "Error: invalid phone number format\n");
		exit(EXIT_FAILURE);
	}

	sscanf(digits, "%3d%3d%4d", area_code, exchange_code,
	       subscriber_number);
}
