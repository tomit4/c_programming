#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

struct node *find_last(struct node *list, int n);

int main(void) {}

struct node *find_last(struct node *list, int n)
{
	struct node *current = list;
	while (list != NULL) {
		if (list->value == n) {
			current = list;
		}
		list = list->next;
	}
	return current;
}
