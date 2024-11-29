#include "queue.h"
#include <stdio.h>

int main(void)
{
	Queue q1, q2;
	int n;

	q1 = create(3);
	q2 = create(3);

	enqueue(q1, 1);
	enqueue(q1, 2);

	n = dequeue(q1);
	printf("Dequeued %d from q1\n", n);
	enqueue(q2, n);
	n = dequeue(q1);
	printf("Dequeued %d from q1\n", n);
	enqueue(q2, n);

	destroy(q1);

	while (!is_empty(q2)) {
		n = dequeue(q2);
		printf("Dequeued %d from q2\n", n);
	}

	enqueue(q2, 3);
	if (is_empty(q2)) {
		printf("q2 is empty\n");
	} else {
		printf("q2 is not empty\n");
	}

	destroy(q2);

	return 0;
}
