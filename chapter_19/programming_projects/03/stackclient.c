#include "stackADT.h"
#include <stdio.h>

int length(Stack s) { return s->len; }

int main(void)
{
	Stack s1, s2;
	int n;

	s1 = create();
	printf("len_of_s1 :=> %d\n", length(s1));
	s2 = create();
	printf("len_of_s2 :=> %d\n", length(s1));

	push(s1, 1);
	printf("len_of_s1 :=> %d\n", length(s1));
	push(s1, 2);
	printf("len_of_s1 :=> %d\n", length(s1));

	n = pop(s1);
	printf("Popped %d from s1\n", n);
	printf("len_of_s1 :=> %d\n", length(s1));
	push(s2, n);
	printf("len_of_s2 :=> %d\n", length(s1));
	n = pop(s1);
	printf("Popped %d from s1\n", n);
	printf("len_of_s1 :=> %d\n", length(s1));
	push(s2, n);
	printf("len_of_s2 :=> %d\n", length(s2));

	destroy(s1);

	while (!is_empty(s2)) {
		printf("Popped %d from s2\n", pop(s2));
	}

	push(s2, 3);
	printf("len_of_s2 :=> %d\n", length(s2));
	make_empty(s2);
	if (is_empty(s2)) {
		printf("s2 is empty\n");
	} else {
		printf("s2 is not empty\n");
		printf("len_of_s2 :=> %d\n", length(s1));
	}

	destroy(s2);

	return 0;
}
