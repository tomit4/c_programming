#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

#define STACK_SIZE 100

bool is_full(void);
bool is_empty(void);
void push(char i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
void make_list_empty(void);
