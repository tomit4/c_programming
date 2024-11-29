#include "stackADT2.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

struct stack_type {
	Item *contents;
	int top;
	int size;
};

static void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

static void resize_contents(Stack s)
{
	Item *new_contents =
	    realloc(s->contents, (s->size *= 2) * sizeof(Item));
	if (new_contents == NULL) {
		terminate("Error in resize: stack could not be resized.");
	}
	s->contents = new_contents;
}

Stack create(int size)
{
	if (size <= 0) {
		size = STACK_SIZE;
	}
	Stack s = malloc(sizeof(struct stack_type));
	if (s == NULL) {
		terminate("Error in create: stack could not be created.");
	}
	s->contents = malloc(size * sizeof(Item));
	if (s->contents == NULL) {
		free(s);
		terminate("Error in create: stack could not be created");
	}
	s->top = 0;
	s->size = size;
	return s;
}

void destroy(Stack s)
{
	free(s->contents);
	free(s);
}

void make_empty(Stack s) { s->top = 0; }

bool is_empty(Stack s) { return s->top == 0; }

bool is_full(Stack s) { return s->top == s->size; }

void push(Stack s, Item i)
{
	if (is_full(s)) { // double the array here
		resize_contents(s);
	}
	s->contents[s->top++] = i;
}

Item pop(Stack s)
{
	if (is_empty(s)) {
		terminate("Error in pop: stack is empty.");
	}
	return s->contents[--s->top];
}
