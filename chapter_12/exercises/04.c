#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = &contents[0];

void stack_overflow(void) { printf("stack overflow\n"); }

void stack_underflow(void) { printf("stack underflow\n"); }

void make_empty(void) { top_ptr = &contents[0]; }

bool is_empty(void) { return top_ptr == &contents[0]; }

bool is_full(void) { return top_ptr == &contents[STACK_SIZE]; }

void push(int i)
{
	if (is_full()) {
		stack_overflow();
	} else {
		contents[*top_ptr++] = i;
	}
}

int pop(void)
{
	if (is_empty()) {
		stack_underflow();
		return 1;
	} else {
		return contents[--*top_ptr];
	}
}
