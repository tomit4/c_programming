#include <stdio.h>

void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);

int main(void)
{
	int n;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	if (n < 1 || n > 99 || n % 2 == 0) {
		printf("Invalid size.\n");
		return 1;
	}

	char magic_square[99][99] = {0};
	int row = 0, col = n / 2;

	create_magic_square(n, magic_square);
	print_magic_square(n, magic_square);

	return 0;
}

void create_magic_square(int n, char magic_square[99][99])
{
	int row = 0, col = n / 2;

	for (int num = 1; num <= n * n; num++) {
		magic_square[row][col] = (char)num;

		int next_row = (row - 1 + n) % n;
		int next_col = (col + 1) % n;

		if (magic_square[next_row][next_col] != 0) {
			row = (row + 1) % n;
		} else {
			row = next_row;
			col = next_col;
		}
	}
}

void print_magic_square(int n, char magic_square[99][99])
{
	int row = 0, col = n / 2;

	for (row = 0; row < n; row++) {
		for (col = 0; col < n; col++) {
			printf("%5d", (unsigned char)magic_square[row][col]);
		}
		printf("\n");
	}
}
