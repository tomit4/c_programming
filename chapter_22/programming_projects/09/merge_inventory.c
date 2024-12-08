#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

int main(int argc, char *argv[])
{
	FILE *fpin1, *fpin2, *fpout;
	struct part part1, part2;
	int number1, number2;

	if (argc != 4) {
		fprintf(stderr,
			"Usage: %s input-file-1 input-file-2 output-file\n",
			argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fpin1 = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "File %s cannot be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fpin2 = fopen(argv[2], "rb")) == NULL) {
		fprintf(stderr, "File %s cannot be opened\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if ((fpout = fopen(argv[3], "wb")) == NULL) {
		fprintf(stderr, "File %s cannot be opened\n", argv[3]);
		exit(EXIT_FAILURE);
	}

	// read the first part from each file input stream
	number1 = fread(&part1, sizeof(struct part), 1, fpin1);
	number2 = fread(&part2, sizeof(struct part), 1, fpin2);

	// Read from both files while they have bytes to read...
	while (number1 == 1 && number2 == 1) {
		if (part1.number < part2.number) {
			// write part1 to output file since it has a smaller
			// part number
			fwrite(&part1, sizeof(struct part), 1, fpout);
			// read the next part from the first file
			number1 = fread(&part1, sizeof(struct part), 1, fpin1);
		} else if (part1.number > part2.number) {
			// write part2 to output file since it has a smaller
			// part number
			fwrite(&part2, sizeof(struct part), 1, fpout);
			// read the next part from the second file
			number2 = fread(&part2, sizeof(struct part), 1, fpin2);
		} else {
			// Combine quantities if part numbers are same
			// check for name mismatch
			if (strcmp(part1.name, part2.name) != 0) {
				fprintf(stderr,
					"Names don't match for part number %d, "
					"using the name %s\n",
					part1.number, part1.name);
			}
			// add quantities together
			part1.on_hand += part2.on_hand;
			// write combined record to output
			fwrite(&part1, sizeof(struct part), 1, fpout);
			// read the next parts from both files
			number1 = fread(&part1, sizeof(struct part), 1, fpin1);
			number2 = fread(&part2, sizeof(struct part), 1, fpin2);
		}
	}

	// if file1 still has more parts after file2 has EOF...
	while (number1 == 1) {
		// write part1 to output file
		fwrite(&part1, sizeof(struct part), 1, fpout);
		// and continue to read the next part from file1
		number1 = fread(&part1, sizeof(struct part), 1, fpin1);
	}

	// and the same if file2 has more parts after file2 has EOF...
	while (number2 == 1) {
		fwrite(&part2, sizeof(struct part), 1, fpout);
		number2 = fread(&part2, sizeof(struct part), 1, fpin2);
	}

	fclose(fpin1);
	fclose(fpin2);
	fclose(fpout);

	exit(EXIT_SUCCESS);
}
