// NOTE: This section taught me a lot about dangling pointers, and some aspects
// of memory safety (see instances of NULL assignment, NULL checks, malloc, and
// free calls)
#include "stack.h"

struct node *list;

void make_list_empty(void)
{
	struct node *temp;

	while (list != NULL) {
		temp = list;
		list = list->next;
		free(temp);
		temp = NULL;
	}
	list = NULL;
}

bool is_empty(void) { return list == NULL; }

bool is_full(void)
{
	struct node *current = list;
	int count = 0;
	while (current != NULL) {
		count++;
		if (count > STACK_SIZE)
			return false;
		current = current->next;
	}
	return (count == STACK_SIZE);
}

void push(char i)
{
	struct node *new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		fprintf(stderr, "Not enough memory was allocated\n");
		exit(EXIT_FAILURE);
	}
	new_node->value = i;
	new_node->next = list;
	list = new_node;
}

int pop(void)
{
	int value;
	struct node *popped = list;

	if (is_empty()) {
		stack_underflow();
	}
	list = list->next;
	popped->next = NULL;
	value = popped->value;
	free(popped);
	popped = NULL;
	return value;
}

void stack_overflow(void)
{
	printf("\nExpression is too complex\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("\nNot enough operands in expression\n");
	exit(EXIT_FAILURE);
}
