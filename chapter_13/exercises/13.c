#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void build_index_url(const char *domain, char *index_url);

int main(void)
{
	char *domain = "knking.com";
	char index_url[100];

	build_index_url(domain, index_url);

	printf("index_url :=> %s\n", index_url);

	return 0;
}

void build_index_url(const char *domain, char *index_url)
{
	const char *prepend = "http://www.";
	const char *append = "/index.html";
	strcpy(index_url, prepend);
	strcat(index_url, domain);
	strcat(index_url, append);
}
