#include <stdio.h>

void pb(int n);

int main(void)
{
	int input_num;

	printf("Enter a number: ");
	scanf("%d", &input_num);

	pb(input_num);
	printf("\n");

	return 0;
}

void pb(int n)
{
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}
}
