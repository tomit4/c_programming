#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

bool test_extension(const char *file_name, const char *extension);

int main(void)
{

	bool extension_matches = test_extension("memo.txt", "TXT");
	printf("extension_matches :=> %d\n", extension_matches);
	return 0;
}

bool test_extension(const char *file_name, const char *extension)
{
	char upper_extension[MAX_LEN];
	char lower_extension[MAX_LEN];
	char converted_lower_extension[MAX_LEN];
	int i;

	for (i = 0; extension[i] != '\0'; i++) {
		upper_extension[i] = toupper(extension[i]);
	}
	upper_extension[i] = '\0';

	const char *p;
	for (p = file_name; *p != '\0'; p++) {
		if (*p == '.') {
			p++;
			strcpy(lower_extension, p);
			break;
		}
	}

	for (i = 0; lower_extension[i] != '\0'; i++) {
		converted_lower_extension[i] = toupper(lower_extension[i]);
	}
	converted_lower_extension[i] = '\0';

	return strcmp(converted_lower_extension, upper_extension);
}
