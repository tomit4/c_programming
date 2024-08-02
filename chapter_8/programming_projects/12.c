// ChatGPT
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int sum = 0;
	// Array to store SCRABBLE values for each letter (A-Z)
	int values_array[26] = {1, 1, 3, 3, 1, 4, 2, 5, 1, 1, 2, 4,  2,
				1, 1, 3, 5, 5, 1, 1, 4, 4, 8, 5, 10, 10};
	char ch, upper_ch;

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n') {
		upper_ch = toupper(ch);
		if (upper_ch >= 'A' && upper_ch <= 'Z') {
			// Calculate the index for the letter
			int index = upper_ch - 'A';
			sum += values_array[index];
		}
	}

	printf("Scrabble value: %d\n", sum);

	return 0;
}
