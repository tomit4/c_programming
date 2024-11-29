#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

#include <stdbool.h>

typedef int Item;

typedef struct queue_t {
	int items[QUEUE_SIZE];
	int front;
	int rear;
} *Queue;

void enqueue(Queue, Item i);
void dequeue(Queue);
void peek(Queue);
Item peek_last(Queue q);
bool is_full(Queue);
bool is_empty(Queue);

#endif
