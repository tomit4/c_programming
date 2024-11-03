#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
	printf("hello world\n");
	return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++) {
		*sum += a[i];
	}
	*avg = *sum / n;
}
