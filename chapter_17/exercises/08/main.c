#include "stack.h"
#include <ctype.h>

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
					make_list_empty();
					break;
				case ' ':
					break;
				default:
					printf("Invalid character '%c' in "
					       "expression. Exiting...\n",
					       c);
					exit(EXIT_FAILURE);
				}
			}
		}
	}
}
