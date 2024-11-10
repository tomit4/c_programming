#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN 100

bool is_palindrome(const char *message);

int main(void)
{

	char message[MAX_LEN];
	char ch, *p = message;
	bool message_is_palindrome;

	printf("Enter a message: ");

	while ((ch = getchar()) != '\n' && p < message + MAX_LEN) {
		if (isalpha(ch)) {
			*p++ = tolower(ch);
		}
	}

	message_is_palindrome = is_palindrome(message);

	if (message_is_palindrome)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");

	return 0;
}

bool is_palindrome(const char *message)
{
	const char *p = message, *q = message;
	// point p to the last non-null character in the message string
	while (*(p + 1))
		p++;
	while (q < p) {
		if (*q != *p)
			return false;
		q++;
		p--;
	}
	return true;
}
