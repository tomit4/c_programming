#include <stdio.h>

int main(void)
{
	int numerical_grade, grade_by_ten;

	printf("Enter numerical grade: ");
	scanf("%d", &numerical_grade);

	grade_by_ten = numerical_grade / 10;

	switch (grade_by_ten) {
	case 9:
	case 10:
		printf("Letter grade: A\n");
		break;
	case 8:
		printf("Letter grade: B\n");
		break;
	case 7:
		printf("Letter grade: C\n");
		break;
	case 6:
		printf("Letter grade: D\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("Letter grade: F\n");
		break;
	default:
		printf("Numerical grade out of acceptible range\n");
		break;
	}

	return 0;
}
