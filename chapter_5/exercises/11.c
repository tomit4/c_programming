#include <stdio.h>

int main(void)
{
	int area_code;

	printf("Enter a 3 digit area code: ");
	scanf("%d", &area_code);

	switch (area_code) {
	case 229:
		printf("Major City: Albany\n");
		break;
	case 404:
	case 470:
	case 678:
	case 770:
		printf("Major City: Atlanta\n");
		break;
	case 478:
		printf("Major City: Macon\n");
		break;
	case 706:
	case 762:
		printf("Major City: Columbus\n");
		break;
	case 912:
		printf("Major City: Savannah\n");
		break;
	default:
		printf("Area code not recognized\n");
		break;
	}

	return 0;
}
