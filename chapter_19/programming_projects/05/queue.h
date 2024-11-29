#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue q);
void enqueue(Queue q, Item i);
Item dequeue(Queue q);
Item peek(Queue q);
Item peek_last(Queue q);
bool is_full(Queue q);
bool is_empty(Queue q);

#endif
