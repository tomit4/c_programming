/* Generates the inventory.dat file needed to test invclear.c */

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

int main(void)
{
	FILE *fp;
	struct part inventory[] = {
	    {1, "Screw", 100},
	    {2, "Nut", 200},
	    {3, "Bolt", 300},
	};
	int num_parts = sizeof(inventory) / sizeof(inventory[0]);

	if ((fp = fopen("inventory.dat", "wb")) == NULL) {
		fprintf(stderr, "Can't create inventory.dat file.\n");
		exit(EXIT_FAILURE);
	}

	fwrite(inventory, sizeof(struct part), num_parts, fp);
	fclose(fp);

	printf("inventory.dat file created with %d parts.\n", num_parts);
	return 0;
}
