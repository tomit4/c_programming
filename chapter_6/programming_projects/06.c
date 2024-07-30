#include <stdio.h>

int main(void)
{
	int input, even_num = 2, output_num = 0;

	printf("Enter a number: ");
	scanf("%d", &input);

	while (input > output_num) {
		output_num = even_num * even_num;
		even_num = even_num + 2;
		if (output_num <= input) {
			printf("%d\n", output_num);
		}
	}

	return 0;
}
