#include "stackADT.h"
#include <stdio.h>
#include <stdlib.h>

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

bool is_opening_char(char ch)
{
	if (ch == '(' || ch == '[' || ch == '{') {
		return true;
	} else {
		return false;
	}
}

bool is_matching_brace(Stack s, char ch)
{
	if (ch == '}' && peek(s) != '{') {
		return false;
	} else if (ch == ')' && peek(s) != '(') {
		return false;
	} else if (ch == ']' && peek(s) != '[') {
		return false;
	} else {
		return true;
	}
}

int main(void)
{
	Stack s1;
	s1 = create();

	printf("Enter parentheses and/or braces: ");
	char ch;
	while ((ch = getchar()) != '\n') {
		if (is_opening_char(ch)) {
			push(s1, ch);
		} else if (is_matching_brace(s1, ch)) {
			pop(s1);
		}
	}

	if (is_empty(s1)) {
		printf("Parentheses/braces are nested properly\n");
	} else {
		printf("Parentheses/braces are not nested properly\n");
	}
	destroy(s1);
	return 0;
}
