#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 100

struct queue_type {
	Item items[QUEUE_SIZE];
	Item front;
	Item rear;
	int total_items;
};

static void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Queue create(void)
{
	Queue q = malloc(sizeof(struct queue_type));
	if (q == NULL) {
		terminate("Error in create: stack could not be created.");
	}
	q->front = 0;
	q->rear = 0;
	return q;
}

void destroy(Queue q) { free(q); }

void enqueue(Queue q, Item i)
{
	if (is_full(q)) {
		printf("Queue is full!\n");
		exit(EXIT_FAILURE);
	}
	q->items[q->rear] = i;
	q->rear = (q->rear + 1) % QUEUE_SIZE;
	q->total_items++;
}

Item dequeue(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	Item front_item = q->items[q->front];
	q->front = (q->front + 1) % QUEUE_SIZE;
	q->total_items--;
	return front_item;
}

Item peek(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->items[0];
}

Item peek_last(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->items[(q->rear - 1 + QUEUE_SIZE) % QUEUE_SIZE];
}

bool is_full(Queue q) { return q->total_items == QUEUE_SIZE; }

bool is_empty(Queue q) { return q->total_items == 0; }
