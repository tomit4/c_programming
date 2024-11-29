#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void enqueue(Queue q, Item i)
{
	Node *new_node = malloc(sizeof(Node));
	if (!new_node) {
		printf("Memory allocation failed!\n");
		exit(EXIT_FAILURE);
	}
	new_node->data = i;
	new_node->next = NULL;

	if (q->last_item_in_list) {
		q->last_item_in_list->next = new_node;
	} else {
		q->first_item_in_list = new_node;
	}

	q->last_item_in_list = new_node;
	q->total_items++;
}

void dequeue(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}

	Node *old_node = q->first_item_in_list;
	q->first_item_in_list = old_node->next;

	if (!q->first_item_in_list) {
		q->last_item_in_list = NULL;
	}

	free(old_node);
	q->total_items--;
}

Item peek(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->first_item_in_list->data;
}

Item peek_last(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->last_item_in_list->data;
};

bool is_empty(Queue q) { return q->total_items == 0; }
