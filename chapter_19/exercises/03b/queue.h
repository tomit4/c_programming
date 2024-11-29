#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

#include <stdbool.h>

typedef int Item;

typedef struct node_t {
	Item data;
	struct node_t *next;
} Node;

typedef struct queue_t {
	Node *first_item_in_list;
	Node *last_item_in_list;
	int total_items;
} *Queue;

void enqueue(Queue q, Item i);
void dequeue(Queue q);
Item peek(Queue q);
Item peek_last(Queue q);
bool is_full(Queue q);
bool is_empty(Queue q);

#endif
