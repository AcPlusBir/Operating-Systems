#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {
	int a;
	float b;
	double c;
	a = INT_MAX;
	b = FLT_MAX_EXP;
	c = DBL_MAX;
	printf("%d %f %f", a, b, c);
	return 0;
}

