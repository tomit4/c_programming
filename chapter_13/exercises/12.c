#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

void get_extension(const char *file_name, char *extension);

int main(void)
{
	char *file_name = "memo.txt\0";
	char extension[MAX_LEN];

	get_extension(file_name, extension);
	printf("extension :=> %s\n", extension);

	return 0;
}

void get_extension(const char *file_name, char *extension)
{
	const char *p;
	for (p = file_name; *p != '\0'; p++) {
		if (*p == '.') {
			extension = strcpy(extension, p);
			return;
		}
	}
	strcpy(extension, "");
}
