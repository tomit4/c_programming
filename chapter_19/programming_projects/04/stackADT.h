#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

typedef struct stack_type {
	void *top;
} *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, void *p);
void *pop(Stack s);

#endif
