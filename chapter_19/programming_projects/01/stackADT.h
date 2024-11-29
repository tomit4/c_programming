#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

typedef char Item;

typedef struct stack_type {
	Item *contents;
	int top;
	int size;
} *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);
Item peek(Stack s);

#endif
