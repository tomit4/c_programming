int evaluate_position(char board[8][8])
{
	int i, j, sum_of_white = 0, sum_of_black = 0, difference;

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			switch (board[i][j]) {
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
				sum_of_black += 1;
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
	}

	difference = sum_of_white - sum_of_black;
	return difference;
}
