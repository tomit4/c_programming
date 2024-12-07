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
	struct part p;
	int count = 0;

	if ((fp = fopen("inventory.dat", "rb")) == NULL) {
		fprintf(stderr, "Can't open inventory file.\n");
		exit(EXIT_FAILURE);
	}

	while (fread(&p, sizeof(struct part), 1, fp) == 1) {
		printf("Part %d: %s, On Hand: %d\n", p.number, p.name,
		       p.on_hand);
		count++;
	}

	fclose(fp);
	printf("Total parts: %d\n", count);
	return 0;
}
