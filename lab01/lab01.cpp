#include <stdafx.h>
int main()
{
	float a = 6.13f, b = 9.03f, x = 5.12f;
	double y = a - (2 * x) / sqrt(x * cos(7 * x) + b * sin(1 / x));
	printf("Result: %.5f\n", y);
	getchar();
	return 0;
}



