#include <stdio.h>

void init_ident(int n, int ident[n][n]);

#define N 10

/*
int ident_example[N][N] = {
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
};
*/

int main(void)
{
	int ident[N][N] = {0};
	int n = N;
	int *p;

	init_ident(n, ident);

	int count = 0;
	printf("{\n");
	for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++) {
		if (count == 0) {
			printf("  { ");
		}
		if (count == N - 1) {
			printf("%d },\n", *p);
			count = 0;
		} else {
			printf("%d, ", *p);
			count++;
		}
	}
	printf("}\n");

	return 0;
}

void init_ident(int n, int ident[n][n])
{

	int *p = ident[0];
	int zeros = n;

	/*
	 * NOTE: `ident[0] + n * n` points to the memory address of the last
	 * element in an n by n matrix
	 */
	for (; p < ident[0] + n * n; p++) {
		if (zeros == n) {
			*p = 1;
			zeros = 0;
		} else {
			*p = 0;
			zeros++;
		}
	}
}

/* NOTE: Stolen answer, modified to address off by one error
void init_ident(int n, int ident[n][n])
{
	int *p = ident[0];
	int zeros = n;

	while (p < ident[0] + n * n) {
		if (zeros == n) {
			*p = 1;
			zeros = 0;
		} else {
			*p = 0;
			zeros++;
		}
		p++;
	}
}
*/
