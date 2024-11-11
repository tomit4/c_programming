#include <stdio.h>

#define STRINGIZE(x) #x
#define EXPAND_MACRO(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file " __FILE__)

int main(void)
{
	const char *str = LINE_FILE;
	printf("%s\n", str);
	return 0;
}
