#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

#define PUBLIC
#define PRIVATE static

PRIVATE void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

PUBLIC void make_empty(Stack s)
{
	while (!is_empty(s)) {
		pop(s);
	}
}

PUBLIC bool is_empty(Stack s) { return s->top == NULL; }

PUBLIC bool is_full(Stack s) { return false; }

PUBLIC void push(Stack s, int i)
{
	struct node_t *new_node = malloc(sizeof(Node));
	if (new_node == NULL) {
		terminate("Error in push: stack is full.");
	}
	new_node->data = i;
	new_node->next = s->top;
	s->top = new_node;
}

PUBLIC int pop(Stack s)
{
	struct node_t *old_top;
	int i;

	if (is_empty(s)) {
		terminate("Error in pop: stack is empty.");
	}

	old_top = s->top;
	i = s->top->data;
	s->top = s->top->next;
	free(old_top);
	return i;
}

PUBLIC Stack create_stack(void)
{
	Stack s = malloc(sizeof(*s));
	if (s == NULL) {
		terminate("Error: Unable to  allocate memory for stack.");
	}
	s->top = NULL;
	return s;
}

PUBLIC void destroy_stack(Stack s)
{
	if (s != NULL) {
		make_empty(s);
		free(s);
	}
}
