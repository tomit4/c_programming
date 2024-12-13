#include <math.h>

double round_nearest(double x, int n)
{
	int power = pow(10, n);
	return x < 0.0 ? ceil(x * power - 0.5) / power
		       : floor(x * power + 0.5) / power;
}
