#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

#include <stdbool.h>

typedef struct node_t {
	int data;
	struct node_t *next;
} Node;

typedef struct {
	Node *top;
} *Stack;

Stack create_stack(void);
void destroy_stack(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, int i);
int pop(Stack s);

#endif
