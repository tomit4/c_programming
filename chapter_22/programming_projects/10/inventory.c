#include "readline.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
	struct part *next;
};

struct part *inventory = NULL;

int num_parts = 0;

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void dump(void);
void restore(void);

int main(void)
{
	char code;
	for (;;) {
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while (getchar() != '\n')
			;
		switch (code) {
		case 'i':
			insert();
			break;
		case 's':
			search();
			break;
		case 'u':
			update();
			break;
		case 'p':
			print();
			break;
		case 'q':
			free(inventory);
			return 0;
		case 'd':
			dump();
			break;
		case 'r':
			restore();
			break;
		default:
			printf("Illegal code\n");
		}
		printf("\n");
	}
}

struct part *find_part(int number)
{
	struct part *p;

	for (p = inventory; p != NULL && number > p->number; p = p->next)
		;
	if (p != NULL && number == p->number) {
		return p;
	}
	return NULL;
}

void insert(void)
{
	struct part *cur, *prev, *new_node;

	new_node = malloc(sizeof(struct part));

	if (new_node == NULL) {
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &new_node->number);

	for (cur = inventory, prev = NULL;
	     cur != NULL && new_node->number > cur->number;
	     prev = cur, cur = cur->next)
		;

	if (cur != NULL && new_node->number == cur->number) {
		printf("Part already exits.\n");
		free(new_node);
		return;
	}

	printf("Enter part name: ");
	read_line(new_node->name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &new_node->on_hand);

	new_node->next = cur;
	if (prev == NULL) {
		inventory = new_node;
	} else {
		prev->next = new_node;
	}
	num_parts++;
}

void search(void)
{
	int number;
	struct part *p;

	printf("Enter part number: ");
	scanf("%d", &number);
	p = find_part(number);
	if (p != NULL) {
		printf("Part name: %s\n", p->name);
		printf("Quantity on hand: %d\n", p->on_hand);
	} else
		printf("Part not found.\n");
}

void update(void)
{
	int number, change;
	struct part *p;

	printf("Enter part number: ");
	scanf("%d", &number);
	p = find_part(number);
	if (p != NULL) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		p->on_hand += change;
	} else
		printf("Part not found.\n");
}

void print(void)
{
	struct part *p;

	printf("Part Number    Part Name                 "
	       "Quantity on Hand\n");
	for (p = inventory; p != NULL; p = p->next)
		printf("%7d            %-25s%11d\n", p->number, p->name,
		       p->on_hand);
}

void dump(void)
{
	FILE *fp;
	char filename[255];
	struct part **pp = &inventory;

	printf("Enter name of output file: ");
	read_line(filename, 255);

	if ((fp = fopen(filename, "wb")) == NULL) {
		fprintf(stderr, "Can't create %s file.\n", filename);
		return;
	}

	while (*pp) {
		fwrite(*pp, sizeof(struct part) - sizeof(struct part *), 1, fp);
		pp = &(*pp)->next;
	}

	fclose(fp);
	printf("%s file created with %d parts.\n", filename, num_parts);
	return;
}

void restore(void)
{
	FILE *fp;
	char filename[255];
	struct part buffer;
	struct part *temp;
	struct part **pp;

	printf("Enter name of input file: ");
	read_line(filename, 255);

	if ((fp = fopen(filename, "rb")) == NULL) {
		fprintf(stderr, "Can't open %s file.\n", filename);
		return;
	}

	while (inventory) {
		temp = inventory;
		inventory = inventory->next;
		free(temp);
	}

	pp = &inventory;

	while (fread(&buffer, sizeof(struct part) - sizeof(struct part *), 1,
		     fp) == 1) {
		if ((*pp = malloc(sizeof(struct part))) == NULL) {
			fprintf(stderr, "Error: malloc failed to restore\n");
			exit(EXIT_FAILURE);
		}
		(*pp)->number = buffer.number;
		strcpy((*pp)->name, buffer.name);
		(*pp)->on_hand = buffer.on_hand;
		(*pp)->next = NULL;
		pp = &(*pp)->next;
	}
	fclose(fp);

	printf("inventory restored from %s file\n", filename);
	return;
}
