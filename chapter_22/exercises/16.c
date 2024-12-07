#include <stdio.h>

int main(int argc, char *argv[])
{
	char *sales_rank;
	char *str;
	sscanf(str,
	       str[0] == '#' ? "%*[#]%[0123456789,]"
			     : "%*[^#]*[#]%[0123456789,]",
	       sales_rank);

	return 0;
}
