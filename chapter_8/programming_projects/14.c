// ChatGPT finish
#include <stdio.h>

// Sliding window solution
int main(void)
{
	char ch, term_ch;
	char input_sentence[1001] = {'\0'};
	int index = 0;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n') {
		if (ch == '?' || ch == '.' || ch == '!') {
			term_ch = ch;
			break;
		} else if (index < 1001) {
			input_sentence[index] = ch;
		}
		index++;
	}

	printf("Reversal of sentence:");
	int end = index - 1;

	while (end >= 0) {
		// Find the end character of current word
		while (end >= 0 && input_sentence[end] == ' ') {
			end--;
		}
		// No more words
		if (end < 0) {
			break;
		}

		// Find start of current word
		int start = end;
		// As long as there are still words
		// AND the character is not a space, count the start variable
		// backwards
		while (start >= 0 && input_sentence[start] != ' ') {
			start--;
		}

		// At this point, the bounding indices between the start and end
		// of a word have been found, and we simply iterate through
		// those indices and print them.
		for (int j = start; j <= end; j++) {
			putchar(input_sentence[j]);
		}

		// And then reindex the end to the index of the start - 1(
		// skipping the space prior to the first character of current
		// word)
		end = start - 1;
	}

	putchar(term_ch);
	printf("\n");

	return 0;
}
