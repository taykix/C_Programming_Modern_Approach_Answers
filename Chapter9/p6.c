#include <math.h>
#include <stdio.h>

int compute_polinom(int x)
{
	return 3 * pow(x,5) + 2 * pow(x,4) - 5 * pow(x,3) - x*x + 7 * x - 6;
}

int main(void)
{
	int x;
	printf("Enter ab integer pls :)\n");
	scanf(" %d", &x);
	printf("computed pol for this is : %d", compute_polinom(x));

	return 0;
}

