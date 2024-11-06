#include <stdio.h>

int evaluate_position(char board[8][8]);

char board[8][8] = {
    {'b', 'n', 'r', 'q', 'k', 'r', 'n', 'b'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'B', 'N', 'R', 'K', 'Q', 'R', 'N', 'B'},
};

int main(void)
{
	int difference = evaluate_position(board);

	printf("difference between players is :=> %d\n", difference);

	return 0;
}

int evaluate_position(char board[8][8])
{
	int sum_of_white = 0, sum_of_black = 0;
	const char *p = board[0];
	for (; p < *board + 8 * 8; p++) {
		switch (*p) {
		case 'Q':
			sum_of_white += 9;
			break;
		case 'R':
			sum_of_white += 5;
			break;
		case 'B':
		case 'N':
			sum_of_white += 3;
			break;
		case 'P':
			sum_of_white += 1;
			break;
		case 'q':
			sum_of_black += 9;
			break;
		case 'r':
			sum_of_black += 5;
			break;
		case 'b':
		case 'n':
			sum_of_black += 3;
			break;
		case 'p':
			sum_of_black += 1;
			break;
		default:
			break;
		}
	}

	return sum_of_white - sum_of_black;
}
