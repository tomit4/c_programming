#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 100

struct node {
	Item data;
	struct node *next;
};

struct queue_type {
	struct node *front;
	struct node *rear;
	int total_items;
};

static void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Queue create()
{
	Queue q = malloc(sizeof(struct queue_type));
	if (q == NULL) {
		terminate("Error in create: stack could not be created.");
	}
	q->front = NULL;
	q->rear = NULL;
	q->total_items = 0;
	return q;
}

void destroy(Queue q) { free(q); }

void enqueue(Queue q, Item i)
{
	if (is_full(q)) {
		printf("Queue is full!\n");
		exit(EXIT_FAILURE);
	}
	struct node *new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		terminate("Error in enqueue: memory allocation failed.");
	}
	new_node->data = i;
	new_node->next = NULL;

	if (is_empty(q)) {
		q->front = new_node;
		q->rear = new_node;
	} else {
		q->rear->next = new_node;
		q->rear = new_node;
	}

	q->total_items++;
}

Item dequeue(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	struct node *old_front = q->front;
	Item front_item = old_front->data;
	q->front = old_front->next;
	if (q->front == NULL) {
		q->rear = NULL;
	}
	free(old_front);
	q->total_items--;
	return front_item;
}

Item peek(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->front->data;
}

Item peek_last(Queue q)
{
	if (is_empty(q)) {
		printf("Queue is empty!\n");
		exit(EXIT_FAILURE);
	}
	return q->rear->data;
}

bool is_full(Queue q) { return q->total_items == QUEUE_SIZE; }

bool is_empty(Queue q) { return q->total_items == 0; }
