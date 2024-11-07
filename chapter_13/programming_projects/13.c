#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char message[80] = {'\0'};
	char ch;
	int index = 0, shift_amount;
	printf("Enter a message to be encrypted: ");

	while ((ch = getchar()) != '\n' && index < 80) {
		message[index++] = ch;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift_amount);

	printf("Unencrypted message: ");
	for (int i = 0; i < 80; i++) {
		putchar(message[i]);
	}
	printf("\n");

	printf("Encrypted message: ");
	for (int i = 0; i < 80; i++) {
		ch = message[i];
		if (isupper(ch)) {
			putchar(((ch - 'A') + shift_amount) % 26 + 'A');
		} else if (islower(ch)) {
			putchar(((ch - 'a') + shift_amount) % 26 + 'a');
		} else {
			putchar(ch);
		}
	}
	printf("\n");

	return 0;
}
