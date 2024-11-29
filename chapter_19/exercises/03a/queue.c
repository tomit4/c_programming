#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void enqueue(Queue q, Item i)
{
	if (is_full(q)) {
		printf("Queue is full!\n");
		exit(EXIT_FAILURE);
	}

	q->items[q->first_empty_slot] = i;
	q->first_empty_slot = q->first_empty_slot + 1 % QUEUE_SIZE;

	q->total_items++;
}

void dequeue(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	q->index_of_next_item_to_be_removed =
	    q->index_of_next_item_to_be_removed + 1 % QUEUE_SIZE;
	q->total_items--;
}

Item peek(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->items[q->index_of_next_item_to_be_removed];
}

Item peek_last(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->items[q->first_empty_slot - 1];
};

bool is_full(Queue q) { return q->total_items == QUEUE_SIZE; }

bool is_empty(Queue q) { return q->total_items == 0; }
