#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

typedef int Item;

typedef struct stack_type {
	struct node *top;
	int len;
} *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif
