#include <stdio.h>

void remove_filename(char *url);

int main()
{
	char url[] = "http://www.knking.com/index.html";
	remove_filename(url);
	printf("%s\n", url);
	return 0;
}

void remove_filename(char *url)
{
	char *last_slash = NULL;
	char *p = url;

	while (*p) {
		if (*p == '/')
			last_slash = p;
		p++;
	}

	if (last_slash != NULL)
		*last_slash = '\0';
}
