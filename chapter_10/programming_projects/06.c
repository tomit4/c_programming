/* Stolen from:
 * https://github.com/williamgherman/c-solutions/blob/master/10/projects/06/6.c
 * modified using ChatGPT to handle multiple digit numbers.
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE] = {0};
int top = 0;

bool is_full(void);
bool is_empty(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	char c, op1, op2;
	int num = 0;
	bool building_number = false;

	while (true) {
		printf("Enter an RPN expression: ");

		while ((c = getchar()) != '\n') {
			if (isdigit(c)) {
				num = num * 10 + (c - '0');
				building_number = true;
			} else {
				if (building_number) {
					push(num);
					num = 0;
					building_number = false;
				}
				switch (c) {
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
					printf("Value of expression: %d\n",
					       pop());
					top = 0;
					break;
				case ' ':
					break;
				default:
					exit(EXIT_SUCCESS);
				}
			}
		}
	}
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
