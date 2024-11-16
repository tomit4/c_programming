#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define INITIAL 20

int *create_array(int n, int initial_value);

int main(void)
{
	int *a, i;
	a = create_array(MAX, INITIAL);
	for (i = 0; i < MAX; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}

int *create_array(int n, int initial_value)
{
	// initialize two pointers, `a` and `p`
	int *a, *p;
	// malloc creates an uninitialized "array" of size n * 4 bytes
	// and casts the array as an int pointer
	a = (int *)malloc(n * sizeof(int));

	if (a == NULL) {
		fprintf(stderr, "Unable to allocate enough memory");
		return NULL;
	}

	// `p = a` : points `p` to first element in `a`...
	// `p < a + n` : as long as `p` is not pointing to the last
	// element in `a`...
	// `p++` : increment the pointer to point at the next element.
	for (p = a; p < a + n; p++) {
		*p = initial_value;
	}

	return a;
}
