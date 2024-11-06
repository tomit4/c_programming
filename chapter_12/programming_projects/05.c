#include <stdio.h>

#define MAX_VALUE 100

int main(void)
{
	char ch, *p, *q;
	char terminating_char;
	char words[MAX_VALUE] = {0};

	p = words;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n' && p < words + MAX_VALUE) {
		if (ch == '.' || ch == '!' || ch == '?') {
			terminating_char = ch;
			break;
		}
		*p++ = ch;
	}

	printf("Reversal of sentence: ");

	// Go through the words array backwards to print each word in reverse
	// order
	// Stops when p reaches start of the array
	while (p >= words) {
		// Move back to the start of the last word in the array
		while (*--p != ' ' && p > words) {
			// Empty loop to backtrack to the previous space or the
			// start
		};

		// Set q to start of the word
		q = p == words ? words : p + 1;

		// Set q to start of the word
		while (*q != ' ' && *q != '\0') {
			putchar(*q++);
		}

		if (p >= words) {
			// Print a space between words
			putchar(' ');
		}
	}

	printf("\b%c\n", terminating_char);

	return 0;
}
