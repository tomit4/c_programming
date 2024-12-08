#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 255

int main(void)
{
	FILE *fp, *output_fp;
	char ch;
	int shift_amount;
	char filename[MAX_LEN];
	char *outfile;
	printf("Enter name of file to be encrypted: ");
	scanf("%s", filename);

	if ((fp = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be opened\n", filename);
		exit(EXIT_FAILURE);
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift_amount);

	outfile = malloc(strlen(filename) + 5);
	strcpy(outfile, filename);
	strcat(outfile, ".enc");

	if ((output_fp = fopen(outfile, "w")) == NULL) {
		fprintf(stderr, "Error: file %s cannot be opened\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp)) != EOF) {
		if (isupper(ch)) {
			putc(((ch - 'A') + shift_amount) % 26 + 'A', output_fp);
		} else if (islower(ch)) {
			putc(((ch - 'a') + shift_amount) % 26 + 'a', output_fp);
		} else {
			putc(ch, output_fp);
		}
	}

	fclose(fp);
	fclose(output_fp);
	return 0;
}
