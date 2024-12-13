#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

// (b)
#define TRY_MATH_FN(f, x) (try_math_fn((f), (x), "Error in call of " #f))

double try_math_fcn(double (*fn)(double), double x, char *err_msg);

// (a)
double try_math_fcn(double (*fn)(double), double x, char *err_msg)
{
	errno = 0;
	double y = fn(x);
	if (errno != 0) {
		perror(err_msg);
		exit(EXIT_FAILURE);
	}
	return y;
}
