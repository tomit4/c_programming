/* Performs XOR encryption */

#include <ctype.h>
#include <stdio.h>

#define KEY '&'

// Example Usage:
// Encrypt Message:
// xor < msg.txt > newmsg.txt
// Decrypt Message:
// xor < newmsg.txt

int main(void)
{
	int orig_char, new_char;

	while ((orig_char = getchar()) != EOF) {
		// XOR the orig_char and assign it to new_char
		new_char = orig_char ^ KEY;
		if (isprint(orig_char) && isprint(new_char)) {
			putchar(new_char);
		} else {
			putchar(orig_char);
		}
	}

	return 0;
}
