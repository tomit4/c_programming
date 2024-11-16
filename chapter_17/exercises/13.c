#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

void free_list(struct node *list);
void print_list(struct node *list);
struct node *insert_ordered_list(struct node *list, struct node *new_node);

int main(void)
{
	struct node *list = malloc(sizeof(struct node));
	struct node *node_1 = malloc(sizeof(struct node));
	struct node *node_2 = malloc(sizeof(struct node));
	struct node *node_3 = malloc(sizeof(struct node));

	if (list == NULL || node_1 == NULL || node_2 == NULL ||
	    node_3 == NULL) {
		fprintf(stderr, "Not enough memory to allocate for nodes\n");
		exit(EXIT_FAILURE);
	}

	list->value = 2;
	list->next = node_1;

	node_1->value = 3;
	node_1->next = node_2;

	node_2->value = 5;
	node_2->next = NULL;

	node_3->value = 1;
	node_3->next = NULL;

	print_list(list);
	list = insert_ordered_list(list, node_3);
	print_list(list);

	free_list(list);
	list = NULL;
	return 0;
}

void print_list(struct node *list)
{
	printf("list -->  ");
	while (list != NULL) {
		printf("%d -->  ", list->value);
		list = list->next;
	}
	printf("\n");
}

struct node *insert_ordered_list(struct node *list, struct node *new_node)
{
	struct node **cur = &list;

	while (*cur != NULL && (*cur)->value < new_node->value) {
		cur = &(*cur)->next;
	}
	new_node->next = *cur;
	*cur = new_node;

	return list;
}

void free_list(struct node *list)
{
	struct node *temp;
	while (list != NULL) {
		temp = list;
		list = list->next;
		free(temp);
		temp = NULL;
	}
}
