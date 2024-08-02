// ChatGPT
#include <stdio.h>

int main(void)
{
	char ch;
	char numeric_arr[15]; // Array to store the numeric form
	int index = 0;	      // To keep track of the current position in arrays

	printf("Enter phone number: ");
	while ((ch = getchar()) != '\n') {
		if (index < 15) { // Ensure we don't overflow the array
			switch (ch) {
			case 'A':
			case 'B':
			case 'C':
				numeric_arr[index] = '2';
				break;
			case 'D':
			case 'E':
			case 'F':
				numeric_arr[index] = '3';
				break;
			case 'G':
			case 'H':
			case 'I':
				numeric_arr[index] = '4';
				break;
			case 'J':
			case 'K':
			case 'L':
				numeric_arr[index] = '5';
				break;
			case 'M':
			case 'N':
			case 'O':
				numeric_arr[index] = '6';
				break;
			case 'P':
			case 'R':
			case 'S':
				numeric_arr[index] = '7';
				break;
			case 'T':
			case 'U':
			case 'V':
				numeric_arr[index] = '8';
				break;
			case 'W':
			case 'X':
			case 'Y':
				numeric_arr[index] = '9';
				break;
			default:
				numeric_arr[index] = ch;
				break;
			}
			index++;
		}
	}

	// Ensure arrays are properly terminated
	numeric_arr[index] = '\0';
	// Print numeric form using putchar
	printf("In numeric form: ");
	for (int i = 0; i < index; i++) {
		putchar(numeric_arr[i]);
	}
	printf("\n");

	return 0;
}
