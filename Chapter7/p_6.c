#include <stdio.h>

int main(void)
{
	printf("On my machine size of int: %zu size of short: %zu size of long %zu\n", sizeof(int), sizeof(short), sizeof(long));
	printf("On my machine size of float: %zu size of double: %zu size of long double %zu\n", sizeof(float), sizeof(double), sizeof(long double));
}
