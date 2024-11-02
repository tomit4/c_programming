/* Stolen from:
 * https://github.com/williamgherman/c-solutions/blob/master/10/projects/07/7.c
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_DIGITS 10
const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, /* 0 */
    {0, 1, 1, 0, 0, 0, 0}, /* 1 */
    {1, 1, 0, 1, 1, 0, 1}, /* 2 */
    {1, 1, 1, 1, 0, 0, 1}, /* 3 */
    {0, 1, 1, 0, 0, 1, 1}, /* 4 */
    {1, 0, 1, 1, 0, 1, 1}, /* 5 */
    {1, 0, 1, 1, 1, 1, 1}, /* 6 */
    {1, 1, 1, 0, 0, 0, 0}, /* 7 */
    {1, 1, 1, 1, 1, 1, 1}, /* 8 */
    {1, 1, 1, 1, 0, 1, 1}  /* 9 */
};

char digits[4][MAX_DIGITS * 4];

/* translating the 7-segment display to a 3x3 grid:
 *
 *  012
 * 0 _
 * 1|_|
 * 2|_|
 */
const int segment_grid[7][2] = {{0, 1}, {1, 2}, {2, 2}, {2, 1},
				{2, 0}, {1, 0}, {1, 1}};

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	char c;
	int position = 0;

	clear_digits_array();
	printf("Enter a number: ");

	while ((c = getchar()) != '\n') {
		if (isdigit(c)) {
			process_digit(c - '0', position);
			position += 4;
		}
	}

	print_digits_array();
	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			digits[i][j] = ' ';
		}
	}
}

void print_digits_array(void)
{
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < MAX_DIGITS * 4; j++) {
			putchar(digits[i][j]);
		}
		printf("\n");
	}
}

void process_digit(int digit, int position)
{
	int i, row, col;

	for (i = 0; i < 7; i++) {
		if (segments[digit][i]) {
			row = segment_grid[i][0];
			col = segment_grid[i][1] + position;
			digits[row][col] = i % 3 == 0 ? '_' : '|';
		}
	}
	printf("\n");
}
