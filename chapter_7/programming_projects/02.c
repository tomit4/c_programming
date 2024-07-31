#include <stdio.h>

int main(void)
{
	int i, n;
	char ch;

	printf("This program prints a table of squares.\n");
	printf("Enter a number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, i * i);
		if (i % 24 == 0) {
			printf("Press Enter to continue...");
			while ((ch = getchar()) != '\n') {
			}
			getchar();
		}
	}

	return 0;
}
