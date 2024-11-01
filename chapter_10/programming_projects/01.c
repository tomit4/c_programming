#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Stack underflow\n");
	exit(EXIT_FAILURE);
}

char peek(void) { return contents[top - 1]; }

bool is_full(void) { return top == STACK_SIZE; }

bool is_empty(void) { return top == 0; }

char push(char ch)
{
	if (is_full()) {
		stack_overflow();
		return 0;
	} else {
		return contents[top++] = ch;
	}
}

char pop(void) { return contents[--top]; }

bool is_opening_char(char ch)
{
	if (ch == '(' || ch == '[' || ch == '{') {
		return true;
	} else {
		return false;
	}
}

bool is_matching_brace(char ch)
{
	if (is_empty()) {
		stack_underflow();
		return false;
	}
	if (ch == '}' && peek() != '{') {
		return false;
	} else if (ch == ')' && peek() != '(') {
		return false;
	} else if (ch == ']' && peek() != '[') {
		return false;
	} else {
		return true;
	}
}

int main(void)
{
	printf("Enter parentheses and/or braces: ");
	char ch;
	while ((ch = getchar()) != '\n') {
		if (is_opening_char(ch)) {
			push(ch);
		} else if (is_matching_brace(ch)) {
			pop();
		}
	}

	if (is_empty()) {
		printf("Parentheses/braces are nested properly\n");
	} else {
		printf("Parentheses/braces are not nested properly\n");
	}
}
