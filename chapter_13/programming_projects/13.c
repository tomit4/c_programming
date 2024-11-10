#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 80

void encrypt(char *message, int shift);

int main(void)
{
	char message[MAX_LEN];
	char ch;
	int index = 0, shift_amount;
	printf("Enter a message to be encrypted: ");

	while ((ch = getchar()) != '\n' && index < 80)
		message[index++] = ch;

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift_amount);

	encrypt(message, shift_amount);
	printf("Encrypted message: %s\n", message);

	return 0;
}

void encrypt(char *message, int shift)
{
	while (*message) {
		if (isupper(*message))
			*message = ((*message - 'A') + shift) % 26 + 'A';
		else if (islower(*message))
			*message = ((*message - 'a') + shift) % 26 + 'a';
		message++;
	}
}
