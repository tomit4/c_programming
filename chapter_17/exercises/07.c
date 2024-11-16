#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int main(void)
{
	struct node *first = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	first->value = 1;
	first->next = second;
	second->value = 2;
	second->next = NULL;

	struct node *p = first, *next_node;

	for (p = first; p != NULL; p = next_node) {
		next_node = p->next;
		free(p);
	}

	// Do not access free memory
	/* printf("first->value :=> %d\n", first->value);	 // garbage
	 * values */
	/* printf("second->value :=> %d\n", second->value); // garbage values */
	return 0;
}
