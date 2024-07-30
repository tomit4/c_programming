// Could not solve, ChatGPT answer:
#include <stdio.h>

int main(void)
{
	float factorial = 1.0f, e = 1.0f;
	float input, term;

	// Get the user-defined threshold
	printf("Enter a small floating-point number (E): ");
	scanf("%f", &input);

	for (int i = 1;; i++) {
		factorial *= i;		 // Compute i!
		term = 1.0f / factorial; // Calculate the term 1/i!

		// If the term is less than the input (E), break the loop
		if (term < input) {
			break;
		}

		// Add the term to the sum
		e += term;
	}

	// Output the computed value of e
	printf("Approximation of e: %f\n", e);

	return 0;
}
