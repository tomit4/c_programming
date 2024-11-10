/* Stolen from:
 * https://github.com/williamgherman/c-solutions/blob/master/10/projects/06/6.c
 * modified using ChatGPT to handle multiple digit numbers.
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define MAX_LEN 100

char contents[STACK_SIZE] = {0};
int top = 0;

bool is_full(void);
bool is_empty(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

int main(void)
{
	char expression[MAX_LEN];

	while (true) {
		printf("Enter an RPN expression: ");
		char c, *p = expression;
		while ((c = getchar()) != '\n')
			*p++ = c;
		printf("Value of expression: %d\n",
		       evaluate_RPN_expression(expression));
		p = expression;
		while (*p)
			*p = '\0';
	}
	exit(EXIT_SUCCESS);
}

int evaluate_RPN_expression(const char *expression)
{
	char op1, op2;

	while (*expression) {
		if (isdigit(*expression)) {
			push(*expression - '0');
		} else {
			switch (*expression) {
			case '+':
				push(pop() + pop());
				break;
			case '-':
				op2 = pop();
				op1 = pop();
				push(op1 - op2);
				break;
			case '*':
				push(pop() * pop());
				break;
			case '/':
				op2 = pop();
				op1 = pop();
				push(op1 / op2);
				break;
			case '=':
				return pop();
				break;
			case ' ':
				break;
			default:
				exit(EXIT_FAILURE);
			}
		}
		expression++;
	}

	exit(EXIT_FAILURE);
}

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char i)
{
	if (is_full()) {
		stack_overflow();
	} else {
		contents[top++] = i;
	}
}

char pop(void)
{
	if (is_empty()) {
		stack_underflow();
		return 0;
	} else {
		return contents[--top];
	}
}

void stack_overflow(void)
{
	printf("\nExpression is too complex\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("\nNot enough operands in expression\n");
	exit(EXIT_FAILURE);
}
