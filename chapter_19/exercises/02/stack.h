#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

#include <stdbool.h>

typedef struct {
	int contents[STACK_SIZE];
	int top;
} Stack;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif
