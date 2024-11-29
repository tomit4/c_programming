#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

#include <stdbool.h>

typedef int Item;

typedef struct queue_t {
	int items[QUEUE_SIZE];
	int first_empty_slot;
	int index_of_next_item_to_be_removed;
	int total_items;
} *Queue;

void enqueue(Queue q, Item i);
void dequeue(Queue q);
Item peek(Queue q);
Item peek_last(Queue q);
bool is_full(Queue q);
bool is_empty(Queue q);

#endif
