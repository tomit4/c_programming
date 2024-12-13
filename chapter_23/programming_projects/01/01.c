#include <math.h>
#include <stdio.h>

// For Further understanding:
// https://en.wikipedia.org/wiki/Quadratic_formula

int main()
{
	double a, b, c, delta_discriminant, root_1, root_2;

	printf("Enter the values of a, b, and c to calculate the quadratic "
	       "expression\n");
	printf("a: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	printf("c: ");
	scanf("%lf", &c);

	delta_discriminant = b * b - 4 * a * c;

	if (delta_discriminant > 0) {
		// Two real roots
		root_1 = (-b + sqrt(delta_discriminant)) / (2 * a);
		root_2 = (-b - sqrt(delta_discriminant)) / (2 * a);
		printf("The roots are real and different: %.2f and %.2f\n",
		       root_1, root_2);
	} else if (delta_discriminant == 0) {
		// One real root (repeated)
		root_1 = -b / (2 * a);
		printf("The root is real and the same: %.2f\n", root_1);
	} else {
		// Complex roots
		printf("The roots are complex\n");
	}

	return 0;
}

/*
../../../bin/chapter_23/programming_projects/01
Enter the values of a, b, and c to calculate the quadratic expression
a: 1
b: 2
c: 5
../../../bin/chapter_23/programming_projects/01
Enter the values of a, b, and c to calculate the quadratic expression
a: 1
b: 2
c: 1
The root is real and the same: -1.00
../../../bin/chapter_23/programming_projects/01
Enter the values of a, b, and c to calculate the quadratic expression
a: 1
b: -3
c: 2
The roots are real and different: 2.00 and 1.00
*/
