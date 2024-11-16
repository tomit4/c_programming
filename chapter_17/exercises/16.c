#include <stdio.h>

int sum(int (*f)(int), int start, int end);
int g(int i);

int main(void)
{
	int i = 1;
	int j = 5;
	printf("Answer: %d\n", sum(g, i, j));
	return 0;
}

// NOTE: Assumes start is always less than end
int sum(int (*f)(int), int start, int end)
{
	int sum = start;
	while (end >= start) {
		sum += (*f)(end);
		end--;
	}
	return sum;
}

int g(int i) { return i; }
