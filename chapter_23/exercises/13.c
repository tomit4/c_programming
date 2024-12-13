#include <stdlib.h>
#include <string.h>

int count_words(char *sentence);

int count_words(char *sentence)
{
	int count = 0;
	if (strtok(sentence, " \t\r\n\v\f") == NULL) {
		return count;
	}
	count++;
	while (strtok(sentence, " \t\r\n\v\f") != NULL) {
		count++;
	}
	return count;
}
