#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *s);
char *my_strlwr(char *s);
char *my_strrev(char *s);
char *my_strset(char *s, char ch);
int my_stricmp(char *s1, char *s2);

// (a)
char *my_strdup(const char *s)
{
	char *copy;
	if ((copy = malloc(strlen(s) + 1)) == NULL) {
		return NULL;
	}
	strcpy(copy, s);
	return copy;
}

// (b)
int my_stricmp(char *s1, char *s2)
{
	int res = 0;
	while (res == 0 && *s1 && *s2) {
		res += (tolower(*s1) - tolower(*s2));
		s1++;
		s2++;
	}
	return res;
}

// (c)
char *my_strlwr(char *s)
{
	char *p;
	while (*p) {
		*p = tolower(*p);
		p++;
	}
	return s;
}

// (d)
char *my_strrev(char *s)
{
	char *t = s, *p;
	// points to the second to last char of s
	p = s + strlen(s) - 1;
	while (t < p) {
		*t ^= *p;
		*p ^= *t;
		*t ^= *p;
		t++;
		p--;
	}
	return s;
}

// (e)
char *my_strset(char *s, char ch)
{
	char *p = s;
	while (*p) {
		*p = ch;
		p++;
	}
	return s;
}
