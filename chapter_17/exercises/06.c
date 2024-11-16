#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node *delete_from_list(struct node *list, int n)
{
	struct node *cur, *prev;

	for (cur = list, prev = NULL; cur != NULL && cur->value != n;
	     prev = cur, cur = cur->next)
		;

	if (cur == NULL) {
		return list;
	}
	if (prev == NULL) {
		list = list->next;
	} else {
		prev->next = cur->next;
	}
	free(cur);
	return list;
}

struct node *delete_from_list_2(struct node **list, int n)
{
	struct node *item = *list;
	while (item != NULL) {
		if (item->value == n) {
			*list = item->next;
			free(item);
			break;
		}
		list = &item->next;
		item = item->next;
	}
	return *list;
}

struct node *delete_from_list_3(struct node *list, int n)
{
	struct node **indirect = &list;

	while (*indirect != NULL && (*indirect)->value != n) {
		indirect = &(*indirect)->next;
	}

	if (*indirect != NULL) {
		struct node *temp = *indirect;
		*indirect = (*indirect)->next;
		free(temp);
	}

	return list;
}
