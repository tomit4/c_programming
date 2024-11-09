#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

int compute_scrabble_value(const char *word);

int main(void)
{
	char word[MAX_LEN];
	int scrabble_value;

	printf("Enter a word: ");
	scanf("%s", word);
	scrabble_value = compute_scrabble_value(word);
	printf("Scrabble value: %d\n", scrabble_value);

	return 0;
}

int compute_scrabble_value(const char *word)
{

	int sum = 0, values[26] = {1, 3, 3, 2,	1, 4, 2, 4, 1, 8, 5, 1, 3,
				   1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	while (*word)
		sum += values[toupper(*word++) - 'A'];
	return sum;
}

/*
int compute_scrabble_value(const char *word)
{
	int sum = 0;
	const char *p = word;

	while (*p != '\0') {
		switch (toupper(*p)) {
		case 'A':
		case 'E':
		case 'I':
		case 'L':
		case 'N':
		case 'O':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
			sum += 1;
			break;
		case 'D':
		case 'G':
			sum += 2;
			break;
		case 'B':
		case 'C':
		case 'M':
		case 'P':
			sum += 3;
			break;
		case 'F':
		case 'H':
		case 'V':
		case 'W':
		case 'Y':
			sum += 4;
			break;
		case 'K':
			sum += 5;
			break;
		case 'J':
		case 'X':
			sum += 8;
			break;
		case 'Q':
		case 'Z':
			sum += 10;
			break;
		default:
			break;
		}
		p++;
	}

	return sum;
}
*/
