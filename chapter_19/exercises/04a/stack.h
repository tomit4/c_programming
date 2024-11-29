#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

#include <stdbool.h>

typedef struct {
	int contents[STACK_SIZE];
	int top;
} *Stack;

void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, int i);
int pop(Stack s);

#endif
