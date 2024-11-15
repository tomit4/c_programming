#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
extern int top;
extern char contents[STACK_SIZE];

bool is_full(void);
bool is_empty(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
