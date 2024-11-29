#include "stackADT.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	Stack s;
	s = create();

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
					push(s, num);
					num = 0;
					building_number = false;
				}
				switch (c) {
				case '+':
					op2 = pop(s);
					op1 = pop(s);
					push(s, op1 + op2);
					break;
				case '-':
					op2 = pop(s);
					op1 = pop(s);
					push(s, op1 - op2);
					break;
				case '*':
					op2 = pop(s);
					op1 = pop(s);
					push(s, op1 * op2);
					break;
				case '/':
					op2 = pop(s);
					op1 = pop(s);
					push(s, op1 / op2);
					break;
				case '=':
					printf("Value of expression: %d\n",
					       pop(s));
					make_empty(s);
					break;
				case ' ':
					break;
				default:
					exit(EXIT_SUCCESS);
				}
			}
		}
	}

	destroy(s);
	return 0;
}
