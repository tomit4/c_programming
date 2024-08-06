#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_random_walk(char walk[SIZE][SIZE]);
void print_array(char walk[SIZE][SIZE]);

int main(void)
{
	char c_matrix[SIZE][SIZE];

	generate_random_walk(c_matrix);
	print_array(c_matrix);
	printf("\n");

	return 0;
}

void generate_random_walk(char walk[SIZE][SIZE])
{

	int x = 0, y = 0, blocked, dir_code;
	char letter = 'A';

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			walk[i][j] = '.';
		}
	}

	srand((unsigned)time(NULL));

	walk[x][y] = letter++;
	while (letter <= 'Z') {
		blocked = 1;

		for (int attempt = 0; attempt < 4; attempt++) {
			dir_code = rand() % 4;
			int new_x = x, new_y = y;

			if (dir_code == 0 && x > 0) {
				new_x = x - 1;
			} else if (dir_code == 1 && x < SIZE - 1) {
				new_x = x + 1;
			} else if (dir_code == 2 && y > 0) {
				new_y = y - 1;
			} else if (dir_code == 3 && y < SIZE - 1) {
				new_y = y + 1;
			}

			if (walk[new_x][new_y] == '.') {
				x = new_x;
				y = new_y;
				walk[x][y] = letter++;
				blocked = 0;
				break;
			}
		}
		if (blocked) {
			break;
		}
	}
}

void print_array(char walk[SIZE][SIZE])
{
	for (int l = 0; l < SIZE; l++) {
		for (int m = 0; m < SIZE; m++) {
			printf("%c ", walk[l][m]);
		}
		printf("\n");
	}
}
