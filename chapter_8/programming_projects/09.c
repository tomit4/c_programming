#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{

	int x = 0, y = 0, blocked, dir_code;
	char c_matrix[SIZE][SIZE];
	char letter = 'A';

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			c_matrix[i][j] = '.';
		}
	}

	srand((unsigned)time(NULL));

	// Initialize c_matrix[0][0] with letter 'A',
	// then change value of letter to 'B'
	c_matrix[x][y] = letter++;
	// From 'B' to 'Z'...
	while (letter <= 'Z') {
		// Set block to true
		blocked = 1;

		// Try to move in each direction (4 different possibilities)
		for (int attempt = 0; attempt < 4; attempt++) {
			// Pick a random number between 0 and 3
			dir_code = rand() % 4;
			// initialize temporary variables that hold current
			// position
			int new_x = x, new_y = y;

			// Adjust temp variables based off of random dir_code
			if (dir_code == 0 && x > 0) { // Up
				new_x = x - 1;
			} else if (dir_code == 1 && x < SIZE - 1) { // Down
				new_x = x + 1;
			} else if (dir_code == 2 && y > 0) { // Left
				new_y = y - 1;
			} else if (dir_code == 3 && y < SIZE - 1) { // Right
				new_y = y + 1;
			}

			// If any of the new directions are available, populate
			// it with the next letter, and assign letter to the
			// next letter in alphabet
			// Also update the position in the graph via assigning x
			// and y to their temp variables
			if (c_matrix[new_x][new_y] == '.') {
				x = new_x;
				y = new_y;
				c_matrix[x][y] = letter++;
				// Set block to false so that the while loop
				// continues
				blocked = 0;
				break;
			}
		}
		if (blocked) {
			break;
		}
	}

	for (int l = 0; l < 10; l++) {
		for (int m = 0; m < 10; m++) {
			printf("%c ", c_matrix[l][m]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}
