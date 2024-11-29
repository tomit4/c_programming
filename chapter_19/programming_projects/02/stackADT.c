#include "stackADT.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

static void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Stack create(void)
{
	Stack s = malloc(sizeof(struct stack_type));
	if (s == NULL) {
		terminate("Error in create: stack could not be created.");
	}
	s->contents = malloc(STACK_SIZE * sizeof(Item));
	if (s->contents == NULL) {
		free(s);
		terminate("Error in create: stack could not be created.");
	}
	s->top = 0;
	s->size = STACK_SIZE;
	return s;
}

void destroy(Stack s)
{
	free(s->contents);
	free(s);
}

void make_empty(Stack s) { s->top = 0; }

bool is_empty(Stack s) { return s->top == 0; }

bool is_full(Stack s) { return s->top == STACK_SIZE; }

void push(Stack s, Item i)
{
	if (is_full(s)) {
		terminate("Error in push: stack is full");
	}
	printf("Pushing %d onto stack. Current top: %d\n", i,
	       s->top); // Debugging print

	s->contents[s->top++] = i;
}

Item pop(Stack s)
{
	if (is_empty(s)) {
		terminate("Error in pop: stack is empty.");
	}
	int popped = s->contents[--s->top];
	printf("Popped %d from stack. Current top: %d\n", popped,
	       s->top); // Debugging print
	return popped;
}
