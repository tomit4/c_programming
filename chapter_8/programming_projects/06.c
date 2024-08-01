// ChatGPT
#include <ctype.h>
#include <stdio.h>

#define MAX_MESSAGE_LENGTH 1000

int main(void)
{
	char message[MAX_MESSAGE_LENGTH];
	int i = 0;

	// Step 1: Read the entire message into the array
	printf("Enter message: ");
	while (i < MAX_MESSAGE_LENGTH - 1 && (message[i] = getchar()) != '\n') {
		i++;
	}
	message[i] = '\0'; // Null-terminate the array

	// Step 2: Process each character in the array
	printf("In BIFF-speak: ");
	for (int j = 0; j < i; j++) {
		char ch = toupper(message[j]);
		switch (ch) {
		case 'A':
			printf("4");
			break;
		case 'B':
			printf("8");
			break;
		case 'E':
			printf("3");
			break;
		case 'I':
			printf("1");
			break;
		case 'O':
			printf("0");
			break;
		case 'S':
			printf("5");
			break;
		default:
			printf("%c", ch);
			break;
		}
	}

	// Step 3: Print 10 exclamation marks
	printf("!!!!!!!!!!\n");

	return 0;
}
