/* Taken from:
 * https://github.com/williamgherman/c-solutions/blob/master/07/projects/12/12.c
 */
#include <stdio.h>

int main(void)
{

	double num = 0.0, total = 0.0;
	char c;

	printf("Enter an expression: ");
	/* Works because scanf stops after encountering a character
	 * that cannot be part of a floating point number */
	scanf("%lf", &total);

	while ((c = getchar()) != '\n') {
		switch (c) {
		case '+':
			scanf("%lf", &num);
			total += num;
			break;
		case '-':
			scanf("%lf", &num);
			total -= num;
			break;
		case '*':
			scanf("%lf", &num);
			total *= num;
			break;
		case '/':
			scanf("%lf", &num);
			total /= num;
			break;
		default:
			break;
		}
	}

	printf("Value of expression: %f\n", total);
	return 0;
}
