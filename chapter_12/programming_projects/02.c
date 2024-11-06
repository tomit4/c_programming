#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

int main(void)
{

	char message[MAX_LEN];
	char ch, *p = message, *q;

	printf("Enter a message: ");

	while ((ch = getchar()) != '\n' && p < message + MAX_LEN) {
		if (isalpha(ch)) {
			*p++ = tolower(ch);
		}
	}

	p--;	     // p now points to the last character in the array.
	q = message; // and q now points to the first character in the array.
	for (; q < p; q++, p--) {
		if (*p != *q) {
			printf("Not a palindrome\n");
			return 0;
		}
	}
	printf("Palindrome\n");
	return 0;
}
