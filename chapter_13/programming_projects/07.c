#include <stdio.h>

#define MAX_LEN 2

int main(void)
{
	int two_digit_num, first_digit, second_digit;

	char *teens[] = {"ten",	     "eleven",	"twelve",  "thirteen",
			 "fourteen", "fifteen", "sixteen", "seventeen",
			 "eighteen", "nineteen"};

	char *first_digits[] = {"",	  "",	   "twenty", "thirty",
				"forty",  "fifty", "sixty",  "seventy",
				"eighty", "ninety"};
	char *second_digits[] = {"",	  "-one", "-two",   "-three", "-four",
				 "-five", "-six", "-seven", "-eight", "-nine"};

	printf("Enter a two-digit number: ");
	scanf("%d", &two_digit_num);

	first_digit = two_digit_num / 10;
	second_digit = two_digit_num % 10;

	printf("You entered the number ");
	if (first_digit == 1) {
		printf("%s", teens[second_digit]);
	} else {
		if (first_digit == 0) {
			if (second_digit == 0) {
				printf("%s\n", "zero");
				return 0;
			}
			printf("%s\n", second_digits[second_digit]);
			return 0;
		}
		if (first_digit > 0 && second_digit > 0) {
			printf("%s%s\n", first_digits[first_digit],
			       second_digits[second_digit]);
			return 0;
		} else {
			printf("%s\n", first_digits[first_digit]);
			return 0;
		}
	}
	return 0;
}

/*
#include <stdio.h>

int main(void)
{

	int n;
	char *tens[] = {"twenty", "thirty",  "forty",  "fifty",
			"sixty",  "seventy", "eighty", "ninety"},
	     *teens[] = {"ten",	     "eleven",	"twelve",  "thirteen",
			 "fourteen", "fifteen", "sixteen", "seventeen",
			 "eighteen", "nineteen"},
	     *ones[] = {"",	 "-one", "-two",   "-three", "-four",
			"-five", "-six", "-seven", "-eight", "-nine"};

	printf("Enter a two-digit number: ");
	scanf("%d", &n);
	printf("You entered the number ");
	if (n / 10 == 1)
		printf("%s\n", teens[n % 10]);
	else
		printf("%s%s\n", tens[n / 10 - 2], ones[n % 10]);
	return 0;
}
*/
