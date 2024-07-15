#include <stdio.h>

/* Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900 */
/* You entered 404.817.6900 */

int main(void)
{
	int area_code, prefix, line_number;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%3d) %3d-%4d", &area_code, &prefix, &line_number);

	printf("You entered %3d.%3d.%4d\n", area_code, prefix, line_number);

	return 0;
}
